//----- (00000001408BC700) ----------------------------------------------------
unsigned int* __fastcall sub_1408BC700(__int64 a1, __int64* a2)
{
	__m128 v2; // xmm5
	__m128 v3; // xmm1
	float* v4; // rdi
	__int64 v5; // r11
	__int64 v7; // rdx
	unsigned int* v8; // r9
	__int64 v9; // rbx
	float v10; // xmm10_4
	float v11; // xmm11_4
	float v12; // xmm9_4
	float v13; // xmm12_4
	float v14; // xmm13_4
	float v15; // xmm14_4
	__m128 v16; // xmm0
	float v17; // xmm2_4
	__m128 v18; // xmm0
	unsigned int* v19; // rcx
	float v20; // xmm5_4
	unsigned int* v21; // rdx
	__m128 v22; // xmm4
	unsigned int* v23; // rsi
	__m128 v24; // xmm15
	__m128 v25; // xmm6
	__m128 v26; // xmm7
	unsigned int* v27; // r14
	unsigned int* v28; // r15
	unsigned int* v29; // rbp
	__m128 v30; // xmm8
	unsigned int* v31; // r12
	unsigned int* v32; // r13
	unsigned int* v33; // r8
	unsigned int v34; // r10d
	unsigned int* result; // rax
	__m128 v36; // xmm1
	__m128 v37; // xmm0
	__m128 v38; // xmm3
	__m128 v39; // xmm2
	unsigned int v40; // edx
	__int64 v41; // rax
	__int64 v42; // rcx
	__m128 v43; // xmm1
	__m128 v44; // xmm0
	__m128 v45; // xmm3
	unsigned int* v46; // r11
	__m128 v47; // xmm2
	unsigned int v48; // edx
	__int64 v49; // rax
	__int64 v50; // rcx
	__m128 v51; // xmm0
	__m128 v52; // xmm1
	__m128 v53; // xmm2
	__m128 v54; // xmm4
	unsigned int* v55; // rcx
	unsigned int v56; // edx
	__int64 v57; // rax
	__int64 v58; // rcx
	unsigned int v59; // edx
	__m128 v60; // xmm4
	int v61; // r9d
	__int64 v62; // r8
	__int128 v63; // xmm0
	__int64 v64; // rcx
	__m128 v65; // xmm1
	__m128 v66; // xmm1
	unsigned int v67; // ecx
	__int64 v68; // rdx
	__m128 v69; // xmm0
	__m128 v70; // xmm3
	__m128 v71; // xmm3
	__int64 v72; // rax
	__int128 v73; // xmm1
	__m128 v74; // xmm3
	__m128 v75; // xmm2
	__m128 v76; // xmm1
	__m128 v77; // xmm4
	__m128 v78; // xmm5
	__m128 v79; // xmm3
	__m128 v80; // xmm0
	float v81; // xmm1_4
	__m128 v82; // xmm4
	float* v83; // rcx
	__int64 v84; // rdx
	float v85; // xmm1_4
	__m128 v86; // xmm2
	__m128* v87; // rax
	float v88; // xmm0_4
	__m128 v89; // xmm1
	__m128 v90; // xmm2
	__m128 v91; // xmm0
	__m128* v92; // r8
	__m128* v93; // r8
	bool v94; // zf
	unsigned int* v95; // [rsp+0h] [rbp-2D8h]
	unsigned int* v96; // [rsp+8h] [rbp-2D0h]
	unsigned int* v97; // [rsp+10h] [rbp-2C8h]
	__m128* v98; // [rsp+18h] [rbp-2C0h]
	unsigned int* v99; // [rsp+20h] [rbp-2B8h]
	unsigned int* v100; // [rsp+28h] [rbp-2B0h]
	__m128* v101; // [rsp+30h] [rbp-2A8h]
	unsigned int* v102; // [rsp+38h] [rbp-2A0h]
	__m128* v103; // [rsp+40h] [rbp-298h]
	unsigned __int64 v104; // [rsp+48h] [rbp-290h]
	unsigned __int64 v105; // [rsp+50h] [rbp-288h]
	unsigned __int64 v106; // [rsp+58h] [rbp-280h]
	unsigned int* v107; // [rsp+60h] [rbp-278h]
	float* v108; // [rsp+68h] [rbp-270h]
	unsigned int* v109; // [rsp+70h] [rbp-268h]
	float* v110; // [rsp+78h] [rbp-260h]
	__m128* v111; // [rsp+80h] [rbp-258h]
	float v112; // [rsp+90h] [rbp-248h]
	__m128 v113; // [rsp+A0h] [rbp-238h]
	__m128 v114; // [rsp+B0h] [rbp-228h]
	float v115; // [rsp+C0h] [rbp-218h]
	__m128 v116; // [rsp+D0h] [rbp-208h]
	__m128 v117; // [rsp+E0h] [rbp-1F8h]
	__m128 v118; // [rsp+F0h] [rbp-1E8h]
	float v119; // [rsp+100h] [rbp-1D8h]
	__m128 v120; // [rsp+110h] [rbp-1C8h]
	__m128 v121; // [rsp+120h] [rbp-1B8h]
	__m128 v122[6]; // [rsp+130h] [rbp-1A8h]
	__int128 v123; // [rsp+190h] [rbp-148h]
	char v124; // [rsp+1A0h] [rbp-138h] BYREF
	int v127; // [rsp+2F8h] [rbp+20h]

	v3 = (__m128)0xC0000000;
	v4 = *(float**)(a1 + 48);
	v5 = a1;
	v7 = *(_QWORD*)(a1 + 16);
	v8 = *(unsigned int**)(a1 + 280);
	v9 = *a2;
	v111 = (__m128*)v8;
	LODWORD(v10) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v113 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v13) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	LODWORD(v14) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	LODWORD(v115) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	LODWORD(v15) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	v3.m128_f32[0] = -2.0 / (float)*(int*)(v7 + 24);
	v16 = v3;
	v3.m128_f32[0] = *(float*)(v7 + 16) - *(float*)(a1 + 572);
	v118 = _mm_shuffle_ps(v16, v16, 0);
	v108 = *(float**)(a1 + 40);
	v107 = *(unsigned int**)(a1 + 288);
	v17 = 1.0 / (float)*((unsigned __int16*)a2 + 8);
	v18 = (__m128) * (unsigned int*)(v7 + 20);
	v106 = *(_QWORD*)(a1 + 344);
	v18.m128_f32[0] = (float)(v18.m128_f32[0] - *(float*)(a1 + 576)) * v17;
	v110 = *(float**)(a1 + 56);
	v19 = *(unsigned int**)(a1 + 272);
	v2.m128_f32[0] = v3.m128_f32[0] * v17;
	LODWORD(v20) = _mm_shuffle_ps(v2, v2, 0).m128_u32[0];
	v101 = *(__m128**)(v5 + 304);
	v104 = *(_QWORD*)(v5 + 336);
	v119 = v20;
	LODWORD(v112) = _mm_shuffle_ps(v18, v18, 0).m128_u32[0];
	v103 = *(__m128**)(v5 + 312);
	v109 = v19;
	v105 = *(_QWORD*)(v5 + 352);
	v98 = *(__m128**)(v5 + 320);
	v21 = *(unsigned int**)(v5 + 208);
	v22 = *(__m128*)(v5 + 432);
	v23 = *(unsigned int**)(v5 + 144);
	v24 = *(__m128*)(v5 + 368);
	v25 = *(__m128*)(v5 + 496);
	v26 = *(__m128*)(v5 + 512);
	v27 = *(unsigned int**)(v5 + 160);
	v28 = *(unsigned int**)(v5 + 168);
	v29 = *(unsigned int**)(v5 + 176);
	v30 = *(__m128*)(v5 + 528);
	v120 = *(__m128*)(v5 + 384);
	v31 = *(unsigned int**)(v5 + 192);
	v32 = *(unsigned int**)(v5 + 200);
	v33 = *(unsigned int**)(v5 + 232);
	v121 = *(__m128*)(v5 + 400);
	v117 = v22;
	v96 = *(unsigned int**)(v5 + 152);
	v127 = *((unsigned __int16*)a2 + 9);
	v114 = *(__m128*)(v5 + 448);
	v34 = *(_DWORD*)(v5 + 596);
	v97 = *(unsigned int**)(v5 + 184);
	v116 = *(__m128*)(v5 + 464);
	v100 = v21;
	v99 = *(unsigned int**)(v5 + 216);
	result = *(unsigned int**)(v5 + 224);
	v95 = result;
	if (v127)
	{
		do
		{
			v36 = (__m128) * v23;
			v37 = (__m128) * v27;
			v38 = (__m128) * v28;
			v23 += 4;
			if ((unsigned __int64)v23 >= v104)
				v23 = v19;
			v39 = (__m128) * v96;
			v96 += 4;
			if ((unsigned __int64)v96 >= v104)
				v96 = v19 + 1;
			v27 += 4;
			if ((unsigned __int64)v27 >= v104)
				v27 = v19 + 2;
			v28 += 4;
			if ((unsigned __int64)v28 >= v104)
				v28 = v19 + 3;
			v40 = 0;
			v25 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v36, v39), _mm_unpacklo_ps(v37, v38)), v24),
				_mm_mul_ps(v25, v22));
			do
			{
				v41 = v40;
				v42 = v40++;
				v122[v42] = _mm_mul_ps(stru_1409AA150[4 * v41], v25);
			} while (v40 < v34);
			v43 = (__m128) * v29;
			v44 = (__m128) * v31;
			v45 = (__m128) * v32;
			v46 = v95;
			v29 += 4;
			v47 = (__m128) * v97;
			if ((unsigned __int64)v29 >= v106)
				v29 = v8;
			v97 += 4;
			if ((unsigned __int64)v97 >= v106)
				v97 = v8 + 1;
			v31 += 4;
			if ((unsigned __int64)v31 >= v106)
				v31 = v8 + 2;
			v32 += 4;
			if ((unsigned __int64)v32 >= v106)
				v32 = v8 + 3;
			v48 = 0;
			v26 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v43, v47), _mm_unpacklo_ps(v44, v45)), v120),
				_mm_mul_ps(v26, v114));
			do
			{
				v49 = v48;
				v50 = v48++;
				v122[v50] = _mm_add_ps(_mm_mul_ps(stru_1409AA150[4 * v49 + 1], v26), v122[v50]);
			} while (v48 < v34);
			v51 = (__m128) * v95;
			v52 = (__m128) * v100;
			v53 = (__m128) * v99;
			v54 = _mm_add_ps(v26, v25);
			v55 = v100 + 4;
			if ((unsigned __int64)(v100 + 4) >= v105)
				v55 = v107;
			v100 = v55;
			v99 += 4;
			if ((unsigned __int64)v99 >= v105)
				v99 = v107 + 1;
			v95 += 4;
			if ((unsigned __int64)(v46 + 4) >= v105)
				v95 = v107 + 2;
			v102 = v33 + 4;
			if ((unsigned __int64)(v33 + 4) >= v105)
				v102 = v107 + 3;
			v56 = 0;
			v30 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v52, v53), _mm_unpacklo_ps(v51, (__m128) * v33)), v121),
				_mm_mul_ps(v30, v116));
			do
			{
				v57 = v56;
				v58 = v56++;
				v122[v58] = _mm_add_ps(_mm_mul_ps(stru_1409AA150[4 * v57 + 2], v30), v122[v58]);
			} while (v56 < v34);
			v59 = 0;
			v60 = _mm_add_ps(v54, v30);
			v61 = *((unsigned __int16*)a2 + 8);
			v62 = 0i64;
			do
			{
				v63 = *(unsigned int*)(v9 + 4 * v62);
				v64 = v59++;
				v64 *= 2i64;
				v62 = (unsigned int)(v61 + v62);
				v65 = *(__m128*)((char*)v122 + 8 * v64);
				*(__int128*)((char*)&v123 + 8 * v64) = v63;
				v66 = _mm_add_ps(v65, _mm_movehl_ps(v65, v65));
				*(__m128*)((char*)v122 + 8 * v64) = _mm_add_ps(_mm_shuffle_ps(v66, v66, 85), v66);
			} while (v59 < v34);
			v11 = v11 + v112;
			v67 = 0;
			v68 = 0i64;
			v69 = _mm_add_ps(_mm_movehl_ps(v60, v60), v60);
			v10 = v10 + v20;
			v70 = _mm_add_ps(_mm_shuffle_ps(v69, v69, 85), v69);
			v71 = _mm_shuffle_ps(v70, v70, 0);
			do
			{
				v72 = v67++;
				v72 *= 2i64;
				v73 = *(__int128*)((char*)&v123 + 8 * v72);
				*(float*)&v73 = (float)(*(float*)&v73 * v10)
					+ (float)(COERCE_FLOAT(*(_OWORD*)((char*)v122 + 8 * v72)) * v11);
				*(_DWORD*)(v9 + 4 * v68) = v73;
				v68 = (unsigned int)(v61 + v68);
				*(__m128*)((char*)v122 + 8 * v72) = (__m128)v73;
			} while (v67 < v34);
			v74 = _mm_mul_ps(v71, v118);
			v9 += 4i64;
			v75 = _mm_add_ps(v30, v74);
			v76 = _mm_add_ps(v26, v74);
			v77 = _mm_add_ps(v74, v25);
			v78 = _mm_shuffle_ps(v75, _mm_shuffle_ps(v75, v77, 15), 201);
			v79 = _mm_shuffle_ps(v76, _mm_shuffle_ps(v76, v75, 15), 201);
			v80 = _mm_shuffle_ps(v77, v76, 15);
			v81 = *(float*)&v123;
			v82 = _mm_shuffle_ps(v77, v80, 201);
			if (v34 > 1)
			{
				v83 = (float*)&v124;
				v84 = v34 - 1;
				do
				{
					v81 = v81 + *v83;
					v83 += 4;
					--v84;
				} while (v84);
			}
			v12 = (float)((float)(v14 * v12) + v81) - v13;
			v13 = v81;
			if (v108)
			{
				v85 = *v4;
				*v4++ = v12;
				if (v4 == v110)
					v4 = v108;
			}
			else
			{
				v85 = v12;
			}
			v86 = v113;
			v8 = (unsigned int*)v111;
			v87 = v101 + 1;
			v88 = v115 * v15;
			v15 = v85;
			v86.m128_f32[0] = (float)(v113.m128_f32[0] * v85) + v88;
			v89 = _mm_shuffle_ps(v86, v86, 0);
			v90 = _mm_add_ps(v89, v78);
			v20 = v119;
			v91 = _mm_add_ps(v89, v82);
			v22 = v117;
			*v101 = v91;
			*v103 = _mm_add_ps(v89, v79);
			*v98 = v90;
			v19 = v109;
			if ((unsigned __int64)&v101[1] >= v104)
				v87 = (__m128*)v109;
			v92 = v103 + 1;
			v101 = v87;
			if ((unsigned __int64)&v103[1] >= v106)
				v92 = v111;
			v103 = v92;
			v93 = v98 + 1;
			if ((unsigned __int64)&v98[1] >= v105)
				v93 = (__m128*)v107;
			v94 = v127-- == 1;
			v98 = v93;
			v33 = v102;
		} while (!v94);
		v5 = a1;
		result = v95;
		v21 = v100;
	}
	*(float*)(v5 + 76) = v15;
	*(float*)(v5 + 560) = v13;
	*(float*)(v5 + 564) = v12;
	*(_QWORD*)(v5 + 48) = v4;
	*(_QWORD*)(v5 + 304) = v101;
	*(__m128*)(v5 + 496) = v25;
	*(__m128*)(v5 + 512) = v26;
	*(__m128*)(v5 + 528) = v30;
	*(_QWORD*)(v5 + 312) = v103;
	*(_QWORD*)(v5 + 144) = v23;
	*(_QWORD*)(v5 + 320) = v98;
	*(_QWORD*)(v5 + 160) = v27;
	*(_QWORD*)(v5 + 152) = v96;
	*(_QWORD*)(v5 + 168) = v28;
	*(_QWORD*)(v5 + 184) = v97;
	*(_QWORD*)(v5 + 176) = v29;
	*(_QWORD*)(v5 + 192) = v31;
	*(_QWORD*)(v5 + 200) = v32;
	*(_QWORD*)(v5 + 208) = v21;
	*(_QWORD*)(v5 + 216) = v99;
	*(_QWORD*)(v5 + 224) = result;
	*(_QWORD*)(v5 + 232) = v33;
	return result;
}
// 1408BC8A4: variable 'v2' is possibly undefined
// 1409AA150: using guessed type __m128 stru_1409AA150[24];
// 1408BC700: using guessed type __m128 var_1A8[6];

