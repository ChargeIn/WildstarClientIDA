//----- (0000000140464750) ----------------------------------------------------
float __fastcall sub_140464750(float* a1, int a2)
{
	int v2; // eax
	int v3; // xmm7_4
	__int64 v6; // rax
	int v7; // xmm0_4
	int v8; // xmm6_4
	__int64 v9; // rax
	int v10; // xmm0_4
	__int64 v11; // rax
	__int64 v12; // rax
	int v13; // xmm6_4
	__int64 v14; // rax
	int v15; // xmm0_4
	__int64 v16; // rax
	double v17; // xmm0_8
	float v18; // xmm3_4
	float v19; // xmm0_4
	float v20; // xmm2_4

	v2 = dword_140DC2D28;
	v3 = 1051931443;
	if ((dword_140DC2D28 & 1) == 0)
	{
		dword_140DC2D28 |= 1u;
		v6 = sub_140200220(0x47Au);
		if (v6)
			v7 = *(_DWORD*)(v6 + 28);
		else
			v7 = 1051931443;
		v2 = dword_140DC2D28;
		dword_140DC2D2C = v7;
	}
	v8 = 0;
	if ((v2 & 2) == 0)
	{
		dword_140DC2D28 = v2 | 2;
		v9 = sub_140200220(0x47Au);
		if (v9)
			v10 = *(_DWORD*)(v9 + 32);
		else
			v10 = 0;
		v2 = dword_140DC2D28;
		dword_140DC2D30 = v10;
	}
	if ((v2 & 4) == 0)
	{
		dword_140DC2D28 = v2 | 4;
		v11 = sub_140200220(0x47Bu);
		if (v11)
			v3 = *(_DWORD*)(v11 + 28);
		v2 = dword_140DC2D28;
		dword_140DC2D34 = v3;
	}
	if ((v2 & 8) == 0)
	{
		dword_140DC2D28 = v2 | 8;
		v12 = sub_140200220(0x47Bu);
		if (v12)
			v8 = *(_DWORD*)(v12 + 32);
		v2 = dword_140DC2D28;
		dword_140DC2D38 = v8;
	}
	v13 = 1065353216;
	if ((v2 & 0x10) == 0)
	{
		dword_140DC2D28 = v2 | 0x10;
		v14 = sub_140200220(0x47Cu);
		if (v14)
			v15 = *(_DWORD*)(v14 + 32);
		else
			v15 = 1065353216;
		v2 = dword_140DC2D28;
		dword_140DC2D3C = v15;
	}
	if ((v2 & 0x20) == 0)
	{
		dword_140DC2D28 = v2 | 0x20;
		v16 = sub_140200220(0x47Cu);
		if (v16)
			v13 = *(_DWORD*)(v16 + 36);
		dword_140DC2D40 = v13;
	}
	v17 = (*(double(__fastcall**)(float*, _QWORD))(*(_QWORD*)a1 + 168i64))(a1, 0i64);
	v18 = *(float*)&v17;
	if (a2)
	{
		v19 = *(float*)&dword_140DC2D40 - *(float*)&dword_140DC2D34;
		v20 = (float)(*(float*)&dword_140DC2D38 - v18) * *(float*)&dword_140DC2D34;
	}
	else
	{
		v19 = *(float*)&dword_140DC2D3C - *(float*)&dword_140DC2D2C;
		v20 = (float)(*(float*)&dword_140DC2D30 - v18) * *(float*)&dword_140DC2D2C;
	}
	return (float)(v19 - v20) + a1[701];
}
// 140DC2D28: using guessed type int dword_140DC2D28;
// 140DC2D2C: using guessed type int dword_140DC2D2C;
// 140DC2D30: using guessed type int dword_140DC2D30;
// 140DC2D34: using guessed type int dword_140DC2D34;
// 140DC2D38: using guessed type int dword_140DC2D38;
// 140DC2D3C: using guessed type int dword_140DC2D3C;
// 140DC2D40: using guessed type int dword_140DC2D40;

