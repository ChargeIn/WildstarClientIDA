//----- (00000001404638E0) ----------------------------------------------------
__int64 __fastcall sub_1404638E0(float* a1)
{
	int v1; // eax
	int v2; // xmm6_4
	float v3; // xmm7_4
	float v5; // xmm8_4
	__int64 v6; // rax
	int v7; // xmm0_4
	__int64 v8; // rax
	int v9; // xmm0_4
	__int64 v10; // rax
	int v11; // xmm0_4
	__int64 v12; // rax
	int v13; // ebx
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rax
	int v17; // r8d

	v1 = dword_140DC2C50;
	v2 = 1056964608;
	v3 = a1[573];
	v5 = a1[437];
	if ((dword_140DC2C50 & 1) == 0)
	{
		dword_140DC2C50 |= 1u;
		v6 = sub_140200220(0x4CFu);
		if (v6)
			v7 = *(_DWORD*)(v6 + 24);
		else
			v7 = 1056964608;
		v1 = dword_140DC2C50;
		dword_140DC2C54 = v7;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2C50 = v1 | 2;
		v8 = sub_140200220(0x4CFu);
		if (v8)
			v9 = *(_DWORD*)(v8 + 28);
		else
			v9 = 1056964608;
		v1 = dword_140DC2C50;
		dword_140DC2C58 = v9;
	}
	if ((v1 & 4) == 0)
	{
		dword_140DC2C50 = v1 | 4;
		v10 = sub_140200220(0x4CFu);
		if (v10)
			v11 = *(_DWORD*)(v10 + 32);
		else
			v11 = 1056964608;
		v1 = dword_140DC2C50;
		dword_140DC2C5C = v11;
	}
	if ((v1 & 8) == 0)
	{
		dword_140DC2C50 = v1 | 8;
		v12 = sub_140200220(0x4CFu);
		if (v12)
			v2 = *(_DWORD*)(v12 + 36);
		v1 = dword_140DC2C50;
		dword_140DC2C60 = v2;
	}
	v13 = 1;
	if ((v1 & 0x10) == 0)
	{
		dword_140DC2C50 = v1 | 0x10;
		v14 = sub_140200220(0x4CFu);
		if (v14)
			v15 = *(_DWORD*)(v14 + 4);
		else
			v15 = 1;
		dword_140DC2C64 = v15;
		v1 = dword_140DC2C50;
	}
	if ((v1 & 0x20) != 0)
	{
		v13 = dword_140DC2C68;
	}
	else
	{
		dword_140DC2C50 = v1 | 0x20;
		v16 = sub_140200220(0x4CFu);
		if (v16)
			v13 = *(_DWORD*)(v16 + 8);
		dword_140DC2C68 = v13;
	}
	v17 = *((_DWORD*)a1 + 15);
	if (!v17)
		v17 = *((_DWORD*)a1 + 14);
	return sub_140453C50(
		*(float*)&dword_140DC2C58,
		*(float*)&dword_140DC2C54,
		v17,
		*(float*)&dword_140DC2C5C,
		dword_140DC2C64,
		v3,
		v5,
		*(float*)&dword_140DC2C60,
		v13);
}
// 140DC2C50: using guessed type int dword_140DC2C50;
// 140DC2C54: using guessed type int dword_140DC2C54;
// 140DC2C58: using guessed type int dword_140DC2C58;
// 140DC2C5C: using guessed type int dword_140DC2C5C;
// 140DC2C60: using guessed type int dword_140DC2C60;
// 140DC2C64: using guessed type int dword_140DC2C64;
// 140DC2C68: using guessed type int dword_140DC2C68;
