#include "../winhttp.h"

//----- (00000001408BC080) ----------------------------------------------------
unsigned int* __fastcall sub_1408BC080(__int64 a1, __int64* a2)
{
	__m128 v2; // xmm4
	__m128 v3; // xmm15
	float* v4; // rdi
	__m128* v5; // rbx
	__int64 v7; // rdx
	__int64 v8; // r11
	unsigned __int64 v9; // r9
	unsigned int* v10; // r10
	float v11; // xmm8_4
	float v12; // xmm7_4
	float v13; // xmm9_4
	float v14; // xmm11_4
	float v15; // xmm10_4
	unsigned int* v16; // rsi
	unsigned int* v17; // r14
	unsigned int* v18; // r15
	__m128 v19; // xmm13
	float v20; // xmm14_4
	float v21; // xmm12_4
	unsigned int* v22; // rbp
	unsigned int* v23; // r12
	int v24; // eax
	unsigned int* v25; // r8
	unsigned int* v26; // r13
	float v27; // xmm2_4
	unsigned int* v28; // rax
	__m128 v29; // xmm0
	__m128 v30; // xmm15
	float v31; // xmm4_4
	unsigned __int64 v32; // rcx
	unsigned int* v33; // rdx
	__m128 v34; // xmm5
	__m128 v35; // xmm6
	unsigned int v36; // r10d
	unsigned int* v37; // rbx
	__m128 v38; // xmm1
	__m128 v39; // xmm0
	__m128 v40; // xmm3
	unsigned int v41; // edx
	__int64 v42; // rax
	__int64 v43; // rcx
	__m128 v44; // xmm1
	__m128 v45; // xmm0
	__m128 v46; // xmm2
	__m128 v47; // xmm3
	unsigned int v48; // edx
	__int64 v49; // rax
	__int64 v50; // rcx
	unsigned int v51; // edx
	int v52; // r9d
	__int64 v53; // r8
	__m128 v54; // xmm2
	__int128 v55; // xmm0
	__int64 v56; // rcx
	__m128 v57; // xmm1
	__m128 v58; // xmm1
	unsigned int v59; // ecx
	__int64 v60; // rdx
	__m128 v61; // xmm0
	__m128 v62; // xmm2
	__m128 v63; // xmm2
	__int64 v64; // rax
	__int128 v65; // xmm1
	__m128 v66; // xmm2
	__m128 v67; // xmm1
	__m128 v68; // xmm3
	__m128 v69; // xmm4
	__m128 v70; // xmm0
	float v71; // xmm1_4
	__m128 v72; // xmm3
	float* v73; // rcx
	__int64 v74; // rdx
	float v75; // xmm2_4
	__m128 v76; // xmm1
	float v77; // xmm0_4
	__m128* v78; // rdx
	__m128 v79; // xmm0
	__m128 v80; // xmm1
	__m128* v81; // rdx
	bool v82; // zf
	unsigned int* result; // rax
	unsigned int* v84; // [rsp+0h] [rbp-258h]
	__m128* v85; // [rsp+8h] [rbp-250h]
	unsigned int* v86; // [rsp+10h] [rbp-248h]
	__m128* v87; // [rsp+18h] [rbp-240h]
	unsigned __int64 v88; // [rsp+20h] [rbp-238h]
	__m128* v89; // [rsp+28h] [rbp-230h]
	float* v90; // [rsp+30h] [rbp-228h]
	float* v91; // [rsp+38h] [rbp-220h]
	unsigned __int64 v92; // [rsp+40h] [rbp-218h]
	unsigned int* v93; // [rsp+48h] [rbp-210h]
	__m128 v94; // [rsp+50h] [rbp-208h]
	float v95; // [rsp+60h] [rbp-1F8h]
	__m128 v96; // [rsp+70h] [rbp-1E8h]
	float v97; // [rsp+80h] [rbp-1D8h]
	__m128 v98; // [rsp+90h] [rbp-1C8h]
	__m128 v99; // [rsp+A0h] [rbp-1B8h]
	__m128 v100[6]; // [rsp+B0h] [rbp-1A8h]
	__int128 v101; // [rsp+110h] [rbp-148h]
	char v102; // [rsp+120h] [rbp-138h] BYREF
	int v105; // [rsp+278h] [rbp+20h]

	v4 = *(float**)(a1 + 48);
	v5 = (__m128*)a1;
	v7 = *(_QWORD*)(a1 + 16);
	v8 = *a2;
	v9 = *(_QWORD*)(a1 + 344);
	v10 = *(unsigned int**)(a1 + 184);
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	LODWORD(v13) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	LODWORD(v14) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	LODWORD(v15) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v16 = *(unsigned int**)(a1 + 144);
	v17 = *(unsigned int**)(a1 + 160);
	v18 = *(unsigned int**)(a1 + 168);
	v19 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v20) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v21) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	v22 = *(unsigned int**)(a1 + 176);
	v23 = *(unsigned int**)(a1 + 192);
	v24 = *((unsigned __int16*)a2 + 8);
	v25 = *(unsigned int**)(a1 + 280);
	v26 = *(unsigned int**)(a1 + 200);
	v93 = v25;
	v88 = v9;
	v27 = 1.0 / (float)v24;
	v90 = *(float**)(a1 + 40);
	v28 = *(unsigned int**)(a1 + 272);
	v29 = (__m128) * (unsigned int*)(v7 + 20);
	v3.m128_f32[0] = -2.0 / (float)*(int*)(v7 + 24);
	v30 = _mm_shuffle_ps(v3, v3, 0);
	v29.m128_f32[0] = (float)(v29.m128_f32[0] - *(float*)(a1 + 576)) * v27;
	v87 = *(__m128**)(a1 + 304);
	v91 = *(float**)(a1 + 56);
	v2.m128_f32[0] = (float)(*(float*)(v7 + 16) - *(float*)(a1 + 572)) * v27;
	LODWORD(v31) = _mm_shuffle_ps(v2, v2, 0).m128_u32[0];
	v32 = *(_QWORD*)(a1 + 336);
	v85 = (__m128*)v5[19].m128_u64[1];
	v33 = (unsigned int*)v5[9].m128_u64[1];
	v97 = v31;
	LODWORD(v95) = _mm_shuffle_ps(v29, v29, 0).m128_u32[0];
	v89 = (__m128*)v28;
	v92 = v32;
	v86 = v10;
	v34 = v5[31];
	v35 = v5[32];
	v96 = v5[23];
	v105 = *((unsigned __int16*)a2 + 9);
	v36 = v5[37].m128_u32[1];
	v99 = v5[24];
	v94 = v5[27];
	v98 = v5[28];
	if (*((_WORD*)a2 + 9))
	{
		v37 = (unsigned int*)v5[9].m128_u64[1];
		do
		{
			v38 = (__m128) * v16;
			v39 = (__m128) * v17;
			v16 += 4;
			if ((unsigned __int64)v16 >= v32)
				v16 = v28;
			v84 = v37 + 4;
			v40 = (__m128) * v18;
			if ((unsigned __int64)(v37 + 4) >= v32)
				v84 = v28 + 1;
			v17 += 4;
			if ((unsigned __int64)v17 >= v32)
				v17 = v28 + 2;
			v18 += 4;
			if ((unsigned __int64)v18 >= v32)
				v18 = v28 + 3;
			v41 = 0;
			v34 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v38, (__m128) * v37), _mm_unpacklo_ps(v39, v40)), v96),
				_mm_mul_ps(v34, v94));
			do
			{
				v42 = v41;
				v43 = v41++;
				v100[v43] = _mm_mul_ps(stru_1409AA150[4 * v42], v34);
			} while (v41 < v36);
			v44 = (__m128) * v22;
			v45 = (__m128) * v23;
			v37 = v84;
			v22 += 4;
			v46 = (__m128) * v86;
			v47 = (__m128) * v26;
			if ((unsigned __int64)v22 >= v9)
				v22 = v25;
			v86 += 4;
			if ((unsigned __int64)v86 >= v9)
				v86 = v25 + 1;
			v23 += 4;
			if ((unsigned __int64)v23 >= v9)
				v23 = v25 + 2;
			v26 += 4;
			if ((unsigned __int64)v26 >= v9)
				v26 = v25 + 3;
			v48 = 0;
			v35 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v44, v46), _mm_unpacklo_ps(v45, v47)), v99),
				_mm_mul_ps(v35, v98));
			do
			{
				v49 = v48;
				v50 = v48++;
				v100[v50] = _mm_add_ps(_mm_mul_ps(stru_1409AA150[4 * v49 + 1], v35), v100[v50]);
			} while (v48 < v36);
			v51 = 0;
			v52 = *((unsigned __int16*)a2 + 8);
			v53 = 0i64;
			v54 = _mm_add_ps(v35, v34);
			do
			{
				v55 = *(unsigned int*)(v8 + 4 * v53);
				v56 = v51++;
				v56 *= 2i64;
				v53 = (unsigned int)(v52 + v53);
				v57 = *(__m128*)((char*)v100 + 8 * v56);
				*(__int128*)((char*)&v101 + 8 * v56) = v55;
				v58 = _mm_add_ps(v57, _mm_movehl_ps(v57, v57));
				*(__m128*)((char*)v100 + 8 * v56) = _mm_add_ps(_mm_shuffle_ps(v58, v58, 85), v58);
			} while (v51 < v36);
			v13 = v13 + v95;
			v59 = 0;
			v60 = 0i64;
			v61 = _mm_add_ps(_mm_movehl_ps(v54, v54), v54);
			v11 = v11 + v31;
			v62 = _mm_add_ps(_mm_shuffle_ps(v61, v61, 85), v61);
			v63 = _mm_shuffle_ps(v62, v62, 0);
			do
			{
				v64 = v59++;
				v64 *= 2i64;
				v65 = *(__int128*)((char*)&v101 + 8 * v64);
				*(float*)&v65 = (float)(*(float*)&v65 * v11)
					+ (float)(COERCE_FLOAT(*(_OWORD*)((char*)v100 + 8 * v64)) * v13);
				*(_DWORD*)(v8 + 4 * v60) = v65;
				v60 = (unsigned int)(v52 + v60);
				*(__m128*)((char*)v100 + 8 * v64) = (__m128)v65;
			} while (v59 < v36);
			v66 = _mm_mul_ps(v63, v30);
			v8 += 4i64;
			v67 = _mm_add_ps(v35, v66);
			v68 = _mm_add_ps(v66, v34);
			v69 = _mm_shuffle_ps(v67, _mm_shuffle_ps(v67, v68, 15), 201);
			v70 = _mm_shuffle_ps(v68, v67, 15);
			v71 = *(float*)&v101;
			v72 = _mm_shuffle_ps(v68, v70, 201);
			if (v36 > 1)
			{
				v73 = (float*)&v102;
				v74 = v36 - 1;
				do
				{
					v71 = v71 + *v73;
					v73 += 4;
					--v74;
				} while (v74);
			}
			v12 = (float)((float)(v21 * v12) + v71) - v15;
			v15 = v71;
			if (v90)
			{
				v75 = *v4;
				*v4++ = v12;
				if (v4 == v91)
					v4 = v90;
			}
			else
			{
				v75 = v12;
			}
			v32 = v92;
			v76 = v19;
			v77 = v20 * v14;
			v14 = v75;
			v9 = v88;
			v25 = v93;
			v78 = v87 + 1;
			v76.m128_f32[0] = (float)(v19.m128_f32[0] * v75) + v77;
			v79 = _mm_shuffle_ps(v76, v76, 0);
			v80 = _mm_add_ps(v79, v69);
			v31 = v97;
			*v87 = _mm_add_ps(v79, v72);
			*v85 = v80;
			v28 = (unsigned int*)v89;
			if ((unsigned __int64)&v87[1] >= v92)
				v78 = v89;
			v87 = v78;
			v81 = v85 + 1;
			if ((unsigned __int64)&v85[1] >= v88)
				v81 = (__m128*)v93;
			v82 = v105-- == 1;
			v85 = v81;
		} while (!v82);
		v5 = (__m128*)a1;
		v33 = v84;
	}
	v5[4].m128_f32[3] = v14;
	v5[35].m128_f32[0] = v15;
	v5[35].m128_f32[1] = v12;
	v5[3].m128_u64[0] = (unsigned __int64)v4;
	v5[19].m128_u64[0] = (unsigned __int64)v87;
	v5[9].m128_u64[0] = (unsigned __int64)v16;
	v5[9].m128_u64[1] = (unsigned __int64)v33;
	v5[32] = v35;
	v5[31] = v34;
	v5[19].m128_u64[1] = (unsigned __int64)v85;
	result = v86;
	v5[10].m128_u64[0] = (unsigned __int64)v17;
	v5[10].m128_u64[1] = (unsigned __int64)v18;
	v5[11].m128_u64[0] = (unsigned __int64)v22;
	v5[12].m128_u64[0] = (unsigned __int64)v23;
	v5[11].m128_u64[1] = (unsigned __int64)v86;
	v5[12].m128_u64[1] = (unsigned __int64)v26;
	return result;
}
// 1408BC216: variable 'v3' is possibly undefined
// 1408BC238: variable 'v2' is possibly undefined
// 1409AA150: using guessed type __m128 stru_1409AA150[24];
// 1408BC080: using guessed type __m128 var_1A8[6];

