#include "../winhttp.h"

//----- (000000014089D900) ----------------------------------------------------
__int64 __fastcall sub_14089D900(__int64 a1, __int64 a2, int a3)
{
	float* v6; // rax
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
	bool v17; // bp
	float v18; // xmm6_4
	__m128 v19; // xmm0
	float v20; // xmm6_4
	int v21; // r11d
	__m128 v22; // xmm7
	float v23; // xmm7_4
	__int64 v24; // r10
	float v25; // xmm7_4
	int v26; // r9d
	float v27; // xmm7_4
	__int64 v28; // rcx
	float v29; // xmm1_4
	__int64 v30; // rdx
	int v31; // eax
	float v32; // xmm6_4
	float v33; // xmm1_4
	float v34; // xmm6_4
	float v35; // xmm3_4
	float v36; // xmm4_4
	float v37; // xmm0_4
	float v38; // xmm1_4
	float v39; // xmm2_4
	float v40; // xmm5_4
	float v41; // xmm0_4
	float v42; // xmm1_4
	float v43; // xmm5_4
	float v44; // xmm3_4
	float v45; // xmm4_4
	float v46; // xmm0_4
	float v47; // xmm6_4
	float v48; // xmm1_4
	float v49; // xmm2_4
	float v50; // xmm2_4
	float v51; // xmm1_4
	float v52; // xmm6_4
	float v53; // xmm3_4
	float v54; // xmm4_4
	float v55; // xmm5_4
	float v56; // xmm0_4
	float v57; // xmm2_4
	float v58; // xmm1_4
	float v59; // xmm5_4
	float v60; // xmm1_4
	float v61; // xmm0_4
	float v62; // xmm5_4
	__int64 v63; // rcx
	float v64; // xmm0_4
	float v65; // xmm0_4
	unsigned int v66; // eax
	float v67; // xmm5_4
	float v68; // xmm0_4
	float v69; // xmm5_4
	bool v70; // zf

	v6 = *(float**)(a1 + 320);
	v7 = v6[3];
	v8 = v6[4];
	v9 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), v6[2] * 0.050000001);
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
	result = *(unsigned int*)(a1 + 28);
	v19 = 0i64;
	v17 = v12 >= v13;
	v18 = v13 - v12;
	v19.m128_f32[0] = (float)(int)result * 4.0;
	if (v17)
		v20 = v18 / _mm_sqrt_ps(v19).m128_f32[0];
	else
		v20 = v18 / (float)(v19.m128_f32[0] * v19.m128_f32[0]);
	*(float*)(a1 + 56) = v20;
	v21 = a3;
	while (v21)
	{
		v22 = 0i64;
		--v21;
		v22.m128_f32[0] = (float)(4 * *(_DWORD*)(a1 + 20));
		if (v17)
			LODWORD(v23) = _mm_sqrt_ps(v22).m128_u32[0];
		else
			v23 = v22.m128_f32[0] * v22.m128_f32[0];
		v24 = 4i64;
		v25 = (float)((float)((float)(v23 * *(float*)(a1 + 56)) + v12) * 512.0) / *(float*)(a1 + 80);
		v26 = (int)v25;
		*(float*)(a1 + 40) = v25;
		v27 = v25 - (float)(int)v25;
		do
		{
			v28 = *(_QWORD*)(a1 + 136);
			v29 = *(float*)(a1 + 36);
			v30 = *(_DWORD*)(a1 + 32) & 0x1FF;
			v31 = *(_DWORD*)(a1 + 32) + v26;
			v32 = (float)(*(float*)(v28 + 4i64 * (((*(_WORD*)(a1 + 32) & 0x1FF) + 1) & 0x1FF)) - *(float*)(v28 + 4 * v30))
				* v29;
			v33 = v29 + v27;
			v34 = v32 + *(float*)(v28 + 4 * v30);
			*(float*)(a1 + 36) = v33;
			*(_DWORD*)(a1 + 32) = v31;
			if (v33 > 1.0)
			{
				*(float*)(a1 + 36) = v33 - 1.0;
				*(_DWORD*)(a1 + 32) = v31 + 1;
			}
			*(_DWORD*)(a1 + 32) &= 0x1FFu;
			v35 = *(float*)(a1 + 232);
			v36 = *(float*)(a1 + 240);
			v37 = v34 * *(float*)(a1 + 212);
			v38 = *(float*)(a1 + 220);
			*(float*)(a1 + 232) = v34;
			v39 = v36 * *(float*)(a1 + 224);
			v40 = (float)(v35 * *(float*)(a1 + 216)) + v37;
			v41 = *(float*)(a1 + 228) * *(float*)(a1 + 244);
			v42 = v38 * *(float*)(a1 + 236);
			*(float*)(a1 + 236) = v35;
			*(float*)(a1 + 244) = v36;
			v43 = (float)(v40 + v42) - (float)(v39 + v41);
			*(float*)(a1 + 240) = v43;
			v44 = *(float*)(a1 + 268);
			v45 = *(float*)(a1 + 276);
			v46 = v43 * *(float*)(a1 + 248);
			v47 = v44 * *(float*)(a1 + 252);
			v48 = *(float*)(a1 + 272);
			v49 = *(float*)(a1 + 280);
			*(float*)(a1 + 268) = v43;
			v50 = v49 * *(float*)(a1 + 264);
			v51 = v48 * *(float*)(a1 + 256);
			*(float*)(a1 + 272) = v44;
			*(float*)(a1 + 280) = v45;
			v52 = (float)((float)(v47 + v46) + v51) - (float)(v50 + (float)(v45 * *(float*)(a1 + 260)));
			*(float*)(a1 + 276) = v52;
			v53 = *(float*)(a1 + 304);
			v54 = *(float*)(a1 + 312);
			v55 = v52 * *(float*)(a1 + 284);
			v56 = v53 * *(float*)(a1 + 288);
			v57 = v54 * *(float*)(a1 + 296);
			v58 = *(float*)(a1 + 292);
			*(float*)(a1 + 304) = v52;
			v59 = v55 + v56;
			v60 = v58 * *(float*)(a1 + 308);
			v61 = *(float*)(a1 + 300) * *(float*)(a1 + 316);
			*(float*)(a1 + 308) = v53;
			*(float*)(a1 + 316) = v54;
			v62 = (float)(v59 + v60) - (float)(v57 + v61);
			*(float*)(a1 + 312) = v62;
			--v24;
		} while (v24);
		v63 = *(unsigned __int16*)(a1 + 100);
		if (*(_DWORD*)(a1 + 120) >= *(_DWORD*)(a1 + 4 * v63 + 104))
		{
			*(_DWORD*)(a1 + 120) = 0;
			*(_WORD*)(a1 + 100) = v63 + 1;
		}
		v64 = *(float*)(a1 + 4i64 * *(unsigned __int16*)(a1 + 100) + 84);
		++* (_DWORD*)(a1 + 120);
		v65 = v64 + *(float*)(a1 + 124);
		*(float*)(a1 + 124) = v65;
		v66 = *(_DWORD*)(a1 + 352);
		v67 = v62 * v65;
		if (v66 < *(_DWORD*)(a1 + 356))
		{
			v68 = *(float*)(a1 + 348) + *(float*)(a1 + 340);
			*(_DWORD*)(a1 + 352) = v66 + 1;
			*(float*)(a1 + 348) = v68;
		}
		else
		{
			*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 344);
		}
		v69 = v67 * *(float*)(a1 + 348);
		result = (unsigned int)++ * (_DWORD*)(a1 + 20);
		a2 += 4i64;
		*(float*)(a2 - 4) = v69;
		if ((unsigned int)result >= *(_DWORD*)(a1 + 28))
		{
			v70 = *(_DWORD*)(a1 + 180) == 1;
			*(_DWORD*)(a1 + 20) = 0;
			*(_WORD*)(a1 + 100) = 0;
			*(_DWORD*)(a1 + 120) = 0;
			if (v70 || *(_WORD*)(a1 + 12) == 1)
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

