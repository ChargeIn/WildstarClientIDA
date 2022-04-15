#include "../winhttp.h"

//----- (0000000140462CF0) ----------------------------------------------------
__int64 __fastcall sub_140462CF0(__int64 a1)
{
	float v1; // xmm7_4
	float v2; // xmm8_4
	int v5; // eax
	int v6; // xmm6_4
	__int64 v7; // rax
	int v8; // xmm0_4
	__int64 v9; // rax
	int v10; // xmm0_4
	__int64 v11; // rax
	int v12; // xmm0_4
	__int64 v13; // rax
	int v14; // ebx
	__int64 v15; // rax
	int v16; // eax
	__int64 v17; // rax
	int v18; // r8d

	v1 = *(float*)(a1 + 1924);
	v2 = *(float*)(a1 + 2740);
	if (v2 == 0.0 && v1 == 0.0)
		return 0i64;
	v5 = dword_140DC2BA0;
	v6 = 1056964608;
	if ((dword_140DC2BA0 & 1) == 0)
	{
		dword_140DC2BA0 |= 1u;
		v7 = sub_140200220(0x4DBu);
		if (v7)
			v8 = *(_DWORD*)(v7 + 24);
		else
			v8 = 1056964608;
		v5 = dword_140DC2BA0;
		dword_140DC2BA4 = v8;
	}
	if ((v5 & 2) == 0)
	{
		dword_140DC2BA0 = v5 | 2;
		v9 = sub_140200220(0x4DBu);
		if (v9)
			v10 = *(_DWORD*)(v9 + 28);
		else
			v10 = 1056964608;
		v5 = dword_140DC2BA0;
		dword_140DC2BA8 = v10;
	}
	if ((v5 & 4) == 0)
	{
		dword_140DC2BA0 = v5 | 4;
		v11 = sub_140200220(0x4DBu);
		if (v11)
			v12 = *(_DWORD*)(v11 + 32);
		else
			v12 = 1056964608;
		v5 = dword_140DC2BA0;
		dword_140DC2BAC = v12;
	}
	if ((v5 & 8) == 0)
	{
		dword_140DC2BA0 = v5 | 8;
		v13 = sub_140200220(0x4DBu);
		if (v13)
			v6 = *(_DWORD*)(v13 + 36);
		v5 = dword_140DC2BA0;
		dword_140DC2BB0 = v6;
	}
	v14 = 1;
	if ((v5 & 0x10) == 0)
	{
		dword_140DC2BA0 = v5 | 0x10;
		v15 = sub_140200220(0x4DBu);
		if (v15)
			v16 = *(_DWORD*)(v15 + 4);
		else
			v16 = 1;
		dword_140DC2BB4 = v16;
		v5 = dword_140DC2BA0;
	}
	if ((v5 & 0x20) != 0)
	{
		v14 = dword_140DC2BB8;
	}
	else
	{
		dword_140DC2BA0 = v5 | 0x20;
		v17 = sub_140200220(0x4DBu);
		if (v17)
			v14 = *(_DWORD*)(v17 + 8);
		dword_140DC2BB8 = v14;
	}
	v18 = *(_DWORD*)(a1 + 60);
	if (!v18)
		v18 = *(_DWORD*)(a1 + 56);
	return sub_140453C50(
		*(float*)&dword_140DC2BA8,
		*(float*)&dword_140DC2BA4,
		v18,
		*(float*)&dword_140DC2BAC,
		dword_140DC2BB4,
		v2,
		v1,
		*(float*)&dword_140DC2BB0,
		v14);
}
// 140DC2BA0: using guessed type int dword_140DC2BA0;
// 140DC2BA4: using guessed type int dword_140DC2BA4;
// 140DC2BA8: using guessed type int dword_140DC2BA8;
// 140DC2BAC: using guessed type int dword_140DC2BAC;
// 140DC2BB0: using guessed type int dword_140DC2BB0;
// 140DC2BB4: using guessed type int dword_140DC2BB4;
// 140DC2BB8: using guessed type int dword_140DC2BB8;

