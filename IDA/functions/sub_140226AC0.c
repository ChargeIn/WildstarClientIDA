//----- (0000000140226AC0) ----------------------------------------------------
__int64 __fastcall sub_140226AC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C3C0, a1, qword_140C63858);
	if (dword_140C63DF0 || (int)sub_140226860() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B90 + 24i64))(qword_140C63B90, a1);
}
// 140A6C3C0: using guessed type wchar_t *off_140A6C3C0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B90: using guessed type __int64 qword_140C63B90;
// 140C63DF0: using guessed type int dword_140C63DF0;

