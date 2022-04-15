#include "../winhttp.h"

//----- (0000000140306660) ----------------------------------------------------
float __fastcall sub_140306660(float* a1)
{
	int v1; // eax
	int v2; // eax

	v1 = dword_140C41F80;
	if (*(_DWORD*)qword_140C63750 < dword_140C41F80)
		v1 = *(_DWORD*)qword_140C63750;
	if (!byte_140C41F90[v1])
		return (float)(a1[440] * a1[36]) + a1[439];
	v2 = dword_140C420E0;
	if (*(_DWORD*)qword_140C63750 < dword_140C420E0)
		v2 = *(_DWORD*)qword_140C63750;
	return dword_140C420F0[v2];
}
// 140C41F80: using guessed type int dword_140C41F80;
// 140C41F90: using guessed type _BYTE byte_140C41F90[32];
// 140C420E0: using guessed type int dword_140C420E0;
// 140C420F0: using guessed type float dword_140C420F0[14];
// 140C63750: using guessed type __int64 qword_140C63750;

