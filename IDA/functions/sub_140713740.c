//----- (0000000140713740) ----------------------------------------------------
_QWORD* __fastcall sub_140713740(_QWORD* a1, char a2)
{
	bool v2; // zf
	_QWORD* v5; // rcx
	__int64 v6; // rcx

	v2 = a1[3] == 0i64;
	*a1 = &off_140B73D30;
	if (!v2)
		sub_14079AB20(a1[2], (__int64)a1);
	v5 = (_QWORD*)a1[3];
	if (v5)
		*v5 = a1[4];
	v6 = a1[4];
	if (v6)
		*(_QWORD*)(v6 + 24) = a1[3];
	a1[3] = 0i64;
	a1[4] = 0i64;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B73D30: using guessed type __int64 (__fastcall *off_140B73D30)();

