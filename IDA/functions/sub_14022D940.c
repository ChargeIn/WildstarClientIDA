//----- (000000014022D940) ----------------------------------------------------
__int64 __fastcall sub_14022D940(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C970, a1, qword_140C63858);
	if (dword_140C65234 || (int)sub_14022D6E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A50 + 24i64))(qword_140C64A50, a1);
}
// 140A6C970: using guessed type wchar_t *off_140A6C970[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A50: using guessed type __int64 qword_140C64A50;
// 140C65234: using guessed type int dword_140C65234;

