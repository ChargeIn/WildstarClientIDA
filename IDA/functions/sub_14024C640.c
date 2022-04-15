//----- (000000014024C640) ----------------------------------------------------
__int64 __fastcall sub_14024C640(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6E2D0, a1, qword_140C63858);
	if (dword_140C63B38 || (int)sub_14024C3E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D28 + 24i64))(qword_140C64D28, a1);
}
// 140A6E2D0: using guessed type wchar_t *off_140A6E2D0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B38: using guessed type int dword_140C63B38;
// 140C64D28: using guessed type __int64 qword_140C64D28;

