//----- (00000001408B5A20) ----------------------------------------------------
unsigned int* __fastcall sub_1408B5A20(__int64 a1, __int64 a2)
{
	__m128 v2; // xmm1
	__m128 v3; // xmm4
	float* v4; // r10
	unsigned int* v5; // r14
	__m128* v6; // r13
	unsigned __int64 v7; // r12
	float v8; // xmm5_4
	__m128* v9; // r9
	unsigned int* v10; // r15
	unsigned int* v11; // rbx
	float v12; // xmm8_4
	__m128 v13; // xmm10
	float v14; // xmm9_4
	unsigned int* v15; // rdi
	__m128* v16; // r11
	unsigned int* v17; // rbp
	float v18; // xmm11_4
	float v19; // xmm14_4
	float v20; // xmm15_4
	__int64 v22; // rdx
	unsigned int* v23; // rsi
	int v24; // eax
	unsigned int* v25; // r8
	__m128 v26; // xmm0
	__m128 v27; // xmm1
	float v28; // xmm2_4
	__m128 v29; // xmm0
	unsigned int* v30; // rdx
	__m128 v31; // xmm6
	__m128 v32; // xmm7
	unsigned __int64 v33; // rax
	__m128 v34; // xmm0
	unsigned int* v35; // rcx
	__m128 v36; // xmm1
	__m128 v37; // xmm2
	__m128 v38; // xmm0
	__m128 v39; // xmm3
	__m128 v40; // xmm5
	__m128 v41; // xmm1
	__m128 v42; // xmm2
	__m128 v43; // xmm1
	__m128 v44; // xmm4
	__m128 v45; // xmm0
	__m128 v46; // xmm1
	__m128 v47; // xmm3
	float* v48; // rcx
	float* v49; // rax
	float v50; // xmm6_4
	__int64 v51; // rax
	float v52; // xmm5_4
	__m128 v53; // xmm4
	__m128 v54; // xmm2
	__m128 v55; // xmm2
	__m128 v56; // xmm4
	__m128 v57; // xmm0
	__m128 v58; // xmm1
	__m128 v59; // xmm3
	__m128 v60; // xmm3
	__m128 v61; // xmm4
	__m128 v62; // xmm1
	__m128 v63; // xmm3
	__m128 v64; // xmm4
	float v65; // xmm2_4
	__m128 v66; // xmm1
	float v67; // xmm0_4
	__m128 v68; // xmm0
	__m128 v69; // xmm1
	__m128 v70; // xmm0
	unsigned int* result; // rax
	unsigned int* v72; // [rsp+0h] [rbp-1B8h]
	float* v73; // [rsp+8h] [rbp-1B0h]
	unsigned __int64 v74; // [rsp+10h] [rbp-1A8h]
	__m128 v75; // [rsp+20h] [rbp-198h]
	float* v76; // [rsp+30h] [rbp-188h]
	float* v77; // [rsp+38h] [rbp-180h]
	float v78; // [rsp+40h] [rbp-178h]
	__m128 v79; // [rsp+50h] [rbp-168h]
	__m128 v80; // [rsp+60h] [rbp-158h]
	__m128 v81; // [rsp+70h] [rbp-148h]
	float v82; // [rsp+80h] [rbp-138h]
	float v83; // [rsp+90h] [rbp-128h]
	__m128 v84; // [rsp+A0h] [rbp-118h]
	float v85; // [rsp+B0h] [rbp-108h]
	__m128 v86; // [rsp+C0h] [rbp-F8h]
	__int64 v87; // [rsp+1C0h] [rbp+8h]
	int v89; // [rsp+1D8h] [rbp+20h]

	v87 = a1;
	v2 = (__m128)0xC0000000;
	v3 = *(__m128*)(a1 + 368);
	v4 = *(float**)(a1 + 48);
	v5 = *(unsigned int**)(a1 + 272);
	v6 = *(__m128**)(a1 + 280);
	v7 = *(_QWORD*)(a1 + 336);
	LODWORD(v82) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	LODWORD(v8) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v9 = *(__m128**)(a1 + 312);
	v10 = *(unsigned int**)(a1 + 152);
	v11 = *(unsigned int**)(a1 + 160);
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v13 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v14) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	v15 = *(unsigned int**)(a1 + 168);
	v16 = *(__m128**)(a1 + 176);
	v17 = *(unsigned int**)(a1 + 200);
	LODWORD(v18) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v19) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v20) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	v78 = v8;
	v84 = v3;
	v22 = *(_QWORD*)(a1 + 16);
	v72 = *(unsigned int**)(a1 + 184);
	v23 = *(unsigned int**)(a1 + 192);
	v73 = *(float**)a2;
	v24 = *(unsigned __int16*)(a2 + 16);
	v25 = *(unsigned int**)(a1 + 304);
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v22 + 24);
	v26 = v2;
	v27 = (__m128) * (unsigned int*)(v22 + 16);
	v80 = _mm_shuffle_ps(v26, v26, 0);
	v77 = *(float**)(a1 + 40);
	v74 = *(_QWORD*)(a1 + 344);
	v28 = 1.0 / (float)v24;
	v27.m128_f32[0] = (float)(v27.m128_f32[0] - *(float*)(a1 + 572)) * v28;
	LODWORD(v85) = _mm_shuffle_ps(v27, v27, 0).m128_u32[0];
	v29 = (__m128) * (unsigned int*)(v22 + 20);
	v76 = *(float**)(a1 + 56);
	v30 = *(unsigned int**)(a1 + 144);
	v29.m128_f32[0] = (float)(v29.m128_f32[0] - *(float*)(a1 + 576)) * v28;
	LODWORD(v83) = _mm_shuffle_ps(v29, v29, 0).m128_u32[0];
	v79 = *(__m128*)(a1 + 384);
	v31 = *(__m128*)(a1 + 432);
	v32 = *(__m128*)(a1 + 496);
	v81 = *(__m128*)(a1 + 448);
	v89 = *(unsigned __int16*)(a2 + 18);
	v33 = v74;
	v34 = *(__m128*)(a1 + 512);
	v86 = v31;
	v75 = v34;
	if (*(_WORD*)(a2 + 18))
	{
		v35 = *(unsigned int**)(a1 + 184);
		do
		{
			v36 = (__m128) * v30;
			v37 = (__m128) * v10;
			v38 = (__m128) * v11;
			v30 += 4;
			if ((unsigned __int64)v30 >= v7)
				v30 = v5;
			v10 += 4;
			v39 = (__m128) * v15;
			if ((unsigned __int64)v10 >= v7)
				v10 = v5 + 1;
			v11 += 4;
			if ((unsigned __int64)v11 >= v7)
				v11 = v5 + 2;
			v15 += 4;
			if ((unsigned __int64)v15 >= v7)
				v15 = v5 + 3;
			v40 = (__m128) * v17;
			v41 = _mm_unpacklo_ps(v36, v37);
			v42 = (__m128)v16->m128_u32[0];
			v43 = _mm_mul_ps(_mm_movelh_ps(v41, _mm_unpacklo_ps(v38, v39)), v3);
			v44 = (__m128) * v35;
			if ((unsigned __int64)++v16 >= v33)
				v16 = v6;
			v72 = v35 + 4;
			v32 = _mm_add_ps(v43, _mm_mul_ps(v32, v31));
			v45 = (__m128) * v23;
			v46 = _mm_mul_ps(v32, (__m128)xmmword_1409AA0F0);
			v47 = _mm_mul_ps(v32, (__m128)xmmword_1409AA100);
			if ((unsigned __int64)(v35 + 4) >= v33)
				v72 = &v6->m128_u32[1];
			v23 += 4;
			if ((unsigned __int64)v23 >= v33)
				v23 = &v6->m128_u32[2];
			v17 += 4;
			if ((unsigned __int64)v17 >= v33)
				v17 = &v6->m128_u32[3];
			v48 = v73;
			v49 = v73;
			v19 = v19 + v85;
			++v73;
			v50 = *v49;
			v20 = v20 + v83;
			v51 = *(unsigned __int16*)(a2 + 16);
			v75 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v42, v44), _mm_unpacklo_ps(v45, v40)), v79),
				_mm_mul_ps(v75, v81));
			v52 = v48[v51];
			v53 = _mm_add_ps(_mm_mul_ps(v75, (__m128)xmmword_1409AA100), v47);
			v54 = _mm_add_ps(_mm_mul_ps(v75, (__m128)xmmword_1409AA0F0), v46);
			v55 = _mm_add_ps(v54, _mm_movehl_ps(v54, v54));
			v56 = _mm_add_ps(v53, _mm_movehl_ps(v53, v53));
			v57 = _mm_add_ps(v75, v32);
			v58 = _mm_add_ps(_mm_movehl_ps(v57, v57), v57);
			v59 = _mm_add_ps(_mm_shuffle_ps(v58, v58, 85), v58);
			v60 = _mm_mul_ps(_mm_shuffle_ps(v59, v59, 0), v80);
			*v48 = (float)(v50 * v19) + (float)((float)(_mm_shuffle_ps(v55, v55, 85).m128_f32[0] + v55.m128_f32[0]) * v20);
			v58.m128_f32[0] = _mm_shuffle_ps(v56, v56, 85).m128_f32[0] + v56.m128_f32[0];
			v57.m128_f32[0] = v52 * v19;
			v8 = v50 + v52;
			v61 = _mm_add_ps(v60, v32);
			v48[v51] = v57.m128_f32[0] + (float)(v58.m128_f32[0] * v20);
			v62 = _mm_add_ps(v75, v60);
			v63 = _mm_shuffle_ps(v62, _mm_shuffle_ps(v62, v61, 15), 201);
			v64 = _mm_shuffle_ps(v61, _mm_shuffle_ps(v61, v62, 15), 201);
			v12 = (float)((float)(v82 * v12) + v8) - v78;
			v78 = v8;
			if (v77)
			{
				v65 = *v4;
				*v4++ = v12;
				if (v4 == v76)
					v4 = v77;
			}
			else
			{
				v65 = v12;
			}
			v33 = v74;
			v31 = v86;
			v35 = v72;
			v25 += 4;
			v66 = v13;
			v67 = v18 * v14;
			v14 = v65;
			v66.m128_f32[0] = (float)(v13.m128_f32[0] * v65) + v67;
			v68 = _mm_shuffle_ps(v66, v66, 0);
			v69 = _mm_add_ps(v68, v63);
			v70 = _mm_add_ps(v68, v64);
			v3 = v84;
			*((__m128*)v25 - 1) = v70;
			if ((unsigned __int64)v25 >= v7)
				v25 = v5;
			*v9++ = v69;
			if ((unsigned __int64)v9 >= v74)
				v9 = v6;
			--v89;
		} while (v89);
		v34 = v75;
		a1 = v87;
	}
	result = v72;
	*(float*)(a1 + 76) = v14;
	*(float*)(a1 + 560) = v8;
	*(float*)(a1 + 564) = v12;
	*(_QWORD*)(a1 + 48) = v4;
	*(_QWORD*)(a1 + 176) = v16;
	*(__m128*)(a1 + 496) = v32;
	*(__m128*)(a1 + 512) = v34;
	*(_QWORD*)(a1 + 304) = v25;
	*(_QWORD*)(a1 + 312) = v9;
	*(_QWORD*)(a1 + 144) = v30;
	*(_QWORD*)(a1 + 152) = v10;
	*(_QWORD*)(a1 + 160) = v11;
	*(_QWORD*)(a1 + 168) = v15;
	*(_QWORD*)(a1 + 184) = v72;
	*(_QWORD*)(a1 + 192) = v23;
	*(_QWORD*)(a1 + 200) = v17;
	return result;
}
// 1409AA0F0: using guessed type __int128 xmmword_1409AA0F0;
// 1409AA100: using guessed type __int128 xmmword_1409AA100;

