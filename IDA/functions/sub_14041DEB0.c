#include "../winhttp.h"

//----- (000000014041DEB0) ----------------------------------------------------
__m128 __fastcall sub_14041DEB0(__int64 a1, unsigned int a2)
{
	int v2; // eax
	int v3; // ebx
	int v5; // ecx
	__int64 v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rax
	unsigned int v9; // eax
	int v10; // xmm8_4
	__int64 v11; // rax
	int v12; // xmm9_4
	__int64 v13; // rax
	int v14; // xmm10_4
	__int64 v15; // rax
	int v16; // xmm7_4
	__int64 v17; // rax
	__int64 v18; // rax
	int v19; // edi
	float v20; // xmm6_4
	float v21; // xmm1_4
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rax
	float v29; // xmm7_4
	__int64 v30; // rax
	__int128 v31; // xmm0
	__int128 v32; // xmm7

	v2 = dword_140C8A9E0;
	v3 = 0;
	if ((dword_140C8A9E0 & 1) == 0)
	{
		v2 = dword_140C8A9E0 | 1;
		dword_140C8A9EC = 0;
		dword_140C8A9E0 |= 1u;
	}
	if ((v2 & 2) == 0)
	{
		v2 |= 2u;
		dword_140C8A9B4 = 0;
		dword_140C8A9BC = 0;
		dword_140C8A9C4 = 0;
		dword_140C8A9CC = 0;
		dword_140C8A9D4 = 0;
		dword_140C8A9E0 = v2;
	}
	if ((v2 & 4) != 0)
	{
		v5 = dword_140C8A9DC;
	}
	else
	{
		v2 |= 4u;
		v5 = 0;
		dword_140C8A9DC = 0;
		dword_140C8A9E0 = v2;
	}
	if ((v2 & 8) == 0)
	{
		v2 |= 8u;
		dword_140C8AA24 = 0;
		dword_140C8AA2C = 0;
		dword_140C8AA34 = 0;
		dword_140C8AA3C = 0;
		dword_140C8AA44 = 0;
		dword_140C8A9E0 = v2;
	}
	if ((v2 & 0x10) == 0)
	{
		v2 |= 0x10u;
		dword_140C8AA4C = 0;
		dword_140C8A9E0 = v2;
	}
	if ((v2 & 0x20) == 0)
	{
		dword_140C8A9F4 = 0;
		dword_140C8A9FC = 0;
		dword_140C8AA04 = 0;
		dword_140C8AA0C = 0;
		dword_140C8AA14 = 0;
		dword_140C8A9E0 = v2 | 0x20;
	}
	if (v5)
	{
		v7 = dword_140C8A9D8;
	}
	else
	{
		dword_140C8A9DC = 1;
		v6 = sub_140200220(0x506u);
		if (!v6)
		{
			dword_140C8A9D8 = 0;
			goto LABEL_18;
		}
		v7 = *(_DWORD*)(v6 + 4);
		dword_140C8A9D8 = v7;
	}
	if (a2 < v7)
	{
		*(float*)&v10 = 0.0;
		if (dword_140C8A9CC)
		{
			v12 = dword_140C8A9C8;
		}
		else
		{
			dword_140C8A9CC = 1;
			v11 = sub_140200220(0x223u);
			if (v11)
			{
				v12 = *(_DWORD*)(v11 + 36);
				dword_140C8A9C8 = v12;
			}
			else
			{
				v12 = 0;
				dword_140C8A9C8 = 0;
			}
		}
		if (dword_140C8A9C4)
		{
			v14 = dword_140C8A9C0;
		}
		else
		{
			dword_140C8A9C4 = 1;
			v13 = sub_140200220(0x223u);
			if (v13)
			{
				v14 = *(int*)(v13 + 32);
				dword_140C8A9C0 = v14;
			}
			else
			{
				*(float*)&v14 = 0.0;
				dword_140C8A9C0 = 0;
			}
		}
		if (dword_140C8A9BC)
		{
			v16 = dword_140C8A9B8;
		}
		else
		{
			dword_140C8A9BC = 1;
			v15 = sub_140200220(0x223u);
			if (v15)
			{
				v16 = *(int*)(v15 + 28);
				dword_140C8A9B8 = v16;
			}
			else
			{
				*(float*)&v16 = 0.0;
				dword_140C8A9B8 = 0;
			}
		}
		if (dword_140C8A9B4)
		{
			v10 = dword_140C8A9B0;
		}
		else
		{
			dword_140C8A9B4 = 1;
			v17 = sub_140200220(0x223u);
			if (v17)
				v10 = *(int*)(v17 + 24);
			dword_140C8A9B0 = v10;
		}
		if (dword_140C8A9EC)
		{
			v3 = dword_140C8A9E8;
		}
		else
		{
			dword_140C8A9EC = 1;
			v18 = sub_140200220(0x223u);
			if (v18)
				v3 = *(_DWORD*)(v18 + 4);
			dword_140C8A9E8 = v3;
		}
		v19 = a2 - v3;
	LABEL_49:
		v20 = (float)v19;
		v21 = (float)v19 * *(float*)&v16;
		goto LABEL_94;
	}
LABEL_18:
	if (dword_140C8AA4C)
	{
		v9 = dword_140C8AA48;
	}
	else
	{
		dword_140C8AA4C = 1;
		v8 = sub_140200220(0x507u);
		if (!v8)
		{
			dword_140C8AA48 = 0;
			goto LABEL_51;
		}
		v9 = *(_DWORD*)(v8 + 4);
		dword_140C8AA48 = v9;
	}
	if (a2 < v9)
	{
		*(float*)&v10 = 0.0;
		if (dword_140C8AA3C)
		{
			v12 = dword_140C8AA38;
		}
		else
		{
			dword_140C8AA3C = 1;
			v23 = sub_140200220(0x506u);
			if (v23)
			{
				v12 = *(_DWORD*)(v23 + 36);
				dword_140C8AA38 = v12;
			}
			else
			{
				v12 = 0;
				dword_140C8AA38 = 0;
			}
		}
		if (dword_140C8AA34)
		{
			v14 = dword_140C8AA30;
		}
		else
		{
			dword_140C8AA34 = 1;
			v24 = sub_140200220(0x506u);
			if (v24)
			{
				v14 = *(int*)(v24 + 32);
				dword_140C8AA30 = v14;
			}
			else
			{
				*(float*)&v14 = 0.0;
				dword_140C8AA30 = 0;
			}
		}
		if (dword_140C8AA2C)
		{
			v16 = dword_140C8AA28;
		}
		else
		{
			dword_140C8AA2C = 1;
			v25 = sub_140200220(0x506u);
			if (v25)
			{
				v16 = *(int*)(v25 + 28);
				dword_140C8AA28 = v16;
			}
			else
			{
				*(float*)&v16 = 0.0;
				dword_140C8AA28 = 0;
			}
		}
		if (dword_140C8AA24)
		{
			v10 = dword_140C8AA20;
			v19 = a2 - sub_14041F840();
		}
		else
		{
			dword_140C8AA24 = 1;
			v26 = sub_140200220(0x506u);
			if (v26)
				v10 = *(int*)(v26 + 24);
			dword_140C8AA20 = v10;
			v19 = a2 - sub_14041F840();
		}
		goto LABEL_49;
	}
LABEL_51:
	*(float*)&v10 = 0.0;
	if (dword_140C8AA0C)
	{
		v12 = dword_140C8AA08;
	}
	else
	{
		dword_140C8AA0C = 1;
		v22 = sub_140200220(0x507u);
		if (v22)
		{
			v12 = *(_DWORD*)(v22 + 36);
			dword_140C8AA08 = v12;
		}
		else
		{
			v12 = 0;
			dword_140C8AA08 = 0;
		}
	}
	if (dword_140C8AA04)
	{
		v14 = dword_140C8AA00;
	}
	else
	{
		dword_140C8AA04 = 1;
		v27 = sub_140200220(0x507u);
		if (v27)
		{
			v14 = *(int*)(v27 + 32);
			dword_140C8AA00 = v14;
		}
		else
		{
			*(float*)&v14 = 0.0;
			dword_140C8AA00 = 0;
		}
	}
	if (dword_140C8A9FC)
	{
		v29 = *(float*)&dword_140C8A9F8;
	}
	else
	{
		dword_140C8A9FC = 1;
		v28 = sub_140200220(0x507u);
		if (v28)
		{
			v29 = *(float*)(v28 + 28);
			dword_140C8A9F8 = LODWORD(v29);
		}
		else
		{
			v29 = 0.0;
			dword_140C8A9F8 = 0;
		}
	}
	if (dword_140C8A9F4)
	{
		v10 = dword_140C8A9F0;
	}
	else
	{
		dword_140C8A9F4 = 1;
		v30 = sub_140200220(0x507u);
		if (v30)
			v10 = *(int*)(v30 + 24);
		dword_140C8A9F0 = v10;
	}
	v20 = (float)(int)(a2 - sub_14041F890());
	v21 = v29 * v20;
LABEL_94:
	v31 = 0x402DF854u;
	*(double*)&v31 = sub_1408FBFC0(COERCE_DOUBLE(1076754516i64), v21);
	v32 = v31;
	*(float*)&v32 = *(float*)&v31 * *(float*)&v10;
	*(double*)&v31 = sub_1408FBFC0(COERCE_DOUBLE((unsigned __int64)LODWORD(v20)), *(float*)&v12);
	*(float*)&v32 = *(float*)&v32 + (float)(*(float*)&v31 * *(float*)&v14);
	return (__m128)v32;
}
// 140C8A9B0: using guessed type int dword_140C8A9B0;
// 140C8A9B4: using guessed type int dword_140C8A9B4;
// 140C8A9B8: using guessed type int dword_140C8A9B8;
// 140C8A9BC: using guessed type int dword_140C8A9BC;
// 140C8A9C0: using guessed type int dword_140C8A9C0;
// 140C8A9C4: using guessed type int dword_140C8A9C4;
// 140C8A9C8: using guessed type int dword_140C8A9C8;
// 140C8A9CC: using guessed type int dword_140C8A9CC;
// 140C8A9D4: using guessed type int dword_140C8A9D4;
// 140C8A9D8: using guessed type int dword_140C8A9D8;
// 140C8A9DC: using guessed type int dword_140C8A9DC;
// 140C8A9E0: using guessed type int dword_140C8A9E0;
// 140C8A9E8: using guessed type int dword_140C8A9E8;
// 140C8A9EC: using guessed type int dword_140C8A9EC;
// 140C8A9F0: using guessed type int dword_140C8A9F0;
// 140C8A9F4: using guessed type int dword_140C8A9F4;
// 140C8A9F8: using guessed type int dword_140C8A9F8;
// 140C8A9FC: using guessed type int dword_140C8A9FC;
// 140C8AA00: using guessed type int dword_140C8AA00;
// 140C8AA04: using guessed type int dword_140C8AA04;
// 140C8AA08: using guessed type int dword_140C8AA08;
// 140C8AA0C: using guessed type int dword_140C8AA0C;
// 140C8AA14: using guessed type int dword_140C8AA14;
// 140C8AA20: using guessed type int dword_140C8AA20;
// 140C8AA24: using guessed type int dword_140C8AA24;
// 140C8AA28: using guessed type int dword_140C8AA28;
// 140C8AA2C: using guessed type int dword_140C8AA2C;
// 140C8AA30: using guessed type int dword_140C8AA30;
// 140C8AA34: using guessed type int dword_140C8AA34;
// 140C8AA38: using guessed type int dword_140C8AA38;
// 140C8AA3C: using guessed type int dword_140C8AA3C;
// 140C8AA44: using guessed type int dword_140C8AA44;
// 140C8AA48: using guessed type int dword_140C8AA48;
// 140C8AA4C: using guessed type int dword_140C8AA4C;

