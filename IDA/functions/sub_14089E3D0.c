#include "../winhttp.h"

//----- (000000014089E3D0) ----------------------------------------------------
__int64 __fastcall sub_14089E3D0(__int64 a1, __int64 a2, int a3)
{
	float* v3; // rax
	float v7; // xmm7_4
	float v8; // xmm6_4
	double v9; // xmm0_8
	float v10; // xmm3_4
	float v11; // xmm2_4
	float v12; // xmm7_4
	float v13; // xmm6_4
	float v14; // xmm1_4
	float v15; // xmm0_4
	__int64 result; // rax
	int v17; // r10d
	float v18; // xmm6_4
	__int64 v19; // rcx
	int v20; // r8d
	__int64 v21; // rax
	float v22; // xmm3_4
	float v23; // xmm2_4
	int v24; // ecx
	float v25; // xmm3_4
	__int64 v26; // rcx
	float v27; // xmm0_4
	float v28; // xmm0_4
	unsigned int v29; // eax
	float v30; // xmm2_4
	float v31; // xmm0_4
	float v32; // xmm2_4
	bool v33; // zf

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
	result = *(unsigned int*)(a1 + 28);
	v17 = a3;
	v18 = (float)(v13 - v12) / (float)(int)result;
	*(float*)(a1 + 56) = v18;
	while (v17)
	{
		v19 = *(_QWORD*)(a1 + 136);
		v20 = *(_DWORD*)(a1 + 32);
		--v17;
		v21 = ((*(_WORD*)(a1 + 32) & 0x1FF) + 1) & 0x1FF;
		v22 = (float)((float)((float)((float)*(int*)(a1 + 20) * v18) + v12) * 512.0) / (float)*(int*)(a1 + 8);
		*(float*)(a1 + 40) = v22;
		v23 = (float)((float)(*(float*)(v19 + 4 * v21) - *(float*)(v19 + 4i64 * (v20 & 0x1FF))) * *(float*)(a1 + 36))
			+ *(float*)(v19 + 4i64 * (v20 & 0x1FF));
		v24 = v20 + (int)v22;
		*(_DWORD*)(a1 + 32) = v24;
		v25 = (float)(v22 - (float)(int)v22) + *(float*)(a1 + 36);
		*(float*)(a1 + 36) = v25;
		if (v25 > 1.0)
		{
			*(float*)(a1 + 36) = v25 - 1.0;
			*(_DWORD*)(a1 + 32) = v24 + 1;
		}
		*(_DWORD*)(a1 + 32) &= 0x1FFu;
		v26 = *(unsigned __int16*)(a1 + 100);
		if (*(_DWORD*)(a1 + 120) >= *(_DWORD*)(a1 + 4 * v26 + 104))
		{
			*(_DWORD*)(a1 + 120) = 0;
			*(_WORD*)(a1 + 100) = v26 + 1;
		}
		v27 = *(float*)(a1 + 4i64 * *(unsigned __int16*)(a1 + 100) + 84);
		++* (_DWORD*)(a1 + 120);
		v28 = v27 + *(float*)(a1 + 124);
		*(float*)(a1 + 124) = v28;
		v29 = *(_DWORD*)(a1 + 352);
		v30 = v23 * v28;
		if (v29 < *(_DWORD*)(a1 + 356))
		{
			v31 = *(float*)(a1 + 348) + *(float*)(a1 + 340);
			*(_DWORD*)(a1 + 352) = v29 + 1;
			*(float*)(a1 + 348) = v31;
		}
		else
		{
			*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 344);
		}
		v32 = v30 * *(float*)(a1 + 348);
		result = (unsigned int)++ * (_DWORD*)(a1 + 20);
		a2 += 4i64;
		*(float*)(a2 - 4) = v32;
		if ((unsigned int)result >= *(_DWORD*)(a1 + 28))
		{
			v33 = *(_DWORD*)(a1 + 180) == 1;
			*(_DWORD*)(a1 + 20) = 0;
			*(_WORD*)(a1 + 100) = 0;
			*(_DWORD*)(a1 + 120) = 0;
			if (v33 || *(_WORD*)(a1 + 12) == 1)
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

