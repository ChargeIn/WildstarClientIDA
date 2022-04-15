#include "../winhttp.h"

//----- (000000014041D780) ----------------------------------------------------
__int64 __fastcall sub_14041D780(__int64 a1, float a2)
{
	int v2; // eax
	unsigned int v3; // ebx
	__int64 v4; // rax
	unsigned int v5; // edi
	__int64 v6; // rax

	v2 = dword_140C8AB1C;
	v3 = 0;
	if ((dword_140C8AB1C & 1) == 0)
	{
		v2 = dword_140C8AB1C | 1;
		dword_140C8AB24 = 0;
		dword_140C8AB1C |= 1u;
	}
	if ((v2 & 2) != 0)
	{
		if (dword_140C8AB14)
		{
			v5 = dword_140C8AB10;
			goto LABEL_10;
		}
	}
	else
	{
		dword_140C8AB1C = v2 | 2;
	}
	dword_140C8AB14 = 1;
	v4 = sub_140200220(0x4EDu);
	if (v4)
	{
		v5 = *(_DWORD*)(v4 + 8);
		dword_140C8AB10 = v5;
	}
	else
	{
		v5 = 0;
		dword_140C8AB10 = 0;
	}
LABEL_10:
	if (dword_140C8AB24)
	{
		v3 = dword_140C8AB20;
	}
	else
	{
		dword_140C8AB24 = 1;
		v6 = sub_140200220(0x4EDu);
		if (v6)
			v3 = *(_DWORD*)(v6 + 4);
		dword_140C8AB20 = v3;
	}
	return sub_14041FAC0(a1, a2, v3, v5);
}
// 14041D842: variable 'a1' is possibly undefined
// 140C8AB10: using guessed type int dword_140C8AB10;
// 140C8AB14: using guessed type int dword_140C8AB14;
// 140C8AB1C: using guessed type int dword_140C8AB1C;
// 140C8AB20: using guessed type int dword_140C8AB20;
// 140C8AB24: using guessed type int dword_140C8AB24;

