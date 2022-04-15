#include "../winhttp.h"

//----- (00000001402875E0) ----------------------------------------------------
int* __fastcall sub_1402875E0(__int64* a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rsi
	int* result; // rax
	__int64 v5; // rcx
	int* v6; // r14
	unsigned __int64 v7; // rsi
	__int64 v8; // rdi
	__int64 v9; // rcx

	if (a1[1])
	{
		v2 = 0i64;
		v3 = 0i64;
		do
		{
			result = (int*)*a1;
			v5 = *(_QWORD*)(v3 + *a1 + 96);
			if (v5)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			++v2;
			v3 += 144i64;
		} while (v2 < a1[1]);
	}
	else
	{
		result = sub_14018DB00(*a1, 0i64, 144i64);
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
						sub_140287870((__int64)&v6[v8], v8 * 4 + *a1);
					result = (int*)*a1;
					v9 = *(_QWORD*)(v8 * 4 + *a1 + 96);
					if (v9)
						result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
					++v7;
					v8 += 36i64;
				} while (v7 < a1[1]);
			}
			if (*a1)
				result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v6;
		}
	}
	a1[1] = 0i64;
	return result;
}
// 140287600: conditional instruction was optimized away because rax.8!=0

