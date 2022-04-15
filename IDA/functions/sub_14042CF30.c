#include "../winhttp.h"

//----- (000000014042CF30) ----------------------------------------------------
__int64 __fastcall sub_14042CF30(__int64 a1)
{
	__int64 v2; // rax
	int v3; // eax
	int v4; // xmm0_4

	if ((dword_140DC2898 & 1) != 0)
	{
		v4 = dword_140DC289C;
	}
	else
	{
		dword_140DC2898 |= 1u;
		v2 = sub_140200220(0x380u);
		if (v2)
			v3 = *(_DWORD*)(v2 + 4);
		else
			v3 = 5000;
		*(float*)&v4 = (float)v3 * 0.001;
		dword_140DC289C = v4;
	}
	return sub_1400EA3E0(a1, "DuelAccepted", byte_1409ECAC4, v4);
}
// 1409ECAC4: using guessed type _BYTE byte_1409ECAC4[4];
// 140DC2898: using guessed type int dword_140DC2898;
// 140DC289C: using guessed type int dword_140DC289C;

