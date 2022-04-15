#include "../winhttp.h"

//----- (0000000140591BD0) ----------------------------------------------------
float __fastcall sub_140591BD0(__int64 a1, int a2)
{
	int v2; // r8d
	int v3; // eax
	float v4; // xmm6_4
	__int64 v5; // rax
	int v6; // ebx
	__int64 v7; // rax
	float v8; // xmm3_4

	v2 = -*(_DWORD*)(a1 + 876);
	v3 = a2 * *(_DWORD*)(a1 + 872);
	if (v3 >= v2)
	{
		if (v3 > *(_DWORD*)(a1 + 876))
			v3 = *(_DWORD*)(a1 + 876);
		v2 = v3;
	}
	v4 = (float)v2;
	if (dword_140C7DF24)
	{
		v6 = dword_140C7DF20;
	}
	else
	{
		dword_140C7DF24 = 1;
		v5 = sub_140200220(0x4CDu);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 8);
			dword_140C7DF20 = v6;
		}
		else
		{
			v6 = 0;
			dword_140C7DF20 = 0;
		}
	}
	if (dword_140C7DF3C)
	{
		v8 = *(float*)&dword_140C7DF38;
	}
	else
	{
		dword_140C7DF3C = 1;
		v7 = sub_140200220(0x4CDu);
		if (v7)
		{
			v8 = *(float*)(v7 + 24);
			dword_140C7DF38 = LODWORD(v8);
		}
		else
		{
			v8 = 0.0;
			dword_140C7DF38 = 0;
		}
	}
	return fmaxf((float)((float)(1.0 / (float)((float)v6 * v8)) * v4) + 1.0, 1.0 / (float)((float)v6 * v8));
}
// 140C7DF20: using guessed type int dword_140C7DF20;
// 140C7DF24: using guessed type int dword_140C7DF24;
// 140C7DF38: using guessed type int dword_140C7DF38;
// 140C7DF3C: using guessed type int dword_140C7DF3C;

