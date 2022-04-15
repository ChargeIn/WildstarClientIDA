#include "../winhttp.h"

//----- (000000014089DDB0) ----------------------------------------------------
__int64 __fastcall sub_14089DDB0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rax
	float v7; // xmm7_4
	double v8; // xmm0_8
	float v9; // xmm3_4
	float v10; // xmm2_4
	float v11; // xmm7_4
	float v12; // xmm0_4
	int v13; // r11d
	float v14; // xmm7_4
	int v15; // r10d
	__int64 result; // rax
	float v17; // xmm7_4
	__int64 v18; // r9
	__int64 v19; // rcx
	float v20; // xmm1_4
	__int64 v21; // rdx
	int v22; // eax
	float v23; // xmm6_4
	float v24; // xmm1_4
	float v25; // xmm6_4
	float v26; // xmm3_4
	float v27; // xmm4_4
	float v28; // xmm5_4
	float v29; // xmm1_4
	float v30; // xmm2_4
	float v31; // xmm5_4
	float v32; // xmm0_4
	float v33; // xmm1_4
	float v34; // xmm5_4
	float v35; // xmm3_4
	float v36; // xmm4_4
	float v37; // xmm6_4
	float v38; // xmm0_4
	float v39; // xmm1_4
	float v40; // xmm2_4
	float v41; // xmm2_4
	float v42; // xmm1_4
	float v43; // xmm6_4
	float v44; // xmm3_4
	float v45; // xmm4_4
	float v46; // xmm0_4
	float v47; // xmm5_4
	float v48; // xmm2_4
	float v49; // xmm1_4
	float v50; // xmm5_4
	float v51; // xmm1_4
	float v52; // xmm0_4
	float v53; // xmm5_4
	__int64 v54; // rcx
	float v55; // xmm0_4
	float v56; // xmm0_4
	unsigned int v57; // eax
	float v58; // xmm5_4
	float v59; // xmm0_4
	float v60; // xmm5_4
	bool v61; // zf

	v3 = *(_QWORD*)(a1 + 320);
	v7 = *(float*)(v3 + 12);
	v8 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(v3 + 8) * 0.050000001);
	v9 = *(float*)(a1 + 336);
	*(_DWORD*)(a1 + 352) = 0;
	*(_DWORD*)(a1 + 344) = LODWORD(v8);
	v10 = *(float*)&v8 - *(float*)(a1 + 348);
	*(_DWORD*)(a1 + 356) = (int)(float)(fabs(v10) / v9);
	if (v10 <= 0.0)
		v9 = -v9;
	*(float*)(a1 + 340) = v9;
	v11 = v7 + *(float*)(a1 + 44);
	if (v11 >= 0.001)
	{
		v12 = *(float*)(a1 + 48);
		if (v11 >= v12)
			v11 = v12 - 1.0;
	}
	else
	{
		v11 = 0.001;
	}
	v13 = a3;
	v14 = (float)(v11 * 512.0) / *(float*)(a1 + 80);
	v15 = (int)v14;
	*(float*)(a1 + 40) = v14;
	result = (unsigned int)(int)v14;
	v17 = v14 - (float)(int)result;
	while (v13)
	{
		--v13;
		v18 = 4i64;
		do
		{
			v19 = *(_QWORD*)(a1 + 136);
			v20 = *(float*)(a1 + 36);
			v21 = *(_DWORD*)(a1 + 32) & 0x1FF;
			v22 = *(_DWORD*)(a1 + 32) + v15;
			v23 = (float)(*(float*)(v19 + 4i64 * (((*(_WORD*)(a1 + 32) & 0x1FF) + 1) & 0x1FF)) - *(float*)(v19 + 4 * v21))
				* v20;
			v24 = v20 + v17;
			v25 = v23 + *(float*)(v19 + 4 * v21);
			*(float*)(a1 + 36) = v24;
			*(_DWORD*)(a1 + 32) = v22;
			if (v24 > 1.0)
			{
				*(float*)(a1 + 36) = v24 - 1.0;
				*(_DWORD*)(a1 + 32) = v22 + 1;
			}
			*(_DWORD*)(a1 + 32) &= 0x1FFu;
			v26 = *(float*)(a1 + 232);
			v27 = *(float*)(a1 + 240);
			v28 = v25 * *(float*)(a1 + 212);
			v29 = *(float*)(a1 + 220);
			*(float*)(a1 + 232) = v25;
			v30 = v27 * *(float*)(a1 + 224);
			v31 = v28 + (float)(v26 * *(float*)(a1 + 216));
			v32 = *(float*)(a1 + 228) * *(float*)(a1 + 244);
			v33 = v29 * *(float*)(a1 + 236);
			*(float*)(a1 + 236) = v26;
			*(float*)(a1 + 244) = v27;
			v34 = (float)(v31 + v33) - (float)(v30 + v32);
			*(float*)(a1 + 240) = v34;
			v35 = *(float*)(a1 + 268);
			v36 = *(float*)(a1 + 276);
			v37 = v34 * *(float*)(a1 + 248);
			v38 = v35 * *(float*)(a1 + 252);
			v39 = *(float*)(a1 + 272);
			v40 = *(float*)(a1 + 280);
			*(float*)(a1 + 268) = v34;
			v41 = v40 * *(float*)(a1 + 264);
			v42 = v39 * *(float*)(a1 + 256);
			*(float*)(a1 + 272) = v35;
			*(float*)(a1 + 280) = v36;
			v43 = (float)((float)(v37 + v38) + v42) - (float)(v41 + (float)(v36 * *(float*)(a1 + 260)));
			*(float*)(a1 + 276) = v43;
			v44 = *(float*)(a1 + 304);
			v45 = *(float*)(a1 + 312);
			v46 = v43 * *(float*)(a1 + 284);
			v47 = v44 * *(float*)(a1 + 288);
			v48 = v45 * *(float*)(a1 + 296);
			v49 = *(float*)(a1 + 292);
			*(float*)(a1 + 304) = v43;
			v50 = v47 + v46;
			v51 = v49 * *(float*)(a1 + 308);
			v52 = *(float*)(a1 + 300) * *(float*)(a1 + 316);
			*(float*)(a1 + 308) = v44;
			*(float*)(a1 + 316) = v45;
			v53 = (float)(v50 + v51) - (float)(v48 + v52);
			*(float*)(a1 + 312) = v53;
			--v18;
		} while (v18);
		v54 = *(unsigned __int16*)(a1 + 100);
		if (*(_DWORD*)(a1 + 120) >= *(_DWORD*)(a1 + 4 * v54 + 104))
		{
			*(_DWORD*)(a1 + 120) = 0;
			*(_WORD*)(a1 + 100) = v54 + 1;
		}
		v55 = *(float*)(a1 + 4i64 * *(unsigned __int16*)(a1 + 100) + 84);
		++* (_DWORD*)(a1 + 120);
		v56 = v55 + *(float*)(a1 + 124);
		*(float*)(a1 + 124) = v56;
		v57 = *(_DWORD*)(a1 + 352);
		v58 = v53 * v56;
		if (v57 < *(_DWORD*)(a1 + 356))
		{
			v59 = *(float*)(a1 + 348) + *(float*)(a1 + 340);
			*(_DWORD*)(a1 + 352) = v57 + 1;
			*(float*)(a1 + 348) = v59;
		}
		else
		{
			*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 344);
		}
		v60 = v58 * *(float*)(a1 + 348);
		result = (unsigned int)++ * (_DWORD*)(a1 + 20);
		a2 += 4i64;
		*(float*)(a2 - 4) = v60;
		if ((unsigned int)result >= *(_DWORD*)(a1 + 28))
		{
			v61 = *(_DWORD*)(a1 + 180) == 1;
			*(_DWORD*)(a1 + 20) = 0;
			*(_WORD*)(a1 + 100) = 0;
			*(_DWORD*)(a1 + 120) = 0;
			if (v61 || *(_WORD*)(a1 + 12) == 1)
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

