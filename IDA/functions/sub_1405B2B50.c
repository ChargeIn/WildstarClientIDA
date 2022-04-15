//----- (00000001405B2B50) ----------------------------------------------------
__int64 __fastcall sub_1405B2B50(__int64 a1, float* a2, float* a3)
{
	int v5; // r11d
	__int64 v6; // rcx
	__int64* v7; // r9
	__int64* v8; // r10
	__int64 v9; // rax
	__int64 result; // rax
	__int64 v11; // rbx
	__int64 v12; // rsi
	__int64 v13; // rax
	unsigned int v14; // edi
	unsigned int* v15; // rbp
	__int64 v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rbx
	unsigned int* v20; // rax
	__int64 v21; // rcx
	__m128i v22; // xmm1
	__m128i v23; // xmm3
	int v24; // eax
	unsigned int v25; // r9d
	__m128 v26; // xmm6
	__m128 v27; // xmm1
	__int64 v28; // rcx
	__m128 v29; // [rsp+20h] [rbp-38h] BYREF

	v5 = *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64);
	v6 = *(_QWORD*)(qword_140C659F0 + 824);
	v7 = *(__int64**)(v6 + 16);
	v8 = *(__int64**)(v6 + 24);
	if (v7 == v8)
		return 0i64;
	while (1)
	{
		v9 = *v7;
		if (*(_DWORD*)(*v7 + 188) == v5)
			break;
		if (++v7 == v8)
			return 0i64;
	}
	v11 = *v7;
	if (!v9)
		return 0i64;
	v12 = sub_1402074E0(*(_DWORD*)(v9 + 68));
	if (!v12 || !sub_1402070A0(*(_DWORD*)(v11 + 64)))
		return 0i64;
	v13 = *(_QWORD*)(v11 + 232);
	v14 = 0;
	if (!v13 || !*(_DWORD*)(v11 + 272))
		v13 = 0i64;
	result = sub_140205FA0(*(_DWORD*)(v13 + 8));
	if (result)
	{
		v15 = (unsigned int*)sub_14024C200(*(_DWORD*)(result + 4));
		if (!v15)
			return 0i64;
		v16 = *(_QWORD*)(v11 + 232);
		if (!v16 || !*(_DWORD*)(v11 + 272))
			v16 = 0i64;
		v17 = sub_140206C60(*(_DWORD*)(v16 + 12));
		if (!v17)
			return 0i64;
		v18 = (__int64)(*(_QWORD*)(v11 + 256) - *(_QWORD*)(v11 + 248)) >> 3 ? **(_QWORD**)(v11 + 248) : 0i64;
		v19 = *(unsigned int*)(v18 + 8);
		v20 = (unsigned int*)sub_14024ACC0(*(_DWORD*)(v17 + 4 * v19 + 16));
		v21 = (__int64)v20;
		if (!v20)
			return 0i64;
		v22 = _mm_cvtsi32_si128(v20[11]);
		v23 = _mm_cvtsi32_si128(v20[10]);
		v24 = v15[6] - v20[14];
		v25 = *(_DWORD*)(v12 + 4 * v19 + 20);
		v26 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(v22, _mm_cvtsi32_si128(0)))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		v27 = _mm_mul_ps(
			_mm_sub_ps(
				_mm_div_ps(
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15[2]), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15[3]), _mm_cvtsi32_si128(0)))),
					(__m128)xmmword_140B7B490),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		v29 = _mm_sub_ps(
			_mm_unpacklo_ps(_mm_unpacklo_ps(v27, _mm_shuffle_ps(v27, v27, 85)), (__m128)0i64),
			_mm_unpacklo_ps(_mm_unpacklo_ps(v26, _mm_shuffle_ps(v26, v26, 85)), (__m128)0i64));
		v29.m128_f32[1] = _mm_shuffle_ps(v29, v29, 85).m128_f32[0] + (float)((float)v24 * *(float*)&dword_140C4A348);
		if ((unsigned int)sub_1405B2A90(v21, a2, v29.m128_f32, v25))
		{
			LOBYTE(v14) = (unsigned int)sub_1405B2A90(v28, a3, v29.m128_f32, *(_DWORD*)(v12 + 4 * v19 + 36)) != 0;
			return v14;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 1405B2D9F: variable 'v28' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140C4A348: using guessed type int dword_140C4A348;
// 140C659F0: using guessed type __int64 qword_140C659F0;

