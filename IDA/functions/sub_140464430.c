//----- (0000000140464430) ----------------------------------------------------
__int64 __fastcall sub_140464430(__int64 a1, float a2)
{
	int v2; // eax
	int v3; // xmm6_4
	__int64 v5; // rax
	int v6; // xmm0_4
	__int64 v7; // rax
	int v8; // xmm0_4
	__int64 v9; // rax
	int v10; // xmm0_4
	__int64 v11; // rax
	int v12; // ebx
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rax
	int v16; // r8d

	v2 = dword_140DC2CF8;
	v3 = 1056964608;
	if ((dword_140DC2CF8 & 1) == 0)
	{
		dword_140DC2CF8 |= 1u;
		v5 = sub_140200220(0x4D2u);
		if (v5)
			v6 = *(_DWORD*)(v5 + 24);
		else
			v6 = 1056964608;
		v2 = dword_140DC2CF8;
		dword_140DC2CFC = v6;
	}
	if ((v2 & 2) == 0)
	{
		dword_140DC2CF8 = v2 | 2;
		v7 = sub_140200220(0x4D2u);
		if (v7)
			v8 = *(_DWORD*)(v7 + 28);
		else
			v8 = 1056964608;
		v2 = dword_140DC2CF8;
		dword_140DC2D00 = v8;
	}
	if ((v2 & 4) == 0)
	{
		dword_140DC2CF8 = v2 | 4;
		v9 = sub_140200220(0x4D2u);
		if (v9)
			v10 = *(_DWORD*)(v9 + 32);
		else
			v10 = 1056964608;
		v2 = dword_140DC2CF8;
		dword_140DC2D04 = v10;
	}
	if ((v2 & 8) == 0)
	{
		dword_140DC2CF8 = v2 | 8;
		v11 = sub_140200220(0x4D2u);
		if (v11)
			v3 = *(_DWORD*)(v11 + 36);
		v2 = dword_140DC2CF8;
		dword_140DC2D08 = v3;
	}
	v12 = 1;
	if ((v2 & 0x10) == 0)
	{
		dword_140DC2CF8 = v2 | 0x10;
		v13 = sub_140200220(0x4D2u);
		if (v13)
			v14 = *(_DWORD*)(v13 + 4);
		else
			v14 = 1;
		dword_140DC2D0C = v14;
		v2 = dword_140DC2CF8;
	}
	if ((v2 & 0x20) != 0)
	{
		v12 = dword_140DC2D10;
	}
	else
	{
		dword_140DC2CF8 = v2 | 0x20;
		v15 = sub_140200220(0x4D2u);
		if (v15)
			v12 = *(_DWORD*)(v15 + 8);
		dword_140DC2D10 = v12;
	}
	v16 = *(_DWORD*)(a1 + 60);
	if (!v16)
		v16 = *(_DWORD*)(a1 + 56);
	return sub_140453C50(
		*(float*)&dword_140DC2D00,
		*(float*)&dword_140DC2CFC,
		v16,
		*(float*)&dword_140DC2D04,
		dword_140DC2D0C,
		0.0,
		a2,
		*(float*)&dword_140DC2D08,
		v12);
}
// 140DC2CF8: using guessed type int dword_140DC2CF8;
// 140DC2CFC: using guessed type int dword_140DC2CFC;
// 140DC2D00: using guessed type int dword_140DC2D00;
// 140DC2D04: using guessed type int dword_140DC2D04;
// 140DC2D08: using guessed type int dword_140DC2D08;
// 140DC2D0C: using guessed type int dword_140DC2D0C;
// 140DC2D10: using guessed type int dword_140DC2D10;

