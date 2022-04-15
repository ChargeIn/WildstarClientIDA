#include "../winhttp.h"

//----- (000000014007EFA0) ----------------------------------------------------
__int64 __fastcall sub_14007EFA0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	unsigned __int64 v6; // rdx
	__int64 v7; // rcx
	unsigned __int64 v8; // r9
	_QWORD* v9; // rdx
	__int64 v10; // rcx

	result = sub_140336040(a1, *(unsigned __int16**)a2);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 8);
		v6 = *(unsigned int*)(a2 + 8);
		if (v5
			&& (v7 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v7) >= 0x40))
		{
			v8 = (unsigned int)v6;
			v9 = *(_QWORD**)(v5 + 32);
			*v9 &= (1i64 << v7) - 1;
			*v9 |= (v8 & 0x3FFF) << *(_QWORD*)(a1 + 16);
			v10 = *(_QWORD*)(a1 + 16);
			if (((v10 + 21) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v8 >> (64 - (unsigned __int8)v10);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 14i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 2) & 7;
		}
		else
		{
			result = sub_140336470(a1, v6, 0xEui64);
			if ((int)result < 0)
				return result;
		}
		result = sub_1400A7300(a1, *(_DWORD*)(a2 + 12));
		if ((int)result >= 0)
		{
			result = sub_1400A7110(a1, *(_DWORD*)(a2 + 16), 0xEui64);
			if ((int)result >= 0)
			{
				result = sub_1400A7110(a1, *(_DWORD*)(a2 + 20), 0xFui64);
				if ((int)result >= 0)
					return sub_1400A7110(a1, *(_DWORD*)(a2 + 24), 0xEui64);
			}
		}
	}
	return result;
}

