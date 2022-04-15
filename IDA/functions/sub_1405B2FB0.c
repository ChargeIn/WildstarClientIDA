#include "../winhttp.h"

//----- (00000001405B2FB0) ----------------------------------------------------
_BOOL8 sub_1405B2FB0()
{
	int v0; // eax

	v0 = dword_140C45DE0;
	if (*(_DWORD*)qword_140C63750 < dword_140C45DE0)
		v0 = *(_DWORD*)qword_140C63750;
	return dword_140C45DF0[v0] == 0;
}
// 140C45DE0: using guessed type int dword_140C45DE0;
// 140C45DF0: using guessed type int dword_140C45DF0[];
// 140C63750: using guessed type __int64 qword_140C63750;

