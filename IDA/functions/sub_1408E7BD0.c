//----- (00000001408E7BD0) ----------------------------------------------------
__int64 __fastcall sub_1408E7BD0(float* a1, float* a2, unsigned int a3, float a4, float a5)
{
	float v6; // xmm6_4
	float v7; // xmm4_4
	__m128 v8; // xmm2
	float v9; // xmm7_4
	float v10; // xmm5_4
	__m128 v11; // xmm2
	__int64 result; // rax
	float* v13; // r8
	float v14; // xmm3_4
	float v15; // xmm2_4
	float v16; // xmm4_4
	float v17; // xmm1_4
	float v18; // xmm3_4
	float v19; // xmm2_4
	float v20; // xmm3_4
	float v21; // xmm1_4
	float v22; // xmm4_4
	float v23; // xmm2_4
	float v24; // xmm0_4
	float v25; // xmm4_4
	float v26; // xmm1_4
	float v27; // xmm3_4
	float v28; // xmm2_4
	signed __int64 v29; // r9
	float v30; // xmm3_4
	float v31; // xmm2_4
	float v32; // xmm0_4
	float* v33; // r8
	float v34; // xmm5_4
	float v35; // xmm6_4
	float v36; // xmm3_4
	float v37; // xmm2_4
	float v38; // xmm0_4
	float v39; // xmm3_4
	float v40; // xmm1_4
	float v41; // xmm2_4
	float v42; // xmm0_4
	float v43; // xmm4_4
	float v44; // xmm7_4
	float v45; // xmm3_4
	float v46; // xmm2_4
	float v47; // xmm3_4
	float v48; // xmm1_4
	float v49; // xmm2_4
	float v50; // xmm0_4
	float v51; // xmm4_4
	float v52; // xmm3_4
	float v53; // xmm2_4
	float v54; // xmm3_4
	float v55; // xmm1_4
	float v56; // xmm2_4
	float v57; // xmm7_4
	float v58; // xmm0_4
	float v59; // xmm4_4
	float v60; // xmm3_4
	float v61; // xmm2_4
	float v62; // xmm3_4
	float v63; // xmm1_4
	float v64; // xmm2_4
	float v65; // xmm7_4
	float v66; // xmm0_4
	float v67; // xmm1_4
	float v68; // xmm3_4
	float v69; // xmm3_4
	float v70; // xmm2_4
	float v71; // xmm0_4
	float v72; // xmm3_4
	float v73; // xmm1_4
	float v74; // xmm0_4
	float v75; // xmm2_4

	v6 = 0.0;
	v8 = (__m128)0x3F800000u;
	v7 = (float)((float)(a4 * 0.0055555557) * 0.29289401) + 0.70710599;
	v8.m128_f32[0] = 1.0 - (float)(v7 * v7);
	if (v8.m128_f32[0] <= 0.0)
		v9 = 0.0;
	else
		LODWORD(v9) = _mm_sqrt_ps(v8).m128_u32[0];
	v11 = (__m128)0x3F800000u;
	v10 = (float)((float)(a5 * 0.0055555557) * 0.29289401) + 0.70710599;
	v11.m128_f32[0] = 1.0 - (float)(v10 * v10);
	if (v11.m128_f32[0] > 0.0)
		LODWORD(v6) = _mm_sqrt_ps(v11).m128_u32[0];
	if (v10 == v7 && v6 == v9)
	{
		result = a3;
		v13 = &a1[a3];
		if (a1 < v13)
		{
			result = ((char*)v13 - (char*)a1 + 3) / 4;
			if (result >= 4)
			{
				result = (__int64)(v13 - 3);
				do
				{
					v14 = *a1;
					v15 = *a2;
					v16 = a1[1];
					a1 += 4;
					a2 += 4;
					v17 = (float)(v15 * v6) + (float)(v14 * v10);
					v18 = (float)(v14 * v6) + (float)(v15 * v10);
					v19 = *(a2 - 3);
					*(a1 - 4) = v17;
					*(a2 - 4) = v18;
					v20 = *(a1 - 2);
					v21 = (float)(v19 * v6) + (float)(v16 * v10);
					v22 = (float)(v16 * v6) + (float)(v19 * v10);
					v23 = *(a2 - 2);
					v24 = v20 * v10;
					*(a1 - 3) = v21;
					*(a2 - 3) = v22;
					v25 = *(a1 - 1);
					v26 = v23;
					v27 = (float)(v20 * v6) + (float)(v23 * v10);
					v28 = *(a2 - 1);
					*(a2 - 2) = v27;
					*(a1 - 2) = (float)(v26 * v6) + v24;
					*(a2 - 1) = (float)(v25 * v6) + (float)(v28 * v10);
					*(a1 - 1) = (float)(v28 * v6) + (float)(v25 * v10);
				} while ((__int64)a1 < result);
			}
			if (a1 < v13)
			{
				v29 = (char*)a2 - (char*)a1;
				do
				{
					v30 = *a1;
					v31 = *(float*)((char*)a1++ + v29);
					*(a1 - 1) = (float)(v31 * v6) + (float)(v30 * v10);
					*(float*)((char*)a1 + v29 - 4) = (float)(v30 * v6) + (float)(v31 * v10);
				} while (a1 < v13);
			}
		}
	}
	else
	{
		v32 = (float)(int)a3;
		result = a3;
		v33 = &a1[a3];
		v34 = (float)(v10 - v7) * (float)(1.0 / v32);
		v35 = (float)(v6 - v9) * (float)(1.0 / v32);
		if (a1 < v33)
		{
			result = ((char*)v33 - (char*)a1 + 3) / 4;
			if (result >= 4)
			{
				result = (__int64)(v33 - 3);
				do
				{
					v36 = *a1;
					v37 = *a2;
					a1 += 4;
					a2 += 4;
					v38 = v36;
					v39 = v36 * v9;
					v40 = v37 * v9;
					v41 = v37 * v7;
					v42 = v38 * v7;
					v43 = v7 + v34;
					v44 = v9 + v35;
					v45 = v39 + v41;
					v46 = *(a2 - 3);
					*(a2 - 4) = v45;
					v47 = *(a1 - 3);
					*(a1 - 4) = v40 + v42;
					v48 = v46;
					v49 = v46 * v43;
					v50 = v47 * v43;
					v51 = v43 + v34;
					v52 = (float)(v47 * v44) + v49;
					v53 = *(a2 - 2);
					*(a2 - 3) = v52;
					v54 = *(a1 - 2);
					*(a1 - 3) = (float)(v48 * v44) + v50;
					v55 = v53;
					v56 = v53 * v51;
					v57 = v44 + v35;
					v58 = v54 * v51;
					v59 = v51 + v34;
					v60 = (float)(v54 * v57) + v56;
					v61 = *(a2 - 1);
					*(a2 - 2) = v60;
					v62 = *(a1 - 1);
					*(a1 - 2) = (float)(v55 * v57) + v58;
					v63 = v61;
					v64 = v61 * v59;
					v65 = v57 + v35;
					v66 = v62 * v59;
					v7 = v59 + v34;
					v67 = (float)(v63 * v65) + v66;
					v68 = (float)(v62 * v65) + v64;
					v9 = v65 + v35;
					*(a1 - 1) = v67;
					*(a2 - 1) = v68;
				} while ((__int64)a1 < result);
			}
			for (; a1 < v33; *(a2 - 1) = v72 + v75)
			{
				v69 = *a1;
				v70 = *a2;
				++a1;
				++a2;
				v71 = v69;
				v72 = v69 * v9;
				v73 = v70 * v9;
				v74 = v71 * v7;
				v75 = v70 * v7;
				v7 = v7 + v34;
				v9 = v9 + v35;
				*(a1 - 1) = v73 + v74;
			}
		}
	}
	return result;
}

