//----- (00000001402DE600) ----------------------------------------------------
__int64 __fastcall sub_1402DE600(__int64 a1, unsigned int a2, float* a3)
{
	__int64 v4; // rsi
	__int64 v5; // rax
	int v7; // edx
	float* v8; // r9
	__int64 v9; // rdx
	__m128 v10; // xmm6
	__m128 v11; // xmm9
	__m128 v12; // xmm8
	__m128 v13; // xmm5
	__m128 v14; // xmm8
	__m128 v15; // xmm2
	float v16; // xmm2_4
	__int128 v17; // xmm0
	__m128 v18; // xmm6
	float v19; // xmm3_4
	__m128 v20; // xmm2
	__m128 v21; // xmm1
	__int64 result; // rax
	float v23; // xmm0_4
	__int64 v24; // rdx
	__int128 v25; // [rsp+20h] [rbp-68h]

	v4 = 3i64 * a2;
	v5 = *(_QWORD*)(a1 + 32);
	v7 = *(_DWORD*)(v5 + 24i64 * a2 + 16);
	v8 = (float*)(v5 + 8 * v4);
	if (v7 == -1 && *((_DWORD*)v8 + 5) == -1)
	{
		v9 = *(_QWORD*)(a1 + 40);
		v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (unsigned int*)a3, (__m128) * ((unsigned int*)a3 + 1)), (__m128)0i64);
		v11 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(v9 + 72i64 * *(unsigned int*)v8),
				(__m128) * (unsigned int*)(v9 + 72i64 * *(unsigned int*)v8 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v9 + 72i64 * *(unsigned int*)v8 + 4), (__m128)0i64));
		v12 = _mm_sub_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v9 + 72i64 * *((unsigned int*)v8 + 2)),
					(__m128) * (unsigned int*)(v9 + 72i64 * *((unsigned int*)v8 + 2) + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v9 + 72i64 * *((unsigned int*)v8 + 2) + 4), (__m128)0i64)),
			v11);
		v13 = _mm_sub_ps(
			_mm_unpacklo_ps(
				_mm_unpacklo_ps(
					(__m128) * (unsigned int*)(v9 + 72i64 * *((unsigned int*)v8 + 1)),
					(__m128) * (unsigned int*)(v9 + 72i64 * *((unsigned int*)v8 + 1) + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(v9 + 72i64 * *((unsigned int*)v8 + 1) + 4), (__m128)0i64)),
			v11);
		v14 = _mm_sub_ps(
			_mm_mul_ps(
				_mm_shuffle_ps(v12, v12, 210),
				_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 201)),
			_mm_mul_ps(
				_mm_shuffle_ps(v12, v12, 201),
				_mm_shuffle_ps((__m128)xmmword_140B7A4B0, (__m128)xmmword_140B7A4B0, 210)));
		v15 = _mm_mul_ps(v13, v14);
		v16 = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
			+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0];
		if (v16 <= -0.0000099999997 || v16 >= 0.0000099999997)
		{
			v18 = _mm_sub_ps(v10, v11);
			v19 = 1.0 / v16;
			v20 = _mm_mul_ps(v18, v14);
			*((float*)&v25 + 1) = (float)((float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
				+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0])
				* v19;
			v21 = _mm_mul_ps(
				_mm_sub_ps(
					_mm_mul_ps(_mm_shuffle_ps(v13, v13, 210), _mm_shuffle_ps(v18, v18, 201)),
					_mm_mul_ps(_mm_shuffle_ps(v13, v13, 201), _mm_shuffle_ps(v18, v18, 210))),
				(__m128)xmmword_140B7A4B0);
			*((float*)&v25 + 2) = (float)((float)(v21.m128_f32[0] + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
				+ _mm_shuffle_ps(v21, v21, 170).m128_f32[0])
				* v19;
			*(float*)&v25 = (float)(1.0 - *((float*)&v25 + 1)) - *((float*)&v25 + 2);
			v17 = v25;
		}
		else
		{
			v17 = xmmword_140B7A7E0;
		}
		if (*(float*)&v17 >= -0.0000099999997
			&& *(float*)&v17 <= 1.00001
			&& *((float*)&v17 + 1) >= -0.0000099999997
			&& *((float*)&v17 + 1) <= 1.00001
			&& *((float*)&v17 + 2) >= -0.0000099999997
			&& *((float*)&v17 + 2) <= 1.00001)
		{
			return v5 + 8 * v4;
		}
		return 0i64;
	}
	if (*a3 < *v8)
		return 0i64;
	if (*a3 > v8[2])
		return 0i64;
	v23 = a3[1];
	if (v23 < v8[1] || v23 > v8[3])
		return 0i64;
	if (v7 == -1 || (result = ((__int64 (*)(void))sub_1402DE600)()) == 0)
	{
		v24 = *(unsigned int*)(*(_QWORD*)(a1 + 32) + 8 * v4 + 20);
		if ((_DWORD)v24 == -1)
			return 0i64;
		result = sub_1402DE600(a1, v24, a3);
		if (!result)
			return 0i64;
	}
	return result;
}
// 1402DE7E1: variable 'v25' is possibly undefined
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A7E0: using guessed type __int128 xmmword_140B7A7E0;

