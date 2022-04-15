#include "../winhttp.h"

//----- (00000001403D3260) ----------------------------------------------------
__int64 __fastcall sub_1403D3260(__int64* a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rsi
	__int64 result; // rax
	__int64 v5; // rcx
	_QWORD* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // rbp
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rsi
	_QWORD* v11; // rdi
	__int64 v12; // r14
	_QWORD* v13; // rcx

	if ((unsigned __int64)a1[1] <= 7)
	{
		result = (__int64)sub_14018DB00(*a1, 7ui64, 16i64);
		v7 = a1[1];
		v8 = result;
		if (v7 < 7)
		{
			v6 = (_QWORD*)(result + 16 * v7);
			v9 = 7 - v7;
			do
			{
				if (v6)
				{
					v6[1] = 0i64;
					*v6 = 0i64;
				}
				v6 += 2;
				--v9;
			} while (v9);
		}
		if (*a1 != result)
		{
			v10 = 0i64;
			if (a1[1])
			{
				v11 = (_QWORD*)result;
				v12 = -result;
				do
				{
					if (v11)
					{
						v13 = (_QWORD*)((char*)v11 + v12 + *a1);
						v11[1] = v13[1];
						*v11 = *v13;
						v13[1] = 0i64;
						*v13 = 0i64;
					}
					result = (__int64)v11 + v12 + *a1;
					if (*(_QWORD*)result)
						result = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)(*(_QWORD*)result - 16i64) + 8i64))(
							*(_QWORD*)result - 16i64,
							v6);
					++v10;
					v11 += 2;
				} while (v10 < a1[1]);
			}
			if (*a1)
				result = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v6);
			*a1 = v8;
		}
		a1[1] = 7i64;
	}
	else
	{
		v2 = 7i64;
		v3 = 112i64;
		do
		{
			result = *a1;
			v5 = *(_QWORD*)(v3 + *a1);
			if (v5)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
			++v2;
			v3 += 16i64;
		} while (v2 < a1[1]);
		a1[1] = 7i64;
	}
	return result;
}
// 1403D327D: conditional instruction was optimized away because rax.8>=8u
// 1403D336A: variable 'v6' is possibly undefined

