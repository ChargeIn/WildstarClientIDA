#include "../winhttp.h"

//----- (0000000140543030) ----------------------------------------------------
__int64 __fastcall sub_140543030(__int64 a1)
{
	__int64 v2; // rcx
	__m128* v3; // r14
	int v5; // edx
	int v6; // esi
	__int64 v7; // rax
	__int64 v8; // rbx
	__m128* v9; // rbp
	__int64 v10; // rcx
	float v11; // xmm6_4
	int v12; // eax
	__m128 v13; // xmm1
	__m128 v14; // xmm6
	__m128* v15; // rax
	__m128 v16; // xmm1
	__m128 v17; // xmm2
	float v18; // xmm2_4
	int v19; // eax
	__int64 v20; // rcx
	float v21; // xmm0_4

	v2 = qword_140C65898;
	v3 = *(__m128**)(qword_140C65898 + 25744);
	if (!v3)
	{
		*(_DWORD*)(a1 + 424) = 1148846080;
		return 0i64;
	}
	v5 = *(_DWORD*)(a1 + 340);
	*(_DWORD*)(a1 + 424) = 0;
	v6 = v3->m128_i32[2];
	v7 = sub_1403D90D0(v2, v5);
	v8 = *(_QWORD*)(a1 + 72);
	v9 = (__m128*)v7;
	v10 = v8;
	if (v8)
	{
		while (*(_DWORD*)(v10 + 64) != v6)
		{
			v10 = *(_QWORD*)(v10 + 40);
			if (!v10)
				goto LABEL_6;
		}
	}
	else
	{
	LABEL_6:
		v10 = 0i64;
	}
	if ((__m128*)v7 == v3
		|| v10 && *(_DWORD*)(v10 + 64) == v6
		|| (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64) + 268i64) & 0x400) != 0)
	{
		return 1i64;
	}
	v11 = 1000.0;
	if (v7)
	{
		v12 = *(_DWORD*)(v7 + 128);
		if (v12 != 20 && v12 != 23)
			return 1i64;
		v13 = _mm_sub_ps(v9[286], v3[286]);
		v14 = _mm_mul_ps(v13, v13);
		v11 = (float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
			+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0];
	}
	for (; v8; v8 = *(_QWORD*)(v8 + 40))
	{
		v15 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(v8 + 64));
		if (v15)
		{
			v16 = _mm_sub_ps(v15[286], v3[286]);
			v17 = _mm_mul_ps(v16, v16);
			v18 = (float)(v17.m128_f32[0] + _mm_shuffle_ps(v17, v17, 85).m128_f32[0])
				+ _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
			if (v18 < v11)
				v11 = v18;
		}
	}
	*(float*)(a1 + 424) = fsqrt(v11) + *(float*)(a1 + 424);
	if (v9)
	{
		v19 = sub_14045A950((__int64)v9, v6);
		v20 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64);
		if (v19 == 2)
		{
			if ((*(_DWORD*)(v20 + 268) & 0x4000000) != 0)
				v21 = 5.0;
			else
				v21 = 15.0;
		}
		else if ((*(_DWORD*)(v20 + 268) & 0x4000000) != 0)
		{
			v21 = 10.0;
		}
		else
		{
			v21 = 0.0;
		}
		*(float*)(a1 + 424) = v21 + *(float*)(a1 + 424);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

