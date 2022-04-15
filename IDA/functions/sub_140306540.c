#include "../winhttp.h"

//----- (0000000140306540) ----------------------------------------------------
float __fastcall sub_140306540(float* a1)
{
	int v1; // eax
	int v2; // eax

	v1 = dword_140C41F80;
	if (*(_DWORD*)qword_140C63750 < dword_140C41F80)
		v1 = *(_DWORD*)qword_140C63750;
	if (!byte_140C41F90[v1])
		return (float)(a1[434] * a1[36]) + a1[433];
	v2 = dword_140C41FC0;
	if (*(_DWORD*)qword_140C63750 < dword_140C41FC0)
		v2 = *(_DWORD*)qword_140C63750;
	return dword_140C41FD0[v2];
}
// 140C41F80: using guessed type int dword_140C41F80;
// 140C41F90: using guessed type _BYTE[32];
// 140C41FC0: using guessed type int dword_140C41FC0;
// 140C41FD0: using guessed type float dword_140C41FD0[14];
// 140C63750: using guessed type __int64 qword_140C63750;

