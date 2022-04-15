#include "../winhttp.h"

//----- (00000001404DA3E0) ----------------------------------------------------
void __fastcall sub_1404DA3E0(__int64 a1, int a2)
{
	int v4; // eax
	int v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	__int64 (*v7)(); // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]

	sub_1403BDAC0(qword_140C65898);
	sub_140195D70(a1 + 5360);
	(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)qword_140C89D80[0] + 64i64))(qword_140C89D80[0], a2 != 0);
	if (a2)
	{
		v4 = dword_140C45E40;
		if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
			v4 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C45E50 + v4))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C89D80[0] + 64i64))(qword_140C89D80[0], 2i64);
		}
		else
		{
			v5 = 0;
			v6 = sub_14001C280(a1);
			v8 = 0i64;
			v7 = sub_1404DA4C0;
			sub_140195960(a1 + 5432, dword_140C65904, (__int64)&v5, 4);
		}
	}
}
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65904: using guessed type int dword_140C65904;
// 140C89D80: using guessed type __int64 qword_140C89D80[];

