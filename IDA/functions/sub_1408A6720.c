//----- (00000001408A6720) ----------------------------------------------------
__int64 __fastcall sub_1408A6720(__int64 a1, float* a2, int a3, float* a4, __int64 a5)
{
	unsigned int v5; // ebx
	unsigned int v6; // r10d
	float v7; // xmm3_4
	float v8; // xmm4_4
	float v9; // xmm5_4
	int v10; // r15d
	unsigned int v12; // r11d
	float v14; // xmm11_4
	float v15; // xmm12_4
	unsigned int v16; // r12d
	unsigned int v18; // r14d
	__int64 result; // rax
	unsigned int v20; // edx
	float v21; // xmm13_4
	float v22; // xmm1_4
	float v23; // xmm6_4
	float v24; // xmm7_4
	float v25; // xmm8_4
	unsigned int v26; // r8d
	unsigned int v27; // ecx
	float v28; // xmm0_4
	unsigned int v29; // r9d
	float v30; // xmm2_4
	float v31; // xmm1_4
	float v32; // xmm0_4
	unsigned int v33; // ecx
	unsigned int v34; // r8d
	unsigned int v35; // ecx
	unsigned int v36; // r8d
	float v37; // xmm10_4
	float v38; // xmm3_4
	float v39; // xmm0_4
	float v40; // xmm4_4
	float v41; // xmm5_4
	int v42; // edx
	float v43; // xmm1_4
	__int64 v44; // rax
	float v45; // xmm1_4
	float v46; // xmm2_4
	float v47; // xmm1_4
	__int64 v48; // rax
	__int64 v49; // r10
	float v50; // xmm2_4
	float v51; // xmm1_4
	float v52; // xmm0_4
	float v53; // xmm2_4
	float v54; // xmm3_4
	float v55; // xmm4_4
	float v56; // xmm0_4
	float v57; // xmm0_4
	float v58; // xmm5_4
	float v59; // xmm1_4
	float v60; // xmm2_4
	float v61; // xmm1_4
	float v62; // xmm0_4
	__int64 v63; // r10
	float v64; // xmm1_4
	float v65; // xmm3_4
	float v66; // xmm4_4
	float v67; // xmm2_4
	float v68; // xmm0_4
	float v69; // xmm5_4
	float v70; // xmm3_4
	float v71; // xmm1_4
	float v72; // xmm4_4
	__int64 v73; // r10
	float v74; // xmm0_4
	float v75; // xmm5_4
	float v76; // xmm1_4
	float v77; // xmm2_4
	float v78; // xmm1_4
	float v79; // xmm0_4
	float v80; // xmm2_4
	float v81; // xmm3_4
	float v82; // xmm4_4
	float v83; // xmm0_4
	float v84; // xmm0_4
	__int64 v85; // r10
	float v86; // xmm5_4
	float v87; // xmm1_4
	float v88; // xmm2_4
	float v89; // xmm1_4
	float v90; // xmm0_4
	__int64 v91; // r10
	float v92; // xmm1_4
	float v93; // xmm3_4
	float v94; // xmm4_4
	float v95; // xmm5_4
	__int64 v96; // rax
	float v97; // xmm1_4
	float v98; // xmm2_4
	float v99; // xmm1_4
	float v100; // xmm2_4
	float v101; // xmm1_4
	float v102; // xmm0_4
	float v103; // xmm2_4
	float v104; // xmm3_4
	float v105; // xmm4_4
	float v106; // xmm0_4
	float v107; // xmm0_4
	__int64 v108; // r10
	float v109; // xmm5_4
	float v110; // xmm1_4
	float v111; // xmm0_4
	float v112; // xmm2_4
	float v113; // xmm0_4
	float v114; // xmm0_4
	float v115; // xmm0_4
	__int64 v116; // r10
	float v117; // xmm1_4
	int v118; // ecx
	__int64 v119; // rax
	float v120; // xmm1_4
	float v121; // xmm2_4
	float v122; // xmm2_4
	float v123; // xmm0_4

	v5 = *(_DWORD*)(a1 + 8);
	v6 = *(_DWORD*)(a1 + 24);
	v7 = *(float*)(a1 + 28);
	v8 = *(float*)(a1 + 32);
	v9 = *(float*)(a1 + 36);
	v10 = *(_DWORD*)(a1 + 4);
	v12 = a3;
	v14 = *(float*)(a1 + 40);
	v15 = *(float*)(a1 + 44);
	v16 = v5 - *(_DWORD*)a1;
	v18 = v5 - v10 - 1;
	v20 = (v16 + v6) % v5;
	result = (v16 + v6) / v5;
	v21 = *(float*)(a1 + 48);
	v22 = 1.0 / (float)a3;
	v23 = (float)(v14 - v7) * v22;
	v24 = (float)(v15 - v8) * v22;
	v25 = (float)(v21 - v9) * v22;
	if (a3)
	{
		do
		{
			v26 = v12;
			v27 = v5 - v6 - 1;
			if (v18 - v20 < v27)
				v27 = v18 - v20;
			if (v27 < v12)
				v26 = v27;
			while (v12)
			{
				if (v20 < v18 && v20 >= v10 && v6 != v5 - 1 && v26 >= 8)
					break;
				v28 = *a4;
				v29 = v16 + v6;
				--v12;
				++a4;
				++a2;
				v7 = v7 + v23;
				v8 = v8 + v24;
				v9 = v9 + v25;
				v30 = (float)((float)v10 * v28) + (float)(int)(v16 + v6);
				v26 = v12;
				v31 = (float)((float)(1.0 - (float)(v30 - (float)(int)v30)) * *(float*)(a5 + 4i64 * ((int)v30 % v5)))
					+ (float)((float)(v30 - (float)(int)v30) * *(float*)(a5 + 4i64 * (((int)v30 + 1) % v5)));
				v32 = (float)(v31 * v7) + *(a2 - 1);
				*(float*)(a5 + 4i64 * v6) = v32;
				*(a2 - 1) = (float)(v32 * v9) + (float)(v31 * v8);
				v6 = (v6 + 1) % v5;
				v20 = (v29 + 1) % v5;
				v33 = v5 - v6 - 1;
				if (v18 - v20 < v33)
					v33 = v18 - v20;
				if (v33 < v12)
					v26 = v33;
			}
			v34 = v12;
			v20 = (v16 + v6) % v5;
			v35 = v5 - v6 - 1;
			if (v18 - v20 < v35)
				v35 = v18 - v20;
			if (v35 < v12)
				v34 = v35;
			v36 = v34 >> 3;
			result = -8 * v36;
			v12 += result;
			if (v36)
			{
				v37 = (float)v10;
				do
				{
					v38 = v7 + v23;
					v39 = (float)(int)v20;
					v40 = v8 + v24;
					v41 = v9 + v25;
					v42 = v20 + 1;
					v43 = (float)(v37 * *a4) + v39;
					v44 = (unsigned int)(int)v43;
					v45 = v43 - (float)(int)v43;
					v46 = (float)(1.0 - v45) * *(float*)(a5 + 4 * v44);
					v47 = v45 * *(float*)(a5 + 4i64 * (unsigned int)(v44 + 1));
					v48 = v6;
					v49 = v6 + 1;
					v50 = v46 + v47;
					v51 = v37 * a4[1];
					v52 = v50 * v38;
					v53 = v50 * v40;
					v54 = v38 + v23;
					v55 = v40 + v24;
					v56 = v52 + *a2;
					*(float*)(a5 + 4 * v48) = v56;
					v57 = v56 * v41;
					v58 = v41 + v25;
					*a2 = v57 + v53;
					v59 = v51 + (float)v42;
					v60 = (float)((float)(1.0 - (float)(v59 - (float)(int)v59)) * *(float*)(a5 + 4i64 * (unsigned int)(int)v59))
						+ (float)((float)(v59 - (float)(int)v59) * *(float*)(a5 + 4i64 * (unsigned int)((int)v59 + 1)));
					v61 = v37 * a4[2];
					v62 = (float)(v60 * v54) + a2[1];
					*(float*)(a5 + 4 * v49) = v62;
					v63 = (unsigned int)(v49 + 1);
					++v42;
					a2[1] = (float)(v62 * v58) + (float)(v60 * v55);
					v64 = v61 + (float)v42;
					v65 = v54 + v23;
					v66 = v55 + v24;
					LODWORD(v48) = v42 + 1;
					v42 += 2;
					v67 = (float)((float)((float)(1.0 - (float)(v64 - (float)(int)v64))
						* *(float*)(a5 + 4i64 * (unsigned int)(int)v64))
						+ (float)((float)(v64 - (float)(int)v64) * *(float*)(a5 + 4i64 * (unsigned int)((int)v64 + 1))))
						* v66;
					v68 = (float)((float)((float)((float)(1.0 - (float)(v64 - (float)(int)v64))
						* *(float*)(a5 + 4i64 * (unsigned int)(int)v64))
						+ (float)((float)(v64 - (float)(int)v64)
							* *(float*)(a5 + 4i64 * (unsigned int)((int)v64 + 1))))
						* v65)
						+ a2[2];
					v69 = v58 + v25;
					v70 = v65 + v23;
					v71 = v37 * a4[3];
					*(float*)(a5 + 4 * v63) = v68;
					v72 = v66 + v24;
					v73 = (unsigned int)(v63 + 1);
					v74 = (float)(v68 * v69) + v67;
					v75 = v69 + v25;
					a2[2] = v74;
					v76 = v71 + (float)(int)v48;
					v77 = (float)((float)(1.0 - (float)(v76 - (float)(int)v76)) * *(float*)(a5 + 4i64 * (unsigned int)(int)v76))
						+ (float)((float)(v76 - (float)(int)v76) * *(float*)(a5 + 4i64 * (unsigned int)((int)v76 + 1)));
					v78 = v37 * a4[4];
					v79 = v77 * v70;
					v80 = v77 * v72;
					v81 = v70 + v23;
					v82 = v72 + v24;
					v83 = v79 + a2[3];
					*(float*)(a5 + 4 * v73) = v83;
					v84 = v83 * v75;
					v85 = (unsigned int)(v73 + 1);
					v86 = v75 + v25;
					a2[3] = v84 + v80;
					v87 = v78 + (float)v42;
					v88 = (float)((float)(1.0 - (float)(v87 - (float)(int)v87)) * *(float*)(a5 + 4i64 * (unsigned int)(int)v87))
						+ (float)((float)(v87 - (float)(int)v87) * *(float*)(a5 + 4i64 * (unsigned int)((int)v87 + 1)));
					v89 = v37 * a4[5];
					v90 = (float)(v88 * v81) + a2[4];
					*(float*)(a5 + 4 * v85) = v90;
					v91 = (unsigned int)(v85 + 1);
					a2[4] = (float)(v90 * v86) + (float)(v88 * v82);
					v92 = v89 + (float)(v42 + 1);
					v93 = v81 + v23;
					v94 = v82 + v24;
					v95 = v86 + v25;
					v96 = (unsigned int)(int)v92;
					v97 = v92 - (float)(int)v92;
					v98 = (float)(1.0 - v97) * *(float*)(a5 + 4 * v96);
					v99 = v97 * *(float*)(a5 + 4i64 * (unsigned int)(v96 + 1));
					LODWORD(v96) = v42 + 2;
					v42 += 3;
					v100 = v98 + v99;
					v101 = v37 * a4[6];
					v102 = v100 * v93;
					v103 = v100 * v94;
					v104 = v93 + v23;
					v105 = v94 + v24;
					v106 = v102 + a2[5];
					*(float*)(a5 + 4 * v91) = v106;
					v107 = v106 * v95;
					v108 = (unsigned int)(v91 + 1);
					v109 = v95 + v25;
					a2[5] = v107 + v103;
					v110 = v101 + (float)(int)v96;
					v111 = (float)((float)(1.0 - (float)(v110 - (float)(int)v110))
						* *(float*)(a5 + 4i64 * (unsigned int)(int)v110))
						+ (float)((float)(v110 - (float)(int)v110) * *(float*)(a5 + 4i64 * (unsigned int)((int)v110 + 1)));
					v112 = v111 * v105;
					v8 = v105 + v24;
					v113 = v111 * v104;
					v7 = v104 + v23;
					v114 = v113 + a2[6];
					*(float*)(a5 + 4 * v108) = v114;
					v115 = v114 * v109;
					v116 = (unsigned int)(v108 + 1);
					a4 += 8;
					v9 = v109 + v25;
					a2[6] = v115 + v112;
					v117 = (float)(v37 * *(a4 - 1)) + (float)v42;
					v118 = (int)v117;
					v119 = (unsigned int)(int)v117;
					v120 = v117 - (float)(int)v117;
					v121 = (float)(1.0 - v120) * *(float*)(a5 + 4 * v119);
					result = (unsigned int)(v118 + 1);
					v122 = v121 + (float)(v120 * *(float*)(a5 + 4 * result));
					v123 = (float)(v122 * v7) + a2[7];
					a2 += 8;
					v20 = v42 + 1;
					*(float*)(a5 + 4 * v116) = v123;
					v6 = v116 + 1;
					*(a2 - 1) = (float)(v123 * v9) + (float)(v122 * v8);
					--v36;
				} while (v36);
			}
		} while (v12);
	}
	*(float*)(a1 + 28) = v14;
	*(float*)(a1 + 32) = v15;
	*(float*)(a1 + 36) = v21;
	*(_DWORD*)(a1 + 24) = v6;
	return result;
}

