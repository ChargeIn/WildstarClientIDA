#include "../winhttp.h"

//----- (00000001408E92B0) ----------------------------------------------------
float* __fastcall sub_1408E92B0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
	float* v4; // r11
	__int64 v6; // rsi
	__int64 v7; // r10
	float* v8; // rbx
	float* v9; // rdi
	__int64 v10; // rax
	__int64 v11; // rbp
	__m128 v12; // xmm6
	__m128 v13; // xmm7
	unsigned __int64 v14; // rcx
	__int64 v15; // r15
	__int64 v16; // r12
	__int64 v17; // r13
	__int64 v18; // rdx
	__int64 v19; // rbp
	__m128* v20; // r8
	unsigned __int64 v21; // rsi
	__int64 v22; // r10
	float* result; // rax
	__int64 v24; // r9
	__m128 v25; // xmm1
	__m128 v26; // xmm2
	__m128 v27; // xmm0
	__m128 v28; // xmm2
	__m128 v29; // xmm5
	__m128 v30; // xmm0
	__m128 v31; // xmm1
	__m128 v32; // xmm2
	__m128 v33; // xmm5
	__m128 v34; // xmm0
	__m128 v35; // xmm5
	__m128 v36; // xmm1
	__m128 v37; // xmm2
	__m128 v38; // xmm3
	__m128 v39; // xmm0
	__m128 v40; // xmm1
	__m128 v41; // xmm2
	__m128 v42; // xmm3
	__m128 v43; // xmm0
	__m128 v44; // xmm3
	__m128 v45; // xmm2
	__m128 v46; // xmm4
	__m128 v47; // xmm5
	__m128 v48; // xmm3
	__m128 v49; // xmm2
	__m128 v50; // xmm1
	__m128 v51; // xmm2
	__m128 v52; // xmm0
	__int64 v53; // r15
	__int64 v54; // r8
	__int64 v55; // rcx
	__int64 v56; // rdx
	__int64 v57; // rbp
	float v58; // xmm9_4
	float v59; // xmm8_4
	float v60; // xmm4_4
	float v61; // xmm5_4
	float v62; // xmm2_4
	float v63; // xmm7_4
	float v64; // xmm8_4
	float v65; // xmm5_4
	float v66; // xmm6_4
	float v67; // xmm9_4
	float v68; // xmm4_4
	float v69; // xmm5_4
	float v70; // xmm3_4
	float v71; // xmm1_4
	float v72; // xmm2_4
	float v73; // xmm3_4
	float v74; // xmm7_4
	float v75; // xmm0_4
	float v76; // xmm1_4
	float v77; // xmm2_4
	float v78; // xmm3_4

	v4 = *(float**)(a3 + 72);
	v6 = 2 * a4;
	v7 = 3 * a4;
	v8 = v4;
	v9 = v4;
	v10 = 2 * a2;
	v11 = 3 * a2;
	if (a4 < 2)
	{
		v53 = *(int*)(a3 + 4);
		v54 = 16 * a2;
		result = (float*)(a1 + 4);
		v55 = 2 * a4;
		v56 = 8 * a2;
		v57 = 8 * v11;
		do
		{
			v58 = (float)(*v4 * result[v55 - 1]) - (float)(v4[1] * result[v55]);
			v59 = (float)(*v4 * result[v55]) + (float)(v4[1] * result[v55 - 1]);
			v60 = (float)(*v9 * result[2 * v7 - 1]) - (float)(v9[1] * result[2 * v7]);
			v61 = (float)(*v9 * result[2 * v7]) + (float)(v9[1] * result[2 * v7 - 1]);
			v62 = *(result - 1);
			v63 = v61 + v59;
			v64 = v59 - v61;
			v65 = v8[1];
			v66 = v60 + v58;
			v67 = v58 - v60;
			v68 = (float)(*v8 * result[2 * v6 - 1]) - (float)(v65 * result[2 * v6]);
			v69 = (float)(v65 * result[2 * v6 - 1]) + (float)(*v8 * result[2 * v6]);
			v70 = *result;
			v71 = v62 + v68;
			v72 = v62 - v68;
			*result = *result + v69;
			*(result - 1) = v71;
			result[2 * v6 - 1] = v71 - v66;
			v73 = v70 - v69;
			result[2 * v6] = *result - v63;
			v74 = v63 + *result;
			*(result - 1) = v66 + *(result - 1);
			*result = v74;
			if (v53)
			{
				v75 = v72 - v64;
				v76 = v73 + v67;
				v77 = v72 + v64;
				v78 = v73 - v67;
			}
			else
			{
				v75 = v72 + v64;
				v76 = v73 - v67;
				v77 = v72 - v64;
				v78 = v73 + v67;
			}
			result[v55 - 1] = v75;
			result[v55] = v76;
			result[2 * v7] = v78;
			v4 = (float*)((char*)v4 + v56);
			v8 = (float*)((char*)v8 + v54);
			v9 = (float*)((char*)v9 + v57);
			result[2 * v7 - 1] = v77;
			result += 2;
			--a4;
		} while (a4);
	}
	else
	{
		v12 = (__m128)xmmword_1409A9FA0;
		v13 = (__m128)xmmword_1409B44B0;
		v14 = a4 >> 1;
		if (*(_DWORD*)(a3 + 4))
		{
			v12 = (__m128)xmmword_1409B44B0;
			v13 = (__m128)xmmword_1409A9FA0;
		}
		v15 = 2 * a2;
		v16 = 6 * a2;
		v17 = 4 * a2;
		v18 = 16 * a2;
		v19 = 16 * v11;
		v20 = (__m128*)(a1 + 8 * a4);
		v21 = a4;
		v22 = a4;
		result = (float*)(16 * v10);
		v24 = -(__int64)a4;
		do
		{
			v25 = *v20;
			v26 = *(__m128*)v4;
			v27 = *(__m128*) & v4[v15];
			++v20;
			v4 = (float*)((char*)v4 + v18);
			v28 = _mm_movelh_ps(v26, v27);
			v29 = _mm_shuffle_ps(v25, v25, 245);
			v30 = _mm_shuffle_ps(v28, v28, 177);
			v31 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 160), v28);
			v32 = *(__m128*)v9;
			v33 = _mm_mul_ps(_mm_mul_ps(v29, (__m128)xmmword_1409B44B0), v30);
			v34 = *(__m128*) & v9[v16];
			v9 = (float*)((char*)v9 + v19);
			v35 = _mm_add_ps(v33, v31);
			v36 = v20[v22 - 1];
			v37 = _mm_movelh_ps(v32, v34);
			v38 = _mm_shuffle_ps(v36, v36, 245);
			v39 = _mm_shuffle_ps(v37, v37, 177);
			v40 = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 160), v37);
			v41 = *(__m128*)v8;
			v42 = _mm_mul_ps(_mm_mul_ps(v38, (__m128)xmmword_1409B44B0), v39);
			v43 = *(__m128*) & v8[v17];
			v8 = (float*)((char*)v8 + (_QWORD)result);
			v44 = _mm_add_ps(v42, v40);
			v45 = _mm_movelh_ps(v41, v43);
			v46 = _mm_add_ps(v44, v35);
			v47 = _mm_sub_ps(v35, v44);
			v48 = _mm_add_ps(
				_mm_mul_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(*(__m128*)((char*)v20 + 8 * v21 - 16), *(__m128*)((char*)v20 + 8 * v21 - 16), 245),
						(__m128)xmmword_1409B44B0),
					_mm_shuffle_ps(v45, v45, 177)),
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)((char*)v20 + 8 * v21 - 16), *(__m128*)((char*)v20 + 8 * v21 - 16), 160),
					v45));
			v49 = *(__m128*)((char*)v20 + 8 * v24 - 16);
			v50 = _mm_add_ps(v49, v48);
			v51 = _mm_sub_ps(v49, v48);
			*(__m128*)((char*)v20 + 8 * v21 - 16) = _mm_sub_ps(v50, v46);
			v52 = _mm_shuffle_ps(v47, v47, 177);
			*(__m128*)((char*)v20 + 8 * v24 - 16) = _mm_add_ps(v50, v46);
			v20[-1] = _mm_add_ps(_mm_mul_ps(v52, v12), v51);
			v20[v22 - 1] = _mm_add_ps(_mm_mul_ps(v52, v13), v51);
			--v14;
		} while (v14);
	}
	return result;
}
// 1409A9FA0: using guessed type __int128 xmmword_1409A9FA0;
// 1409B44B0: using guessed type __int128 xmmword_1409B44B0;

