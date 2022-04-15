//----- (000000014087AB50) ----------------------------------------------------
__int64 __fastcall sub_14087AB50(__int64 a1, __m128* a2, float a3)
{
	__m128 v4; // xmm3
	float v5; // xmm1_4
	float v6; // xmm0_4
	float v7; // xmm4_4
	float v8; // xmm5_4
	__m128 v9; // xmm2
	float v10; // xmm1_4
	float v11; // xmm0_4
	float v12; // xmm1_4
	__m128 v13; // xmm3
	__m128 v14; // xmm2
	float v15; // xmm0_4
	float v16; // xmm0_4
	__int64 result; // rax

	if (dword_140C61C54)
	{
		*(_DWORD*)a1 = a2[2].m128_i32[0];
		*(float*)(a1 + 4) = (float)(a2->m128_f32[0] - a2[2].m128_f32[0]) * a3;
		*(_DWORD*)(a1 + 8) = a2[2].m128_i32[1];
		v16 = a2->m128_f32[1] - a2[2].m128_f32[1];
	}
	else
	{
		v4 = a2[2];
		v5 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
		v6 = _mm_shuffle_ps(v4, v4, 255).m128_f32[0];
		v7 = fsqrt((float)((float)((float)(v5 * v5) + (float)(v6 * v6)) * 0.5) + (float)(v4.m128_f32[0] * v4.m128_f32[0]));
		*(float*)a1 = v7;
		v8 = fsqrt(
			(float)((float)((float)(a2[2].m128_f32[2] * a2[2].m128_f32[2])
				+ (float)(COERCE_FLOAT(a2[3].m128_u64[0]) * COERCE_FLOAT(a2[3].m128_u64[0])))
				* 0.5)
			+ (float)(a2[2].m128_f32[1] * a2[2].m128_f32[1]));
		*(float*)(a1 + 8) = v8;
		v9 = *a2;
		v10 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
		v11 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
		v12 = fsqrt((float)((float)((float)(v10 * v10) + (float)(v11 * v11)) * 0.5) + (float)(v9.m128_f32[0] * v9.m128_f32[0]))
			- v7;
		*(float*)(a1 + 4) = v12;
		v13 = *a2;
		v14 = (__m128)(unsigned int)a2[1].m128_u64[0];
		*(float*)(a1 + 4) = v12 * a3;
		v15 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
		v13.m128_f32[0] = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
		v14.m128_f32[0] = (float)((float)((float)(v14.m128_f32[0] * v14.m128_f32[0]) + (float)(v15 * v15)) * 0.5)
			+ (float)(v13.m128_f32[0] * v13.m128_f32[0]);
		v16 = _mm_sqrt_ps(v14).m128_f32[0] - v8;
	}
	result = a1;
	*(float*)(a1 + 12) = v16 * a3;
	return result;
}
// 140C61C54: using guessed type int dword_140C61C54;

