#include "../winhttp.h"

//----- (0000000140257790) ----------------------------------------------------
__int64 __fastcall sub_140257790(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	if (!(*(unsigned int(__fastcall**)(__int64*, __int64))(*a1 + 56))(a1, 15i64))
		sub_140255A10(a1, 2);
	if (!(*(unsigned int(__fastcall**)(__int64*, __int64))(*a1 + 56))(a1, 10i64)
		&& !(*(unsigned int(__fastcall**)(__int64*, __int64))(*a1 + 56))(a1, 2i64))
	{
		sub_140255A10(a1, 3);
	}
	v2 = a1[206];
	a1[295] = 0i64;
	a1[296] = 0i64;
	a1[297] = 0i64;
	a1[294] = v2;
	v3 = a1[215];
	a1[303] = 0i64;
	a1[298] = v3;
	v4 = *a1;
	a1[299] = 7i64;
	*((_DWORD*)a1 + 600) = 3;
	*((_DWORD*)a1 + 601) = 1;
	*((_DWORD*)a1 + 602) = 4;
	*((_DWORD*)a1 + 603) = 4;
	a1[302] = 4i64;
	*((_DWORD*)a1 + 608) = 7;
	(*(void(__fastcall**)(__int64*))(v4 + 72))(a1);
	return (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
}
// 140C65670: using guessed type __int64 qword_140C65670;

