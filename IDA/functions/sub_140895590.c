#include "../winhttp.h"

//----- (0000000140895590) ----------------------------------------------------
__int64 __fastcall sub_140895590(__int64 a1, _DWORD* a2, char a3)
{
	int v6; // ebx
	double v7; // xmm1_8
	double v8; // xmm0_8

	v6 = *a2 * (dword_140C110B4 / 0x3E8u);
	if (v6 < -(int)sub_140892310(*(_QWORD*)(a1 + 152)))
		v6 = -(int)sub_140892310(*(_QWORD*)(a1 + 152));
	if (a3)
	{
		v6 = sub_140891A10(*(_QWORD*)(a1 + 152), v6);
		v7 = (double)v6 * 1000.0 / (double)dword_140C110B4;
		if (v7 <= 0.0)
			v8 = -0.5;
		else
			v8 = 0.5;
		*a2 = (int)(v8 + v7);
	}
	return sub_140895400(a1, v6);
}
// 140C110B4: using guessed type int dword_140C110B4;

