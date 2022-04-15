#include "../winhttp.h"

//----- (000000014064FDB0) ----------------------------------------------------
__int64 __fastcall sub_14064FDB0(_QWORD* a1)
{
	__m128d v1; // xmm0
	int* v3; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rax
	int v6; // edx
	int v7; // ecx
	__int64 v8; // rcx
	float v9; // xmm0_4
	__int64 v10; // rcx

	v3 = (int*)sub_1406622C0((__int64)a1, 1);
	if (v3 && (v4 = sub_1403D90D0(qword_140C65898, *v3)) != 0)
	{
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v1 = (__m128d)0xBFF0000000000000ui64;
		else
			v1.m128d_f64[0] = sub_140056C40(a1, 2u);
		v6 = (int)v1.m128d_f64[0];
		if ((double)v6 != v1.m128d_f64[0])
			v1.m128d_f64[0] = (double)(v6 - (_mm_movemask_pd(_mm_unpacklo_pd(v1, v1)) & 1));
		v7 = (int)v1.m128d_f64[0];
		if ((int)v1.m128d_f64[0] >= 0)
		{
			if (v7 < 11)
				v9 = *(float*)(v4 + 4i64 * v7 + 540);
			else
				v9 = 0.0;
			v10 = a1[2];
			*(_DWORD*)(v10 + 8) = 3;
			*(double*)v10 = (double)(int)v9;
		}
		else
		{
			v8 = a1[2];
			*(_QWORD*)v8 = 0i64;
			*(_DWORD*)(v8 + 8) = 3;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 14064FE36: conditional instruction was optimized away because rdx.8<100000000u
// 14064FE46: variable 'v1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

