#include "../winhttp.h"

//----- (000000014089E940) ----------------------------------------------------
__int64 __fastcall sub_14089E940(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rax
	float v7; // xmm6_4
	double v8; // xmm0_8
	float v9; // xmm3_4
	float v10; // xmm2_4
	float v11; // xmm6_4
	float v12; // xmm0_4
	int v13; // r9d
	float v14; // xmm6_4
	int v15; // r10d
	__int64 result; // rax
	float v17; // xmm6_4
	__int64 v18; // rcx
	float v19; // xmm2_4
	__int64 v20; // rdx
	int v21; // eax
	float v22; // xmm1_4
	float v23; // xmm2_4
	float v24; // xmm1_4
	__int64 v25; // rcx
	float v26; // xmm0_4
	float v27; // xmm0_4
	unsigned int v28; // eax
	float v29; // xmm1_4
	float v30; // xmm0_4
	float v31; // xmm1_4
	bool v32; // zf

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
	v14 = (float)(v11 * 512.0) / (float)*(int*)(a1 + 8);
	v15 = (int)v14;
	*(float*)(a1 + 40) = v14;
	result = (unsigned int)(int)v14;
	v17 = v14 - (float)(int)result;
	while (v13)
	{
		v18 = *(_QWORD*)(a1 + 136);
		v19 = *(float*)(a1 + 36);
		--v13;
		v20 = *(_DWORD*)(a1 + 32) & 0x1FF;
		v21 = *(_DWORD*)(a1 + 32) + v15;
		v22 = (float)(*(float*)(v18 + 4i64 * (((*(_WORD*)(a1 + 32) & 0x1FF) + 1) & 0x1FF)) - *(float*)(v18 + 4 * v20))
			* v19;
		v23 = v19 + v17;
		v24 = v22 + *(float*)(v18 + 4 * v20);
		*(float*)(a1 + 36) = v23;
		*(_DWORD*)(a1 + 32) = v21;
		if (v23 > 1.0)
		{
			*(float*)(a1 + 36) = v23 - 1.0;
			*(_DWORD*)(a1 + 32) = v21 + 1;
		}
		*(_DWORD*)(a1 + 32) &= 0x1FFu;
		v25 = *(unsigned __int16*)(a1 + 100);
		if (*(_DWORD*)(a1 + 120) >= *(_DWORD*)(a1 + 4 * v25 + 104))
		{
			*(_DWORD*)(a1 + 120) = 0;
			*(_WORD*)(a1 + 100) = v25 + 1;
		}
		v26 = *(float*)(a1 + 4i64 * *(unsigned __int16*)(a1 + 100) + 84);
		++* (_DWORD*)(a1 + 120);
		v27 = v26 + *(float*)(a1 + 124);
		*(float*)(a1 + 124) = v27;
		v28 = *(_DWORD*)(a1 + 352);
		v29 = v24 * v27;
		if (v28 < *(_DWORD*)(a1 + 356))
		{
			v30 = *(float*)(a1 + 340) + *(float*)(a1 + 348);
			*(_DWORD*)(a1 + 352) = v28 + 1;
			*(float*)(a1 + 348) = v30;
		}
		else
		{
			*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 344);
		}
		v31 = v29 * *(float*)(a1 + 348);
		result = (unsigned int)++ * (_DWORD*)(a1 + 20);
		a2 += 4i64;
		*(float*)(a2 - 4) = v31;
		if ((unsigned int)result >= *(_DWORD*)(a1 + 28))
		{
			v32 = *(_DWORD*)(a1 + 180) == 1;
			*(_DWORD*)(a1 + 20) = 0;
			*(_WORD*)(a1 + 100) = 0;
			*(_DWORD*)(a1 + 120) = 0;
			if (v32 || *(_WORD*)(a1 + 12) == 1)
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

