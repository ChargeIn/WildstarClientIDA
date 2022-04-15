//----- (0000000140462AF0) ----------------------------------------------------
void __fastcall sub_140462AF0(__int64 a1)
{
	float v1; // xmm7_4
	float v2; // xmm8_4
	int v4; // eax
	int v5; // xmm6_4
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

	v1 = *(float*)(a1 + 1924);
	v2 = *(float*)(a1 + 2740);
	if (v2 != 0.0 || v1 != 0.0)
	{
		v4 = dword_140DC2B84;
		v5 = 1056964608;
		if ((dword_140DC2B84 & 1) == 0)
		{
			dword_140DC2B84 |= 1u;
			v6 = sub_140200220(0x4DBu);
			if (v6)
				v7 = *(_DWORD*)(v6 + 24);
			else
				v7 = 1056964608;
			v4 = dword_140DC2B84;
			dword_140DC2B88 = v7;
		}
		if ((v4 & 2) == 0)
		{
			dword_140DC2B84 = v4 | 2;
			v8 = sub_140200220(0x4DBu);
			if (v8)
				v9 = *(_DWORD*)(v8 + 28);
			else
				v9 = 1056964608;
			v4 = dword_140DC2B84;
			dword_140DC2B8C = v9;
		}
		if ((v4 & 4) == 0)
		{
			dword_140DC2B84 = v4 | 4;
			v10 = sub_140200220(0x4DBu);
			if (v10)
				v11 = *(_DWORD*)(v10 + 32);
			else
				v11 = 1056964608;
			v4 = dword_140DC2B84;
			dword_140DC2B90 = v11;
		}
		if ((v4 & 8) == 0)
		{
			dword_140DC2B84 = v4 | 8;
			v12 = sub_140200220(0x4DBu);
			if (v12)
				v5 = *(_DWORD*)(v12 + 36);
			v4 = dword_140DC2B84;
			dword_140DC2B94 = v5;
		}
		v13 = 1;
		if ((v4 & 0x10) == 0)
		{
			dword_140DC2B84 = v4 | 0x10;
			v14 = sub_140200220(0x4DBu);
			if (v14)
				v15 = *(_DWORD*)(v14 + 4);
			else
				v15 = 1;
			dword_140DC2B98 = v15;
			v4 = dword_140DC2B84;
		}
		if ((v4 & 0x20) != 0)
		{
			v13 = dword_140DC2B9C;
		}
		else
		{
			dword_140DC2B84 = v4 | 0x20;
			v16 = sub_140200220(0x4DBu);
			if (v16)
				v13 = *(_DWORD*)(v16 + 8);
			dword_140DC2B9C = v13;
		}
		v17 = *(_DWORD*)(a1 + 60);
		if (!v17)
			v17 = *(_DWORD*)(a1 + 56);
		sub_140453B60(
			*(float*)&dword_140DC2B8C,
			COERCE_DOUBLE((unsigned __int64)dword_140DC2B88),
			v17,
			*(float*)&dword_140DC2B90,
			dword_140DC2B98,
			v2,
			v1,
			*(float*)&dword_140DC2B94,
			v13);
	}
}
// 140DC2B84: using guessed type int dword_140DC2B84;
// 140DC2B88: using guessed type int dword_140DC2B88;
// 140DC2B8C: using guessed type int dword_140DC2B8C;
// 140DC2B90: using guessed type int dword_140DC2B90;
// 140DC2B94: using guessed type int dword_140DC2B94;
// 140DC2B98: using guessed type int dword_140DC2B98;
// 140DC2B9C: using guessed type int dword_140DC2B9C;

