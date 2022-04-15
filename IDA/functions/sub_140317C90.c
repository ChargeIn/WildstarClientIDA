//----- (0000000140317C90) ----------------------------------------------------
_QWORD* __fastcall sub_140317C90(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx

	*a1 = &off_140B66870;
	v2 = (_QWORD*)a1[1];
	if (v2)
		*v2 = a1[2];
	v3 = a1[2];
	if (v3)
		*(_QWORD*)(v3 + 8) = a1[1];
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B66870: using guessed type void (__fastcall __noreturn *off_140B66870)();

