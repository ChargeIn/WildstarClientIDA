#include "../winhttp.h"

//----- (0000000140091840) ----------------------------------------------------
__int64 __fastcall sub_140091840(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	unsigned __int64 v6; // r9
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rcx

	result = sub_140085170(a1, (unsigned int*)a2);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 8);
		v6 = *(_QWORD*)(a2 + 16);
		if (v5
			&& (v7 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v7) >= 0x40))
		{
			v8 = *(_QWORD**)(v5 + 32);
			*v8 &= (1i64 << v7) - 1;
			*v8 |= v6 << *(_QWORD*)(a1 + 16);
			v9 = *(_QWORD*)(a1 + 16);
			if (((v9 + 71) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v6 >> (64 - (unsigned __int8)v9);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 64i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, *(_QWORD*)(a2 + 16), 0x40ui64);
			if ((int)result < 0)
				return result;
		}
		result = sub_1400A7160(a1, *(_QWORD*)(a2 + 24));
		if ((int)result >= 0)
		{
			result = sub_1400A7110(a1, *(_DWORD*)(a2 + 32), 0x12ui64);
			if ((int)result >= 0)
			{
				result = sub_1400A8C80(a1, (int*)(a2 + 36));
				if ((int)result >= 0)
				{
					result = sub_1400A8C80(a1, (int*)(a2 + 44));
					if ((int)result >= 0)
					{
						result = sub_1400A7250(a1, *(_DWORD*)(a2 + 52) != 0, 1ui64);
						if ((int)result >= 0)
							return sub_1400A7110(a1, *(_DWORD*)(a2 + 56), 0x20ui64);
					}
				}
			}
		}
	}
	return result;
}

