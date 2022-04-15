#include "../winhttp.h"

//----- (0000000140591F30) ----------------------------------------------------
void __fastcall sub_140591F30(float* a1)
{
	int v2; // xmm6_4
	__int64 v3; // rax
	float v4; // xmm7_4
	__int64 v5; // rax
	float v6; // xmm2_4

	v2 = 0;
	if (dword_140C7DF4C)
	{
		v4 = *(float*)&dword_140C7DF48;
	}
	else
	{
		dword_140C7DF4C = 1;
		v3 = sub_140200220(0x4DEu);
		if (v3)
		{
			v4 = *(float*)(v3 + 28);
			dword_140C7DF48 = LODWORD(v4);
		}
		else
		{
			v4 = 0.0;
			dword_140C7DF48 = 0;
		}
	}
	if (dword_140C7DF54)
	{
		v2 = dword_140C7DF50;
	}
	else
	{
		dword_140C7DF54 = 1;
		v5 = sub_140200220(0x4DEu);
		if (v5)
			v2 = *(_DWORD*)(v5 + 32);
		dword_140C7DF50 = v2;
	}
	v6 = fminf(*(float*)&v2, v4 + a1[109]) * (float)(1.0 - a1[104]);
	a1[215] = (float)(1.0 - a1[105]) * v6;
	a1[216] = v6;
}
// 140C7DF48: using guessed type int dword_140C7DF48;
// 140C7DF4C: using guessed type int dword_140C7DF4C;
// 140C7DF50: using guessed type int dword_140C7DF50;
// 140C7DF54: using guessed type int dword_140C7DF54;

