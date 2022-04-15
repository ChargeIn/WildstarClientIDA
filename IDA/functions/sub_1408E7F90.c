#include "../winhttp.h"

//----- (00000001408E7F90) ----------------------------------------------------
void __fastcall sub_1408E7F90(float* a1, float* a2, __int64 a3, __int64 a4, unsigned int a5, float a6, float a7)
{
	float v7; // xmm6_4
	float* v9; // r10
	float v10; // xmm4_4
	__m128 v11; // xmm2
	float v12; // xmm7_4
	float v13; // xmm5_4
	__m128 v14; // xmm2
	unsigned __int64 v15; // rcx
	float v16; // xmm3_4
	float v17; // xmm2_4
	float v18; // xmm4_4
	float v19; // xmm1_4
	float v20; // xmm3_4
	float v21; // xmm2_4
	float v22; // xmm3_4
	float v23; // xmm1_4
	float v24; // xmm4_4
	float v25; // xmm2_4
	float v26; // xmm0_4
	float v27; // xmm4_4
	float v28; // xmm1_4
	float v29; // xmm3_4
	float v30; // xmm2_4
	signed __int64 v31; // r11
	__int64 v32; // r8
	__int64 v33; // r9
	float v34; // xmm3_4
	float v35; // xmm2_4
	unsigned __int64 v36; // rcx
	float v37; // xmm1_4
	float v38; // xmm5_4
	float v39; // xmm6_4
	float v40; // xmm3_4
	float v41; // xmm2_4
	float v42; // xmm0_4
	float v43; // xmm3_4
	float v44; // xmm1_4
	float v45; // xmm2_4
	float v46; // xmm0_4
	float v47; // xmm4_4
	float v48; // xmm7_4
	float v49; // xmm3_4
	float v50; // xmm2_4
	float v51; // xmm3_4
	float v52; // xmm1_4
	float v53; // xmm2_4
	float v54; // xmm0_4
	float v55; // xmm4_4
	float v56; // xmm3_4
	float v57; // xmm2_4
	float v58; // xmm3_4
	float v59; // xmm1_4
	float v60; // xmm2_4
	float v61; // xmm7_4
	float v62; // xmm0_4
	float v63; // xmm4_4
	float v64; // xmm3_4
	float v65; // xmm2_4
	float v66; // xmm3_4
	float v67; // xmm1_4
	float v68; // xmm2_4
	float v69; // xmm7_4
	float v70; // xmm0_4
	float v71; // xmm1_4
	float v72; // xmm3_4
	char* v73; // r11
	__int64 v74; // r9
	float v75; // xmm3_4
	float v76; // xmm2_4
	float v77; // xmm0_4
	float v78; // xmm1_4
	float v79; // xmm3_4
	float v80; // xmm2_4
	float v81; // xmm1_4
	float v82; // xmm0_4

	v7 = 0.0;
	v11 = (__m128)0x3F800000u;
	v9 = a1;
	v10 = (float)((float)(a6 * 0.0055555557) * 0.29289401) + 0.70710599;
	v11.m128_f32[0] = 1.0 - (float)(v10 * v10);
	if (v11.m128_f32[0] <= 0.0)
		v12 = 0.0;
	else
		LODWORD(v12) = _mm_sqrt_ps(v11).m128_u32[0];
	v14 = (__m128)0x3F800000u;
	v13 = (float)((float)(a7 * 0.0055555557) * 0.29289401) + 0.70710599;
	v14.m128_f32[0] = 1.0 - (float)(v13 * v13);
	if (v14.m128_f32[0] > 0.0)
		LODWORD(v7) = _mm_sqrt_ps(v14).m128_u32[0];
	if (v13 == v10 && v7 == v12)
	{
		v15 = (unsigned __int64)&a1[a5];
		if ((unsigned __int64)v9 < v15)
		{
			if ((__int64)(v15 - (_QWORD)v9 + 3) / 4 >= 4)
			{
				do
				{
					v16 = *v9;
					v17 = *a2;
					v18 = v9[1];
					v9 += 4;
					a3 += 16i64;
					a2 += 4;
					a4 += 16i64;
					v19 = (float)(v17 * v7) + (float)(v16 * v13);
					v20 = (float)(v16 * v7) + (float)(v17 * v13);
					v21 = *(a2 - 3);
					*(float*)(a3 - 16) = v19;
					*(float*)(a4 - 16) = v20;
					v22 = *(v9 - 2);
					v23 = (float)(v21 * v7) + (float)(v18 * v13);
					v24 = (float)(v18 * v7) + (float)(v21 * v13);
					v25 = *(a2 - 2);
					v26 = v22 * v13;
					*(float*)(a3 - 12) = v23;
					*(float*)(a4 - 12) = v24;
					v27 = *(v9 - 1);
					v28 = v25;
					v29 = (float)(v22 * v7) + (float)(v25 * v13);
					v30 = *(a2 - 1);
					*(float*)(a4 - 8) = v29;
					*(float*)(a3 - 8) = (float)(v28 * v7) + v26;
					*(float*)(a4 - 4) = (float)(v27 * v7) + (float)(v30 * v13);
					*(float*)(a3 - 4) = (float)(v30 * v7) + (float)(v27 * v13);
				} while ((__int64)v9 < (__int64)(v15 - 12));
			}
			if ((unsigned __int64)v9 < v15)
			{
				v31 = (char*)a2 - (char*)v9;
				v32 = a3 - (_QWORD)v9;
				v33 = a4 - (_QWORD)v9;
				do
				{
					v34 = *v9;
					v35 = *(float*)((char*)v9++ + v31);
					*(float*)((char*)v9 + v32 - 4) = (float)(v35 * v7) + (float)(v34 * v13);
					*(float*)((char*)v9 + v33 - 4) = (float)(v34 * v7) + (float)(v35 * v13);
				} while ((unsigned __int64)v9 < v15);
			}
		}
	}
	else
	{
		v36 = (unsigned __int64)&a1[a5];
		v37 = 1.0 / (float)(int)a5;
		v38 = (float)(v13 - v10) * v37;
		v39 = (float)(v7 - v12) * v37;
		if ((unsigned __int64)v9 < v36)
		{
			if ((4i64 * a5 + 3) / 4 >= 4)
			{
				do
				{
					v40 = *v9;
					v41 = *a2;
					v9 += 4;
					a3 += 16i64;
					a2 += 4;
					a4 += 16i64;
					v42 = v40;
					v43 = v40 * v12;
					v44 = v41 * v12;
					v45 = v41 * v10;
					v46 = v42 * v10;
					v47 = v10 + v38;
					v48 = v12 + v39;
					v49 = v43 + v45;
					v50 = *(a2 - 3);
					*(float*)(a4 - 16) = v49;
					v51 = *(v9 - 3);
					*(float*)(a3 - 16) = v44 + v46;
					v52 = v50;
					v53 = v50 * v47;
					v54 = v51 * v47;
					v55 = v47 + v38;
					v56 = (float)(v51 * v48) + v53;
					v57 = *(a2 - 2);
					*(float*)(a4 - 12) = v56;
					v58 = *(v9 - 2);
					*(float*)(a3 - 12) = (float)(v52 * v48) + v54;
					v59 = v57;
					v60 = v57 * v55;
					v61 = v48 + v39;
					v62 = v58 * v55;
					v63 = v55 + v38;
					v64 = (float)(v58 * v61) + v60;
					v65 = *(a2 - 1);
					*(float*)(a4 - 8) = v64;
					v66 = *(v9 - 1);
					*(float*)(a3 - 8) = (float)(v59 * v61) + v62;
					v67 = v65;
					v68 = v65 * v63;
					v69 = v61 + v39;
					v70 = v66 * v63;
					v10 = v63 + v38;
					v71 = (float)(v67 * v69) + v70;
					v72 = (float)(v66 * v69) + v68;
					v12 = v69 + v39;
					*(float*)(a3 - 4) = v71;
					*(float*)(a4 - 4) = v72;
				} while ((__int64)v9 < (__int64)(v36 - 12));
			}
			if ((unsigned __int64)v9 < v36)
			{
				v73 = (char*)a2 - a3;
				v74 = a4 - a3;
				do
				{
					v75 = *v9;
					v76 = *(float*)&v73[a3];
					++v9;
					a3 += 4i64;
					v77 = v75;
					v78 = v76;
					v79 = v75 * v12;
					v80 = v76 * v10;
					v81 = v78 * v12;
					v82 = v77 * v10;
					v10 = v10 + v38;
					v12 = v12 + v39;
					*(float*)(a3 - 4) = v81 + v82;
					*(float*)(v74 + a3 - 4) = v79 + v80;
				} while ((unsigned __int64)v9 < v36);
			}
		}
	}
}

