//----- (00000001402576D0) ----------------------------------------------------
__int64 __fastcall sub_1402576D0(__int64* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 result; // rax

	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
	a1[294] = a1[208];
	v2 = a1[215];
	a1[295] = 0i64;
	a1[298] = v2;
	v3 = *a1;
	a1[296] = 0i64;
	a1[297] = 0i64;
	a1[303] = 0i64;
	a1[299] = 7i64;
	*((_DWORD*)a1 + 600) = 7;
	*((_DWORD*)a1 + 601) = 1;
	*((_DWORD*)a1 + 602) = 4;
	*((_DWORD*)a1 + 603) = 4;
	a1[302] = 4i64;
	*((_DWORD*)a1 + 608) = 2;
	(*(void(__fastcall**)(__int64*))(v3 + 72))(a1);
	result = (*(__int64(__fastcall**)(__int64*))(*a1 + 80))(a1);
	*((_DWORD*)a1 + 37) = 13;
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

