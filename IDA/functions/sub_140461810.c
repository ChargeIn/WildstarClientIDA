#include "../winhttp.h"

//----- (0000000140461810) ----------------------------------------------------
__int64 __fastcall sub_140461810(float* a1)
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
	int v13; // xmm0_4
	__int64 v14; // rax
	int v15; // ebx
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // rax
	int v19; // r8d

	v1 = dword_140DC2A78;
	v2 = 1056964608;
	v3 = a1[491];
	v5 = a1[759];
	if ((dword_140DC2A78 & 1) == 0)
	{
		dword_140DC2A78 |= 1u;
		v6 = sub_140200220(0x4F7u);
		if (v6)
			v7 = *(_DWORD*)(v6 + 24);
		else
			v7 = 1056964608;
		v1 = dword_140DC2A78;
		dword_140DC2A7C = v7;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2A78 = v1 | 2;
		v8 = sub_140200220(0x4F7u);
		if (v8)
			v9 = *(_DWORD*)(v8 + 28);
		else
			v9 = 1056964608;
		v1 = dword_140DC2A78;
		dword_140DC2A80 = v9;
	}
	if ((v1 & 4) == 0)
	{
		dword_140DC2A78 = v1 | 4;
		v10 = sub_140200220(0x4F7u);
		if (v10)
			v11 = *(_DWORD*)(v10 + 32);
		else
			v11 = 1056964608;
		v1 = dword_140DC2A78;
		dword_140DC2A84 = v11;
	}
	if ((v1 & 8) == 0)
	{
		dword_140DC2A78 = v1 | 8;
		v12 = sub_140200220(0x4F7u);
		if (v12)
			v13 = *(_DWORD*)(v12 + 36);
		else
			v13 = 1056964608;
		v1 = dword_140DC2A78;
		dword_140DC2A88 = v13;
	}
	if ((v1 & 0x10) == 0)
	{
		dword_140DC2A78 = v1 | 0x10;
		v14 = sub_140200220(0x4F7u);
		if (v14)
			v2 = *(_DWORD*)(v14 + 40);
		v1 = dword_140DC2A78;
		dword_140DC2A8C = v2;
	}
	v15 = 1;
	if ((v1 & 0x20) == 0)
	{
		dword_140DC2A78 = v1 | 0x20;
		v16 = sub_140200220(0x4F7u);
		if (v16)
			v17 = *(_DWORD*)(v16 + 4);
		else
			v17 = 1;
		dword_140DC2A90 = v17;
		v1 = dword_140DC2A78;
	}
	if ((v1 & 0x40) != 0)
	{
		v15 = dword_140DC2A94;
	}
	else
	{
		dword_140DC2A78 = v1 | 0x40;
		v18 = sub_140200220(0x4F7u);
		if (v18)
			v15 = *(_DWORD*)(v18 + 8);
		dword_140DC2A94 = v15;
	}
	v19 = *((_DWORD*)a1 + 15);
	if (!v19)
		v19 = *((_DWORD*)a1 + 14);
	return sub_140453C50(
		*(float*)&dword_140DC2A80,
		*(float*)&dword_140DC2A7C,
		v19,
		*(float*)&dword_140DC2A84,
		dword_140DC2A90,
		v5,
		v3,
		*(float*)&dword_140DC2A88,
		v15);
}
// 140DC2A78: using guessed type int dword_140DC2A78;
// 140DC2A7C: using guessed type int dword_140DC2A7C;
// 140DC2A80: using guessed type int dword_140DC2A80;
// 140DC2A84: using guessed type int dword_140DC2A84;
// 140DC2A88: using guessed type int dword_140DC2A88;
// 140DC2A8C: using guessed type int dword_140DC2A8C;
// 140DC2A90: using guessed type int dword_140DC2A90;
// 140DC2A94: using guessed type int dword_140DC2A94;

