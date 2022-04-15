//----- (00000001402EF3B0) ----------------------------------------------------
_QWORD* __fastcall sub_1402EF3B0(_QWORD* a1, char a2)
{
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	*a1 = &off_140B64078;
	v3 = (_QWORD*)a1[2];
	if (v3)
		*v3 = a1[3];
	v4 = a1[3];
	if (v4)
		*(_QWORD*)(v4 + 16) = a1[2];
	a1[2] = 0i64;
	a1[3] = 0i64;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

