//----- (000000014052E280) ----------------------------------------------------
int* __fastcall sub_14052E280(__int64 a1)
{
	int* result; // rax
	_DWORD* v3; // rax
	__m128i v4; // xmm0
	__m128 v5; // xmm11
	__m128 v6; // xmm11
	float v7; // xmm9_4
	int v8[4]; // [rsp+20h] [rbp-78h] BYREF
	void* retaddr; // [rsp+98h] [rbp+0h] BYREF

	result = (int*)&retaddr;
	if (*(_QWORD*)(a1 + 1152) && *(int*)(a1 + 1264) <= 2)
	{
		v3 = sub_14052B810(a1, v8);
		v4 = _mm_cvtsi32_si128(0);
		v5 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3[2] - *v3), v4),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3[3] - v3[1]), v4)));
		if (*(_DWORD*)(a1 + 1264) == 1)
			v5 = _mm_mul_ps(v5, (__m128)xmmword_140B7B2F0);
		result = sub_14052B440(a1, v8);
		v6 = _mm_sub_ps(
			v5,
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(result[2] - *result), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(result[3] - result[1]), _mm_cvtsi32_si128(0)))));
		v7 = fminf(*(float*)(a1 + 1252), _mm_shuffle_ps(v6, v6, 85).m128_f32[0]);
		*(float*)(a1 + 1248) = fmaxf(0.0, fminf(*(float*)(a1 + 1248), v6.m128_f32[0]));
		*(float*)(a1 + 1252) = fmaxf(0.0, v7);
	}
	return result;
}
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;
// 14052E280: using guessed type int var_78[4];

