//----- (0000000140180F20) ----------------------------------------------------
__int64 __fastcall sub_140180F20(__int64 a1, __m128* a2)
{
	__m128i v2; // xmm1
	__m128i v3; // xmm1
	float v4; // xmm0_4
	float v5; // xmm3_4
	float v6; // xmm5_4
	float v7; // xmm1_4
	float v8; // xmm4_4
	float v9; // xmm2_4
	float v10; // xmm6_4
	float v11; // xmm3_4
	float v12; // xmm3_4
	float v13; // xmm2_4
	int v14; // r8d
	int v15; // edx

	v2 = _mm_shuffle_epi32(
		_mm_cvttps_epi32(
			_mm_add_ps(
				_mm_mul_ps(_mm_min_ps(_mm_max_ps((__m128)0i64, *a2), (__m128)xmmword_140B7B240), (__m128)xmmword_140B7B470),
				(__m128)xmmword_140B7AC50)),
		198);
	v3 = _mm_packus_epi16(v2, v2);
	*(_DWORD*)(a1 + 1024) = _mm_cvtsi128_si32(_mm_packus_epi16(v3, v3));
	v4 = a2->m128_f32[0];
	v5 = a2->m128_f32[1];
	if (a2->m128_f32[0] >= v5)
		v6 = a2->m128_f32[1];
	else
		v6 = a2->m128_f32[0];
	v7 = a2->m128_f32[2];
	if (v6 >= v7)
		v6 = a2->m128_f32[2];
	if (v4 <= v5)
		v8 = a2->m128_f32[1];
	else
		v8 = a2->m128_f32[0];
	if (v8 <= v7)
		v8 = a2->m128_f32[2];
	v9 = v8 - v6;
	if (v8 <= 0.0)
	{
		v10 = 0.0;
		v12 = 0.0;
	}
	else
	{
		v10 = v9 / v8;
		if (v4 == v8)
		{
			v11 = (float)(v5 - v7) / v9;
		}
		else if (v5 < v8)
		{
			v11 = (float)((float)(v4 - v5) / v9) + 4.0;
		}
		else
		{
			v11 = (float)((float)(v7 - v4) / v9) + 2.0;
		}
		v12 = v11 * 60.0;
		if (v12 < 0.0)
			v12 = v12 + 360.0;
	}
	*(float*)(a1 + 1168) = v10;
	*(float*)(a1 + 1172) = v8;
	v13 = fmaxf(0.0, fminf(v12, 359.0));
	*(float*)(a1 + 1084) = v13;
	v14 = *(_DWORD*)(a1 + 720);
	v15 = *(_DWORD*)(a1 + 728);
	*(_DWORD*)(a1 + 1160) = (int)(float)((float)(*(_DWORD*)(a1 + 724)
		- *(_DWORD*)(a1 + 1104)
		- *(_DWORD*)(a1 + 1100)
		- *(_DWORD*)(a1 + 716))
		* v10);
	*(_DWORD*)(a1 + 1164) = v15 - (int)(float)((float)(v15 - v14) * v8) - v14;
	*(_DWORD*)(a1 + 1080) = (int)(float)((float)(v13 * 0.0027777778)
		* (float)(*(_DWORD*)(a1 + 728) - *(_DWORD*)(a1 + 720)));
	return sub_1401810E0(a1);
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;

