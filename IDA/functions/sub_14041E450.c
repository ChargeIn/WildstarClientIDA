#include "../winhttp.h"

//----- (000000014041E450) ----------------------------------------------------
__m128 __fastcall sub_14041E450(__int64 a1, int a2)
{
	int v2; // eax
	int v3; // ebx
	float v5; // xmm8_4
	__int64 v6; // rax
	int v7; // xmm9_4
	__int64 v8; // rax
	float v9; // xmm10_4
	__int64 v10; // rax
	float v11; // xmm7_4
	__int64 v12; // rax
	__int64 v13; // rax
	__int128 v14; // xmm0
	unsigned int v15; // xmm6_4
	__int128 v16; // xmm7

	v2 = dword_140C8AA18;
	v3 = 0;
	if ((dword_140C8AA18 & 1) == 0)
	{
		v2 = dword_140C8AA18 | 1;
		dword_140C8A924 = 0;
		dword_140C8AA18 |= 1u;
	}
	v5 = 0.0;
	if ((v2 & 2) == 0)
	{
		dword_140C8A92C = 0;
		dword_140C8A934 = 0;
		dword_140C8A93C = 0;
		dword_140C8A94C = 0;
		dword_140C8AA18 = v2 | 2;
		goto LABEL_6;
	}
	if (!dword_140C8A944)
	{
	LABEL_6:
		dword_140C8A944 = 1;
		v6 = sub_140200220(0x43u);
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 36);
			dword_140C8A940 = v7;
		}
		else
		{
			v7 = 0;
			dword_140C8A940 = 0;
		}
		goto LABEL_10;
	}
	v7 = dword_140C8A940;
LABEL_10:
	if (dword_140C8A93C)
	{
		v9 = *(float*)&dword_140C8A938;
	}
	else
	{
		dword_140C8A93C = 1;
		v8 = sub_140200220(0x43u);
		if (v8)
		{
			v9 = *(float*)(v8 + 32);
			dword_140C8A938 = LODWORD(v9);
		}
		else
		{
			v9 = 0.0;
			dword_140C8A938 = 0;
		}
	}
	if (dword_140C8A934)
	{
		v11 = *(float*)&dword_140C8A930;
	}
	else
	{
		dword_140C8A934 = 1;
		v10 = sub_140200220(0x43u);
		if (v10)
		{
			v11 = *(float*)(v10 + 28);
			dword_140C8A930 = LODWORD(v11);
		}
		else
		{
			v11 = 0.0;
			dword_140C8A930 = 0;
		}
	}
	if (dword_140C8A92C)
	{
		v5 = *(float*)&dword_140C8A928;
	}
	else
	{
		dword_140C8A92C = 1;
		v12 = sub_140200220(0x43u);
		if (v12)
			v5 = *(float*)(v12 + 24);
		dword_140C8A928 = LODWORD(v5);
	}
	if (dword_140C8A924)
	{
		v3 = dword_140C8A920;
	}
	else
	{
		dword_140C8A924 = 1;
		v13 = sub_140200220(0x43u);
		if (v13)
			v3 = *(_DWORD*)(v13 + 4);
		dword_140C8A920 = v3;
	}
	v14 = 0x402DF854u;
	*(float*)&v15 = (float)(a2 - v3);
	*(double*)&v14 = sub_1408FBFC0(COERCE_DOUBLE(1076754516i64), *(float*)&v15 * v11);
	v16 = v14;
	*(float*)&v16 = *(float*)&v14 * v5;
	*(double*)&v14 = sub_1408FBFC0(COERCE_DOUBLE((unsigned __int64)v15), *(float*)&v7);
	*(float*)&v16 = *(float*)&v16 + (float)(*(float*)&v14 * v9);
	return (__m128)v16;
}
// 140C8A920: using guessed type int dword_140C8A920;
// 140C8A924: using guessed type int dword_140C8A924;
// 140C8A928: using guessed type int dword_140C8A928;
// 140C8A92C: using guessed type int dword_140C8A92C;
// 140C8A930: using guessed type int dword_140C8A930;
// 140C8A934: using guessed type int dword_140C8A934;
// 140C8A938: using guessed type int dword_140C8A938;
// 140C8A93C: using guessed type int dword_140C8A93C;
// 140C8A940: using guessed type int dword_140C8A940;
// 140C8A944: using guessed type int dword_140C8A944;
// 140C8A94C: using guessed type int dword_140C8A94C;
// 140C8AA18: using guessed type int dword_140C8AA18;

