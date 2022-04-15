//----- (00000001402F0130) ----------------------------------------------------
_QWORD* __fastcall sub_1402F0130(_QWORD* a1, char a2)
{
	__int64 v3; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx

	v3 = a1[5];
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	*a1 = &off_140B64078;
	v5 = (_QWORD*)a1[2];
	if (v5)
		*v5 = a1[3];
	v6 = a1[3];
	if (v6)
		*(_QWORD*)(v6 + 16) = a1[2];
	a1[2] = 0i64;
	a1[3] = 0i64;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();

