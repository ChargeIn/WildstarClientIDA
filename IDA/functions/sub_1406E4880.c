#include "../winhttp.h"

//----- (00000001406E4880) ----------------------------------------------------
float* __fastcall sub_1406E4880(__m128* a1, float* a2)
{
	int v3; // eax
	__int32 v4; // r8d
	int v5; // r10d
	int v6; // r11d
	__int32 v7; // ebx
	float v8; // xmm1_4
	__m128 v9; // xmm3
	__m128 v10; // xmm2
	__m128i v11; // xmm0
	__m128 v12; // xmm3
	signed int v13; // ebx
	int v14; // r8d
	signed int v15; // eax
	__m128 v16; // xmm0
	unsigned __int64 v17; // rbx
	__m128* v18; // rcx
	__m128 v19; // xmm0
	__int64 v20; // rcx
	__m128 v21; // xmm0
	__int32 v22; // xmm0_4
	int v24; // [rsp+20h] [rbp-B8h] BYREF
	int v25; // [rsp+24h] [rbp-B4h]
	int v26; // [rsp+28h] [rbp-B0h]
	int v27; // [rsp+2Ch] [rbp-ACh]
	unsigned __int64 v28; // [rsp+30h] [rbp-A8h]
	__int64 v29; // [rsp+38h] [rbp-A0h]
	__int128 v30; // [rsp+40h] [rbp-98h]
	__int128 v31[6]; // [rsp+50h] [rbp-88h] BYREF

	v3 = dword_140C53E20;
	if (*(_DWORD*)qword_140C63750 < dword_140C53E20)
		v3 = *(_DWORD*)qword_140C63750;
	if (byte_140C53E30[v3])
	{
		v4 = a1[64].m128_i32[2];
		v5 = (int)*a2;
		v6 = (int)a2[1];
		v7 = a1[64].m128_i32[0];
		v24 = v5;
		v25 = v6;
		v8 = a1[71].m128_f32[0];
		v9 = (__m128)COERCE_UNSIGNED_INT((float)(v4 - v7));
		v9.m128_f32[0] = (float)(v9.m128_f32[0] * v8) * 0.5;
		v10 = (__m128)COERCE_UNSIGNED_INT((float)(a1[64].m128_i32[3] - a1[64].m128_i32[1]));
		v11 = _mm_cvtsi32_si128(0);
		v10.m128_f32[0] = (float)(v10.m128_f32[0] * v8) * 0.5;
		v12 = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, (__m128)0i64), _mm_unpacklo_ps(v10, (__m128)0i64));
		v13 = v7 - (int)v12.m128_f32[0];
		v26 = (int)v12.m128_f32[0];
		v14 = (int)v12.m128_f32[0] + v4 - qword_140C77768;
		v27 = (int)_mm_shuffle_ps(v12, v12, 85).m128_f32[0];
		v15 = a1[64].m128_i32[1] - v27;
		if (v14 < v5)
			v5 = v14;
		if (v27 + a1[64].m128_i32[3] - HIDWORD(qword_140C77768) < v6)
			v6 = v27 + a1[64].m128_i32[3] - HIDWORD(qword_140C77768);
		if (v13 < v5)
			v13 = v5;
		if (v15 < v6)
			v15 = v6;
		v16 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), v11),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), v11)));
	}
	else
	{
		v16 = *(__m128*)a2;
	}
	v17 = 0i64;
	for (a1[69] = v16; v17 < a1[154].m128_u64[0]; ++v17)
	{
		v18 = *(__m128**)(a1[153].m128_u64[1] + 8 * v17);
		if (v18[37].m128_u64[0])
		{
			v19 = v18[1];
			v20 = v18[37].m128_i64[0];
			v21 = _mm_add_ps(v19, a1[69]);
			v24 = (int)v21.m128_f32[0];
			v25 = (int)_mm_shuffle_ps(v21, v21, 85).m128_f32[0];
			sub_1400CC900(v20, (unsigned int*)&v24);
		}
	}
	v22 = a1[71].m128_i32[0];
	v29 = 0i64;
	LODWORD(v30) = 0;
	LODWORD(v28) = v22;
	*((_QWORD*)&v30 + 1) = a1 + 69;
	v31[0] = v28;
	v31[1] = v30;
	return sub_1401B0840((int*)v31, (__int64)&a1[65]);
}
// 140C53E20: using guessed type int dword_140C53E20;
// 140C53E30: using guessed type _BYTE byte_140C53E30[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C77768: using guessed type __int64 qword_140C77768;

