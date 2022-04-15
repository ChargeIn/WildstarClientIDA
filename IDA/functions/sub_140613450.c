//----- (0000000140613450) ----------------------------------------------------
_QWORD* __fastcall sub_140613450(_QWORD* a1, char a2)
{
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	*a1 = off_140B6FAA8;
	v3 = (_QWORD*)a1[2];
	if (v3)
		*v3 = a1[3];
	v4 = a1[3];
	if (v4)
		*(_QWORD*)(v4 + 16) = a1[2];
	a1[2] = 0i64;
	a1[3] = 0i64;
	*a1 = off_140B55048;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B6FAA8: using guessed type __int64 (__fastcall *off_140B6FAA8[24])();

