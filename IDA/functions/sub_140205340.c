//----- (0000000140205340) ----------------------------------------------------
__int64 __fastcall sub_140205340(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A830, a1, qword_140C63858);
	if (dword_140C639F8 || (int)sub_140205080() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C646E8 + 32i64))(qword_140C646E8, a1);
}
// 140A6A830: using guessed type wchar_t *off_140A6A830[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639F8: using guessed type int dword_140C639F8;
// 140C646E8: using guessed type __int64 qword_140C646E8;

