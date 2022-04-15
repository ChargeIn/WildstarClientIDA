//----- (000000014038C900) ----------------------------------------------------
__m128* __fastcall sub_14038C900(__int64 a1, __m128* a2, int a3)
{
	__int64 v4; // rsi
	__int64 v6; // rcx
	float* v7; // rax
	float v8; // xmm4_4
	float v9; // xmm9_4
	float v10; // xmm8_4
	float v11; // xmm0_4
	float v12; // xmm1_4
	float v13; // xmm7_4
	float v14; // xmm6_4
	float v15; // xmm1_4
	float v16; // xmm0_4
	float v17; // xmm4_4
	float v18; // xmm3_4
	float v19; // xmm2_4
	float v20; // xmm0_4
	float v21; // xmm1_4
	float v22; // xmm5_4
	float v23; // xmm1_4
	float v24; // xmm0_4
	float v25; // xmm4_4
	float v26; // xmm3_4
	float v27; // xmm1_4
	float v28; // xmm2_4
	float v29; // xmm2_4
	float v30; // xmm0_4
	float v31; // xmm3_4
	float v32; // xmm0_4
	float v33; // xmm1_4
	float v34; // xmm11_4
	float v35; // xmm0_4
	float v36; // xmm3_4
	float v37; // xmm2_4
	float v38; // xmm0_4
	float v39; // xmm1_4
	float v40; // xmm1_4
	float v41; // xmm0_4
	float v42; // xmm11_4
	float v43; // xmm3_4
	float v44; // xmm2_4
	float v45; // xmm0_4
	float v46; // xmm1_4
	float v47; // xmm3_4
	float v48; // xmm1_4
	float v49; // xmm9_4
	float v50; // xmm8_4
	float v51; // xmm0_4
	float v52; // xmm1_4
	float v53; // xmm2_4
	float v54; // xmm7_4
	float v55; // xmm6_4
	float v56; // xmm0_4
	float v57; // xmm1_4
	float v58; // xmm2_4
	float v59; // xmm5_4
	float v60; // xmm4_4
	float v61; // xmm0_4
	float v62; // xmm1_4
	__m128 v63; // xmm0
	__int64 v64; // rcx
	float* v65; // rax
	float v66; // xmm4_4
	float v67; // xmm6_4
	float v68; // xmm7_4
	float v69; // xmm0_4
	float v70; // xmm4_4
	float v71; // xmm3_4
	float v72; // xmm9_4
	float v73; // xmm10_4
	float v74; // xmm1_4
	float v75; // xmm2_4
	float v76; // xmm0_4
	float v77; // xmm3_4
	float v78; // xmm4_4
	float v79; // xmm8_4
	float v80; // xmm2_4
	float v81; // xmm3_4
	float v82; // xmm1_4
	float v83; // xmm0_4
	float v84; // xmm3_4
	float v85; // xmm2_4
	float v86; // xmm3_4
	float v87; // xmm0_4
	float v88; // xmm3_4
	float v89; // xmm2_4
	float v90; // xmm3_4
	float v91; // xmm1_4
	float v92; // xmm0_4
	float v93; // xmm3_4
	float v94; // xmm2_4
	float v95; // xmm3_4
	float v96; // xmm1_4
	float v97; // xmm0_4
	float v98; // xmm3_4
	float v99; // xmm2_4
	float v100; // xmm3_4
	float v101; // xmm0_4
	float v102; // xmm3_4
	float v103; // xmm2_4
	float v104; // xmm3_4
	float v105; // xmm1_4
	float v106; // xmm0_4
	float v107; // xmm3_4
	float v108; // xmm2_4
	float v109; // xmm3_4
	float v110; // xmm1_4
	float v111; // xmm0_4
	float v112; // xmm3_4
	__int64 v113; // rax
	__m128 v115; // [rsp+28h] [rbp-69h]
	__m128 v116; // [rsp+28h] [rbp-69h]
	__m128 v117; // [rsp+38h] [rbp-59h] BYREF
	char v118[32]; // [rsp+48h] [rbp-49h] BYREF
	char v119[24]; // [rsp+68h] [rbp-29h] BYREF

	v4 = a3;
	v117.m128_i32[0] = -1;
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)a1 + 32i64))(a1, &v117);
	if ((_DWORD)v4)
	{
		if ((_DWORD)v4 == 1)
		{
			v6 = *(_QWORD*)(a1 + 32);
			if (v6)
			{
				v7 = (float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v6 + 1200i64))(v6, v118);
				v8 = *(float*)(a1 + 48);
				v9 = *v7;
				v10 = v7[4];
				v115 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 96), (__m128) * (unsigned int*)(a1 + 104)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 100), (__m128)0i64));
				v117 = v115;
				if (v8 <= 0.0)
				{
					v11 = v10;
					v12 = v9;
				}
				else
				{
					v11 = v9;
					v12 = v10;
				}
				v13 = v7[1];
				v14 = v7[5];
				v15 = v12 * v8;
				v16 = v11 * v8;
				v17 = *(float*)(a1 + 64);
				v18 = v115.m128_f32[0] + v15;
				v19 = v115.m128_f32[0] + v16;
				if (v17 <= 0.0)
				{
					v20 = v7[5];
					v21 = v7[1];
				}
				else
				{
					v20 = v7[1];
					v21 = v7[5];
				}
				v22 = v7[2];
				v23 = v21 * v17;
				v24 = v20 * v17;
				v25 = v7[6];
				v26 = v18 + v23;
				v27 = *(float*)(a1 + 80);
				v28 = v19 + v24;
				if (v27 <= 0.0)
				{
					v29 = v28 + (float)(v25 * v27);
					v30 = v7[2];
				}
				else
				{
					v29 = v28 + (float)(v22 * v27);
					v30 = v7[6];
				}
				v115.m128_f32[0] = v29;
				v117.m128_f32[0] = v26 + (float)(v30 * v27);
				v31 = *(float*)(a1 + 52);
				if (v31 <= 0.0)
				{
					v32 = v10;
					v33 = v9;
				}
				else
				{
					v32 = v9;
					v33 = v10;
				}
				v34 = *(float*)(a1 + 68);
				v35 = v32 * v31;
				v36 = v117.m128_f32[1] + (float)(v33 * v31);
				v37 = v115.m128_f32[1] + v35;
				if (v34 <= 0.0)
				{
					v38 = v14;
					v39 = v13;
				}
				else
				{
					v38 = v13;
					v39 = v14;
				}
				v40 = v39 * v34;
				v41 = v38 * v34;
				v42 = *(float*)(a1 + 84);
				v43 = v36 + v40;
				v44 = v37 + v41;
				if (v42 <= 0.0)
				{
					v45 = v25;
					v46 = v22;
				}
				else
				{
					v45 = v22;
					v46 = v25;
				}
				v47 = v43 + (float)(v46 * v42);
				v48 = *(float*)(a1 + 56);
				v49 = v9 * v48;
				v50 = v10 * v48;
				v117.m128_f32[1] = v47;
				v115.m128_f32[1] = v44 + (float)(v45 * v42);
				if (v48 <= 0.0)
				{
					v51 = v115.m128_f32[2] + v50;
					v52 = v117.m128_f32[2] + v49;
				}
				else
				{
					v51 = v115.m128_f32[2] + v49;
					v52 = v117.m128_f32[2] + v50;
				}
				v53 = *(float*)(a1 + 72);
				v54 = v13 * v53;
				v55 = v14 * v53;
				if (v53 <= 0.0)
				{
					v56 = v51 + v55;
					v57 = v52 + v54;
				}
				else
				{
					v56 = v51 + v54;
					v57 = v52 + v55;
				}
				v58 = *(float*)(a1 + 88);
				v59 = v22 * v58;
				v60 = v25 * v58;
				if (v58 <= 0.0)
				{
					v61 = v56 + v60;
					v62 = v57 + v59;
				}
				else
				{
					v61 = v56 + v59;
					v62 = v57 + v60;
				}
				v115.m128_f32[2] = v61;
				v117.m128_f32[2] = v62;
				*a2 = v115;
				v63 = v117;
				goto LABEL_62;
			}
		}
	LABEL_61:
		v113 = (v4 + 4) << 6;
		*a2 = *(__m128*)(v113 + a1);
		v63 = *(__m128*)(v113 + a1 + 16);
		goto LABEL_62;
	}
	v64 = *(_QWORD*)(a1 + 32);
	if (!v64)
		goto LABEL_61;
	v65 = (float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v64 + 1176i64))(v64, v119);
	v66 = *(float*)(a1 + 48);
	v67 = *v65;
	v68 = v65[4];
	v117 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 96), (__m128) * (unsigned int*)(a1 + 104)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 100), (__m128)0i64));
	v116 = v117;
	if (v66 <= 0.0)
	{
		v69 = v66 * v68;
		v70 = v66 * v67;
	}
	else
	{
		v69 = v66 * v67;
		v70 = v66 * v68;
	}
	v71 = *(float*)(a1 + 64);
	v72 = v65[1];
	v73 = v65[5];
	v74 = v117.m128_f32[0] + v69;
	v75 = v117.m128_f32[0] + v70;
	if (v71 <= 0.0)
	{
		v76 = v71 * v73;
		v77 = v71 * v72;
	}
	else
	{
		v76 = v71 * v72;
		v77 = v71 * v73;
	}
	v78 = v65[2];
	v79 = v65[6];
	v80 = v75 + v77;
	v81 = *(float*)(a1 + 80);
	v82 = v74 + v76;
	if (v81 <= 0.0)
	{
		v83 = v81 * v79;
		v84 = v81 * v78;
	}
	else
	{
		v83 = v81 * v78;
		v84 = v81 * v79;
	}
	v85 = v80 + v84;
	v86 = *(float*)(a1 + 52);
	v116.m128_f32[0] = v85;
	v117.m128_f32[0] = v82 + v83;
	if (v86 <= 0.0)
	{
		v87 = v86 * v68;
		v88 = v86 * v67;
	}
	else
	{
		v87 = v86 * v67;
		v88 = v86 * v68;
	}
	v89 = v116.m128_f32[1] + v88;
	v90 = *(float*)(a1 + 68);
	v91 = v117.m128_f32[1] + v87;
	if (v90 <= 0.0)
	{
		v92 = v90 * v73;
		v93 = v90 * v72;
	}
	else
	{
		v92 = v90 * v72;
		v93 = v90 * v73;
	}
	v94 = v89 + v93;
	v95 = *(float*)(a1 + 84);
	v96 = v91 + v92;
	if (v95 <= 0.0)
	{
		v97 = v95 * v79;
		v98 = v95 * v78;
	}
	else
	{
		v97 = v95 * v78;
		v98 = v95 * v79;
	}
	v99 = v94 + v98;
	v100 = *(float*)(a1 + 56);
	v116.m128_f32[1] = v99;
	v117.m128_f32[1] = v96 + v97;
	if (v100 <= 0.0)
	{
		v101 = v100 * v68;
		v102 = v100 * v67;
	}
	else
	{
		v101 = v100 * v67;
		v102 = v100 * v68;
	}
	v103 = v116.m128_f32[2] + v102;
	v104 = *(float*)(a1 + 72);
	v105 = v117.m128_f32[2] + v101;
	if (v104 <= 0.0)
	{
		v106 = v104 * v73;
		v107 = v104 * v72;
	}
	else
	{
		v106 = v104 * v72;
		v107 = v104 * v73;
	}
	v108 = v103 + v107;
	v109 = *(float*)(a1 + 88);
	v110 = v105 + v106;
	if (v109 <= 0.0)
	{
		v111 = v109 * v79;
		v112 = v109 * v78;
	}
	else
	{
		v111 = v109 * v78;
		v112 = v109 * v79;
	}
	v117.m128_f32[2] = v110 + v111;
	v116.m128_f32[2] = v108 + v112;
	*a2 = v117;
	v63 = v116;
LABEL_62:
	a2[1] = v63;
	return a2;
}
// 14038C900: using guessed type char var_A0[32];
// 14038C900: using guessed type char var_80[24];

