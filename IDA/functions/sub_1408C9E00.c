//----- (00000001408C9E00) ----------------------------------------------------
__int64 __fastcall sub_1408C9E00(
	unsigned int* a1,
	__int64 a2,
	float a3,
	float* a4,
	float* a5,
	unsigned int a6,
	unsigned int a7,
	int a8)
{
	double v11; // xmm0_8
	float v12; // xmm6_4
	float v13; // xmm7_4
	float v14; // xmm6_4
	float v15; // xmm0_4
	float v16; // xmm8_4
	unsigned int v17; // eax
	__int64 v18; // rdx
	__int64 v19; // rax
	int v21; // edi
	unsigned __int16 v22; // r8
	unsigned __int16 v23; // r11
	unsigned __int16 v24; // r9
	int i; // edx
	unsigned int v26; // eax
	unsigned int v27; // ecx
	unsigned __int16 v28; // r11
	unsigned __int16 v29; // r8
	unsigned __int16 j; // r9
	unsigned int v31; // eax
	unsigned int v32; // ecx

	if (a6 - 1 > 0x3F || a7 - 1 > 0x3F)
		return 2i64;
	v11 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), a3 * 0.0099999998);
	v12 = *a4;
	v13 = *(float*)&v11;
	if (*a4 >= *a5)
		v12 = *a5;
	v14 = v12 * *(float*)&v11;
	v15 = a4[2 * a6 - 2];
	if (v15 <= a5[2 * a7 - 2])
		v15 = a5[2 * a7 - 2];
	v16 = (float)a8;
	v17 = (int)(float)((float)((float)((float)(v15 * v13) - v14) * 0.001) * (float)a8);
	if (v17 >= 4)
	{
		if (v17 > 0xFFFF)
			return 2i64;
	}
	else
	{
		LOWORD(v17) = 4;
	}
	v18 = (unsigned __int16)v17 & 0xFFFC;
	*a1 = v18;
	v19 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 4 * v18);
	*((_QWORD*)a1 + 1) = v19;
	if (!v19)
		return 52i64;
	v21 = -1;
	v22 = 0;
	v23 = 0;
	*((_WORD*)a1 + 394) = 0;
	v24 = 0;
	for (i = -1; v24 < a6; i = v27)
	{
		v26 = *a1;
		v27 = (int)(float)((float)((float)((float)(v13 * a4[2 * v24]) - v14) * 0.001) * v16) & 0xFFFFFFFC;
		if (v27 >= *a1)
			v27 = v26 - 4;
		if (v27 != i)
		{
			*((_WORD*)a1 + v22 + 266) = v26 - v27;
			if (!v27)
				*((_WORD*)a1 + v22 + 266) = 0;
			a1[v22 + 5] = LODWORD(a4[2 * v24 + 1]);
			if (*((_WORD*)a1 + v22 + 266) > v23)
			{
				v23 = *((_WORD*)a1 + v22 + 266);
				*((_WORD*)a1 + 394) = v22;
			}
			++v22;
		}
		++v24;
	}
	*((_WORD*)a1 + 396) = v22;
	v28 = 0;
	*((_WORD*)a1 + 395) = 0;
	v29 = 0;
	for (j = 0; j < a7; v21 = v32)
	{
		v31 = *a1;
		v32 = (int)(float)((float)((float)((float)(v13 * a5[2 * j]) - v14) * 0.001) * v16) & 0xFFFFFFFC;
		if (v32 >= *a1)
			v32 = v31 - 4;
		if (v32 != v21)
		{
			*((_WORD*)a1 + v29 + 330) = v31 - v32;
			if (!v32)
				*((_WORD*)a1 + v29 + 330) = 0;
			a1[v29 + 69] = LODWORD(a5[2 * j + 1]);
			if (*((_WORD*)a1 + v29 + 330) > v28)
			{
				v28 = *((_WORD*)a1 + v29 + 330);
				*((_WORD*)a1 + 395) = v29;
			}
			++v29;
		}
		++j;
	}
	a1[4] = 0;
	*((_WORD*)a1 + 397) = v29;
	return 1i64;
}

