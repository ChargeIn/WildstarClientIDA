//----- (0000000140151EF0) ----------------------------------------------------
_QWORD* __fastcall sub_140151EF0(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B5C6B8;
	v4 = a1[6];
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[6] = 0i64;
	}
	a1[8] = off_140B5C6E0;
	*a1 = off_140B55048;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B5C6B8: using guessed type __int64 (__fastcall *off_140B5C6B8[9])();
// 140B5C6E0: using guessed type __int64 (__fastcall *off_140B5C6E0[4])();

