#include "../winhttp.h"

//----- (00000001404D4B30) ----------------------------------------------------
__int64 __fastcall sub_1404D4B30(__int64* a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rsi
	__int64 result; // rax
	__int64 v5; // rcx
	unsigned __int64 v6; // rsi
	int* v7; // rdx
	int* v8; // rbp
	__int64 v9; // rcx
	__int64 v10; // rdi
	__int64 v11; // rcx

	if ((unsigned __int64)a1[1] <= 1)
	{
		v6 = 0i64;
		v8 = sub_14018DB00(*a1, 1ui64, 16i64);
		result = a1[1];
		if (!result)
		{
			v7 = v8;
			v9 = 1i64;
			do
			{
				if (v7)
				{
					*(_QWORD*)v7 = 0i64;
					v7[2] = 23;
				}
				v7 += 4;
				--v9;
			} while (v9);
		}
		if ((int*)*a1 != v8)
		{
			if (a1[1])
			{
				v10 = 0i64;
				do
				{
					if (&v8[v10])
						sub_1404D5250((__int64)&v8[v10], v10 * 4 + *a1);
					result = *a1;
					v11 = *(_QWORD*)(v10 * 4 + *a1);
					if (v11)
						result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16, v7);
					++v6;
					v10 += 4i64;
				} while (v6 < a1[1]);
			}
			if (*a1)
				result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v7);
			*a1 = (__int64)v8;
		}
	}
	else
	{
		v2 = 1i64;
		v3 = 16i64;
		do
		{
			result = *a1;
			v5 = *(_QWORD*)(v3 + *a1);
			if (v5)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
			++v2;
			v3 += 16i64;
		} while (v2 < a1[1]);
	}
	a1[1] = 1i64;
	return result;
}
// 1404D4B54: conditional instruction was optimized away because rax.8>=2u
// 1404D4C28: variable 'v7' is possibly undefined

