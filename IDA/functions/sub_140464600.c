//----- (0000000140464600) ----------------------------------------------------
float __fastcall sub_140464600(float* a1, int a2)
{
	int v2; // eax
	int v3; // xmm6_4
	__int64 v6; // rax
	int v7; // xmm0_4
	__int64 v8; // rax
	int v9; // xmm6_4
	__int64 v10; // rax
	int v11; // xmm0_4
	__int64 v12; // rax
	double v13; // xmm0_8
	float v14; // xmm2_4
	int v15; // xmm0_4
	int v16; // xmm1_4

	v2 = dword_140DC2D14;
	v3 = 1051931443;
	if ((dword_140DC2D14 & 1) == 0)
	{
		dword_140DC2D14 |= 1u;
		v6 = sub_140200220(0x47Au);
		if (v6)
			v7 = *(_DWORD*)(v6 + 24);
		else
			v7 = 1051931443;
		v2 = dword_140DC2D14;
		dword_140DC2D18 = v7;
	}
	if ((v2 & 2) == 0)
	{
		dword_140DC2D14 = v2 | 2;
		v8 = sub_140200220(0x47Bu);
		if (v8)
			v3 = *(_DWORD*)(v8 + 24);
		v2 = dword_140DC2D14;
		dword_140DC2D1C = v3;
	}
	v9 = 1065353216;
	if ((v2 & 4) == 0)
	{
		dword_140DC2D14 = v2 | 4;
		v10 = sub_140200220(0x47Cu);
		if (v10)
			v11 = *(_DWORD*)(v10 + 24);
		else
			v11 = 1065353216;
		v2 = dword_140DC2D14;
		dword_140DC2D20 = v11;
	}
	if ((v2 & 8) == 0)
	{
		dword_140DC2D14 = v2 | 8;
		v12 = sub_140200220(0x47Cu);
		if (v12)
			v9 = *(_DWORD*)(v12 + 28);
		dword_140DC2D24 = v9;
	}
	v13 = (*(double(__fastcall**)(float*, _QWORD))(*(_QWORD*)a1 + 168i64))(a1, 0i64);
	v14 = *(float*)&v13;
	if (a2)
	{
		v15 = dword_140DC2D24;
		v16 = dword_140DC2D1C;
	}
	else
	{
		v15 = dword_140DC2D20;
		v16 = dword_140DC2D18;
	}
	return (float)((float)(*(float*)&v15 - *(float*)&v16) - (float)-(float)(*(float*)&v16 * v14)) + a1[701];
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140DC2D14: using guessed type int dword_140DC2D14;
// 140DC2D18: using guessed type int dword_140DC2D18;
// 140DC2D1C: using guessed type int dword_140DC2D1C;
// 140DC2D20: using guessed type int dword_140DC2D20;
// 140DC2D24: using guessed type int dword_140DC2D24;

