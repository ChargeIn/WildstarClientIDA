#include "../winhttp.h"

//----- (00000001408ECE70) ----------------------------------------------------
__int16 __fastcall sub_1408ECE70(
	int a1,
	int a2,
	int a3,
	int a4,
	__int64 a5,
	__int64 a6,
	__int64 a7,
	__int64 a8,
	_WORD* a9,
	int a10,
	int a11,
	int a12)
{
	int v13; // eax
	int v14; // eax
	__int64 v15; // rdi
	unsigned __int64 v16; // r11
	__int64 v17; // rbx
	int v18; // edx
	int v19; // r14d
	int v20; // r14d
	int v21; // esi
	int v22; // ebp
	int v23; // r15d
	int v25; // ecx
	unsigned __int64 v26; // r9
	float v27; // xmm0_4
	float v28; // xmm0_4
	int v29; // r9d
	int v30; // r8d
	int v31; // ebp
	int v32; // r15d
	__int64 v33; // rdx
	unsigned __int64 v34; // r13
	float* v35; // r11
	__int64 v36; // rbx
	float* v37; // rdi
	float* i; // r12
	float v39; // xmm1_4
	float v40; // xmm0_4
	int v41; // r8d
	int v42; // r8d
	int v43; // ebp
	float* v44; // r13
	int v45; // r15d
	__int64 v46; // rdx
	__int64 v47; // rax
	float* v48; // r11
	float* v49; // rbx
	float* v50; // rdi
	float* v51; // r9
	int v52; // r14d
	__int64 v53; // r12
	int v54; // r8d
	_WORD* v55; // r10
	int v56; // r8d
	_WORD* v57; // r10
	int v58; // r8d
	_WORD* v59; // r10
	int v60; // r8d
	__int64 v61; // r14
	signed __int64 v62; // rdi
	float v63; // xmm1_4
	int v64; // r8d
	int v65; // eax
	__int64 v66; // rax
	float* v67; // rbx
	float* v68; // r9
	int v69; // edi
	__int64 v70; // r11
	_WORD* v71; // r10
	int v72; // r8d
	_WORD* v73; // r10
	int v74; // r8d
	_WORD* v75; // r10
	float v76; // xmm0_4
	float v77; // xmm0_4
	__int64 v79; // [rsp+50h] [rbp+28h]

	if (!a4 || (v13 = a2, !a3))
		v13 = a1;
	v79 = a5 + 4i64 * (v13 >> 1);
	v14 = a2;
	if (!a3)
		v14 = a1;
	v15 = a8;
	v16 = a6 + 4i64 * (v14 >> 2);
	if (a4 && a3)
		v17 = a8 + 4 * ((__int64)a2 >> 1);
	else
		v17 = a7 + 4 * ((__int64)a1 >> 1);
	if ((a4 && a3 || (v15 = a7, a8 = a7, a3)) && !a4)
		v18 = (a2 >> 2) - (a1 >> 2);
	else
		v18 = 0;
	if (!a3 || (v19 = a2, !a4))
		v19 = a1;
	v20 = v19 >> 2;
	if (a3 || !a4)
		v21 = 0;
	else
		v21 = (a2 >> 2) - (a1 >> 2);
	v22 = a12;
	v23 = a11;
	if (v18)
	{
		v25 = v18;
		if (a12 < v18)
			v25 = a12;
		if (a11 < v18)
			v18 = a11;
		v22 = a12 - v25;
		v23 = a11 - v18;
		v26 = v16 - 4i64 * v25;
		v16 -= 4i64 * v18;
		if (v16 > v26)
		{
			do
			{
				v27 = *(float*)(v16 - 4);
				v16 -= 4i64;
				v28 = v27 * 0.001953125;
				*a9 = (int)v28
					- ((int)v28 >= -32768 ? 0 : (int)v28 + 0x8000)
					- (((int)v28 - 0x7FFF) & (((int)v28 <= 0x7FFF) - 1));
				a9 += a10;
			} while (v16 > v26);
			v15 = a8;
		}
	}
	v29 = v20;
	if (v22 < v20)
		v29 = v22;
	v30 = v20;
	if (v23 < v20)
		v30 = v23;
	v31 = v22 - v29;
	v32 = v23 - v30;
	v33 = 4i64 * v30;
	v34 = v16 - 4i64 * v29;
	v35 = (float*)(v16 - v33);
	v36 = v17 - v33;
	v37 = (float*)(v33 + v15);
	for (i = (float*)(v79 + -8i64 * v30); (unsigned __int64)v35 > v34; a9 += a10)
	{
		v39 = *v37;
		v40 = *(float*)(v36 - 4);
		v36 -= 4i64;
		i -= 2;
		--v35;
		++v37;
		v41 = (int)(float)((float)((float)(v39 * *i) + (float)(v40 * *v35)) * 0.001953125);
		*a9 = v41 - (v41 >= -32768 ? 0 : v41 + 0x8000) - ((v41 - 0x7FFF) & ((v41 <= 0x7FFF) - 1));
	}
	v42 = v20;
	if (v31 < v20)
		v42 = v31;
	if (v32 < v20)
		v20 = v32;
	v43 = v31 - v42;
	v44 = &v35[v42];
	v45 = v32 - v20;
	v46 = v20;
	LOWORD(v47) = 2 * v20;
	v48 = &v35[v46];
	v49 = (float*)(v36 - v46 * 4);
	v50 = &v37[v46];
	v51 = &i[2 * v20];
	if (v48 < v44)
	{
		v47 = ((char*)v44 - (char*)v48 + 3) / 4;
		if (v47 < 4)
		{
			v52 = a10;
		}
		else
		{
			v52 = a10;
			v53 = a10;
			do
			{
				v54 = (int)(float)((float)((float)(*(v49 - 1) * *v48) - (float)(*v51 * *v50)) * 0.001953125);
				*a9 = v54 - (v54 >= -32768 ? 0 : v54 + 0x8000) - ((v54 - 0x7FFF) & ((v54 <= 0x7FFF) - 1));
				v55 = &a9[v53];
				v56 = (int)(float)((float)((float)(*(v49 - 2) * v48[1]) - (float)(v50[1] * v51[2])) * 0.001953125);
				*v55 = v56 - (v56 >= -32768 ? 0 : v56 + 0x8000) - ((v56 - 0x7FFF) & ((v56 <= 0x7FFF) - 1));
				v57 = &v55[v53];
				v58 = (int)(float)((float)((float)(*(v49 - 3) * v48[2]) - (float)(v50[2] * v51[4])) * 0.001953125);
				v49 -= 4;
				*v57 = v58 - (v58 >= -32768 ? 0 : v58 + 0x8000) - ((v58 - 0x7FFF) & ((v58 <= 0x7FFF) - 1));
				v59 = &v57[v53];
				v60 = (int)(float)((float)((float)(v48[3] * *v49) - (float)(v50[3] * v51[6])) * 0.001953125);
				v48 += 4;
				v51 += 8;
				v50 += 4;
				LOWORD(v47) = (v60 - 0x7FFF) & ((v60 <= 0x7FFF) - 1);
				*v59 = v60 - (v60 >= -32768 ? 0 : v60 + 0x8000) - v47;
				a9 = &v59[v53];
			} while ((__int64)v48 < (__int64)(v44 - 3));
		}
		if (v48 < v44)
		{
			v61 = 2i64 * v52;
			v62 = (char*)v50 - (char*)v48;
			do
			{
				v63 = *--v49;
				v64 = (int)(float)((float)((float)(v63 * *v48) - (float)(*(float*)((char*)v48 + v62) * *v51)) * 0.001953125);
				++v48;
				v51 += 2;
				LOWORD(v47) = (v64 - 0x7FFF) & ((v64 <= 0x7FFF) - 1);
				*a9 = v64 - (v64 >= -32768 ? 0 : v64 + 0x8000) - v47;
				a9 = (_WORD*)((char*)a9 + v61);
			} while (v48 < v44);
		}
	}
	if (v21)
	{
		v65 = v21;
		if (v43 < v21)
			v65 = v43;
		v66 = 2 * v65;
		if (v45 < v21)
			v21 = v45;
		v67 = &v51[v66];
		v47 = 2 * v21;
		v68 = &v51[v47];
		if (v68 < v67)
		{
			v47 = ((char*)v67 - (char*)v68 + 7) / 8;
			if (v47 < 4)
			{
				v69 = a10;
			}
			else
			{
				v69 = a10;
				v70 = a10;
				do
				{
					*a9 = (int)(float)(*v68 * -0.001953125)
						- ((int)(float)(*v68 * -0.001953125) >= -32768 ? 0 : (int)(float)(*v68 * -0.001953125) + 0x8000)
						- (((int)(float)(*v68 * -0.001953125) - 0x7FFF) & (((int)(float)(*v68 * -0.001953125) <= 0x7FFF) - 1));
					v71 = &a9[v70];
					v72 = (int)(float)(v68[2] * -0.001953125);
					*v71 = v72 - (v72 >= -32768 ? 0 : v72 + 0x8000) - ((v72 - 0x7FFF) & ((v72 <= 0x7FFF) - 1));
					v73 = &v71[v70];
					v74 = (int)(float)(v68[4] * -0.001953125);
					*v73 = v74 - (v74 >= -32768 ? 0 : v74 + 0x8000) - ((v74 - 0x7FFF) & ((v74 <= 0x7FFF) - 1));
					v75 = &v73[v70];
					v76 = v68[6] * -0.001953125;
					LOWORD(v47) = ((int)v76 - 0x7FFF) & (((int)v76 <= 0x7FFF) - 1);
					*v75 = (int)v76 - ((int)v76 >= -32768 ? 0 : (int)v76 + 0x8000) - v47;
					a9 = &v75[v70];
					v68 += 8;
				} while ((__int64)v68 < (__int64)(v67 - 6));
			}
			for (; v68 < v67; a9 += v69)
			{
				v77 = *v68 * -0.001953125;
				v68 += 2;
				LOWORD(v47) = ((int)v77 - 0x7FFF) & (((int)v77 <= 0x7FFF) - 1);
				*a9 = (int)v77 - ((int)v77 >= -32768 ? 0 : (int)v77 + 0x8000) - v47;
			}
		}
	}
	return v47;
}

