#include "../winhttp.h"

//----- (000000014089D490) ----------------------------------------------------
__int64 __fastcall sub_14089D490(__int64 a1, __int64 a2, int a3)
{
	float* v3; // rax
	float v7; // xmm9_4
	float v8; // xmm6_4
	double v9; // xmm0_8
	float v10; // xmm3_4
	float v11; // xmm2_4
	float v12; // xmm9_4
	float v13; // xmm6_4
	float v14; // xmm1_4
	float v15; // xmm0_4
	__int64 result; // rax
	int v17; // r11d
	__int64 v18; // r10
	float v19; // xmm7_4
	int v20; // r9d
	float v21; // xmm7_4
	__int64 v22; // rcx
	float v23; // xmm1_4
	__int64 v24; // rdx
	int v25; // eax
	float v26; // xmm6_4
	float v27; // xmm1_4
	float v28; // xmm6_4
	float v29; // xmm3_4
	float v30; // xmm4_4
	float v31; // xmm0_4
	float v32; // xmm1_4
	float v33; // xmm2_4
	float v34; // xmm5_4
	float v35; // xmm0_4
	float v36; // xmm1_4
	float v37; // xmm5_4
	float v38; // xmm3_4
	float v39; // xmm4_4
	float v40; // xmm0_4
	float v41; // xmm6_4
	float v42; // xmm1_4
	float v43; // xmm2_4
	float v44; // xmm2_4
	float v45; // xmm1_4
	float v46; // xmm6_4
	float v47; // xmm3_4
	float v48; // xmm4_4
	float v49; // xmm0_4
	float v50; // xmm5_4
	float v51; // xmm2_4
	float v52; // xmm1_4
	float v53; // xmm5_4
	float v54; // xmm1_4
	float v55; // xmm0_4
	float v56; // xmm5_4
	__int64 v57; // rcx
	float v58; // xmm0_4
	float v59; // xmm0_4
	unsigned int v60; // eax
	float v61; // xmm5_4
	float v62; // xmm0_4
	float v63; // xmm5_4
	bool v64; // zf

	v3 = *(float**)(a1 + 320);
	v7 = v3[3];
	v8 = v3[4];
	v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), v3[2] * 0.050000001);
	v10 = *(float*)(a1 + 336);
	*(_DWORD*)(a1 + 352) = 0;
	*(_DWORD*)(a1 + 344) = LODWORD(v9);
	v11 = *(float*)&v9 - *(float*)(a1 + 348);
	*(_DWORD*)(a1 + 356) = (int)(float)(fabs(v11) / v10);
	if (v11 <= 0.0)
		v10 = -v10;
	*(float*)(a1 + 340) = v10;
	v12 = v7 + *(float*)(a1 + 44);
	v13 = v8 + *(float*)(a1 + 52);
	if (v12 >= 0.001)
	{
		v14 = *(float*)(a1 + 48);
		if (v12 >= v14)
			v12 = v14 - 1.0;
	}
	else
	{
		v12 = 0.001;
	}
	if (v13 >= 0.001)
	{
		v15 = *(float*)(a1 + 48);
		if (v13 >= v15)
			v13 = v15 - 1.0;
	}
	else
	{
		v13 = 0.001;
	}
	result = (unsigned int)(4 * *(_DWORD*)(a1 + 28));
	v17 = a3;
	*(float*)(a1 + 56) = (float)(v13 - v12) / (float)(int)result;
	while (v17)
	{
		--v17;
		v18 = 4i64;
		v19 = (float)((float)((float)((float)(4 * *(_DWORD*)(a1 + 20)) * *(float*)(a1 + 56)) + v12) * 512.0)
			/ *(float*)(a1 + 80);
		v20 = (int)v19;
		*(float*)(a1 + 40) = v19;
		v21 = v19 - (float)(int)v19;
		do
		{
			v22 = *(_QWORD*)(a1 + 136);
			v23 = *(float*)(a1 + 36);
			v24 = *(_DWORD*)(a1 + 32) & 0x1FF;
			v25 = *(_DWORD*)(a1 + 32) + v20;
			v26 = (float)(*(float*)(v22 + 4i64 * (((*(_WORD*)(a1 + 32) & 0x1FF) + 1) & 0x1FF)) - *(float*)(v22 + 4 * v24))
				* v23;
			v27 = v23 + v21;
			v28 = v26 + *(float*)(v22 + 4 * v24);
			*(float*)(a1 + 36) = v27;
			*(_DWORD*)(a1 + 32) = v25;
			if (v27 > 1.0)
			{
				*(float*)(a1 + 36) = v27 - 1.0;
				*(_DWORD*)(a1 + 32) = v25 + 1;
			}
			*(_DWORD*)(a1 + 32) &= 0x1FFu;
			v29 = *(float*)(a1 + 232);
			v30 = *(float*)(a1 + 240);
			v31 = v28 * *(float*)(a1 + 212);
			v32 = *(float*)(a1 + 220);
			*(float*)(a1 + 232) = v28;
			v33 = v30 * *(float*)(a1 + 224);
			v34 = (float)(v29 * *(float*)(a1 + 216)) + v31;
			v35 = *(float*)(a1 + 228) * *(float*)(a1 + 244);
			v36 = v32 * *(float*)(a1 + 236);
			*(float*)(a1 + 236) = v29;
			*(float*)(a1 + 244) = v30;
			v37 = (float)(v34 + v36) - (float)(v33 + v35);
			*(float*)(a1 + 240) = v37;
			v38 = *(float*)(a1 + 268);
			v39 = *(float*)(a1 + 276);
			v40 = v37 * *(float*)(a1 + 248);
			v41 = v38 * *(float*)(a1 + 252);
			v42 = *(float*)(a1 + 272);
			v43 = *(float*)(a1 + 280);
			*(float*)(a1 + 268) = v37;
			v44 = v43 * *(float*)(a1 + 264);
			v45 = v42 * *(float*)(a1 + 256);
			*(float*)(a1 + 272) = v38;
			*(float*)(a1 + 280) = v39;
			v46 = (float)((float)(v41 + v40) + v45) - (float)(v44 + (float)(v39 * *(float*)(a1 + 260)));
			*(float*)(a1 + 276) = v46;
			v47 = *(float*)(a1 + 304);
			v48 = *(float*)(a1 + 312);
			v49 = v46 * *(float*)(a1 + 284);
			v50 = v47 * *(float*)(a1 + 288);
			v51 = v48 * *(float*)(a1 + 296);
			v52 = *(float*)(a1 + 292);
			*(float*)(a1 + 304) = v46;
			v53 = v50 + v49;
			v54 = v52 * *(float*)(a1 + 308);
			v55 = *(float*)(a1 + 300) * *(float*)(a1 + 316);
			*(float*)(a1 + 308) = v47;
			*(float*)(a1 + 316) = v48;
			v56 = (float)(v53 + v54) - (float)(v51 + v55);
			*(float*)(a1 + 312) = v56;
			--v18;
		} while (v18);
		v57 = *(unsigned __int16*)(a1 + 100);
		if (*(_DWORD*)(a1 + 120) >= *(_DWORD*)(a1 + 4 * v57 + 104))
		{
			*(_DWORD*)(a1 + 120) = 0;
			*(_WORD*)(a1 + 100) = v57 + 1;
		}
		v58 = *(float*)(a1 + 4i64 * *(unsigned __int16*)(a1 + 100) + 84);
		++* (_DWORD*)(a1 + 120);
		v59 = v58 + *(float*)(a1 + 124);
		*(float*)(a1 + 124) = v59;
		v60 = *(_DWORD*)(a1 + 352);
		v61 = v56 * v59;
		if (v60 < *(_DWORD*)(a1 + 356))
		{
			v62 = *(float*)(a1 + 348) + *(float*)(a1 + 340);
			*(_DWORD*)(a1 + 352) = v60 + 1;
			*(float*)(a1 + 348) = v62;
		}
		else
		{
			*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 344);
		}
		v63 = v61 * *(float*)(a1 + 348);
		result = (unsigned int)++ * (_DWORD*)(a1 + 20);
		a2 += 4i64;
		*(float*)(a2 - 4) = v63;
		if ((unsigned int)result >= *(_DWORD*)(a1 + 28))
		{
			v64 = *(_DWORD*)(a1 + 180) == 1;
			*(_DWORD*)(a1 + 20) = 0;
			*(_WORD*)(a1 + 100) = 0;
			*(_DWORD*)(a1 + 120) = 0;
			if (v64 || *(_WORD*)(a1 + 12) == 1)
				*(_DWORD*)(a1 + 124) = 0;
			else
				*(_DWORD*)(a1 + 124) = 1065353216;
		}
	}
	*(_DWORD*)(a1 + 16) += a3;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

