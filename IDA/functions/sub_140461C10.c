#include "../winhttp.h"

//----- (0000000140461C10) ----------------------------------------------------
__int64 __fastcall sub_140461C10(float* a1)
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

	v1 = dword_140DC2AB4;
	v2 = 1056964608;
	v3 = a1[697];
	v5 = a1[485];
	if ((dword_140DC2AB4 & 1) == 0)
	{
		dword_140DC2AB4 |= 1u;
		v6 = sub_140200220(0x4DDu);
		if (v6)
			v7 = *(_DWORD*)(v6 + 24);
		else
			v7 = 1056964608;
		v1 = dword_140DC2AB4;
		dword_140DC2AB8 = v7;
	}
	if ((v1 & 2) == 0)
	{
		dword_140DC2AB4 = v1 | 2;
		v8 = sub_140200220(0x4DDu);
		if (v8)
			v9 = *(_DWORD*)(v8 + 28);
		else
			v9 = 1056964608;
		v1 = dword_140DC2AB4;
		dword_140DC2ABC = v9;
	}
	if ((v1 & 4) == 0)
	{
		dword_140DC2AB4 = v1 | 4;
		v10 = sub_140200220(0x4DDu);
		if (v10)
			v11 = *(_DWORD*)(v10 + 32);
		else
			v11 = 1056964608;
		v1 = dword_140DC2AB4;
		dword_140DC2AC0 = v11;
	}
	if ((v1 & 8) == 0)
	{
		dword_140DC2AB4 = v1 | 8;
		v12 = sub_140200220(0x4DDu);
		if (v12)
			v2 = *(_DWORD*)(v12 + 36);
		v1 = dword_140DC2AB4;
		dword_140DC2AC4 = v2;
	}
	v13 = 1;
	if ((v1 & 0x10) == 0)
	{
		dword_140DC2AB4 = v1 | 0x10;
		v14 = sub_140200220(0x4DDu);
		if (v14)
			v15 = *(_DWORD*)(v14 + 4);
		else
			v15 = 1;
		dword_140DC2AC8 = v15;
		v1 = dword_140DC2AB4;
	}
	if ((v1 & 0x20) != 0)
	{
		v13 = dword_140DC2ACC;
	}
	else
	{
		dword_140DC2AB4 = v1 | 0x20;
		v16 = sub_140200220(0x4DDu);
		if (v16)
			v13 = *(_DWORD*)(v16 + 8);
		dword_140DC2ACC = v13;
	}
	v17 = *((_DWORD*)a1 + 15);
	if (!v17)
		v17 = *((_DWORD*)a1 + 14);
	return sub_140453C50(
		*(float*)&dword_140DC2ABC,
		*(float*)&dword_140DC2AB8,
		v17,
		*(float*)&dword_140DC2AC0,
		dword_140DC2AC8,
		v3,
		v5,
		*(float*)&dword_140DC2AC4,
		v13);
}
// 140DC2AB4: using guessed type int dword_140DC2AB4;
// 140DC2AB8: using guessed type int dword_140DC2AB8;
// 140DC2ABC: using guessed type int dword_140DC2ABC;
// 140DC2AC0: using guessed type int dword_140DC2AC0;
// 140DC2AC4: using guessed type int dword_140DC2AC4;
// 140DC2AC8: using guessed type int dword_140DC2AC8;
// 140DC2ACC: using guessed type int dword_140DC2ACC;

