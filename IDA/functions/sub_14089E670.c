//----- (000000014089E670) ----------------------------------------------------
__int64 __fastcall sub_14089E670(__int64 a1, __int64 a2, int a3)
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
	bool v17; // r11
	float v18; // xmm6_4
	__m128 v19; // xmm0
	float v20; // xmm6_4
	int v21; // r10d
	int v22; // eax
	__m128 v23; // xmm0
	float v24; // xmm2_4
	__int64 v25; // rcx
	int v26; // r8d
	__int64 v27; // rax
	float v28; // xmm2_4
	float v29; // xmm3_4
	int v30; // ecx
	float v31; // xmm2_4
	__int64 v32; // rcx
	float v33; // xmm0_4
	float v34; // xmm0_4
	unsigned int v35; // eax
	float v36; // xmm3_4
	float v37; // xmm0_4
	float v38; // xmm3_4
	bool v39; // zf

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
	v19 = 0i64;
	v17 = v12 >= v13;
	v18 = v13 - v12;
	v19.m128_f32[0] = (float)(int)result;
	if (v17)
		v20 = v18 / _mm_sqrt_ps(v19).m128_f32[0];
	else
		v20 = v18 / (float)(v19.m128_f32[0] * v19.m128_f32[0]);
	*(float*)(a1 + 56) = v20;
	v21 = a3;
	while (v21)
	{
		v22 = *(_DWORD*)(a1 + 20);
		--v21;
		if (v17)
		{
			v23 = 0i64;
			v23.m128_f32[0] = (float)v22;
			LODWORD(v24) = _mm_sqrt_ps(v23).m128_u32[0];
		}
		else
		{
			v24 = (float)v22 * (float)v22;
		}
		v25 = *(_QWORD*)(a1 + 136);
		v26 = *(_DWORD*)(a1 + 32);
		v27 = ((*(_WORD*)(a1 + 32) & 0x1FF) + 1) & 0x1FF;
		v28 = (float)((float)((float)(v24 * *(float*)(a1 + 56)) + v12) * 512.0) / (float)*(int*)(a1 + 8);
		*(float*)(a1 + 40) = v28;
		v29 = (float)((float)(*(float*)(v25 + 4 * v27) - *(float*)(v25 + 4i64 * (v26 & 0x1FF))) * *(float*)(a1 + 36))
			+ *(float*)(v25 + 4i64 * (v26 & 0x1FF));
		v30 = v26 + (int)v28;
		*(_DWORD*)(a1 + 32) = v30;
		v31 = (float)(v28 - (float)(int)v28) + *(float*)(a1 + 36);
		*(float*)(a1 + 36) = v31;
		if (v31 > 1.0)
		{
			*(float*)(a1 + 36) = v31 - 1.0;
			*(_DWORD*)(a1 + 32) = v30 + 1;
		}
		*(_DWORD*)(a1 + 32) &= 0x1FFu;
		v32 = *(unsigned __int16*)(a1 + 100);
		if (*(_DWORD*)(a1 + 120) >= *(_DWORD*)(a1 + 4 * v32 + 104))
		{
			*(_DWORD*)(a1 + 120) = 0;
			*(_WORD*)(a1 + 100) = v32 + 1;
		}
		v33 = *(float*)(a1 + 4i64 * *(unsigned __int16*)(a1 + 100) + 84);
		++* (_DWORD*)(a1 + 120);
		v34 = v33 + *(float*)(a1 + 124);
		*(float*)(a1 + 124) = v34;
		v35 = *(_DWORD*)(a1 + 352);
		v36 = v29 * v34;
		if (v35 < *(_DWORD*)(a1 + 356))
		{
			v37 = *(float*)(a1 + 348) + *(float*)(a1 + 340);
			*(_DWORD*)(a1 + 352) = v35 + 1;
			*(float*)(a1 + 348) = v37;
		}
		else
		{
			*(_DWORD*)(a1 + 348) = *(_DWORD*)(a1 + 344);
		}
		v38 = v36 * *(float*)(a1 + 348);
		result = (unsigned int)++ * (_DWORD*)(a1 + 20);
		a2 += 4i64;
		*(float*)(a2 - 4) = v38;
		if ((unsigned int)result >= *(_DWORD*)(a1 + 28))
		{
			v39 = *(_DWORD*)(a1 + 180) == 1;
			*(_DWORD*)(a1 + 20) = 0;
			*(_WORD*)(a1 + 100) = 0;
			*(_DWORD*)(a1 + 120) = 0;
			if (v39 || *(_WORD*)(a1 + 12) == 1)
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

