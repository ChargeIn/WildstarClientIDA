//----- (0000000140464DE0) ----------------------------------------------------
__int64 __fastcall sub_140464DE0(float* a1, int a2)
{
	int v2; // eax
	int v3; // xmm6_4
	float v5; // xmm7_4
	float v6; // xmm8_4
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
	float v20; // xmm7_4
	float v21; // xmm8_4
	__int64 v22; // rax
	int v23; // xmm0_4
	__int64 v24; // rax
	int v25; // xmm0_4
	__int64 v26; // rax
	int v27; // xmm0_4
	__int64 v28; // rax
	int v29; // ebx
	__int64 v30; // rax
	int v31; // eax
	__int64 v32; // rax
	int v33; // r8d

	v2 = dword_140DC2D8C;
	v3 = 1056964608;
	if (a2)
	{
		v5 = a1[467];
		v6 = a1[703];
		if ((dword_140DC2D8C & 1) == 0)
		{
			dword_140DC2D8C |= 1u;
			v7 = sub_140200220(0x4D7u);
			if (v7)
				v8 = *(_DWORD*)(v7 + 24);
			else
				v8 = 1056964608;
			v2 = dword_140DC2D8C;
			dword_140DC2D90 = v8;
		}
		if ((v2 & 2) == 0)
		{
			dword_140DC2D8C = v2 | 2;
			v9 = sub_140200220(0x4D7u);
			if (v9)
				v10 = *(_DWORD*)(v9 + 28);
			else
				v10 = 1056964608;
			v2 = dword_140DC2D8C;
			dword_140DC2D94 = v10;
		}
		if ((v2 & 4) == 0)
		{
			dword_140DC2D8C = v2 | 4;
			v11 = sub_140200220(0x4D7u);
			if (v11)
				v12 = *(_DWORD*)(v11 + 32);
			else
				v12 = 1056964608;
			v2 = dword_140DC2D8C;
			dword_140DC2D98 = v12;
		}
		if ((v2 & 8) == 0)
		{
			dword_140DC2D8C = v2 | 8;
			v13 = sub_140200220(0x4D7u);
			if (v13)
				v3 = *(_DWORD*)(v13 + 36);
			v2 = dword_140DC2D8C;
			dword_140DC2D9C = v3;
		}
		v14 = 1;
		if ((v2 & 0x10) == 0)
		{
			dword_140DC2D8C = v2 | 0x10;
			v15 = sub_140200220(0x4D7u);
			if (v15)
				v16 = *(_DWORD*)(v15 + 4);
			else
				v16 = 1;
			dword_140DC2DA0 = v16;
			v2 = dword_140DC2D8C;
		}
		if ((v2 & 0x20) != 0)
		{
			v14 = dword_140DC2DA4;
		}
		else
		{
			dword_140DC2D8C = v2 | 0x20;
			v17 = sub_140200220(0x4D7u);
			if (v17)
				v14 = *(_DWORD*)(v17 + 8);
			dword_140DC2DA4 = v14;
		}
		v18 = *((_DWORD*)a1 + 15);
		if (!v18)
			v18 = *((_DWORD*)a1 + 14);
		return sub_140453C50(
			*(float*)&dword_140DC2D94,
			*(float*)&dword_140DC2D90,
			v18,
			*(float*)&dword_140DC2D98,
			dword_140DC2DA0,
			v6,
			v5,
			*(float*)&dword_140DC2D9C,
			v14);
	}
	else
	{
		v20 = a1[465];
		v21 = a1[701];
		if ((dword_140DC2D8C & 0x40) == 0)
		{
			dword_140DC2D8C |= 0x40u;
			v22 = sub_140200220(0x4D6u);
			if (v22)
				v23 = *(_DWORD*)(v22 + 24);
			else
				v23 = 1056964608;
			v2 = dword_140DC2D8C;
			dword_140DC2DA8 = v23;
		}
		if ((v2 & 0x80u) == 0)
		{
			dword_140DC2D8C = v2 | 0x80;
			v24 = sub_140200220(0x4D6u);
			if (v24)
				v25 = *(_DWORD*)(v24 + 28);
			else
				v25 = 1056964608;
			v2 = dword_140DC2D8C;
			dword_140DC2DAC = v25;
		}
		if ((v2 & 0x100) == 0)
		{
			dword_140DC2D8C = v2 | 0x100;
			v26 = sub_140200220(0x4D6u);
			if (v26)
				v27 = *(_DWORD*)(v26 + 32);
			else
				v27 = 1056964608;
			v2 = dword_140DC2D8C;
			dword_140DC2DB0 = v27;
		}
		if ((v2 & 0x200) == 0)
		{
			dword_140DC2D8C = v2 | 0x200;
			v28 = sub_140200220(0x4D6u);
			if (v28)
				v3 = *(_DWORD*)(v28 + 36);
			v2 = dword_140DC2D8C;
			dword_140DC2DB4 = v3;
		}
		v29 = 1;
		if ((v2 & 0x400) == 0)
		{
			dword_140DC2D8C = v2 | 0x400;
			v30 = sub_140200220(0x4D6u);
			if (v30)
				v31 = *(_DWORD*)(v30 + 4);
			else
				v31 = 1;
			dword_140DC2DB8 = v31;
			v2 = dword_140DC2D8C;
		}
		if ((v2 & 0x800) != 0)
		{
			v29 = dword_140DC2DBC;
		}
		else
		{
			dword_140DC2D8C = v2 | 0x800;
			v32 = sub_140200220(0x4D6u);
			if (v32)
				v29 = *(_DWORD*)(v32 + 8);
			dword_140DC2DBC = v29;
		}
		v33 = *((_DWORD*)a1 + 15);
		if (!v33)
			v33 = *((_DWORD*)a1 + 14);
		return sub_140453C50(
			*(float*)&dword_140DC2DAC,
			*(float*)&dword_140DC2DA8,
			v33,
			*(float*)&dword_140DC2DB0,
			dword_140DC2DB8,
			v21,
			v20,
			*(float*)&dword_140DC2DB4,
			v29);
	}
}
// 140DC2D8C: using guessed type int dword_140DC2D8C;
// 140DC2D90: using guessed type int dword_140DC2D90;
// 140DC2D94: using guessed type int dword_140DC2D94;
// 140DC2D98: using guessed type int dword_140DC2D98;
// 140DC2D9C: using guessed type int dword_140DC2D9C;
// 140DC2DA0: using guessed type int dword_140DC2DA0;
// 140DC2DA4: using guessed type int dword_140DC2DA4;
// 140DC2DA8: using guessed type int dword_140DC2DA8;
// 140DC2DAC: using guessed type int dword_140DC2DAC;
// 140DC2DB0: using guessed type int dword_140DC2DB0;
// 140DC2DB4: using guessed type int dword_140DC2DB4;
// 140DC2DB8: using guessed type int dword_140DC2DB8;
// 140DC2DBC: using guessed type int dword_140DC2DBC;

