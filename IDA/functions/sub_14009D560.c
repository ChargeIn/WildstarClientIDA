#include "../winhttp.h"

//----- (000000014009D560) ----------------------------------------------------
__int64 __fastcall sub_14009D560(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	unsigned __int64 v6; // rdx
	__int64 v7; // rcx
	unsigned __int64 v8; // r9
	_QWORD* v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // r8
	unsigned __int64 v12; // rdx
	__int64 v13; // rcx
	unsigned __int64 v14; // r9
	_QWORD* v15; // rdx
	__int64 v16; // rcx
	unsigned __int64 v17; // rsi
	unsigned __int16* v18; // rdi

	result = sub_140085170(a1, (unsigned int*)a2);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 8);
		v6 = *(unsigned int*)(a2 + 16);
		if (v5
			&& (v7 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v7) >= 0x40))
		{
			v8 = (unsigned int)v6;
			v9 = *(_QWORD**)(v5 + 32);
			*v9 &= (1i64 << v7) - 1;
			*v9 |= (unsigned __int64)(unsigned int)v8 << *(_QWORD*)(a1 + 16);
			v10 = *(_QWORD*)(a1 + 16);
			if (((v10 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v8 >> (64 - (unsigned __int8)v10);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, v6, 0x20ui64);
			if ((int)result < 0)
				return result;
		}
		v11 = *(_QWORD*)(a1 + 8);
		v12 = *(unsigned int*)(a2 + 20);
		if (v11
			&& (v13 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 32)) - v13) >= 0x40))
		{
			v14 = (unsigned int)v12;
			v15 = *(_QWORD**)(v11 + 32);
			*v15 &= (1i64 << v13) - 1;
			*v15 |= (unsigned __int64)(unsigned int)v14 << *(_QWORD*)(a1 + 16);
			v16 = *(_QWORD*)(a1 + 16);
			if (((v16 + 39) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v11 + 32) + 8i64) = v14 >> (64 - (unsigned __int8)v16);
			*(_QWORD*)(v11 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 32i64) >> 3;
			*(_QWORD*)(a1 + 16) &= 7ui64;
		}
		else
		{
			result = sub_140336470(a1, v12, 0x20ui64);
			if ((int)result < 0)
				return result;
		}
		result = sub_1400A7110(a1, *(_DWORD*)(a2 + 24), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_1400A7110(a1, *(_DWORD*)(a2 + 28), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_1400A7300(a1, *(_DWORD*)(a2 + 32));
				if ((int)result >= 0)
				{
					v17 = 0i64;
					v18 = (unsigned __int16*)(a2 + 36);
					do
					{
						result = sub_1403360D0(a1, v18, (__int64)(v18 + 10));
						if ((int)result < 0)
							break;
						++v17;
						v18 += 10;
					} while (v17 < 5);
				}
			}
		}
	}
	return result;
}

