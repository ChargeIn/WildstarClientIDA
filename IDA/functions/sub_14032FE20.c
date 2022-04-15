//----- (000000014032FE20) ----------------------------------------------------
__int64 __fastcall sub_14032FE20(__m128* a1, __m128* a2, __int64 a3, __m128* a4)
{
	__m128 v4; // xmm1
	__int64 result; // rax
	__m128 v7; // xmm1
	__m128 v8; // xmm1
	unsigned __int64 i; // rbx

	v4 = a1[4];
	a1[7] = _mm_add_ps(
		_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), a2[1]), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a2)),
		_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), a2[2]));
	a1[8] = *a4;
	a1[9] = a4[1];
	a1[10] = a4[2];
	a1[11] = a4[3];
	result = a1[2].m128_i64[1];
	v7 = *(__m128*)(result + 176);
	a1[12] = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 85), a1[9]), _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), a1[8])),
			_mm_mul_ps(_mm_shuffle_ps(v7, v7, 170), a1[10])),
		a1[11]);
	v8 = a2[3];
	a1[18] = _mm_sub_ps(v8, a1[17]);
	a1[17] = v8;
	for (i = a1[24].m128_u64[0]; i; i = *(_QWORD*)(i + 16))
		result = (**(__int64(__fastcall***)(unsigned __int64, unsigned __int64))i)(i, a1[3].m128_u64[0]);
	return result;
}

