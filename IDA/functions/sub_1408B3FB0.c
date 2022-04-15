//----- (00000001408B3FB0) ----------------------------------------------------
unsigned int* __fastcall sub_1408B3FB0(__int64 a1, __int64* a2)
{
	__m128 v2; // xmm1
	__m128 v3; // xmm4
	float* v4; // r10
	unsigned int* v5; // r14
	__m128* v6; // r13
	unsigned __int64 v7; // r12
	float v8; // xmm7_4
	__m128* v9; // r9
	unsigned int* v10; // r15
	unsigned int* v11; // r11
	float v12; // xmm6_4
	__m128 v13; // xmm9
	float v14; // xmm10_4
	unsigned int* v15; // rbx
	__m128* v16; // rdi
	unsigned int* v17; // rbp
	float v18; // xmm13_4
	float v19; // xmm14_4
	float v20; // xmm15_4
	__int64 v22; // rdx
	unsigned int* v23; // rsi
	__m128 v24; // xmm0
	__m128 v25; // xmm1
	unsigned int* v26; // rax
	float v27; // xmm2_4
	__m128 v28; // xmm0
	unsigned int* v29; // rdx
	__m128 v30; // xmm8
	__m128 v31; // xmm5
	__m128 v32; // xmm12
	unsigned int* v33; // rcx
	__m128 v34; // xmm1
	__m128 v35; // xmm2
	__m128 v36; // xmm0
	__m128 v37; // xmm3
	__m128 v38; // xmm1
	__m128 v39; // xmm2
	__m128 v40; // xmm0
	__m128 v41; // xmm1
	__m128 v42; // xmm4
	__m128 v43; // xmm0
	__m128 v44; // xmm1
	__m128 v45; // xmm0
	float v46; // xmm4_4
	__m128 v47; // xmm3
	__m128 v48; // xmm3
	__m128 v49; // xmm0
	__m128 v50; // xmm1
	__m128 v51; // xmm2
	__m128 v52; // xmm2
	__m128 v53; // xmm3
	__m128 v54; // xmm1
	__m128 v55; // xmm8
	__m128 v56; // xmm3
	float v57; // xmm2_4
	__m128 v58; // xmm1
	float v59; // xmm0_4
	__m128 v60; // xmm0
	__m128 v61; // xmm1
	unsigned int* result; // rax
	__int64 v63; // [rsp+0h] [rbp-188h]
	unsigned __int64 v64; // [rsp+8h] [rbp-180h]
	float* v65; // [rsp+10h] [rbp-178h]
	float* v66; // [rsp+18h] [rbp-170h]
	__m128 v67; // [rsp+20h] [rbp-168h]
	__m128 v68; // [rsp+30h] [rbp-158h]
	__m128 v69; // [rsp+40h] [rbp-148h]
	float v70; // [rsp+50h] [rbp-138h]
	float v71; // [rsp+60h] [rbp-128h]
	__m128 v72; // [rsp+70h] [rbp-118h]
	float v73; // [rsp+80h] [rbp-108h]
	__m128 v74; // [rsp+90h] [rbp-F8h]
	__int64 v75; // [rsp+190h] [rbp+8h]
	int v76; // [rsp+1A0h] [rbp+18h]
	unsigned int* v77; // [rsp+1A8h] [rbp+20h]

	v75 = a1;
	v2 = (__m128)0xC0000000;
	v3 = *(__m128*)(a1 + 368);
	v4 = *(float**)(a1 + 48);
	v5 = *(unsigned int**)(a1 + 272);
	v6 = *(__m128**)(a1 + 280);
	v7 = *(_QWORD*)(a1 + 336);
	LODWORD(v70) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	LODWORD(v8) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	v9 = *(__m128**)(a1 + 312);
	v10 = *(unsigned int**)(a1 + 152);
	v11 = *(unsigned int**)(a1 + 160);
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v13 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v14) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v15 = *(unsigned int**)(a1 + 168);
	v16 = *(__m128**)(a1 + 176);
	v17 = *(unsigned int**)(a1 + 200);
	LODWORD(v18) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v19) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	v72 = v3;
	LODWORD(v20) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v22 = *(_QWORD*)(a1 + 16);
	v77 = *(unsigned int**)(a1 + 184);
	v23 = *(unsigned int**)(a1 + 192);
	v63 = *a2;
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v22 + 24);
	v24 = v2;
	v25 = (__m128) * (unsigned int*)(v22 + 16);
	v68 = _mm_shuffle_ps(v24, v24, 0);
	v66 = *(float**)(a1 + 40);
	v64 = *(_QWORD*)(a1 + 344);
	v26 = *(unsigned int**)(a1 + 144);
	v27 = 1.0 / (float)*((unsigned __int16*)a2 + 8);
	v25.m128_f32[0] = (float)(v25.m128_f32[0] - *(float*)(a1 + 572)) * v27;
	LODWORD(v73) = _mm_shuffle_ps(v25, v25, 0).m128_u32[0];
	v28 = (__m128) * (unsigned int*)(v22 + 20);
	v65 = *(float**)(a1 + 56);
	v29 = *(unsigned int**)(a1 + 304);
	v28.m128_f32[0] = (float)(v28.m128_f32[0] - *(float*)(a1 + 576)) * v27;
	LODWORD(v71) = _mm_shuffle_ps(v28, v28, 0).m128_u32[0];
	v69 = *(__m128*)(a1 + 384);
	v30 = *(__m128*)(a1 + 432);
	v76 = *((unsigned __int16*)a2 + 9);
	v31 = *(__m128*)(a1 + 496);
	v32 = *(__m128*)(a1 + 512);
	v74 = v30;
	v67 = *(__m128*)(a1 + 448);
	if (*((_WORD*)a2 + 9))
	{
		v33 = *(unsigned int**)(a1 + 184);
		do
		{
			v34 = (__m128) * v26;
			v35 = (__m128) * v10;
			v36 = (__m128) * v11;
			v26 += 4;
			if ((unsigned __int64)v26 >= v7)
				v26 = v5;
			v10 += 4;
			v37 = (__m128) * v15;
			if ((unsigned __int64)v10 >= v7)
				v10 = v5 + 1;
			v11 += 4;
			if ((unsigned __int64)v11 >= v7)
				v11 = v5 + 2;
			v15 += 4;
			if ((unsigned __int64)v15 >= v7)
				v15 = v5 + 3;
			v38 = _mm_unpacklo_ps(v34, v35);
			v39 = (__m128)v16->m128_u32[0];
			v40 = _mm_unpacklo_ps(v36, v37);
			if ((unsigned __int64)++v16 >= v64)
				v16 = v6;
			v41 = _mm_mul_ps(_mm_movelh_ps(v38, v40), v3);
			v42 = (__m128) * v17;
			v77 = v33 + 4;
			v31 = _mm_add_ps(v41, _mm_mul_ps(v31, v30));
			v43 = (__m128) * v23;
			v44 = _mm_mul_ps(v31, (__m128)xmmword_1409AA0F0);
			if ((unsigned __int64)(v33 + 4) >= v64)
				v77 = &v6->m128_u32[1];
			v23 += 4;
			if ((unsigned __int64)v23 >= v64)
				v23 = &v6->m128_u32[2];
			v17 += 4;
			if ((unsigned __int64)v17 >= v64)
				v17 = &v6->m128_u32[3];
			v18 = v18 + v73;
			v19 = v19 + v71;
			v63 += 4i64;
			v45 = _mm_unpacklo_ps(v43, v42);
			v46 = *(float*)(v63 - 4);
			v32 = _mm_add_ps(_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v39, (__m128) * v33), v45), v69), _mm_mul_ps(v32, v67));
			v47 = _mm_add_ps(_mm_mul_ps(v32, (__m128)xmmword_1409AA0F0), v44);
			v48 = _mm_add_ps(v47, _mm_movehl_ps(v47, v47));
			v49 = _mm_add_ps(v32, v31);
			v50 = _mm_add_ps(_mm_movehl_ps(v49, v49), v49);
			v51 = _mm_add_ps(_mm_shuffle_ps(v50, v50, 85), v50);
			v52 = _mm_mul_ps(_mm_shuffle_ps(v51, v51, 0), v68);
			v50.m128_f32[0] = (float)(_mm_shuffle_ps(v48, v48, 85).m128_f32[0] + v48.m128_f32[0]) * v19;
			v53 = _mm_add_ps(v52, v31);
			*(float*)(v63 - 4) = (float)(v46 * v18) + v50.m128_f32[0];
			v54 = _mm_add_ps(v32, v52);
			v55 = _mm_shuffle_ps(v54, _mm_shuffle_ps(v54, v53, 15), 201);
			v56 = _mm_shuffle_ps(v53, _mm_shuffle_ps(v53, v54, 15), 201);
			v12 = (float)((float)(v70 * v12) + v46) - v20;
			v20 = v46;
			if (v66)
			{
				v57 = *v4;
				*v4++ = v12;
				if (v4 == v65)
					v4 = v66;
			}
			else
			{
				v57 = v12;
			}
			v3 = v72;
			v33 = v77;
			v29 += 4;
			v58 = v13;
			v59 = v14 * v8;
			v8 = v57;
			v58.m128_f32[0] = (float)(v13.m128_f32[0] * v57) + v59;
			v60 = _mm_shuffle_ps(v58, v58, 0);
			v61 = _mm_add_ps(v60, v55);
			v30 = v74;
			*((__m128*)v29 - 1) = _mm_add_ps(v60, v56);
			if ((unsigned __int64)v29 >= v7)
				v29 = v5;
			*v9++ = v61;
			if ((unsigned __int64)v9 >= v64)
				v9 = v6;
			--v76;
		} while (v76);
		a1 = v75;
	}
	*(float*)(a1 + 76) = v8;
	*(float*)(a1 + 560) = v20;
	*(float*)(a1 + 564) = v12;
	*(_QWORD*)(a1 + 48) = v4;
	*(_QWORD*)(a1 + 144) = v26;
	result = v77;
	*(__m128*)(a1 + 512) = v32;
	*(__m128*)(a1 + 496) = v31;
	*(_QWORD*)(a1 + 160) = v11;
	*(_QWORD*)(a1 + 304) = v29;
	*(_QWORD*)(a1 + 184) = v77;
	*(_QWORD*)(a1 + 312) = v9;
	*(_QWORD*)(a1 + 152) = v10;
	*(_QWORD*)(a1 + 168) = v15;
	*(_QWORD*)(a1 + 176) = v16;
	*(_QWORD*)(a1 + 192) = v23;
	*(_QWORD*)(a1 + 200) = v17;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;

