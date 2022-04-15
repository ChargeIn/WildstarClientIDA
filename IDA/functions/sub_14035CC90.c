//----- (000000014035CC90) ----------------------------------------------------
__int64 __fastcall sub_14035CC90(__int64 a1, __m128* a2, __m128* a3, __int16 a4)
{
	__m128 v5; // xmm2
	int v6; // r9d
	int v7; // eax
	int v8; // r10d
	__int64 v9; // rcx

	v5 = _mm_mul_ps(
		_mm_add_ps(
			(__m128)xmmword_140B7AC50,
			_mm_mul_ps(
				_mm_shuffle_ps(*a2, *a2, 136),
				_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
		(__m128)xmmword_140B7B490);
	v6 = (int)v5.m128_f32[0];
	v7 = (int)_mm_shuffle_ps(v5, v5, 85).m128_f32[0];
	if ((int)v5.m128_f32[0] < *(_DWORD*)(a1 + 2188))
		return 0i64;
	if (v6 >= *(_DWORD*)(a1 + 2196))
		return 0i64;
	if (v7 < *(_DWORD*)(a1 + 2192))
		return 0i64;
	if (v7 >= *(_DWORD*)(a1 + 2200))
		return 0i64;
	v8 = *(_DWORD*)(a1 + 2204);
	v9 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
		+ 8i64
		* (v6 % v8
			+ v8 * (v7 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v7 % *(_DWORD*)(a1 + 2208) < 0))
			+ v8 * (unsigned int)(v6 % v8 < 0)));
	if (!v9)
		return 0i64;
	sub_140387910(v9, a2, a3, a4);
	return 1i64;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;

