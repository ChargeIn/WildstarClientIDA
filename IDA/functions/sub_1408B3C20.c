//----- (00000001408B3C20) ----------------------------------------------------
unsigned int* __fastcall sub_1408B3C20(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm14
	float* v3; // rbp
	float* v4; // r14
	unsigned int* v5; // rbx
	unsigned __int64 v6; // rdi
	__int64 v8; // rdx
	__m128 v10; // xmm7
	float v11; // xmm8_4
	float v12; // xmm6_4
	float* v13; // r15
	unsigned int* v14; // rsi
	__m128 v15; // xmm5
	__m128 v16; // xmm9
	float v17; // xmm10_4
	float v18; // xmm11_4
	float v19; // xmm4_4
	unsigned int v20; // eax
	int v21; // r8d
	unsigned int* v22; // r10
	float v23; // xmm12_4
	unsigned int* v24; // r11
	__m128i v25; // xmm0
	unsigned int* result; // rax
	float v27; // xmm13_4
	float v28; // xmm1_4
	float v29; // xmm2_4
	__m128 v30; // xmm0
	float* v31; // rdx
	float v32; // xmm1_4
	__m128 v33; // xmm14
	unsigned int* v34; // rcx
	float v35; // xmm15_4
	__m128 v36; // xmm1
	__m128 v37; // xmm2
	__m128 v38; // xmm0
	__m128 v39; // xmm3
	__m128 v40; // xmm0
	float v41; // xmm3_4
	__m128 v42; // xmm2
	__m128 v43; // xmm2
	__m128 v44; // xmm0
	__m128 v45; // xmm5
	__m128 v46; // xmm5
	__m128 v47; // xmm5
	float v48; // xmm2_4
	__m128 v49; // xmm1
	float v50; // xmm0_4
	__m128 v51; // xmm1
	__m128 i; // [rsp+0h] [rbp-E8h]
	float v53; // [rsp+10h] [rbp-D8h]
	__m128 v54; // [rsp+20h] [rbp-C8h]

	v3 = *(float**)(a1 + 40);
	v4 = *(float**)(a1 + 56);
	v5 = *(unsigned int**)(a1 + 272);
	v6 = *(_QWORD*)(a1 + 336);
	v8 = *(_QWORD*)(a1 + 16);
	v10 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	v13 = *(float**)a2;
	v14 = *(unsigned int**)(a1 + 152);
	v15 = *(__m128*)(a1 + 368);
	v16 = *(__m128*)(a1 + 496);
	LODWORD(v17) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v18) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	LODWORD(v19) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v20 = *(unsigned __int16*)(a2 + 16);
	v21 = *(unsigned __int16*)(a2 + 18);
	v22 = *(unsigned int**)(a1 + 160);
	LODWORD(v23) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v54 = v15;
	v24 = *(unsigned int**)(a1 + 168);
	v25 = _mm_cvtsi32_si128(v20);
	result = *(unsigned int**)(a1 + 304);
	LODWORD(v27) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v8 + 24);
	v28 = *(float*)(v8 + 16);
	v29 = 1.0 / _mm_cvtepi32_ps(v25).m128_f32[0];
	v30 = (__m128) * (unsigned int*)(v8 + 20);
	v31 = *(float**)(a1 + 48);
	v30.m128_f32[0] = v30.m128_f32[0] - *(float*)(a1 + 576);
	v32 = (float)(v28 - *(float*)(a1 + 572)) * v29;
	v33 = _mm_shuffle_ps(v2, v2, 0);
	v34 = *(unsigned int**)(a1 + 144);
	v35 = v32;
	v30.m128_f32[0] = v30.m128_f32[0] * v29;
	LODWORD(v53) = _mm_shuffle_ps(v30, v30, 0).m128_u32[0];
	for (i = *(__m128*)(a1 + 432); v21; --v21)
	{
		v36 = (__m128) * v34;
		v37 = (__m128) * v14;
		v38 = (__m128) * v22;
		v34 += 4;
		if ((unsigned __int64)v34 >= v6)
			v34 = v5;
		v14 += 4;
		v39 = (__m128) * v24;
		if ((unsigned __int64)v14 >= v6)
			v14 = v5 + 1;
		v22 += 4;
		if ((unsigned __int64)v22 >= v6)
			v22 = v5 + 2;
		v24 += 4;
		if ((unsigned __int64)v24 >= v6)
			v24 = v5 + 3;
		v18 = v18 + v53;
		v40 = _mm_unpacklo_ps(v38, v39);
		v41 = *v13;
		v17 = v17 + v35;
		++v13;
		v16 = _mm_add_ps(_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v36, v37), v40), v15), _mm_mul_ps(v16, i));
		v42 = _mm_mul_ps(v16, (__m128)xmmword_1409AA0F0);
		v43 = _mm_add_ps(v42, _mm_movehl_ps(v42, v42));
		v44 = _mm_add_ps(_mm_movehl_ps(v16, v16), v16);
		v45 = _mm_add_ps(_mm_shuffle_ps(v44, v44, 85), v44);
		*(v13 - 1) = (float)(v41 * v17) + (float)((float)(_mm_shuffle_ps(v43, v43, 85).m128_f32[0] + v43.m128_f32[0]) * v18);
		v46 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v33), v16);
		v47 = _mm_shuffle_ps(v46, _mm_shuffle_ps(v46, v46, 15), 201);
		v19 = (float)((float)(v27 * v19) + v41) - v23;
		v23 = v41;
		if (v3)
		{
			v48 = *v31;
			*v31++ = v19;
			if (v31 == v4)
				v31 = v3;
		}
		else
		{
			v48 = v19;
		}
		result += 4;
		v49 = v10;
		v50 = v11 * v12;
		v12 = v48;
		v49.m128_f32[0] = (float)(v10.m128_f32[0] * v48) + v50;
		v51 = _mm_add_ps(_mm_shuffle_ps(v49, v49, 0), v47);
		v15 = v54;
		*((__m128*)result - 1) = v51;
		if ((unsigned __int64)result >= v6)
			result = v5;
	}
	*(float*)(a1 + 76) = v12;
	*(float*)(a1 + 560) = v23;
	*(float*)(a1 + 564) = v19;
	*(_QWORD*)(a1 + 48) = v31;
	*(_QWORD*)(a1 + 168) = v24;
	*(_QWORD*)(a1 + 152) = v14;
	*(_QWORD*)(a1 + 304) = result;
	*(_QWORD*)(a1 + 144) = v34;
	*(_QWORD*)(a1 + 160) = v22;
	*(__m128*)(a1 + 496) = v16;
	return result;
}
// 1408B3D8B: variable 'v2' is possibly undefined
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;

