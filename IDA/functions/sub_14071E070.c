#include "../winhttp.h"

//----- (000000014071E070) ----------------------------------------------------
void __fastcall sub_14071E070(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B740F0;
	v2 = a1[76];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[76] = 0i64;
	}
	v3 = a1[77];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[77] = 0i64;
	}
	v4 = a1[77];
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = a1[76];
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	sub_14071BF80((__int64)a1);
}
// 140B740F0: using guessed type __int64 (__fastcall *off_140B740F0[21])();

