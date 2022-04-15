//----- (000000014015C040) ----------------------------------------------------
__int64 __fastcall sub_14015C040(__int64 a1, unsigned int* a2, float* a3, __int64 a4, __int64 a5)
{
	_QWORD* v5; // r10
	unsigned int v7; // r9d
	float* v8; // r11
	__m128i v11; // xmm2
	__m128 v12; // xmm6
	__m128i v13; // xmm3
	unsigned int v14; // eax
	unsigned int v15; // ecx
	float v16; // xmm2_4
	unsigned int v17; // eax
	float v18; // xmm1_4
	float v19; // xmm0_4
	float v20; // xmm1_4
	float v21; // xmm1_4
	__m128 v23; // [rsp+48h] [rbp-29h] BYREF
	__m128 v24; // [rsp+58h] [rbp-19h] BYREF
	__m128 v25; // [rsp+68h] [rbp-9h]
	__int128 v26[3]; // [rsp+78h] [rbp+7h] BYREF
	unsigned int v27; // [rsp+C8h] [rbp+57h] BYREF
	unsigned int v28; // [rsp+CCh] [rbp+5Bh]

	v5 = *(_QWORD**)a3;
	v7 = a2[1];
	v8 = a3;
	v11 = _mm_cvtsi32_si128(0);
	v12 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[2]), v11),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[3]), v11)));
	v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), v11);
	v26[1] = (__int128)v12;
	v26[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(v13, _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), v11)));
	*(float*)v26 = *(float*)v26 + 4.0;
	if (v5)
	{
		sub_140101470(v5, (int*)&v27);
		v15 = v28;
		v14 = v27;
	}
	else
	{
		v14 = 0;
		v15 = 0;
	}
	v23 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(0))));
	v16 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
	if (v16 > 0.0)
	{
		v17 = a2[3];
		v25 = v12;
		v24 = (__m128)v26[0];
		v18 = (float)(int)(v17 - v7);
		if (v16 > v18)
		{
			v20 = (float)(v18 * v23.m128_f32[0]) / v16;
		}
		else
		{
			v19 = v24.m128_f32[1] + (float)((float)(v18 - v16) * 0.5);
			v20 = v23.m128_f32[0];
			v24.m128_f32[1] = v19;
			v25.m128_f32[1] = v19 + v16;
		}
		v21 = v20 + v24.m128_f32[0];
		v23 = (__m128)xmmword_140B7B240;
		v25.m128_f32[0] = v21;
		if (v5)
		{
			sub_140103E60(v5, &v24, &v23, 0, COERCE_INT((float)(*(float*)&dword_140C63664 - v8[2]) * v8[3]));
			v21 = v25.m128_f32[0];
		}
		*(float*)v26 = v21 + 2.0;
	}
	return (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64, __int128*, _DWORD, __int64, int))(*(_QWORD*)qword_140C65680 + 264i64))(
		qword_140C65680,
		*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
		a4,
		-1i64,
		v26,
		0,
		a5,
		1);
}
// 14015C12D: variable 'v7' is possibly undefined
// 14015C18B: variable 'v5' is possibly undefined
// 14015C19D: variable 'v8' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C65680: using guessed type __int64 qword_140C65680;

