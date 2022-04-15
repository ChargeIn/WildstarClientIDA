//----- (00000001402EF9D0) ----------------------------------------------------
__int64 __fastcall sub_1402EF9D0(_QWORD* a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 result; // rax

	*a1 = off_140B64018;
	v2 = a1[5];
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	*a1 = &off_140B64078;
	v3 = (_QWORD*)a1[2];
	if (v3)
		*v3 = a1[3];
	v4 = a1[3];
	if (v4)
		*(_QWORD*)(v4 + 16) = a1[2];
	result = 0i64;
	a1[3] = 0i64;
	a1[2] = 0i64;
	return result;
}
// 140B64018: using guessed type __int64 (__fastcall *off_140B64018[13])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

