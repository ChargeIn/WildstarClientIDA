#include "../winhttp.h"

//----- (00000001406EF450) ----------------------------------------------------
__int64 __fastcall sub_1406EF450(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rax

	if (!qword_140C65970
		|| !qword_140C65898
		|| !*(_QWORD*)(qword_140C65898 + 120)
		|| *(_DWORD*)(qword_140C65970 + 8) != 2)
	{
		return 0i64;
	}
	v2 = dword_140C4D460;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D460)
		v2 = *(_DWORD*)qword_140C63750;
	v3 = sub_1402215C0(*((_DWORD*)&xmmword_140C4D470 + v2));
	if (!v3)
		return 0i64;
	sub_1406F1A20(a1, v3);
	return 1i64;
}
// 140C4D460: using guessed type int dword_140C4D460;
// 140C4D470: using guessed type __int128 xmmword_140C4D470;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

