//----- (000000014089E1A0) ----------------------------------------------------
__int64 __fastcall sub_14089E1A0(__int64 a1, float* a2, int a3)
{
	double v6; // xmm0_8
	float v7; // xmm3_4
	float v8; // xmm2_4
	__int64 result; // rax
	int v10; // edx
	bool v11; // zf
	unsigned int v12; // eax
	__int64 i; // rcx
	__int64 v14; // rax
	float v15; // xmm1_4
	__int64 v16; // rcx
	float v17; // xmm1_4
	float v18; // xmm0_4
	float v19; // xmm0_4
	unsigned int v20; // eax
	float v21; // xmm1_4
	float v22; // xmm0_4
	float v23; // xmm1_4

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
		v11 = (*(_DWORD*)(a1 + 64) & (*(_DWORD*)(a1 + 68) + 1)) == 0;
		v12 = *(_DWORD*)(a1 + 64) & (*(_DWORD*)(a1 + 68) + 1);
		*(_DWORD*)(a1 + 68) = v12;
		if (!v11)
		{
			for (i = 0i64; (v12 & 1) == 0; i = (unsigned int)(i + 1))
				v12 >>= 1;
			*(float*)(a1 + 72) = *(float*)(a1 + 72) - *(float*)(*(_QWORD*)(a1 + 144) + 4 * i);
			dword_140C111D0 = 196314165 * dword_140C111D0 + 907633515;
			v14 = *(_QWORD*)(a1 + 144);
			v15 = (float)dword_140C111D0 * 4.6566129e-10;
			*(float*)(a1 + 72) = v15 + *(float*)(a1 + 72);
			*(float*)(v14 + 4 * i) = v15;
		}
		dword_140C111D0 = 196314165 * dword_140C111D0 + 907633515;
		v16 = *(unsigned __int16*)(a1 + 100);
		v17 = (float)((float)((float)dword_140C111D0 * 4.6566129e-10) + *(float*)(a1 + 72)) * *(float*)(a1 + 76);
		if (*(_DWORD*)(a1 + 120) >= *(_DWORD*)(a1 + 4 * v16 + 104))
		{
			*(_DWORD*)(a1 + 120) = 0;
			*(_WORD*)(a1 + 100) = v16 + 1;
		}
		v18 = *(float*)(a1 + 4i64 * *(unsigned __int16*)(a1 + 100) + 84);
		++* (_DWORD*)(a1 + 120);
		v19 = v18 + *(float*)(a1 + 124);
		*(float*)(a1 + 124) = v19;
		v20 = *(_DWORD*)(a1 + 352);
		v21 = v17 * v19;
		if (v20 < *(_DWORD*)(a1 + 356))
		{
			v22 = *(float*)(a1 + 340) + *(float*)(a1 + 348);
			*(_DWORD*)(a1 + 352) = v20 + 1;
			*(float*)(a1 + 348) = v22;
		}
		else
		{
			*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 344);
		}
		v23 = v21 * *(float*)(a1 + 348);
		if (v23 > -1.0)
		{
			if (v23 >= 1.0)
				v23 = 1.0;
		}
		else
		{
			v23 = -1.0;
		}
		result = (unsigned int)++ * (_DWORD*)(a1 + 20);
		*a2++ = v23;
		if ((unsigned int)result >= *(_DWORD*)(a1 + 28))
		{
			v11 = *(_DWORD*)(a1 + 180) == 1;
			*(_DWORD*)(a1 + 20) = 0;
			*(_WORD*)(a1 + 100) = 0;
			*(_DWORD*)(a1 + 120) = 0;
			if (v11 || *(_WORD*)(a1 + 12) == 1)
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
// 140C111D0: using guessed type int dword_140C111D0;

