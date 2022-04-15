//----- (0000000140464240) ----------------------------------------------------
__m128 __fastcall sub_140464240(__int64 a1, float a2, float a3)
{
	int v3; // xmm6_4
	int v5; // eax
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
	__int128 v18; // xmm7

	v3 = 1056964608;
	v5 = dword_140DC2CDC;
	if ((dword_140DC2CDC & 1) == 0)
	{
		dword_140DC2CDC |= 1u;
		v6 = sub_140200220(0x4D2u);
		if (v6)
			v7 = *(_DWORD*)(v6 + 24);
		else
			v7 = 1056964608;
		v5 = dword_140DC2CDC;
		dword_140DC2CE0 = v7;
	}
	if ((v5 & 2) == 0)
	{
		dword_140DC2CDC = v5 | 2;
		v8 = sub_140200220(0x4D2u);
		if (v8)
			v9 = *(_DWORD*)(v8 + 28);
		else
			v9 = 1056964608;
		v5 = dword_140DC2CDC;
		dword_140DC2CE4 = v9;
	}
	if ((v5 & 4) == 0)
	{
		dword_140DC2CDC = v5 | 4;
		v10 = sub_140200220(0x4D2u);
		if (v10)
			v11 = *(_DWORD*)(v10 + 32);
		else
			v11 = 1056964608;
		v5 = dword_140DC2CDC;
		dword_140DC2CE8 = v11;
	}
	if ((v5 & 8) == 0)
	{
		dword_140DC2CDC = v5 | 8;
		v12 = sub_140200220(0x4D2u);
		if (v12)
			v3 = *(_DWORD*)(v12 + 36);
		v5 = dword_140DC2CDC;
		dword_140DC2CEC = v3;
	}
	v13 = 1;
	if ((v5 & 0x10) == 0)
	{
		dword_140DC2CDC = v5 | 0x10;
		v14 = sub_140200220(0x4D2u);
		if (v14)
			v15 = *(_DWORD*)(v14 + 4);
		else
			v15 = 1;
		dword_140DC2CF0 = v15;
		v5 = dword_140DC2CDC;
	}
	if ((v5 & 0x20) != 0)
	{
		v13 = dword_140DC2CF4;
	}
	else
	{
		dword_140DC2CDC = v5 | 0x20;
		v16 = sub_140200220(0x4D2u);
		if (v16)
			v13 = *(_DWORD*)(v16 + 8);
		dword_140DC2CF4 = v13;
	}
	v17 = *(_DWORD*)(a1 + 60);
	if (!v17)
		v17 = *(_DWORD*)(a1 + 56);
	v18 = 0i64;
	*(float*)&v18 = fmaxf(
		0.0,
		sub_140453B60(
			*(float*)&dword_140DC2CE4,
			COERCE_DOUBLE((unsigned __int64)dword_140DC2CE0),
			v17,
			*(float*)&dword_140DC2CE8,
			dword_140DC2CF0,
			a3,
			a2,
			*(float*)&dword_140DC2CEC,
			v13).m128_f32[0]);
	return (__m128)v18;
}
// 140DC2CDC: using guessed type int dword_140DC2CDC;
// 140DC2CE0: using guessed type int dword_140DC2CE0;
// 140DC2CE4: using guessed type int dword_140DC2CE4;
// 140DC2CE8: using guessed type int dword_140DC2CE8;
// 140DC2CEC: using guessed type int dword_140DC2CEC;
// 140DC2CF0: using guessed type int dword_140DC2CF0;
// 140DC2CF4: using guessed type int dword_140DC2CF4;

