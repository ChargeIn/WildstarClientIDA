//----- (00000001408B71F0) ----------------------------------------------------
float* __fastcall sub_1408B71F0(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // rdi
	__m128* v4; // r10
	__int64 v5; // r8
	__int64 v6; // rdx
	__m128 v7; // xmm5
	__m128 v8; // xmm7
	__m128 v9; // xmm6
	int v10; // r13d
	unsigned int* v11; // r15
	float v12; // xmm4_4
	unsigned __int64 v13; // r12
	unsigned int* v14; // r11
	unsigned int* v15; // rbx
	float v16; // xmm13_4
	float v17; // xmm12_4
	__m128 v18; // xmm14
	float v19; // xmm15_4
	unsigned int* v20; // r14
	unsigned int* v21; // rsi
	unsigned int* v22; // rbp
	__m128 v23; // xmm0
	__m128 v24; // xmm1
	float* result; // rax
	float v26; // xmm2_4
	__m128 v27; // xmm0
	float* v28; // r10
	__m128 v29; // xmm1
	__m128 v30; // xmm2
	__m128 v31; // xmm0
	__m128 v32; // xmm3
	float v33; // xmm11_4
	__int64 v34; // rcx
	float v35; // xmm9_4
	__int64 v36; // rdx
	__int64 v37; // r8
	float v38; // xmm10_4
	float v39; // xmm8_4
	__int64 v40; // r9
	__m128 v41; // xmm6
	float v42; // xmm7_4
	__m128 v43; // xmm2
	__m128 v44; // xmm3
	__m128 v45; // xmm4
	__m128 v46; // xmm1
	__m128 v47; // xmm2
	__m128 v48; // xmm5
	__m128 v49; // xmm6
	__m128 v50; // xmm3
	__m128 v51; // xmm4
	__m128 v52; // xmm5
	__m128 v53; // xmm6
	__m128 v54; // xmm0
	__m128 v55; // xmm1
	__m128 v56; // xmm0
	__m128 v57; // xmm0
	__m128 v58; // xmm3
	__m128 v59; // xmm3
	float v60; // xmm2_4
	__m128 v61; // xmm1
	float v62; // xmm0_4
	__m128 v63; // [rsp+0h] [rbp-1A8h]
	__m128 v64; // [rsp+10h] [rbp-198h]
	__m128 v65; // [rsp+20h] [rbp-188h]
	float* v66; // [rsp+30h] [rbp-178h]
	float v67; // [rsp+40h] [rbp-168h]
	float v68; // [rsp+50h] [rbp-158h]
	__m128 v69; // [rsp+60h] [rbp-148h]
	float v70; // [rsp+70h] [rbp-138h]
	__m128 v71; // [rsp+80h] [rbp-128h]
	__m128 v72; // [rsp+90h] [rbp-118h]
	float v73; // [rsp+A0h] [rbp-108h]
	__m128 v74; // [rsp+B0h] [rbp-F8h]
	bool v77; // [rsp+1C0h] [rbp+18h]
	float* v78; // [rsp+1C8h] [rbp+20h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = (__m128*)a1;
	v5 = a2;
	v6 = *(_QWORD*)(a1 + 16);
	v7 = *(__m128*)(a1 + 368);
	v8 = *(__m128*)(a1 + 432);
	v9 = *(__m128*)(a1 + 496);
	v10 = *(unsigned __int16*)(v5 + 18);
	v11 = *(unsigned int**)(a1 + 272);
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	LODWORD(v70) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v13 = *(_QWORD*)(a1 + 336);
	v14 = *(unsigned int**)(a1 + 304);
	v15 = *(unsigned int**)(a1 + 144);
	LODWORD(v16) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v17) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v65 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v18 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v19) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v20 = *(unsigned int**)(a1 + 152);
	v21 = *(unsigned int**)(a1 + 160);
	v22 = *(unsigned int**)(a1 + 168);
	v67 = v12;
	v72 = v7;
	v74 = v8;
	v78 = *(float**)v5;
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v6 + 24);
	v23 = v2;
	v24 = (__m128) * (unsigned int*)(v6 + 16);
	v69 = _mm_shuffle_ps(v23, v23, 0);
	v64 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	result = *(float**)(a1 + 40);
	v77 = result != 0i64;
	v26 = 1.0 / (float)*(unsigned __int16*)(v5 + 16);
	v24.m128_f32[0] = (float)(v24.m128_f32[0] - *(float*)(a1 + 572)) * v26;
	LODWORD(v68) = _mm_shuffle_ps(v24, v24, 0).m128_u32[0];
	v27 = (__m128) * (unsigned int*)(v6 + 20);
	v66 = *(float**)(a1 + 56);
	v27.m128_f32[0] = (float)(v27.m128_f32[0] - *(float*)(a1 + 576)) * v26;
	LODWORD(v73) = _mm_shuffle_ps(v27, v27, 0).m128_u32[0];
	if (*(_WORD*)(v5 + 18))
	{
		v28 = *(float**)(a1 + 40);
		result = *(float**)v5;
		do
		{
			v29 = (__m128) * v15;
			v30 = (__m128) * v20;
			v31 = (__m128) * v21;
			v15 += 4;
			if ((unsigned __int64)v15 >= v13)
				v15 = v11;
			v20 += 4;
			v32 = (__m128) * v22;
			if ((unsigned __int64)v20 >= v13)
				v20 = v11 + 1;
			v21 += 4;
			if ((unsigned __int64)v21 >= v13)
				v21 = v11 + 2;
			v22 += 4;
			if ((unsigned __int64)v22 >= v13)
				v22 = v11 + 3;
			v33 = *result;
			v34 = *(unsigned __int16*)(v5 + 16);
			v35 = result[v34];
			v36 = 2 * (int)v34;
			v37 = 3 * (int)v34;
			v38 = v78[v36];
			v39 = v78[v37];
			v40 = 4 * (int)v34;
			v41 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v29, v30), _mm_unpacklo_ps(v31, v32)), v7),
				_mm_mul_ps(v9, v8));
			v42 = v78[v40];
			v43 = _mm_mul_ps(v41, (__m128)xmmword_1409AA0F0);
			v44 = _mm_mul_ps(v41, (__m128)xmmword_1409AA100);
			v45 = _mm_mul_ps(v41, (__m128)xmmword_1409AA110);
			v63 = v41;
			v46 = v41;
			v47 = _mm_add_ps(v43, _mm_movehl_ps(v43, v43));
			v48 = _mm_mul_ps(v41, (__m128)xmmword_1409AA120);
			v49 = _mm_mul_ps(v41, (__m128)xmmword_1409AA140);
			v50 = _mm_add_ps(v44, _mm_movehl_ps(v44, v44));
			v51 = _mm_add_ps(v45, _mm_movehl_ps(v45, v45));
			v52 = _mm_add_ps(v48, _mm_movehl_ps(v48, v48));
			v53 = _mm_add_ps(v49, _mm_movehl_ps(v49, v49));
			v54 = _mm_add_ps(_mm_movehl_ps(v46, v46), v46);
			v55 = _mm_add_ps(_mm_shuffle_ps(v54, v54, 85), v54);
			v56 = v64;
			v56.m128_f32[0] = v64.m128_f32[0] + v68;
			v71 = v55;
			v64 = v56;
			v57 = v65;
			v57.m128_f32[0] = v65.m128_f32[0] + v73;
			v65 = v57;
			*v78 = (float)(*result * v64.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v47, v47, 85).m128_f32[0] + v47.m128_f32[0]) * v57.m128_f32[0]);
			v78[v34] = (float)(v35 * v64.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v50, v50, 85).m128_f32[0] + v50.m128_f32[0]) * v57.m128_f32[0]);
			result = v78 + 1;
			v78 = result;
			result[v36 - 1] = (float)(v38 * v64.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v51, v51, 85).m128_f32[0] + v51.m128_f32[0]) * v57.m128_f32[0]);
			v12 = (float)(v38 + v39) + (float)((float)(v33 + v35) + v42);
			result[v37 - 1] = (float)(v39 * v64.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v52, v52, 85).m128_f32[0] + v52.m128_f32[0]) * v57.m128_f32[0]);
			v55.m128_f32[0] = _mm_shuffle_ps(v53, v53, 85).m128_f32[0] + v53.m128_f32[0];
			v9 = v63;
			result[v40 - 1] = (float)(v42 * v64.m128_f32[0]) + (float)(v55.m128_f32[0] * v57.m128_f32[0]);
			v58 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v71, v71, 0), v69), v63);
			v59 = _mm_shuffle_ps(v58, _mm_shuffle_ps(v58, v58, 15), 201);
			v17 = (float)((float)(v70 * v17) + v12) - v67;
			v67 = v12;
			if (v77)
			{
				v60 = *v3;
				*v3++ = v17;
				if (v3 == v66)
					v3 = v28;
			}
			else
			{
				v60 = v17;
			}
			v7 = v72;
			v8 = v74;
			v5 = a2;
			v14 += 4;
			v61 = v18;
			v62 = v19 * v16;
			v16 = v60;
			v61.m128_f32[0] = (float)(v18.m128_f32[0] * v60) + v62;
			*((__m128*)v14 - 1) = _mm_add_ps(_mm_shuffle_ps(v61, v61, 0), v59);
			if ((unsigned __int64)v14 >= v13)
				v14 = v11;
			--v10;
		} while (v10);
		v4 = (__m128*)a1;
	}
	v4[4].m128_f32[3] = v16;
	v4[35].m128_f32[0] = v12;
	v4[35].m128_f32[1] = v17;
	v4[3].m128_u64[0] = (unsigned __int64)v3;
	v4[19].m128_u64[0] = (unsigned __int64)v14;
	v4[31] = v9;
	v4[9].m128_u64[0] = (unsigned __int64)v15;
	v4[9].m128_u64[1] = (unsigned __int64)v20;
	v4[10].m128_u64[0] = (unsigned __int64)v21;
	v4[10].m128_u64[1] = (unsigned __int64)v22;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;
// 1409AA110: using guessed type __int128 xmmword_1409AA110;
// 1409AA120: using guessed type __int128 xmmword_1409AA120;
// 1409AA140: using guessed type __int128 xmmword_1409AA140;

