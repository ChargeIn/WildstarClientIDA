//----- (00000001401B09D0) ----------------------------------------------------
__m128* __fastcall sub_1401B09D0(__int64 a1, __m128* a2)
{
	__m128* result; // rax
	__int64 v5; // xmm8_8
	double v6; // xmm8_8
	float v7; // xmm6_4
	float v8; // xmm0_4
	float* v9; // rax
	float v10; // xmm0_4
	float v11; // xmm1_4
	__m128 v12; // xmm4
	__m128 v13; // xmm2
	__m128 v14; // xmm0
	__m128 v15; // xmm3
	__m128 v16; // xmm2
	__m128 v17; // [rsp+20h] [rbp-78h] BYREF
	int v18[2]; // [rsp+30h] [rbp-68h] BYREF
	__int64 v19; // [rsp+38h] [rbp-60h]
	float v20; // [rsp+40h] [rbp-58h]
	float v21; // [rsp+44h] [rbp-54h]
	__int64 v22; // [rsp+48h] [rbp-50h]
	__int128 v23; // [rsp+50h] [rbp-48h]
	__int128 v24; // [rsp+60h] [rbp-38h]

	*(__m256*)a2->m128_f32 = ymmword_140C78390;
	a2[2] = (__m128)xmmword_140C783B0;
	a2[3] = (__m128)xmmword_140C783C0;
	result = *(__m128**)(a1 + 24);
	if (result)
	{
		a2[3].m128_f32[0] = a2[3].m128_f32[0] - result->m128_f32[0];
		result = *(__m128**)(a1 + 24);
		a2[3].m128_f32[1] = a2[3].m128_f32[1] - result->m128_f32[1];
	}
	v5 = *(unsigned int*)(a1 + 16);
	if (*(float*)&v5 != 0.0)
	{
		*(_QWORD*)&v6 = v5 ^ 0x8000000080000000ui64;
		v7 = sub_1408FE3D0(v6);
		v8 = sub_1408FC950(v6);
		v9 = *(float**)(a1 + 8);
		*(float*)&v18[1] = v7;
		v19 = 0i64;
		v24 = xmmword_140C78440;
		*(float*)v18 = v8;
		v21 = v8;
		v22 = 0i64;
		v20 = -v7;
		v17.m128_u64[0] = (unsigned __int64)a2;
		v23 = xmmword_140B7A700;
		if (v9)
		{
			a2[3].m128_f32[0] = a2[3].m128_f32[0] - *v9;
			v10 = a2[3].m128_f32[1] - *(float*)(*(_QWORD*)(a1 + 8) + 4i64);
			v17.m128_u64[1] = (unsigned __int64)v18;
			a2[3].m128_f32[1] = v10;
			sub_1401AFB10((__m128**) & v17, a2);
			a2[3].m128_f32[0] = **(float**)(a1 + 8) + a2[3].m128_f32[0];
			result = *(__m128**)(a1 + 8);
			a2[3].m128_f32[1] = result->m128_f32[1] + a2[3].m128_f32[1];
		}
		else
		{
			v17.m128_u64[1] = (unsigned __int64)v18;
			result = sub_1401AFB10((__m128**) & v17, a2);
		}
	}
	v11 = *(float*)a1;
	if (*(float*)a1 != 1.0)
	{
		v12 = (__m128)0x3F800000u;
		v12.m128_f32[0] = 1.0 / v11;
		v13 = _mm_unpacklo_ps(v12, (__m128)0x3F800000u);
		v14 = *a2;
		v15 = _mm_unpacklo_ps(_mm_unpacklo_ps(v12, v12), v13);
		v13.m128_f32[0] = 1.0 / v11;
		v16 = _mm_shuffle_ps(v13, v13, 0);
		v17 = v15;
		*a2 = _mm_mul_ps(v14, v16);
		a2[1] = _mm_mul_ps(a2[1], v16);
		a2[2] = _mm_mul_ps(a2[2], v16);
		a2[3] = _mm_mul_ps(a2[3], v16);
	}
	return result;
}
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78440: using guessed type __int128 xmmword_140C78440;

