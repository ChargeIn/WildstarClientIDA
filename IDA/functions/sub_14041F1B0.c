#include "../winhttp.h"

//----- (000000014041F1B0) ----------------------------------------------------
__m128 __fastcall sub_14041F1B0(__int64 a1, unsigned int a2)
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

	v2 = dword_140C8A7E8;
	v3 = 0;
	if ((dword_140C8A7E8 & 1) == 0)
	{
		v2 = dword_140C8A7E8 | 1;
		dword_140C8A7F4 = 0;
		dword_140C8A7E8 |= 1u;
	}
	if ((v2 & 2) == 0)
	{
		v2 |= 2u;
		dword_140C8A7BC = 0;
		dword_140C8A7C4 = 0;
		dword_140C8A7CC = 0;
		dword_140C8A7D4 = 0;
		dword_140C8A7DC = 0;
		dword_140C8A7E8 = v2;
	}
	if ((v2 & 4) != 0)
	{
		v5 = dword_140C8A7E4;
	}
	else
	{
		v2 |= 4u;
		v5 = 0;
		dword_140C8A7E4 = 0;
		dword_140C8A7E8 = v2;
	}
	if ((v2 & 8) == 0)
	{
		v2 |= 8u;
		dword_140C8A824 = 0;
		dword_140C8A82C = 0;
		dword_140C8A834 = 0;
		dword_140C8A83C = 0;
		dword_140C8A844 = 0;
		dword_140C8A7E8 = v2;
	}
	if ((v2 & 0x10) == 0)
	{
		v2 |= 0x10u;
		dword_140C8A84C = 0;
		dword_140C8A7E8 = v2;
	}
	if ((v2 & 0x20) == 0)
	{
		dword_140C8A7FC = 0;
		dword_140C8A804 = 0;
		dword_140C8A80C = 0;
		dword_140C8A814 = 0;
		dword_140C8A81C = 0;
		dword_140C8A7E8 = v2 | 0x20;
	}
	if (v5)
	{
		v7 = dword_140C8A7E0;
	}
	else
	{
		dword_140C8A7E4 = 1;
		v6 = sub_140200220(0x41u);
		if (!v6)
		{
			dword_140C8A7E0 = 0;
			goto LABEL_18;
		}
		v7 = *(_DWORD*)(v6 + 4);
		dword_140C8A7E0 = v7;
	}
	if (a2 < v7)
	{
		*(float*)&v10 = 0.0;
		if (dword_140C8A7D4)
		{
			v12 = dword_140C8A7D0;
		}
		else
		{
			dword_140C8A7D4 = 1;
			v11 = sub_140200220(0x3DFu);
			if (v11)
			{
				v12 = *(_DWORD*)(v11 + 36);
				dword_140C8A7D0 = v12;
			}
			else
			{
				v12 = 0;
				dword_140C8A7D0 = 0;
			}
		}
		if (dword_140C8A7CC)
		{
			v14 = dword_140C8A7C8;
		}
		else
		{
			dword_140C8A7CC = 1;
			v13 = sub_140200220(0x3DFu);
			if (v13)
			{
				v14 = *(int*)(v13 + 32);
				dword_140C8A7C8 = v14;
			}
			else
			{
				*(float*)&v14 = 0.0;
				dword_140C8A7C8 = 0;
			}
		}
		if (dword_140C8A7C4)
		{
			v16 = dword_140C8A7C0;
		}
		else
		{
			dword_140C8A7C4 = 1;
			v15 = sub_140200220(0x3DFu);
			if (v15)
			{
				v16 = *(int*)(v15 + 28);
				dword_140C8A7C0 = v16;
			}
			else
			{
				*(float*)&v16 = 0.0;
				dword_140C8A7C0 = 0;
			}
		}
		if (dword_140C8A7BC)
		{
			v10 = dword_140C8A7B8;
		}
		else
		{
			dword_140C8A7BC = 1;
			v17 = sub_140200220(0x3DFu);
			if (v17)
				v10 = *(int*)(v17 + 24);
			dword_140C8A7B8 = v10;
		}
		if (dword_140C8A7F4)
		{
			v3 = dword_140C8A7F0;
		}
		else
		{
			dword_140C8A7F4 = 1;
			v18 = sub_140200220(0x3DFu);
			if (v18)
				v3 = *(_DWORD*)(v18 + 4);
			dword_140C8A7F0 = v3;
		}
		v19 = a2 - v3;
	LABEL_49:
		v20 = (float)v19;
		v21 = (float)v19 * *(float*)&v16;
		goto LABEL_94;
	}
LABEL_18:
	if (dword_140C8A84C)
	{
		v9 = dword_140C8A848;
	}
	else
	{
		dword_140C8A84C = 1;
		v8 = sub_140200220(0xFDu);
		if (!v8)
		{
			dword_140C8A848 = 0;
			goto LABEL_51;
		}
		v9 = *(_DWORD*)(v8 + 4);
		dword_140C8A848 = v9;
	}
	if (a2 < v9)
	{
		*(float*)&v10 = 0.0;
		if (dword_140C8A83C)
		{
			v12 = dword_140C8A838;
		}
		else
		{
			dword_140C8A83C = 1;
			v23 = sub_140200220(0x41u);
			if (v23)
			{
				v12 = *(_DWORD*)(v23 + 36);
				dword_140C8A838 = v12;
			}
			else
			{
				v12 = 0;
				dword_140C8A838 = 0;
			}
		}
		if (dword_140C8A834)
		{
			v14 = dword_140C8A830;
		}
		else
		{
			dword_140C8A834 = 1;
			v24 = sub_140200220(0x41u);
			if (v24)
			{
				v14 = *(int*)(v24 + 32);
				dword_140C8A830 = v14;
			}
			else
			{
				*(float*)&v14 = 0.0;
				dword_140C8A830 = 0;
			}
		}
		if (dword_140C8A82C)
		{
			v16 = dword_140C8A828;
		}
		else
		{
			dword_140C8A82C = 1;
			v25 = sub_140200220(0x41u);
			if (v25)
			{
				v16 = *(int*)(v25 + 28);
				dword_140C8A828 = v16;
			}
			else
			{
				*(float*)&v16 = 0.0;
				dword_140C8A828 = 0;
			}
		}
		if (dword_140C8A824)
		{
			v10 = dword_140C8A820;
			v19 = a2 - sub_14041FA20();
		}
		else
		{
			dword_140C8A824 = 1;
			v26 = sub_140200220(0x41u);
			if (v26)
				v10 = *(int*)(v26 + 24);
			dword_140C8A820 = v10;
			v19 = a2 - sub_14041FA20();
		}
		goto LABEL_49;
	}
LABEL_51:
	*(float*)&v10 = 0.0;
	if (dword_140C8A814)
	{
		v12 = dword_140C8A810;
	}
	else
	{
		dword_140C8A814 = 1;
		v22 = sub_140200220(0xFDu);
		if (v22)
		{
			v12 = *(_DWORD*)(v22 + 36);
			dword_140C8A810 = v12;
		}
		else
		{
			v12 = 0;
			dword_140C8A810 = 0;
		}
	}
	if (dword_140C8A80C)
	{
		v14 = dword_140C8A808;
	}
	else
	{
		dword_140C8A80C = 1;
		v27 = sub_140200220(0xFDu);
		if (v27)
		{
			v14 = *(int*)(v27 + 32);
			dword_140C8A808 = v14;
		}
		else
		{
			*(float*)&v14 = 0.0;
			dword_140C8A808 = 0;
		}
	}
	if (dword_140C8A804)
	{
		v29 = *(float*)&dword_140C8A800;
	}
	else
	{
		dword_140C8A804 = 1;
		v28 = sub_140200220(0xFDu);
		if (v28)
		{
			v29 = *(float*)(v28 + 28);
			dword_140C8A800 = LODWORD(v29);
		}
		else
		{
			v29 = 0.0;
			dword_140C8A800 = 0;
		}
	}
	if (dword_140C8A7FC)
	{
		v10 = dword_140C8A7F8;
	}
	else
	{
		dword_140C8A7FC = 1;
		v30 = sub_140200220(0xFDu);
		if (v30)
			v10 = *(int*)(v30 + 24);
		dword_140C8A7F8 = v10;
	}
	v20 = (float)(int)(a2 - sub_14041FA70());
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
// 140C8A7B8: using guessed type int dword_140C8A7B8;
// 140C8A7BC: using guessed type int dword_140C8A7BC;
// 140C8A7C0: using guessed type int dword_140C8A7C0;
// 140C8A7C4: using guessed type int dword_140C8A7C4;
// 140C8A7C8: using guessed type int dword_140C8A7C8;
// 140C8A7CC: using guessed type int dword_140C8A7CC;
// 140C8A7D0: using guessed type int dword_140C8A7D0;
// 140C8A7D4: using guessed type int dword_140C8A7D4;
// 140C8A7DC: using guessed type int dword_140C8A7DC;
// 140C8A7E0: using guessed type int dword_140C8A7E0;
// 140C8A7E4: using guessed type int dword_140C8A7E4;
// 140C8A7E8: using guessed type int dword_140C8A7E8;
// 140C8A7F0: using guessed type int dword_140C8A7F0;
// 140C8A7F4: using guessed type int dword_140C8A7F4;
// 140C8A7F8: using guessed type int dword_140C8A7F8;
// 140C8A7FC: using guessed type int dword_140C8A7FC;
// 140C8A800: using guessed type int dword_140C8A800;
// 140C8A804: using guessed type int dword_140C8A804;
// 140C8A808: using guessed type int dword_140C8A808;
// 140C8A80C: using guessed type int dword_140C8A80C;
// 140C8A810: using guessed type int dword_140C8A810;
// 140C8A814: using guessed type int dword_140C8A814;
// 140C8A81C: using guessed type int dword_140C8A81C;
// 140C8A820: using guessed type int dword_140C8A820;
// 140C8A824: using guessed type int dword_140C8A824;
// 140C8A828: using guessed type int dword_140C8A828;
// 140C8A82C: using guessed type int dword_140C8A82C;
// 140C8A830: using guessed type int dword_140C8A830;
// 140C8A834: using guessed type int dword_140C8A834;
// 140C8A838: using guessed type int dword_140C8A838;
// 140C8A83C: using guessed type int dword_140C8A83C;
// 140C8A844: using guessed type int dword_140C8A844;
// 140C8A848: using guessed type int dword_140C8A848;
// 140C8A84C: using guessed type int dword_140C8A84C;

