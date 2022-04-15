//----- (00000001406DF8A0) ----------------------------------------------------
_DWORD* __fastcall sub_1406DF8A0(_DWORD* a1, float* a2, float a3)
{
	float v4; // xmm1_4
	__m128 v5; // xmm6
	__m128 v6; // xmm8
	__m128 v7; // xmm2
	int v8; // ecx
	__m128 v9; // xmm4
	__m128 v10; // xmm3
	int v11; // ecx
	__m128 v12; // xmm1
	int v13; // ecx
	float v14; // xmm5_4
	float v15; // xmm6_4
	float v16; // xmm4_4

	v5 = (__m128) * (unsigned int*)a2;
	v6 = _mm_sqrt_ps((__m128)0x40400000u);
	v4 = 1.0 / (float)(a3 * 64.0);
	v5.m128_f32[0] = (float)((float)(v5.m128_f32[0] * 2.0) * 0.33333334) * v4;
	v6.m128_f32[0] = (float)((float)((float)(v6.m128_f32[0] * 0.33333334) * a2[1]) - (float)(*a2 * 0.33333334)) * v4;
	v7 = v5;
	v9 = _mm_xor_ps(v5, (__m128)0x80000000);
	v7.m128_f32[0] = v5.m128_f32[0] + 0.5;
	v8 = (int)(float)(v5.m128_f32[0] + 0.5);
	v9.m128_f32[0] = v9.m128_f32[0] - v6.m128_f32[0];
	if (v8 != 0x80000000 && (float)v8 != v7.m128_f32[0])
		v7.m128_f32[0] = (float)(v8 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	v10 = v9;
	v10.m128_f32[0] = v9.m128_f32[0] + 0.5;
	v11 = (int)(float)(v9.m128_f32[0] + 0.5);
	if (v11 != 0x80000000 && (float)v11 != v10.m128_f32[0])
		v10.m128_f32[0] = (float)(v11 - (_mm_movemask_ps(_mm_unpacklo_ps(v10, v10)) & 1));
	v12 = v6;
	v12.m128_f32[0] = v6.m128_f32[0] + 0.5;
	v13 = (int)(float)(v6.m128_f32[0] + 0.5);
	if (v13 != 0x80000000 && (float)v13 != v12.m128_f32[0])
		v12.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
	v14 = fabs(v7.m128_f32[0] - v5.m128_f32[0]);
	v15 = fabs(v10.m128_f32[0] - v9.m128_f32[0]);
	v16 = fabs(v12.m128_f32[0] - v6.m128_f32[0]);
	if (v14 <= v15 || v14 <= v16)
	{
		if (v15 <= v16)
			v12.m128_f32[0] = (float)-v7.m128_f32[0] - v10.m128_f32[0];
	}
	else
	{
		v7.m128_f32[0] = (float)-v10.m128_f32[0] - v12.m128_f32[0];
	}
	*a1 = (int)(float)-v7.m128_f32[0];
	a1[1] = (int)(float)-v12.m128_f32[0];
	return a1;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

