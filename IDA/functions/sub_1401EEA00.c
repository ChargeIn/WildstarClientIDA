//----- (00000001401EEA00) ----------------------------------------------------
__int64 __fastcall sub_1401EEA00(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69598, a1, qword_140C63858);
	if (dword_140C643DC || (int)sub_1401EE740() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64090 + 32i64))(qword_140C64090, a1);
}
// 140A69598: using guessed type wchar_t *off_140A69598[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64090: using guessed type __int64 qword_140C64090;
// 140C643DC: using guessed type int dword_140C643DC;

