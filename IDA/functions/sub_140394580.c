#include "../winhttp.h"

//----- (0000000140394580) ----------------------------------------------------
void __fastcall sub_140394580(__int64 a1, float a2)
{
	if (fabs(a2) > 0.0000099999997)
		*(float*)&dword_140C1E5DC = 1.0 / a2;
	else
		dword_140C1E5DC = 1148846080;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C1E5DC: using guessed type int dword_140C1E5DC;

