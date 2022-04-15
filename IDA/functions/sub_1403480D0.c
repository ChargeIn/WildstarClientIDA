#include "../winhttp.h"

//----- (00000001403480D0) ----------------------------------------------------
int* __fastcall sub_1403480D0(__int64* a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rsi
	__int64 v4; // rcx
	int* result; // rax
	int* v6; // rbp
	unsigned __int64 v7; // rsi
	__int64 v8; // rdi
	__int64 v9; // rcx

	if ((unsigned __int64)a1[1] > 1)
	{
		v2 = 1i64;
		v3 = 536i64;
		do
		{
			v4 = *(_QWORD*)(v3 + *a1 + 528);
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			++v2;
			v3 += 536i64;
		} while (v2 < a1[1]);
		a1[1] = 1i64;
	}
	result = sub_14018DBC0(*a1, 1i64, 536i64);
	v6 = result;
	if ((int*)*a1 != result)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = 0i64;
			do
			{
				if (&v6[v8])
					sub_140348290((__int64)&v6[v8], (int*)(v8 * 4 + *a1));
				result = (int*)*a1;
				v9 = *(_QWORD*)(v8 * 4 + *a1 + 528);
				if (v9)
					result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				++v7;
				v8 += 134i64;
			} while (v7 < a1[1]);
		}
		if (*a1)
			result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v6;
	}
	return result;
}
// 1403480F9: conditional instruction was optimized away because rax.8>=2u

