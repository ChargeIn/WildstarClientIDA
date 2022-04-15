//----- (00000001402D7980) ----------------------------------------------------
_QWORD* __fastcall sub_1402D7980(_QWORD* a1, char a2)
{
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	*a1 = &off_140B62CA0;
	v3 = (_QWORD*)a1[3];
	if (v3)
		*v3 = a1[4];
	v4 = a1[4];
	if (v4)
		*(_QWORD*)(v4 + 24) = a1[3];
	a1[3] = 0i64;
	a1[4] = 0i64;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B62CA0: using guessed type __int64 (__fastcall *off_140B62CA0)();

