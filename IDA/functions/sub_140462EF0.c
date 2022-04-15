//----- (0000000140462EF0) ----------------------------------------------------
__m128 __fastcall sub_140462EF0(float* a1)
{
	int v1; // xmm6_4
	int v3; // eax
	float v4; // xmm8_4
	float v5; // xmm9_4
	__int64 v6; // rax
	int v7; // xmm0_4
	__int64 v8; // rax
	int v9; // xmm0_4
	__int64 v10; // rax
	int v11; // xmm0_4
	__int64 v12; // rax
	int v13; // xmm0_4
	__int64 v14; // rax
	int v15; // ebx
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // rax
	int v19; // r8d
	__int128 v20; // xmm7

	v1 = 1056964608;
	v3 = dword_140DC2BBC;
	v4 = a1[577];
	v5 = a1[433];
	if ((dword_140DC2BBC & 1) == 0)
	{
		dword_140DC2BBC |= 1u;
		v6 = sub_140200220(0x4CEu);
		if (v6)
			v7 = *(_DWORD*)(v6 + 24);
		else
			v7 = 1056964608;
		v3 = dword_140DC2BBC;
		dword_140DC2BC0 = v7;
	}
	if ((v3 & 2) == 0)
	{
		dword_140DC2BBC = v3 | 2;
		v8 = sub_140200220(0x4CEu);
		if (v8)
			v9 = *(_DWORD*)(v8 + 28);
		else
			v9 = 1056964608;
		v3 = dword_140DC2BBC;
		dword_140DC2BC4 = v9;
	}
	if ((v3 & 4) == 0)
	{
		dword_140DC2BBC = v3 | 4;
		v10 = sub_140200220(0x4CEu);
		if (v10)
			v11 = *(_DWORD*)(v10 + 32);
		else
			v11 = 1056964608;
		v3 = dword_140DC2BBC;
		dword_140DC2BC8 = v11;
	}
	if ((v3 & 8) == 0)
	{
		dword_140DC2BBC = v3 | 8;
		v12 = sub_140200220(0x4CEu);
		if (v12)
			v13 = *(_DWORD*)(v12 + 36);
		else
			v13 = 1056964608;
		v3 = dword_140DC2BBC;
		dword_140DC2BCC = v13;
	}
	if ((v3 & 0x10) == 0)
	{
		dword_140DC2BBC = v3 | 0x10;
		v14 = sub_140200220(0x4CEu);
		if (v14)
			v1 = *(_DWORD*)(v14 + 40);
		v3 = dword_140DC2BBC;
		dword_140DC2BD0 = v1;
	}
	v15 = 1;
	if ((v3 & 0x20) == 0)
	{
		dword_140DC2BBC = v3 | 0x20;
		v16 = sub_140200220(0x4CEu);
		if (v16)
			v17 = *(_DWORD*)(v16 + 4);
		else
			v17 = 1;
		dword_140DC2BD4 = v17;
		v3 = dword_140DC2BBC;
	}
	if ((v3 & 0x40) != 0)
	{
		v15 = dword_140DC2BD8;
	}
	else
	{
		dword_140DC2BBC = v3 | 0x40;
		v18 = sub_140200220(0x4CEu);
		if (v18)
			v15 = *(_DWORD*)(v18 + 8);
		dword_140DC2BD8 = v15;
	}
	v19 = *((_DWORD*)a1 + 15);
	if (!v19)
		v19 = *((_DWORD*)a1 + 14);
	v20 = 0i64;
	*(float*)&v20 = fmaxf(
		0.0,
		sub_140453B60(
			*(float*)&dword_140DC2BC4,
			COERCE_DOUBLE((unsigned __int64)dword_140DC2BC0),
			v19,
			*(float*)&dword_140DC2BC8,
			dword_140DC2BD4,
			v4,
			v5,
			*(float*)&dword_140DC2BCC,
			v15).m128_f32[0]);
	return (__m128)v20;
}
// 140DC2BBC: using guessed type int dword_140DC2BBC;
// 140DC2BC0: using guessed type int dword_140DC2BC0;
// 140DC2BC4: using guessed type int dword_140DC2BC4;
// 140DC2BC8: using guessed type int dword_140DC2BC8;
// 140DC2BCC: using guessed type int dword_140DC2BCC;
// 140DC2BD0: using guessed type int dword_140DC2BD0;
// 140DC2BD4: using guessed type int dword_140DC2BD4;
// 140DC2BD8: using guessed type int dword_140DC2BD8;

