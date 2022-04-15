#include "../winhttp.h"

//----- (0000000140571200) ----------------------------------------------------
__int64 __fastcall sub_140571200(__int64 a1)
{
	int v2; // edx
	int v3; // r8d
	int v4; // eax
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 192))
	{
		LOBYTE(v5) = 0;
		sub_1403F4900(qword_140C65898, 0x15Fu, (__int64)&v5);
		return 0i64;
	}
	else
	{
		v2 = dword_140C4D460;
		v3 = *(_DWORD*)qword_140C63750;
		v4 = dword_140C4D460;
		if (*(_DWORD*)qword_140C63750 < dword_140C4D460)
			v4 = *(_DWORD*)qword_140C63750;
		if (*((_DWORD*)&off_140C4D450 + v4 + 8))
		{
			v5 = 0i64;
			if (v3 < dword_140C4D460)
				v2 = v3;
			HIDWORD(v5) = 1;
			LODWORD(v5) = *((_DWORD*)&off_140C4D450 + v2 + 8);
			sub_1403F4900(qword_140C65898, 0x180u, (__int64)&v5);
		}
		return 0i64;
	}
}
// 140C4D450: using guessed type __int64 (__fastcall *off_140C4D450)();
// 140C4D460: using guessed type int dword_140C4D460;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

