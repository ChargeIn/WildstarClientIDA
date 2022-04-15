//----- (000000014022D120) ----------------------------------------------------
__int64 __fastcall sub_14022D120(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C900, a1, qword_140C63858);
	if (dword_140C64F4C || (int)sub_14022CE60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652A0 + 32i64))(qword_140C652A0, a1);
}
// 140A6C900: using guessed type wchar_t *off_140A6C900[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64F4C: using guessed type int dword_140C64F4C;
// 140C652A0: using guessed type __int64 qword_140C652A0;

