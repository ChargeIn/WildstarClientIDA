#include "../winhttp.h"

//----- (00000001408CBA70) ----------------------------------------------------
void __fastcall sub_1408CBA70(
	float* a1,
	__m128* a2,
	float* a3,
	unsigned __int64 a4,
	float a5,
	float a6,
	float a7,
	float a8,
	float a9,
	float a10,
	unsigned int a11)
{
	__m128 v11; // xmm2
	float v12; // xmm5_4
	float v13; // xmm3_4
	float v14; // xmm4_4
	__m128* v15; // r10
	__m128 v17; // xmm2
	__m128 v18; // xmm5
	unsigned __int64 v19; // rcx
	__m128 v20; // xmm4
	char* v21; // r11
	char* v22; // r8
	__m128 v23; // xmm1
	__m128 v24; // xmm0
	unsigned __int64 v25; // rcx
	float v26; // xmm1_4
	float v27; // xmm8_4
	float v28; // xmm6_4
	float v29; // xmm7_4
	float v30; // xmm2_4
	float v31; // xmm1_4
	float v32; // xmm5_4
	float v33; // xmm3_4
	float v34; // xmm2_4
	float v35; // xmm0_4
	float v36; // xmm1_4
	float v37; // xmm2_4
	float v38; // xmm0_4
	float v39; // xmm1_4
	float v40; // xmm2_4
	float v41; // xmm5_4
	float v42; // xmm2_4
	float v43; // xmm0_4
	float v44; // xmm4_4
	float v45; // xmm0_4
	float v46; // xmm2_4
	float v47; // xmm1_4
	float v48; // xmm3_4
	float v49; // xmm2_4
	float v50; // xmm5_4
	float v51; // xmm2_4
	float v52; // xmm0_4
	float v53; // xmm2_4
	float v54; // xmm0_4
	float v55; // xmm1_4
	float v56; // xmm2_4
	signed __int64 v57; // r11
	signed __int64 v58; // r10
	float v59; // xmm2_4
	float v60; // xmm0_4
	float v61; // xmm1_4

	v12 = a5;
	v13 = a9;
	v14 = a7;
	v15 = a2;
	if (a6 == a5 && a8 == a7 && a10 == a9)
	{
		v11.m128_f32[0] = a5;
		v17 = _mm_shuffle_ps(v11, v11, 0);
		v18 = _mm_shuffle_ps((__m128)LODWORD(a7), (__m128)LODWORD(a7), 0);
		v19 = a4 + 4i64 * a11;
		v20 = _mm_shuffle_ps((__m128)LODWORD(a9), (__m128)LODWORD(a9), 0);
		if (a4 < v19)
		{
			v21 = (char*)((char*)a1 - (char*)a2);
			v22 = (char*)((char*)a3 - (char*)a2);
			do
			{
				v23 = *(__m128*)((char*)v15 + (_QWORD)v21);
				v24 = *v15;
				a4 += 16i64;
				*(__m128*)(a4 - 16) = _mm_add_ps(
					_mm_add_ps(_mm_mul_ps(v23, v17), _mm_mul_ps(v24, v18)),
					_mm_mul_ps(*(__m128*)((char*)++v15 + (_QWORD)v22 - 16), v20));
			} while (a4 < v19);
		}
	}
	else
	{
		v25 = a4 + 4i64 * a11;
		v26 = 1.0 / (float)(int)a11;
		v27 = (float)(a6 - a5) * v26;
		v28 = (float)(a8 - a7) * v26;
		v29 = (float)(a10 - a9) * v26;
		if (a4 < v25)
		{
			if ((4i64 * a11 + 3) / 4 >= 4)
			{
				do
				{
					v30 = v12;
					v31 = v13;
					v32 = v12 + v27;
					v33 = v13 + v29;
					a4 += 16i64;
					v34 = v30 * *a1;
					v35 = v14 * v15->m128_f32[0];
					v36 = v31 * *a3;
					a1 += 4;
					++v15;
					a3 += 4;
					v37 = (float)(v34 + v35) + v36;
					v38 = (float)(v14 + v28) * v15[-1].m128_f32[1];
					v39 = v33 * *(a3 - 3);
					*(float*)(a4 - 16) = v37;
					v40 = v32 * *(a1 - 3);
					v41 = v32 + v27;
					v42 = v40 + v38;
					v43 = (float)(v14 + v28) + v28;
					v44 = v43 + v28;
					v45 = v43 * v15[-1].m128_f32[2];
					v46 = v42 + v39;
					v47 = v33 + v29;
					*(float*)(a4 - 12) = v46;
					v48 = (float)(v33 + v29) + v29;
					v49 = v41 * *(a1 - 2);
					v50 = v41 + v27;
					v51 = v49 + v45;
					v52 = v44;
					v53 = v51 + (float)(v47 * *(a3 - 2));
					v14 = v44 + v28;
					v54 = v52 * v15[-1].m128_f32[3];
					v55 = v48 * *(a3 - 1);
					*(float*)(a4 - 8) = v53;
					v13 = v48 + v29;
					v56 = v50 * *(a1 - 1);
					v12 = v50 + v27;
					*(float*)(a4 - 4) = (float)(v56 + v54) + v55;
				} while ((__int64)a4 < (__int64)(v25 - 12));
			}
			if (a4 < v25)
			{
				v57 = (char*)a1 - (char*)a3;
				v58 = (char*)v15 - (char*)a3;
				do
				{
					v59 = v14;
					v60 = v12;
					v61 = v13;
					a4 += 4i64;
					++a3;
					v12 = v12 + v27;
					v14 = v14 + v28;
					v13 = v13 + v29;
					*(float*)(a4 - 4) = (float)((float)(v59 * *(float*)((char*)a3 + v58 - 4))
						+ (float)(v60 * *(float*)((char*)a3 + v57 - 4)))
						+ (float)(v61 * *(a3 - 1));
				} while (a4 < v25);
			}
		}
	}
}
// 1408CBAE1: variable 'v11' is possibly undefined

