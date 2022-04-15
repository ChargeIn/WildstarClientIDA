//----- (000000014089EB90) ----------------------------------------------------
__int64 __fastcall sub_14089EB90(__int64 a1, __int64 a2, int a3)
{
	double v6; // xmm0_8
	float v7; // xmm3_4
	float v8; // xmm2_4
	__int64 result; // rax
	int v10; // edx
	__int64 v11; // rcx
	float v12; // xmm1_4
	float v13; // xmm0_4
	float v14; // xmm0_4
	unsigned int v15; // eax
	float v16; // xmm1_4
	float v17; // xmm0_4
	float v18; // xmm1_4
	bool v19; // zf

	v6 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(float*)(*(_QWORD*)(a1 + 320) + 8i64) * 0.050000001);
	v7 = *(float*)(a1 + 336);
	*(_DWORD*)(a1 + 352) = 0;
	*(_DWORD*)(a1 + 344) = LODWORD(v6);
	v8 = *(float*)&v6 - *(float*)(a1 + 348);
	result = (unsigned int)(int)(float)(fabs(v8) / v7);
	*(_DWORD*)(a1 + 356) = result;
	if (v8 <= 0.0)
		v7 = -v7;
	*(float*)(a1 + 340) = v7;
	v10 = a3;
	while (v10)
	{
		--v10;
		dword_140C111D0 = 196314165 * dword_140C111D0 + 907633515;
		v11 = *(unsigned __int16*)(a1 + 100);
		v12 = (float)dword_140C111D0 * 4.6566129e-10;
		if (*(_DWORD*)(a1 + 120) >= *(_DWORD*)(a1 + 4 * v11 + 104))
		{
			*(_DWORD*)(a1 + 120) = 0;
			*(_WORD*)(a1 + 100) = v11 + 1;
		}
		v13 = *(float*)(a1 + 4i64 * *(unsigned __int16*)(a1 + 100) + 84);
		++* (_DWORD*)(a1 + 120);
		v14 = v13 + *(float*)(a1 + 124);
		*(float*)(a1 + 124) = v14;
		v15 = *(_DWORD*)(a1 + 352);
		v16 = v12 * v14;
		if (v15 < *(_DWORD*)(a1 + 356))
		{
			v17 = *(float*)(a1 + 348) + *(float*)(a1 + 340);
			*(_DWORD*)(a1 + 352) = v15 + 1;
			*(float*)(a1 + 348) = v17;
		}
		else
		{
			*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 344);
		}
		v18 = v16 * *(float*)(a1 + 348);
		result = (unsigned int)++ * (_DWORD*)(a1 + 20);
		a2 += 4i64;
		*(float*)(a2 - 4) = v18;
		if ((unsigned int)result >= *(_DWORD*)(a1 + 28))
		{
			v19 = *(_DWORD*)(a1 + 180) == 1;
			*(_DWORD*)(a1 + 20) = 0;
			*(_WORD*)(a1 + 100) = 0;
			*(_DWORD*)(a1 + 120) = 0;
			if (v19 || *(_WORD*)(a1 + 12) == 1)
				*(_DWORD*)(a1 + 124) = 0;
			else
				*(_DWORD*)(a1 + 124) = 1065353216;
		}
	}
	*(_DWORD*)(a1 + 16) += a3;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C111D0: using guessed type int dword_140C111D0;

