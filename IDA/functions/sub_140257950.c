#include "../winhttp.h"

//----- (0000000140257950) ----------------------------------------------------
__int64 __fastcall sub_140257950(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	a1[294] = a1[206];
	v2 = a1[215];
	a1[295] = 0i64;
	a1[298] = v2;
	v3 = *a1;
	a1[296] = 0i64;
	a1[297] = 0i64;
	*(__int64*)((char*)a1 + 2412) = 0i64;
	*((_DWORD*)a1 + 602) = 0;
	a1[303] = 0i64;
	*((_DWORD*)a1 + 605) = 0;
	a1[299] = 15i64;
	a1[300] = 7i64;
	*((_DWORD*)a1 + 608) = 7;
	(*(void(__fastcall**)(__int64*))(v3 + 72))(a1);
	return (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
}
// 140C65670: using guessed type __int64 qword_140C65670;

