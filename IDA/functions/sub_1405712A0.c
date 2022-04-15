#include "../winhttp.h"

//----- (00000001405712A0) ----------------------------------------------------
__int64 __fastcall sub_1405712A0(__int64 a1)
{
	int v2; // eax
	__int64 v3; // [rsp+30h] [rbp+8h] BYREF

	v3 = a1;
	if (*(_DWORD*)(qword_140C65970 + 8) != 2)
		return 2147500037i64;
	if (*(_DWORD*)(qword_140C65970 + 192))
	{
		LOBYTE(v3) = 0;
		sub_1403F4900(qword_140C65898, 0xF0u, (__int64)&v3);
		return 0i64;
	}
	else
	{
		if (!sub_140571350(qword_140C65970))
			return 2147500037i64;
		v3 = 0i64;
		v2 = dword_140C4D460;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D460)
			v2 = *(_DWORD*)qword_140C63750;
		LODWORD(v3) = *((_DWORD*)&xmmword_140C4D470 + v2);
		sub_1403F4900(qword_140C65898, 0x180u, (__int64)&v3);
		return 0i64;
	}
}
// 140C4D460: using guessed type int dword_140C4D460;
// 140C4D470: using guessed type __int128 xmmword_140C4D470;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

