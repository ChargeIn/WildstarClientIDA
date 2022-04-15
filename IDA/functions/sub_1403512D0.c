//----- (00000001403512D0) ----------------------------------------------------
__int64 __fastcall sub_1403512D0(__int64 a1, unsigned int a2)
{
	_DWORD* v3; // rax
	double v5; // xmm6_8
	float v6; // xmm1_4
	float v7; // xmm2_4
	double v8; // xmm0_8
	float v9; // xmm1_4
	float v10; // xmm2_4
	float v11; // xmm1_4
	double v12; // xmm0_8
	float v13; // xmm1_4
	float v14; // xmm2_4
	float v15; // xmm1_4
	double v16; // xmm0_8
	float v17; // xmm1_4
	float v18; // xmm1_4
	float v19; // xmm0_4

	v3 = (_DWORD*)sub_14024D360(a2);
	if (!v3)
		return 2147500037i64;
	HIDWORD(v5) = 0;
	*(_DWORD*)(a1 + 12) = *v3;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 24) = v3[1];
	*(_DWORD*)(a1 + 28) = v3[2];
	*(_DWORD*)(a1 + 32) = v3[3];
	v6 = *(float*)(a1 + 32);
	*(_DWORD*)(a1 + 36) = v3[4];
	v7 = *(float*)(a1 + 36);
	*(_DWORD*)(a1 + 40) = v3[5];
	*(_DWORD*)(a1 + 44) = v3[6];
	*(_DWORD*)(a1 + 48) = v3[7];
	*(_DWORD*)(a1 + 52) = v3[8];
	if (v7 <= v6)
	{
		*(_QWORD*)(a1 + 80) = 0i64;
	}
	else
	{
		HIDWORD(v8) = 0;
		v9 = (float)(v6 + v7) * 0.5;
		*(float*)(a1 + 80) = -1.0 / v9;
		*(float*)&v8 = (float)((float)(-1.0 / v9) * v7) * 0.69314718;
		*(float*)(a1 + 84) = 1.0 / (float)(sub_1408FC7F0(v8) - 1.0);
	}
	v10 = *(float*)(a1 + 28);
	v11 = *(float*)(a1 + 24);
	if (v10 <= v11)
	{
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	else
	{
		HIDWORD(v12) = 0;
		v13 = (float)(v11 + v10) * 0.5;
		*(float*)(a1 + 64) = -1.0 / v13;
		*(float*)&v12 = (float)((float)(-1.0 / v13) * v10) * 0.69314718;
		*(float*)(a1 + 68) = 1.0 / (float)(sub_1408FC7F0(v12) - 1.0);
	}
	v14 = *(float*)(a1 + 52);
	v15 = *(float*)(a1 + 48);
	if (v14 <= v15)
	{
		*(_QWORD*)(a1 + 112) = 0i64;
	}
	else
	{
		HIDWORD(v16) = 0;
		v17 = (float)(v15 + v14) * 0.5;
		*(float*)(a1 + 112) = -1.0 / v17;
		*(float*)&v16 = (float)((float)(-1.0 / v17) * v14) * 0.69314718;
		*(float*)(a1 + 116) = 1.0 / (float)(sub_1408FC7F0(v16) - 1.0);
	}
	v18 = *(float*)(a1 + 44);
	v19 = *(float*)(a1 + 40);
	if (v18 <= v19)
	{
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	else
	{
		*(float*)&v5 = -1.0 / (float)((float)(v19 + v18) * 0.5);
		*(_DWORD*)(a1 + 96) = LODWORD(v5);
		*(float*)&v5 = (float)(*(float*)&v5 * v18) * 0.69314718;
		*(float*)(a1 + 100) = 1.0 / (float)(sub_1408FC7F0(v5) - 1.0);
	}
	return 0i64;
}

