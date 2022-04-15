#include "../winhttp.h"

//----- (0000000140257460) ----------------------------------------------------
__int64 __fastcall sub_140257460(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	a1[294] = a1[208];
	v2 = a1[209];
	*((_DWORD*)a1 + 598) = 0x7FFF;
	a1[295] = v2;
	v3 = a1[210];
	*((_DWORD*)a1 + 599) = 1;
	a1[296] = v3;
	v4 = a1[211];
	*((_DWORD*)a1 + 600) = 7;
	a1[297] = v4;
	v5 = a1[215];
	*((_DWORD*)a1 + 601) = 1;
	a1[298] = v5;
	*((_DWORD*)a1 + 602) = 4;
	a1[303] = 0i64;
	v6 = *a1;
	*((_DWORD*)a1 + 603) = 4;
	a1[302] = 4i64;
	*((_DWORD*)a1 + 608) = 2;
	(*(void(__fastcall**)(__int64*))(v6 + 72))(a1);
	return (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
}
// 140C65670: using guessed type __int64 qword_140C65670;

