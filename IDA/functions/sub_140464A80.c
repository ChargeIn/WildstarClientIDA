#include "../winhttp.h"

//----- (0000000140464A80) ----------------------------------------------------
__m128 __fastcall sub_140464A80(float* a1, int a2)
{
	int v2; // eax
	int v3; // xmm6_4
	float v5; // xmm7_4
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
	float v19; // xmm7_4
	__int64 v20; // rax
	int v21; // xmm0_4
	__int64 v22; // rax
	int v23; // xmm0_4
	__int64 v24; // rax
	int v25; // xmm0_4
	__int64 v26; // rax
	int v27; // ebx
	__int64 v28; // rax
	int v29; // eax
	__int64 v30; // rax
	int v31; // r8d

	v2 = dword_140DC2D58;
	v3 = 1056964608;
	if (a2)
	{
		v5 = a1[467];
		if ((dword_140DC2D58 & 1) == 0)
		{
			dword_140DC2D58 |= 1u;
			v6 = sub_140200220(0x4D7u);
			if (v6)
				v7 = *(_DWORD*)(v6 + 24);
			else
				v7 = 1056964608;
			v2 = dword_140DC2D58;
			dword_140DC2D5C = v7;
		}
		if ((v2 & 2) == 0)
		{
			dword_140DC2D58 = v2 | 2;
			v8 = sub_140200220(0x4D7u);
			if (v8)
				v9 = *(_DWORD*)(v8 + 28);
			else
				v9 = 1056964608;
			v2 = dword_140DC2D58;
			dword_140DC2D60 = v9;
		}
		if ((v2 & 4) == 0)
		{
			dword_140DC2D58 = v2 | 4;
			v10 = sub_140200220(0x4D7u);
			if (v10)
				v11 = *(_DWORD*)(v10 + 32);
			else
				v11 = 1056964608;
			v2 = dword_140DC2D58;
			dword_140DC2D64 = v11;
		}
		if ((v2 & 8) == 0)
		{
			dword_140DC2D58 = v2 | 8;
			v12 = sub_140200220(0x4D7u);
			if (v12)
				v3 = *(_DWORD*)(v12 + 36);
			v2 = dword_140DC2D58;
			dword_140DC2D68 = v3;
		}
		v13 = 1;
		if ((v2 & 0x10) == 0)
		{
			dword_140DC2D58 = v2 | 0x10;
			v14 = sub_140200220(0x4D7u);
			if (v14)
				v15 = *(_DWORD*)(v14 + 4);
			else
				v15 = 1;
			dword_140DC2D6C = v15;
			v2 = dword_140DC2D58;
		}
		if ((v2 & 0x20) != 0)
		{
			v13 = dword_140DC2D70;
		}
		else
		{
			dword_140DC2D58 = v2 | 0x20;
			v16 = sub_140200220(0x4D7u);
			if (v16)
				v13 = *(_DWORD*)(v16 + 8);
			dword_140DC2D70 = v13;
		}
		v17 = *((_DWORD*)a1 + 15);
		if (!v17)
			v17 = *((_DWORD*)a1 + 14);
		return sub_140453B60(
			*(float*)&dword_140DC2D60,
			COERCE_DOUBLE((unsigned __int64)dword_140DC2D5C),
			v17,
			*(float*)&dword_140DC2D64,
			dword_140DC2D6C,
			0.0,
			v5,
			*(float*)&dword_140DC2D68,
			v13);
	}
	else
	{
		v19 = a1[465];
		if ((dword_140DC2D58 & 0x40) == 0)
		{
			dword_140DC2D58 |= 0x40u;
			v20 = sub_140200220(0x4D6u);
			if (v20)
				v21 = *(_DWORD*)(v20 + 24);
			else
				v21 = 1056964608;
			v2 = dword_140DC2D58;
			dword_140DC2D74 = v21;
		}
		if ((v2 & 0x80u) == 0)
		{
			dword_140DC2D58 = v2 | 0x80;
			v22 = sub_140200220(0x4D6u);
			if (v22)
				v23 = *(_DWORD*)(v22 + 28);
			else
				v23 = 1056964608;
			v2 = dword_140DC2D58;
			dword_140DC2D78 = v23;
		}
		if ((v2 & 0x100) == 0)
		{
			dword_140DC2D58 = v2 | 0x100;
			v24 = sub_140200220(0x4D6u);
			if (v24)
				v25 = *(_DWORD*)(v24 + 32);
			else
				v25 = 1056964608;
			v2 = dword_140DC2D58;
			dword_140DC2D7C = v25;
		}
		if ((v2 & 0x200) == 0)
		{
			dword_140DC2D58 = v2 | 0x200;
			v26 = sub_140200220(0x4D6u);
			if (v26)
				v3 = *(_DWORD*)(v26 + 36);
			v2 = dword_140DC2D58;
			dword_140DC2D80 = v3;
		}
		v27 = 1;
		if ((v2 & 0x400) == 0)
		{
			dword_140DC2D58 = v2 | 0x400;
			v28 = sub_140200220(0x4D6u);
			if (v28)
				v29 = *(_DWORD*)(v28 + 4);
			else
				v29 = 1;
			dword_140DC2D84 = v29;
			v2 = dword_140DC2D58;
		}
		if ((v2 & 0x800) != 0)
		{
			v27 = dword_140DC2D88;
		}
		else
		{
			dword_140DC2D58 = v2 | 0x800;
			v30 = sub_140200220(0x4D6u);
			if (v30)
				v27 = *(_DWORD*)(v30 + 8);
			dword_140DC2D88 = v27;
		}
		v31 = *((_DWORD*)a1 + 15);
		if (!v31)
			v31 = *((_DWORD*)a1 + 14);
		return sub_140453B60(
			*(float*)&dword_140DC2D78,
			COERCE_DOUBLE((unsigned __int64)dword_140DC2D74),
			v31,
			*(float*)&dword_140DC2D7C,
			dword_140DC2D84,
			0.0,
			v19,
			*(float*)&dword_140DC2D80,
			v27);
	}
}
// 140DC2D58: using guessed type int dword_140DC2D58;
// 140DC2D5C: using guessed type int dword_140DC2D5C;
// 140DC2D60: using guessed type int dword_140DC2D60;
// 140DC2D64: using guessed type int dword_140DC2D64;
// 140DC2D68: using guessed type int dword_140DC2D68;
// 140DC2D6C: using guessed type int dword_140DC2D6C;
// 140DC2D70: using guessed type int dword_140DC2D70;
// 140DC2D74: using guessed type int dword_140DC2D74;
// 140DC2D78: using guessed type int dword_140DC2D78;
// 140DC2D7C: using guessed type int dword_140DC2D7C;
// 140DC2D80: using guessed type int dword_140DC2D80;
// 140DC2D84: using guessed type int dword_140DC2D84;
// 140DC2D88: using guessed type int dword_140DC2D88;

