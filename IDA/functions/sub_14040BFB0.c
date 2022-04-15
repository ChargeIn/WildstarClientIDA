#include "../winhttp.h"

//----- (000000014040BFB0) ----------------------------------------------------
__int64 __fastcall sub_14040BFB0(__int64 a1, float a2, unsigned int a3, int a4)
{
	unsigned int v4; // ebx
	__int64 v7; // rax
	float v8; // xmm6_4
	unsigned int v9; // ecx

	v4 = 1;
	if ((dword_140C8AC18 & 1) != 0)
	{
		if (dword_140C8AC24)
		{
			v8 = *(float*)&dword_140C8AC20;
			goto LABEL_8;
		}
	}
	else
	{
		dword_140C8AC18 |= 1u;
	}
	dword_140C8AC24 = 1;
	v7 = sub_140200220(0x402u);
	if (v7)
	{
		v8 = *(float*)(v7 + 24);
		dword_140C8AC20 = LODWORD(v8);
	}
	else
	{
		v8 = 0.0;
		dword_140C8AC20 = 0;
	}
LABEL_8:
	v9 = (int)(float)((float)(int)sub_14040BEE0(a1, a2, a3, a4) * v8);
	if (v9)
		return v9;
	return v4;
}
// 14040C036: variable 'a1' is possibly undefined
// 140C8AC18: using guessed type int dword_140C8AC18;
// 140C8AC20: using guessed type int dword_140C8AC20;
// 140C8AC24: using guessed type int dword_140C8AC24;

