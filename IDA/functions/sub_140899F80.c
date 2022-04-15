#include "../winhttp.h"

//----- (0000000140899F80) ----------------------------------------------------
__int64 __fastcall sub_140899F80(int a1)
{
	double v1; // xmm1_8

	v1 = (double)a1 * 1000.0 / (double)dword_140C110B4;
	if (v1 <= 0.0)
		return (unsigned int)(int)(v1 + -0.5);
	else
		return (unsigned int)(int)(v1 + 0.5);
}
// 140C110B4: using guessed type int dword_140C110B4;

