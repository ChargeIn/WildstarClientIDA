//----- (00000001404658A0) ----------------------------------------------------
__m128 __fastcall sub_1404658A0(float* a1)
{
	int v1; // eax
	float v2; // xmm6_4
	float v3; // xmm7_4
	__int64 v5; // rax
	int v6; // xmm0_4
	__int64 v7; // rax
	int v8; // xmm0_4
	__int64 v9; // rax
	int v10; // xmm0_4
	__int64 v11; // rax
	int v12; // xmm0_4
	__int64 v13; // rax
	__int64 v14; // rax
	int v15; // eax
	int v16; // r8d

	v1 = dword_140DC2E30;
	v2 = a1[709];
	v3 = a1[667];
	if ((dword_140DC2E30 & 1) == 0)
	{
		dword_140DC2E30 |= 1u;
		v5 = sub_140200220(0x94Cu);
		if (v5)
			v6 = *(_DWORD*)(v5 + 24);
		else
			v6 = 1056964608;
		v1 = dword_140DC2E30;
		dword_140DC2E34 = v6;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2E30 = v1 | 2;
		v7 = sub_140200220(0x94Cu);
		if (v7)
			v8 = *(_DWORD*)(v7 + 28);
		else
			v8 = 1065353216;
		v1 = dword_140DC2E30;
		dword_140DC2E38 = v8;
	}
	if ((v1 & 4) == 0)
	{
		dword_140DC2E30 = v1 | 4;
		v9 = sub_140200220(0x94Cu);
		if (v9)
			v10 = *(_DWORD*)(v9 + 32);
		else
			v10 = 1120403456;
		v1 = dword_140DC2E30;
		dword_140DC2E3C = v10;
	}
	if ((v1 & 8) == 0)
	{
		dword_140DC2E30 = v1 | 8;
		v11 = sub_140200220(0x94Cu);
		if (v11)
			v12 = *(_DWORD*)(v11 + 36);
		else
			v12 = 0;
		v1 = dword_140DC2E30;
		dword_140DC2E40 = v12;
	}
	if ((v1 & 0x10) == 0)
	{
		dword_140DC2E30 = v1 | 0x10;
		v13 = sub_140200220(0x94Cu);
		if (v13)
			LODWORD(v13) = *(_DWORD*)(v13 + 4);
		dword_140DC2E44 = v13;
		v1 = dword_140DC2E30;
	}
	if ((v1 & 0x20) != 0)
	{
		v15 = dword_140DC2E48;
	}
	else
	{
		dword_140DC2E30 = v1 | 0x20;
		v14 = sub_140200220(0x94Cu);
		if (v14)
		{
			v15 = *(_DWORD*)(v14 + 8);
			dword_140DC2E48 = v15;
		}
		else
		{
			v15 = 1;
			dword_140DC2E48 = 1;
		}
	}
	v16 = *((_DWORD*)a1 + 15);
	if (!v16)
		v16 = *((_DWORD*)a1 + 14);
	return sub_140453B60(
		*(float*)&dword_140DC2E38,
		COERCE_DOUBLE((unsigned __int64)dword_140DC2E34),
		v16,
		*(float*)&dword_140DC2E3C,
		dword_140DC2E44,
		v3,
		v2,
		*(float*)&dword_140DC2E40,
		v15);
}
// 140DC2E30: using guessed type int dword_140DC2E30;
// 140DC2E34: using guessed type int dword_140DC2E34;
// 140DC2E38: using guessed type int dword_140DC2E38;
// 140DC2E3C: using guessed type int dword_140DC2E3C;
// 140DC2E40: using guessed type int dword_140DC2E40;
// 140DC2E44: using guessed type int dword_140DC2E44;
// 140DC2E48: using guessed type int dword_140DC2E48;

