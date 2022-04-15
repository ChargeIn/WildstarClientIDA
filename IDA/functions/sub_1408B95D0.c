//----- (00000001408B95D0) ----------------------------------------------------
float* __fastcall sub_1408B95D0(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	float* v3; // rsi
	__m128* v4; // r11
	__int64 v5; // r8
	__int64 v6; // rdx
	__m128 v7; // xmm5
	__m128 v8; // xmm7
	__m128 v9; // xmm6
	unsigned int* v10; // r13
	unsigned __int64 v11; // r12
	float v12; // xmm4_4
	unsigned int* v13; // rbx
	unsigned int* v14; // rdi
	float v15; // xmm15_4
	float v16; // xmm14_4
	unsigned int* v17; // r15
	unsigned int* v18; // rbp
	unsigned int* v19; // r14
	__m128 v20; // xmm0
	__m128 v21; // xmm1
	float* result; // rax
	float v23; // xmm2_4
	__m128 v24; // xmm0
	float* v25; // r11
	__m128 v26; // xmm1
	__m128 v27; // xmm2
	__m128 v28; // xmm0
	__m128 v29; // xmm3
	float v30; // xmm13_4
	__int64 v31; // rcx
	float v32; // xmm11_4
	__int64 v33; // rdx
	__int64 v34; // r8
	float v35; // xmm12_4
	__int64 v36; // r9
	float v37; // xmm9_4
	__m128 v38; // xmm6
	float v39; // xmm10_4
	__int64 v40; // r10
	__m128 v41; // xmm7
	__m128 v42; // xmm3
	__m128 v43; // xmm4
	float v44; // xmm8_4
	__m128 v45; // xmm1
	__m128 v46; // xmm3
	__m128 v47; // xmm5
	__m128 v48; // xmm6
	__m128 v49; // xmm2
	__m128 v50; // xmm4
	__m128 v51; // xmm5
	__m128 v52; // xmm6
	__m128 v53; // xmm0
	__m128 v54; // xmm1
	__m128 v55; // xmm0
	__m128 v56; // xmm0
	__m128 v57; // xmm3
	__m128 v58; // xmm3
	float v59; // xmm2_4
	__m128 v60; // xmm1
	float* v61; // [rsp+0h] [rbp-1D8h]
	__m128 v62; // [rsp+10h] [rbp-1C8h]
	float* v63; // [rsp+20h] [rbp-1B8h]
	__m128 v64; // [rsp+30h] [rbp-1A8h]
	__m128 v65; // [rsp+40h] [rbp-198h]
	float v66; // [rsp+50h] [rbp-188h]
	float v67; // [rsp+60h] [rbp-178h]
	float v68; // [rsp+70h] [rbp-168h]
	__m128 v69; // [rsp+80h] [rbp-158h]
	__m128 v70; // [rsp+90h] [rbp-148h]
	float v71; // [rsp+A0h] [rbp-138h]
	float v72; // [rsp+B0h] [rbp-128h]
	__m128 v73; // [rsp+C0h] [rbp-118h]
	__m128 v74; // [rsp+D0h] [rbp-108h]
	__m128 v75; // [rsp+E0h] [rbp-F8h]
	bool v78; // [rsp+1F0h] [rbp+18h]
	int v79; // [rsp+1F8h] [rbp+20h]

	v2 = (__m128)0xC0000000;
	v3 = *(float**)(a1 + 48);
	v4 = (__m128*)a1;
	v5 = a2;
	v6 = *(_QWORD*)(a1 + 16);
	v7 = *(__m128*)(a1 + 368);
	v8 = *(__m128*)(a1 + 432);
	v9 = *(__m128*)(a1 + 496);
	v10 = *(unsigned int**)(a1 + 272);
	v11 = *(_QWORD*)(a1 + 336);
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v69 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	v13 = *(unsigned int**)(a1 + 304);
	v14 = *(unsigned int**)(a1 + 144);
	LODWORD(v15) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v16) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	LODWORD(v71) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v64 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0);
	v17 = *(unsigned int**)(a1 + 152);
	v18 = *(unsigned int**)(a1 + 160);
	v66 = v12;
	v73 = v7;
	v75 = v8;
	v19 = *(unsigned int**)(a1 + 168);
	v61 = *(float**)v5;
	LODWORD(v68) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v6 + 24);
	v20 = v2;
	v21 = (__m128) * (unsigned int*)(v6 + 16);
	v74 = _mm_shuffle_ps(v20, v20, 0);
	v65 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0);
	result = (float*)*(unsigned __int16*)(v5 + 18);
	v78 = *(_QWORD*)(a1 + 40) != 0i64;
	v79 = *(unsigned __int16*)(v5 + 18);
	v23 = 1.0 / (float)*(unsigned __int16*)(v5 + 16);
	v21.m128_f32[0] = (float)(v21.m128_f32[0] - *(float*)(a1 + 572)) * v23;
	LODWORD(v72) = _mm_shuffle_ps(v21, v21, 0).m128_u32[0];
	v24 = (__m128) * (unsigned int*)(v6 + 20);
	v63 = *(float**)(a1 + 56);
	v24.m128_f32[0] = (float)(v24.m128_f32[0] - *(float*)(a1 + 576)) * v23;
	LODWORD(v67) = _mm_shuffle_ps(v24, v24, 0).m128_u32[0];
	if (*(_WORD*)(v5 + 18))
	{
		v25 = *(float**)(a1 + 40);
		result = *(float**)v5;
		do
		{
			v26 = (__m128) * v14;
			v27 = (__m128) * v17;
			v28 = (__m128) * v18;
			v14 += 4;
			if ((unsigned __int64)v14 >= v11)
				v14 = v10;
			v17 += 4;
			v29 = (__m128) * v19;
			if ((unsigned __int64)v17 >= v11)
				v17 = v10 + 1;
			v18 += 4;
			if ((unsigned __int64)v18 >= v11)
				v18 = v10 + 2;
			v19 += 4;
			if ((unsigned __int64)v19 >= v11)
				v19 = v10 + 3;
			v30 = *result;
			v31 = *(unsigned __int16*)(v5 + 16);
			v32 = result[v31];
			v33 = 2 * (int)v31;
			v34 = 5 * (int)v31;
			v35 = v61[v33];
			v36 = 3 * (int)v31;
			v37 = v61[v34];
			v38 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v26, v27), _mm_unpacklo_ps(v28, v29)), v7),
				_mm_mul_ps(v9, v8));
			v39 = v61[v36];
			v40 = 4 * (int)v31;
			v41 = _mm_mul_ps(v38, (__m128)xmmword_1409AA100);
			v42 = _mm_mul_ps(v38, (__m128)xmmword_1409AA0F0);
			v43 = _mm_mul_ps(v38, (__m128)xmmword_1409AA110);
			v62 = v38;
			v44 = v61[v40];
			v45 = v38;
			v46 = _mm_add_ps(v42, _mm_movehl_ps(v42, v42));
			v47 = _mm_mul_ps(v38, (__m128)xmmword_1409AA120);
			v48 = _mm_mul_ps(v38, (__m128)xmmword_1409AA140);
			v49 = _mm_add_ps(v41, _mm_movehl_ps(v41, v41));
			v50 = _mm_add_ps(v43, _mm_movehl_ps(v43, v43));
			v51 = _mm_add_ps(v47, _mm_movehl_ps(v47, v47));
			v52 = _mm_add_ps(v48, _mm_movehl_ps(v48, v48));
			v53 = _mm_add_ps(_mm_movehl_ps(v45, v45), v45);
			v54 = _mm_add_ps(_mm_shuffle_ps(v53, v53, 85), v53);
			v55 = v65;
			v55.m128_f32[0] = v65.m128_f32[0] + v72;
			v70 = v54;
			v65 = v55;
			v56 = v64;
			v56.m128_f32[0] = v64.m128_f32[0] + v67;
			v64 = v56;
			*v61 = (float)(*result * v65.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v46, v46, 85).m128_f32[0] + v46.m128_f32[0]) * v56.m128_f32[0]);
			result = v61 + 1;
			v61 = result;
			result[v31 - 1] = (float)(v32 * v65.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v49, v49, 85).m128_f32[0] + v49.m128_f32[0]) * v56.m128_f32[0]);
			result[v33 - 1] = (float)(v35 * v65.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v50, v50, 85).m128_f32[0] + v50.m128_f32[0]) * v56.m128_f32[0]);
			v12 = (float)((float)(v35 + v37) + v44) + (float)((float)(v30 + v32) + v39);
			result[v34 - 1] = (float)(v37 * v65.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v49, v49, 85).m128_f32[0] + v49.m128_f32[0]) * v56.m128_f32[0]);
			result[v36 - 1] = (float)(v39 * v65.m128_f32[0])
				+ (float)((float)(_mm_shuffle_ps(v51, v51, 85).m128_f32[0] + v51.m128_f32[0]) * v56.m128_f32[0]);
			v54.m128_f32[0] = _mm_shuffle_ps(v52, v52, 85).m128_f32[0] + v52.m128_f32[0];
			v9 = v62;
			result[v40 - 1] = (float)(v44 * v65.m128_f32[0]) + (float)(v54.m128_f32[0] * v56.m128_f32[0]);
			v57 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v70, v70, 0), v74), v62);
			v58 = _mm_shuffle_ps(v57, _mm_shuffle_ps(v57, v57, 15), 201);
			v16 = (float)((float)(v68 * v16) + v12) - v66;
			v66 = v12;
			if (v78)
			{
				v59 = *v3;
				*v3++ = v16;
				if (v3 == v63)
					v3 = v25;
			}
			else
			{
				v59 = v16;
			}
			v60 = v69;
			v7 = v73;
			v5 = a2;
			v13 += 4;
			v60.m128_f32[0] = (float)(v69.m128_f32[0] * v59) + (float)(v71 * v15);
			v8 = v75;
			v15 = v59;
			*((__m128*)v13 - 1) = _mm_add_ps(_mm_shuffle_ps(v60, v60, 0), v58);
			if ((unsigned __int64)v13 >= v11)
				v13 = v10;
			--v79;
		} while (v79);
		v4 = (__m128*)a1;
	}
	v4[4].m128_f32[3] = v15;
	v4[35].m128_f32[0] = v12;
	v4[35].m128_f32[1] = v16;
	v4[3].m128_u64[0] = (unsigned __int64)v3;
	v4[31] = v9;
	v4[19].m128_u64[0] = (unsigned __int64)v13;
	v4[9].m128_u64[0] = (unsigned __int64)v14;
	v4[9].m128_u64[1] = (unsigned __int64)v17;
	v4[10].m128_u64[0] = (unsigned __int64)v18;
	v4[10].m128_u64[1] = (unsigned __int64)v19;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;
// 1409AA110: using guessed type __int128 xmmword_1409AA110;
// 1409AA120: using guessed type __int128 xmmword_1409AA120;
// 1409AA140: using guessed type __int128 xmmword_1409AA140;

