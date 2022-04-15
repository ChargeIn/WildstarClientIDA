//----- (0000000140246D00) ----------------------------------------------------
__int64 __fastcall sub_140246D00(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6DE38, a1, qword_140C63858);
	if (dword_140C64144 || (int)sub_140246AA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64138 + 24i64))(qword_140C64138, a1);
}
// 140A6DE38: using guessed type wchar_t *off_140A6DE38[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64138: using guessed type __int64 qword_140C64138;
// 140C64144: using guessed type int dword_140C64144;

