//----- (00000001408A8E90) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408A8E90(__m128* a1, float a2, float a3, float a4, float a5, float a6)
{
	__m128 v6; // xmm0
	float v8; // xmm9_4
	float v9; // xmm8_4
	float v10; // xmm3_4
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // rax
	float v13; // xmm1_4
	unsigned int v14; // xmm3_4
	unsigned __int64 result; // rax
	unsigned __int64 v16; // [rsp+0h] [rbp-50h]
	unsigned __int64 v17; // [rsp+8h] [rbp-48h]

	v6 = (__m128)0x80000000;
	a1[8].m128_f32[1] = a3;
	LODWORD(v17) = 0;
	a1[8].m128_f32[0] = a2;
	a1[1].m128_u64[0] = 0i64;
	LODWORD(v16) = 0;
	a1[8].m128_f32[2] = a4;
	v8 = -a5;
	v9 = -a6;
	v6.m128_f32[0] = a2;
	a1[8].m128_f32[3] = -a5;
	a1[9].m128_f32[0] = -a6;
	v10 = a3 * (float)-a6;
	*a1 = _mm_shuffle_ps(v6, v6, 0);
	*((float*)&v17 + 1) = (float)(a2 * (float)-a5) + a3;
	v11 = v17;
	*(float*)&v17 = *((float*)&v17 + 1);
	a1[1].m128_u64[1] = v11;
	*((float*)&v16 + 1) = *((float*)&v17 + 1);
	a1[2].m128_u64[0] = 0i64;
	*((float*)&v17 + 1) = (float)((float)(*((float*)&v17 + 1) * (float)-a5) + a4) + (float)(a2 * (float)-a6);
	a1[2].m128_u64[1] = v17;
	v12 = v16;
	LODWORD(v17) = HIDWORD(v17);
	*(float*)&v16 = a3;
	a1[3].m128_u64[0] = v12;
	*((float*)&v17 + 1) = (float)((float)((float)(v8 * (float)-a6) * a2) + (float)(*((float*)&v17 + 1) * v8)) + v10;
	a1[3].m128_u64[1] = v17;
	*((float*)&v16 + 1) = (float)(a3 * (float)-a5) + a4;
	a1[4].m128_u64[0] = v16;
	*(float*)&v16 = a4;
	*(float*)&v17 = (float)(*((float*)&v16 + 1) * (float)-a5) + v10;
	*((float*)&v17 + 1) = (float)((float)(*(float*)&v17 * v8) + (float)(a4 * (float)-a6)) + (float)(v10 * v8);
	a1[4].m128_u64[1] = v17;
	*((float*)&v16 + 1) = a4 * (float)-a5;
	a1[5].m128_u64[0] = v16;
	*(float*)&v16 = -a5;
	v13 = (float)(a4 * v8) * v8;
	*(float*)&v17 = v13 + (float)(a4 * (float)-a6);
	*((float*)&v17 + 1) = (float)((float)((float)(a4 * 2.0) * (float)-a6) + v13) * (float)-a5;
	a1[5].m128_u64[1] = v17;
	*((float*)&v16 + 1) = (float)(v8 * v8) - a6;
	a1[6].m128_u64[0] = v16;
	*((float*)&v16 + 1) = (float)-a5 * (float)-a6;
	*(float*)&v16 = -a6;
	*(float*)&v17 = (float)((float)((float)-a6 * 2.0) + (float)(v8 * v8)) * v8;
	*(float*)&v14 = (float)((float)((float)(v9 * 2.0) * v9) + (float)((float)(v8 * (float)-a6) * v8)) * (float)-a5;
	*((float*)&v17 + 1) = (float)((float)((float)((float)((float)-a6 * 3.0) + (float)(v8 * v8)) * v8) * v8)
		+ (float)(v9 * v9);
	a1[6].m128_u64[1] = v17;
	v6.m128_f32[0] = (float)((float)(v8 * (float)-a6) * v8) + (float)(v9 * v9);
	a1[7].m128_u64[0] = v16;
	result = __PAIR64__(v14, v6.m128_u32[0]);
	a1[7].m128_u64[1] = __PAIR64__(v14, v6.m128_u32[0]);
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

