//----- (0000000140247E00) ----------------------------------------------------
__int64 __fastcall sub_140247E00(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6DF18, a1, qword_140C63858);
	if (dword_140C646D4 || (int)sub_140247BA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C58 + 24i64))(qword_140C63C58, a1);
}
// 140A6DF18: using guessed type wchar_t *off_140A6DF18[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C58: using guessed type __int64 qword_140C63C58;
// 140C646D4: using guessed type int dword_140C646D4;

