//----- (00000001401B2FE0) ----------------------------------------------------
__int64 __fastcall sub_1401B2FE0(__int64 a1, __m128* a2)
{
	__m128 v3; // xmm12
	float v4; // xmm11_4
	float v5; // xmm7_4
	float v6; // xmm5_4
	float v7; // xmm8_4
	float v8; // xmm4_4
	float v9; // xmm6_4
	float v10; // xmm10_4
	float v11; // xmm9_4
	float v12; // xmm3_4
	float v13; // xmm9_4
	float v14; // xmm7_4
	float v15; // xmm11_4
	int v17[12]; // [rsp+20h] [rbp-B8h] BYREF
	__int128 v18; // [rsp+50h] [rbp-88h]

	v17[3] = 0;
	v17[7] = 0;
	v17[11] = 0;
	v3 = *a2;
	v4 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
	v5 = _mm_shuffle_ps(v3, v3, 255).m128_f32[0];
	v6 = v3.m128_f32[0] * (float)(v3.m128_f32[0] * 2.0);
	v7 = v5 * (float)(v4 * 2.0);
	v8 = COERCE_FLOAT(*a2) * (float)(v4 * 2.0);
	v9 = v4 * (float)(v4 * 2.0);
	v10 = v5 * (float)(COERCE_FLOAT(*a2) * 2.0);
	v11 = _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
	v12 = v11 * 2.0;
	v13 = v11 * (float)(v11 * 2.0);
	v14 = v5 * v12;
	*(float*)v17 = (float)(1.0 - v9) - v13;
	v3.m128_f32[0] = v3.m128_f32[0] * v12;
	v15 = v4 * v12;
	*(float*)&v17[1] = v8 + v14;
	*(float*)&v17[2] = v3.m128_f32[0] - v7;
	*(float*)&v17[5] = (float)(1.0 - v6) - v13;
	v18 = xmmword_140B7AD00;
	*(float*)&v17[4] = v8 - v14;
	*(float*)&v17[6] = v15 + v10;
	*(float*)&v17[8] = v3.m128_f32[0] + v7;
	*(float*)&v17[9] = v15 - v10;
	*(float*)&v17[10] = (float)(1.0 - v6) - v9;
	sub_1401B2ED0(a1, (float*)v17);
	return a1;
}
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;

