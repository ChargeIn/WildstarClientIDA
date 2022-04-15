#include "../winhttp.h"

//----- (00000001406FD940) ----------------------------------------------------
__int64 sub_1406FD940()
{
	int v0; // edx

	if (qword_140C658D8)
	{
		v0 = dword_140C3B390;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
			v0 = *(_DWORD*)qword_140C63750;
		sub_14001A770((__int64)&off_140C3B380, v0, -1);
		sub_140437F00();
	}
	return 0i64;
}
// 140C3B380: using guessed type __int64 (__fastcall *off_140C3B380)();
// 140C3B390: using guessed type int dword_140C3B390;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C658D8: using guessed type __int64 qword_140C658D8;

