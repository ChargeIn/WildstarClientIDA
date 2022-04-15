//----- (00000001402F13D0) ----------------------------------------------------
void** __fastcall sub_1402F13D0(__int64 a1)
{
	void** result; // rax
	__m128 v2; // xmm12
	float v3; // xmm11_4
	float v4; // xmm7_4
	float v5; // xmm9_4
	float v6; // xmm3_4
	float v7; // xmm4_4
	float v8; // xmm6_4
	float v9; // xmm8_4
	float v10; // xmm5_4
	float v11; // xmm10_4
	float v12; // xmm9_4
	float v13; // xmm7_4
	float v14; // xmm11_4
	__m128 v15; // xmm3
	__m128 v16; // xmm2
	__m128 v17; // [rsp+0h] [rbp-B8h]
	__m128 v18; // [rsp+10h] [rbp-A8h]
	__m128 v19; // [rsp+20h] [rbp-98h]
	__int128 v20; // [rsp+30h] [rbp-88h]
	void* retaddr; // [rsp+B8h] [rbp+0h] BYREF

	result = &retaddr;
	v17.m128_i32[3] = 0;
	v18.m128_i32[3] = 0;
	v19.m128_i32[3] = 0;
	v2 = *(__m128*)(a1 + 160);
	v3 = _mm_shuffle_ps(v2, v2, 85).m128_f32[0];
	v4 = _mm_shuffle_ps(v2, v2, 255).m128_f32[0];
	v5 = _mm_shuffle_ps(v2, v2, 170).m128_f32[0];
	v6 = v5 * 2.0;
	v7 = v2.m128_f32[0] * (float)(v3 * 2.0);
	v8 = v3 * (float)(v3 * 2.0);
	v9 = v4 * (float)(v3 * 2.0);
	v10 = v2.m128_f32[0] * (float)(v2.m128_f32[0] * 2.0);
	v11 = v4 * (float)(v2.m128_f32[0] * 2.0);
	v12 = v5 * (float)(v5 * 2.0);
	v13 = v4 * v6;
	v17.m128_f32[0] = (float)(1.0 - v8) - v12;
	v14 = v3 * v6;
	v17.m128_f32[1] = v7 + v13;
	v17.m128_f32[2] = (float)(v2.m128_f32[0] * v6) - v9;
	v18.m128_f32[0] = v7 - v13;
	v18.m128_f32[1] = (float)(1.0 - v10) - v12;
	v19.m128_f32[2] = (float)(1.0 - v10) - v8;
	HIDWORD(v20) = 1065353216;
	v19.m128_f32[0] = (float)(v2.m128_f32[0] * v6) + v9;
	v18.m128_f32[2] = v14 + v11;
	LODWORD(v20) = *(_DWORD*)(a1 + 224);
	v15 = _mm_mul_ps(_mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 36), (__m128) * (unsigned int*)(a1 + 36), 0), v18);
	DWORD1(v20) = *(_DWORD*)(a1 + 228);
	v19.m128_f32[1] = v14 - v11;
	v16 = _mm_mul_ps(_mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 40), (__m128) * (unsigned int*)(a1 + 40), 0), v19);
	DWORD2(v20) = *(_DWORD*)(a1 + 232);
	*(__m128*)(a1 + 288) = _mm_mul_ps(
		_mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 32), (__m128) * (unsigned int*)(a1 + 32), 0),
		v17);
	*(__m128*)(a1 + 304) = v15;
	*(__m128*)(a1 + 320) = v16;
	*(_OWORD*)(a1 + 336) = v20;
	*(_DWORD*)(a1 + 24) = 1;
	return result;
}
// 1402F13D0: returning address of temporary local variable '%" r"'

