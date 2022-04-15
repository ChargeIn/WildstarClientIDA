#include "../winhttp.h"

//----- (00000001408B0BD0) ----------------------------------------------------
float* __fastcall sub_1408B0BD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, float a6, char a7, __int64 a8)
{
	unsigned int v8; // r11d
	unsigned int v9; // edi
	int v12; // ebx
	unsigned int v15; // r10d
	__int64 v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rcx
	float v19; // xmm5_4
	__int64 v20; // r8
	unsigned int v21; // eax
	__int64 v22; // r9
	float v23; // xmm2_4
	float v24; // xmm1_4
	float v25; // xmm2_4
	__int64 v26; // rdx
	__int64 v27; // rcx
	unsigned int v28; // r9d
	__int64 v29; // r10
	__int64 v30; // rcx
	__int64 v31; // rdx
	unsigned int v32; // eax
	__int64 v33; // r8
	int v34; // eax
	__int64 v35; // rcx
	int* v36; // rdx
	__int64 v37; // r8
	int v38; // eax
	float* result; // rax
	float v40; // xmm1_4
	float v41; // xmm5_4
	float v42; // xmm0_4
	__int64 v43; // r11
	float v44; // xmm5_4
	__int64 v45; // r8
	__int64 v46; // r9
	float* v47; // rcx
	float* v48; // rdx
	__int64 v49; // r10
	float v50; // xmm0_4
	float v51; // xmm2_4
	float v52; // xmm2_4
	float v53; // xmm1_4
	float v54; // xmm0_4
	float v55; // xmm2_4
	float v56; // xmm2_4
	float v57; // xmm1_4
	float v58; // xmm0_4
	float v59; // xmm2_4
	float v60; // xmm2_4
	float v61; // xmm1_4
	float v62; // xmm0_4
	float v63; // xmm2_4
	float v64; // xmm2_4
	__int64 v65; // rsi
	float* v66; // rcx
	__int64 v67; // rdx
	float v68; // xmm0_4
	float v69; // xmm2_4
	float v70; // xmm2_4

	v8 = *(_DWORD*)(a1 + 8);
	v9 = 0;
	v12 = (v8 >> 1) + 1;
	v15 = 0;
	v16 = 0i64;
	if (v12 >= 4)
	{
		v17 = a2 - a3;
		v18 = a3 + 8;
		v19 = 1.0 - a6;
		v20 = a8 - a3;
		v21 = (((v8 >> 1) - 3) >> 2) + 1;
		v15 = 4 * v21;
		v22 = v21;
		v16 = 4i64 * v21;
		do
		{
			v18 += 32i64;
			v23 = v19 * *(float*)(v17 + v18 - 32);
			*(float*)(v20 + v18 - 40) = (float)(v19 * *(float*)(v17 + v18 - 40)) + (float)(a6 * *(float*)(v18 - 40));
			v24 = v19 * *(float*)(v17 + v18 - 24);
			*(float*)(v20 + v18 - 32) = v23 + (float)(a6 * *(float*)(v18 - 32));
			v25 = v19 * *(float*)(v17 + v18 - 16);
			*(float*)(v20 + v18 - 24) = v24 + (float)(a6 * *(float*)(v18 - 24));
			*(float*)(v20 + v18 - 16) = v25 + (float)(a6 * *(float*)(v18 - 16));
			--v22;
		} while (v22);
	}
	if (v15 < v12)
	{
		v26 = v12 - v15;
		v27 = a3 + 8 * v16;
		do
		{
			v27 += 8i64;
			*(float*)(v27 + a8 - a3 - 8) = (float)((float)(1.0 - a6) * *(float*)(v27 + a2 - a3 - 8))
				+ (float)(a6 * *(float*)(v27 - 8));
			--v26;
		} while (v26);
	}
	if (a7)
	{
		v28 = 0;
		v29 = 0i64;
		if (v12 >= 4)
		{
			v30 = a4 + 8;
			v31 = a2 + 12;
			v32 = (((v8 >> 1) - 3) >> 2) + 1;
			v33 = v32;
			v28 = 4 * v32;
			v29 = 4i64 * v32;
			do
			{
				v34 = *(_DWORD*)(v31 - 8);
				v30 += 16i64;
				v31 += 32i64;
				*(_DWORD*)(v30 - 24) = v34;
				*(_DWORD*)(v30 - 20) = *(_DWORD*)(v31 - 32);
				*(_DWORD*)(v30 - 16) = *(_DWORD*)(v31 - 24);
				*(_DWORD*)(v30 - 12) = *(_DWORD*)(v31 - 16);
				--v33;
			} while (v33);
		}
		if (v28 < v12)
		{
			v35 = a4 + 4 * v29;
			v36 = (int*)(a2 + 4 + 8 * v29);
			v37 = v12 - v28;
			do
			{
				v38 = *v36;
				v35 += 4i64;
				v36 += 2;
				*(_DWORD*)(v35 - 4) = v38;
				--v37;
			} while (v37);
		}
	}
	result = (float*)(unsigned int)a5;
	v40 = 0.0;
	v41 = (double)a5 * 6.283185482025146;
	v42 = (float)(int)v8;
	v43 = 0i64;
	v44 = v41 / v42;
	if (v12 >= 4)
	{
		v45 = a8 - a3;
		v46 = a2 - a3;
		result = (float*)(((unsigned int)(v12 - 4) >> 2) + 1);
		v47 = (float*)(a4 + 8);
		v48 = (float*)(a3 + 4);
		v9 = 4 * (_DWORD)result;
		v43 = 4i64 * (unsigned int)result;
		v49 = (unsigned int)result;
		do
		{
			v50 = *(v47 - 2);
			v51 = *v48 - *(float*)((char*)v48 + v46);
			*(float*)((char*)v48 + v45) = v50;
			v52 = (float)((float)(v51 - v40) + v40) + v50;
			*(v47 - 2) = v52;
			if (v52 >= 3.1415927)
			{
				v52 = v52 + -6.2831855;
				*(v47 - 2) = v52;
			}
			if (v52 < -3.1415927)
				*(v47 - 2) = v52 + 6.2831855;
			v53 = v40 + v44;
			if (v53 >= 6.2831855)
				v53 = v53 + -6.2831855;
			v54 = *(v47 - 1);
			v55 = v48[2] - *(float*)((char*)v48 + v46 + 8);
			*(float*)((char*)v48 + v45 + 8) = v54;
			v56 = (float)((float)(v55 - v53) + v53) + v54;
			*(v47 - 1) = v56;
			if (v56 >= 3.1415927)
			{
				v56 = v56 + -6.2831855;
				*(v47 - 1) = v56;
			}
			if (v56 < -3.1415927)
				*(v47 - 1) = v56 + 6.2831855;
			v57 = v53 + v44;
			if (v57 >= 6.2831855)
				v57 = v57 + -6.2831855;
			v58 = *v47;
			v59 = v48[4] - *(float*)((char*)v48 + v46 + 16);
			*(float*)((char*)v48 + v45 + 16) = *v47;
			v60 = (float)((float)(v59 - v57) + v57) + v58;
			*v47 = v60;
			if (v60 >= 3.1415927)
			{
				v60 = v60 + -6.2831855;
				*v47 = v60;
			}
			if (v60 < -3.1415927)
				*v47 = v60 + 6.2831855;
			v61 = v57 + v44;
			if (v61 >= 6.2831855)
				v61 = v61 + -6.2831855;
			v62 = v47[1];
			v63 = v48[6] - *(float*)((char*)v48 + v46 + 24);
			*(float*)((char*)v48 + v45 + 24) = v62;
			v64 = (float)((float)(v63 - v61) + v61) + v62;
			v47[1] = v64;
			if (v64 >= 3.1415927)
			{
				v64 = v64 + -6.2831855;
				v47[1] = v64;
			}
			if (v64 < -3.1415927)
				v47[1] = v64 + 6.2831855;
			v40 = v61 + v44;
			if (v40 >= 6.2831855)
				v40 = v40 + -6.2831855;
			v47 += 4;
			v48 += 8;
			--v49;
		} while (v49);
	}
	if (v9 < v12)
	{
		v65 = a2 - a3;
		result = (float*)(a4 + 4 * v43);
		v66 = (float*)(a3 + 4 + 8 * v43);
		v67 = v12 - v9;
		do
		{
			v68 = *result;
			v69 = *v66 - *(float*)((char*)v66 + v65);
			*(float*)((char*)v66 + a8 - a3) = *result;
			v70 = (float)((float)(v69 - v40) + v40) + v68;
			*result = v70;
			if (v70 >= 3.1415927)
			{
				v70 = v70 + -6.2831855;
				*result = v70;
			}
			if (v70 < -3.1415927)
				*result = v70 + 6.2831855;
			v40 = v40 + v44;
			if (v40 >= 6.2831855)
				v40 = v40 + -6.2831855;
			v66 += 2;
			++result;
			--v67;
		} while (v67);
	}
	*(_WORD*)(a1 + 12) = 257;
	return result;
}

