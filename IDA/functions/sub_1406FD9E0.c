#include "../winhttp.h"

//----- (00000001406FD9E0) ----------------------------------------------------
__int64 __fastcall sub_1406FD9E0(_QWORD* a1)
{
	char v1; // al
	int v2; // edx
	int v3; // ecx

	v1 = sub_140056D60(a1, 1u);
	v2 = dword_140C3B390;
	v3 = dword_140C3B390;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
		v3 = *(_DWORD*)qword_140C63750;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B390)
		v2 = *(_DWORD*)qword_140C63750;
	sub_14001A770((__int64)&off_140C3B380, v2, (1 << v1) ^ *((_DWORD*)&off_140C3B380 + v3 + 8));
	return 0i64;
}
// 140C3B380: using guessed type __int64 (__fastcall *off_140C3B380)();
// 140C3B390: using guessed type int dword_140C3B390;
// 140C63750: using guessed type __int64 qword_140C63750;

