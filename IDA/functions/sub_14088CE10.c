//----- (000000014088CE10) ----------------------------------------------------
__int64 __fastcall sub_14088CE10(__int64 a1, int a2, _DWORD* a3)
{
	__int64 v3; // rax
	__int64 v7; // rbp
	double v8; // xmm6_8
	double v9; // xmm1_8
	double v10; // xmm0_8
	double v11; // xmm1_8
	double v12; // xmm0_8
	double v13; // xmm1_8
	double v14; // xmm0_8
	double v15; // xmm1_8
	double v16; // xmm0_8
	int v17; // ecx
	double v18; // xmm1_8
	int v19; // eax

	v3 = *(_QWORD*)(a1 + 24);
	if (v3)
	{
		v7 = *(_QWORD*)(v3 + 128);
		v8 = 0.5;
		v9 = (double)(int)sub_140892310(v7) * 1000.0 / (double)dword_140C110B4;
		if (v9 <= 0.0)
			v10 = -0.5;
		else
			v10 = 0.5;
		a3[1] = (int)(v10 + v9);
		v11 = (double)(int)sub_140891630(v7) * 1000.0 / (double)dword_140C110B4;
		if (v11 <= 0.0)
			v12 = -0.5;
		else
			v12 = 0.5;
		a3[2] = (int)(v12 + v11);
		v13 = (double)(int)sub_1408922F0(v7) * 1000.0 / (double)dword_140C110B4;
		if (v13 <= 0.0)
			v14 = -0.5;
		else
			v14 = 0.5;
		a3[3] = (int)(v14 + v13);
		v15 = (double)a2 * 1000.0 / (double)dword_140C110B4;
		if (v15 <= 0.0)
			v16 = -0.5;
		else
			v16 = 0.5;
		*a3 = (int)(v16 + v15);
		v17 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 144i64) - a2;
		if (v17 <= 0)
		{
			v19 = 0;
		}
		else
		{
			v18 = (double)v17 * 1000.0 / (double)dword_140C110B4;
			if (v18 <= 0.0)
				v8 = -0.5;
			v19 = (int)(v8 + v18);
		}
		a3[4] = v19;
	}
	else
	{
		*(_QWORD*)(a3 + 1) = 0i64;
		*(_QWORD*)(a3 + 3) = 0i64;
		*a3 = 0;
	}
	return 1i64;
}
// 140C110B4: using guessed type int dword_140C110B4;

