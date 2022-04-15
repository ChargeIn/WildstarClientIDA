//----- (00000001402D3C40) ----------------------------------------------------
char __fastcall sub_1402D3C40(__int64 a1, __m128* a2, __m128* a3, unsigned int* a4, float* a5, float* a6)
{
	__int64 v6; // r10
	__int64 v7; // rax
	__m128 v8; // xmm4
	__m128 v9; // xmm8
	__m128 v10; // xmm9
	__m128 v11; // xmm2
	float v12; // xmm2_4
	float v13; // xmm5_4
	__m128 v14; // xmm2
	__m128 v15; // xmm3
	float v16; // xmm3_4
	__m128 v17; // xmm4
	__m128 v18; // xmm2
	float v19; // xmm2_4
	__m128 v20; // xmm1

	v6 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 64i64);
	v7 = a4[2];
	v8 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(v6 + 12i64 * a4[1]),
				(__m128) * (unsigned int*)(v6 + 12i64 * a4[1] + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * a4[1] + 4), (__m128)0i64)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4), (__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 4), (__m128)0i64)));
	v9 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12 * v7), (__m128) * (unsigned int*)(v6 + 12 * v7 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12 * v7 + 4), (__m128)0i64)),
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4), (__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 4), (__m128)0i64)));
	v10 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 210), _mm_shuffle_ps(*a3, *a3, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v9, v9, 201), _mm_shuffle_ps(*a3, *a3, 210)));
	v11 = _mm_mul_ps(v8, v10);
	v12 = (float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0]) + _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
	if (v12 > (float)-*(float*)&dword_140C4133C && v12 < *(float*)&dword_140C4133C)
		return 0;
	v13 = 1.0 / v12;
	v14 = _mm_sub_ps(
		*a2,
		_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(v6 + 12i64 * *a4),
				(__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 8)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(v6 + 12i64 * *a4 + 4), (__m128)0i64)));
	v15 = _mm_mul_ps(v14, v10);
	v16 = (float)((float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
		+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0])
		* v13;
	*a6 = v16;
	if (v16 < 0.0)
		return 0;
	if (v16 > 1.0)
		return 0;
	v17 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 210), _mm_shuffle_ps(v14, v14, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v8, v8, 201), _mm_shuffle_ps(v14, v14, 210)));
	v18 = _mm_mul_ps(*a3, v17);
	v19 = (float)((float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0])
		+ _mm_shuffle_ps(v18, v18, 170).m128_f32[0])
		* v13;
	a6[1] = v19;
	if (v19 < 0.0 || (float)(v19 + v16) > 1.0)
		return 0;
	v20 = _mm_mul_ps(v17, v9);
	*a5 = (float)((float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
		+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0])
		* v13;
	return 1;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4133C: using guessed type int dword_140C4133C;

