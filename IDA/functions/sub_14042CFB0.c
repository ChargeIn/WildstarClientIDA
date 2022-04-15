#include "../winhttp.h"

//----- (000000014042CFB0) ----------------------------------------------------
__int64 __fastcall sub_14042CFB0(__int64 a1)
{
	__int64 v2; // rax
	int v3; // xmm0_4

	if ((dword_140DC28A0 & 1) != 0)
	{
		v3 = dword_140DC28A4;
	}
	else
	{
		dword_140DC28A0 |= 1u;
		v2 = sub_140200220(0x3B9u);
		if (v2)
			LODWORD(v2) = *(_DWORD*)(v2 + 4);
		*(float*)&v3 = (float)(int)v2 * 0.001;
		dword_140DC28A4 = v3;
	}
	return sub_1400EA3E0(a1, "DuelLeftArea", byte_1409ECA8C, v3);
}
// 1409ECA8C: using guessed type _BYTE byte_1409ECA8C[4];
// 140DC28A0: using guessed type int dword_140DC28A0;
// 140DC28A4: using guessed type int dword_140DC28A4;

