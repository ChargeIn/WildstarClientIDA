//----- (0000000140227BC0) ----------------------------------------------------
__int64 __fastcall sub_140227BC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C4A0, a1, qword_140C63858);
	if (dword_140C64D08 || (int)sub_140227960() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64518 + 24i64))(qword_140C64518, a1);
}
// 140A6C4A0: using guessed type wchar_t *off_140A6C4A0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64518: using guessed type __int64 qword_140C64518;
// 140C64D08: using guessed type int dword_140C64D08;
