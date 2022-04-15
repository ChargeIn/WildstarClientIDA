#include "../winhttp.h"

//----- (00000001403FBA10) ----------------------------------------------------
void __fastcall sub_1403FBA10(__int64 a1, int a2, int a3)
{
	__int64 v4; // rax
	__m128* v5; // rdx
	__m128 v6; // xmm1
	__int64 v7; // rax
	__int64 v8; // rcx
	char v9; // cl
	void(__fastcall * v10)(__m128*); // r8
	__m128 v11; // [rsp+20h] [rbp-18h] BYREF

	if (a3 < a2)
	{
		v4 = a2;
		v5 = (__m128*)(a1 + 16 * (a3 + 2i64));
		v6 = *(__m128*)(a1 + 16 * (v4 + 2));
		v11 = v6;
		if ((unsigned __int64)(a3 + 1) < 5)
		{
			v7 = a1 + 16 * (a3 + 1 + 2i64);
			v8 = 5i64 - (a3 + 1);
			do
			{
				v7 += 16i64;
				*(__m128*)(v7 - 16) = *v5;
				--v8;
			} while (v8);
		}
		v9 = a3;
		v10 = *(void(__fastcall**)(__m128*))(a1 + 176);
		*(_DWORD*)(a1 + 24) &= (2 << v9) - 1;
		if (v10)
		{
			if ((_mm_movemask_ps(_mm_cmpneq_ps(*v5, v6)) & 3) != 0)
				v10(&v11);
		}
	}
}
// 1403FBA10: using guessed type __m128 var_18;

