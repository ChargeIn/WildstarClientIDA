#include "../winhttp.h"

//----- (0000000140256E90) ----------------------------------------------------
__int64 __fastcall sub_140256E90(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	a1[294] = a1[209];
	v2 = a1[210];
	*((_DWORD*)a1 + 598) = 4095;
	a1[295] = v2;
	v3 = a1[211];
	*((_DWORD*)a1 + 599) = 1;
	a1[296] = v3;
	v4 = a1[215];
	*((_DWORD*)a1 + 600) = 3;
	a1[298] = v4;
	*((_DWORD*)a1 + 601) = 1;
	*((_DWORD*)a1 + 606) = 0;
	v5 = *a1;
	*((_DWORD*)a1 + 602) = 2;
	*((_DWORD*)a1 + 603) = 2;
	a1[302] = 2i64;
	*((_DWORD*)a1 + 607) = 2;
	*((_DWORD*)a1 + 608) = 7;
	(*(void(__fastcall**)(__int64*))(v5 + 72))(a1);
	return (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
}
// 140C65670: using guessed type __int64 qword_140C65670;

