//----- (00000001407813D0) ----------------------------------------------------
__m128* __fastcall sub_1407813D0(__int64 a1, __int64 a2, int a3, __m128* a4, __m128* a5, __m128* a6)
{
	float v10; // xmm7_4
	float v11; // xmm6_4
	__int64 v12; // rax
	int* v13; // rax
	unsigned int v14; // r9d
	__int64 v15; // rdx
	__int64 v16; // r8
	__int64 v17; // rcx
	__int64 v18; // rax
	__m128 v19; // xmm4
	__m128 v20; // xmm1
	_DWORD* v21; // rax
	__m128 v22; // xmm0
	__m128 v23; // xmm2
	__m128 v24; // xmm3
	int v25; // eax
	__m128 v26; // xmm5
	float v27; // xmm7_4
	__m128 v28; // xmm4
	__m128 v29; // xmm1
	float v30; // xmm0_4
	__m128* result; // rax
	__m128 v32; // xmm6
	float v33; // xmm8_4
	__m128 v34; // xmm3
	__m128 v35; // xmm3
	__m128 v36; // xmm4
	__m128 v37; // xmm3
	float v38; // xmm1_4
	__m128 v39; // xmm4
	__m128 v40; // xmm3
	float v41; // xmm1_4
	int v42; // [rsp+28h] [rbp-80h]
	unsigned int v43; // [rsp+40h] [rbp-68h] BYREF
	unsigned int v44; // [rsp+44h] [rbp-64h]
	unsigned int v45; // [rsp+48h] [rbp-60h]
	int v46[20]; // [rsp+50h] [rbp-58h] BYREF
	int v47; // [rsp+B0h] [rbp+8h] BYREF

	if (!*(_QWORD*)(a1 + 64))
	{
		v10 = 0.0;
		v11 = 1000.0 / *(float*)(a1 + 112);
		v12 = 4i64 * *(unsigned int*)(a1 + 56);
		if (!is_mul_ok(*(unsigned int*)(a1 + 56), 4ui64))
			v12 = -1i64;
		v13 = sub_14018B280(v12, 0);
		v14 = 1;
		*(_QWORD*)(a1 + 64) = v13;
		*(_QWORD*)(a1 + 72) = v13;
		for (*v13 = a3;
			v14 < *(_DWORD*)(a1 + 56);
			*(_DWORD*)(*(_QWORD*)(a1 + 64) + 4 * v16) = a3 + (int)(float)((float)(v11 * v10) + 0.5))
		{
			v15 = *(_QWORD*)(a1 + 80);
			v16 = v14;
			v17 = 3i64 * v14;
			v18 = v14++ - 1;
			v19 = _mm_sub_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v15 + 4 * v17), (__m128) * (unsigned int*)(v15 + 4 * v17 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v15 + 4 * v17 + 4), (__m128)0i64)),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v15 + 12 * v18),
						(__m128) * (unsigned int*)(v15 + 12 * v18 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v15 + 12 * v18 + 4), (__m128)0i64)));
			v20 = _mm_mul_ps(v19, v19);
			v10 = v10
				+ fsqrt(
					(float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
					+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0]);
		}
	}
	v21 = sub_140783E10((unsigned int*)(a1 + 56), v46, a3, &v47, &v43, v42, a1);
	v22 = (__m128)(unsigned int)v21[2];
	v23 = (__m128)(unsigned int)v21[1];
	v24 = (__m128)(unsigned int) * v21;
	v25 = v47;
	*a4 = _mm_unpacklo_ps(_mm_unpacklo_ps(v24, v22), _mm_unpacklo_ps(v23, (__m128)0i64));
	if (v25)
	{
		v26 = (__m128)v45;
		v27 = *(float*)&v44;
		v28 = (__m128)v43;
		v29 = _mm_unpacklo_ps((__m128)v44, (__m128)0i64);
		v30 = (float)v25;
		result = a5;
		v32 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v43, (__m128)v45), v29);
		v29.m128_f32[0] = 1000.0 / v30;
		v33 = *(float*)&dword_140C4B928;
		*a5 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v32);
		if (a2
			&& *(_DWORD*)(a2 + 4924)
			&& (v34 = _mm_unpacklo_ps(_mm_unpacklo_ps(v28, (__m128)0i64), _mm_unpacklo_ps(v26, (__m128)0i64)),
				v35 = _mm_mul_ps(v34, v34),
				(float)(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 85).m128_f32[0]) > v33))
		{
			result = a6;
			v36 = (__m128)0x40400000u;
			*a6 = v32;
			result->m128_i32[1] = 0;
			v37 = _mm_mul_ps(*result, *result);
			v37.m128_f32[0] = (float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
				+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0];
			v38 = 1.0 / fsqrt(v37.m128_f32[0]);
			v36.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v37.m128_f32[0] * v38) * v38)) * 0.5) * v38, 0.0);
			*result = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), *result);
		}
		else if ((float)((float)((float)(v28.m128_f32[0] * v28.m128_f32[0]) + (float)(v27 * v27))
			+ (float)(v26.m128_f32[0] * v26.m128_f32[0])) > v33)
		{
			v39 = (__m128)0x40400000u;
			result = a6;
			v40 = _mm_mul_ps(v32, v32);
			v40.m128_f32[0] = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
				+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
			v41 = 1.0 / fsqrt(v40.m128_f32[0]);
			v39.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v40.m128_f32[0] * v41) * v41)) * 0.5) * v41, 0.0);
			*a6 = _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v32);
		}
	}
	else
	{
		result = a5;
		*a5 = 0i64;
	}
	return result;
}
// 140781529: variable 'v42' is possibly undefined
// 140C4B928: using guessed type int dword_140C4B928;
// 1407813D0: using guessed type int var_58[20];

