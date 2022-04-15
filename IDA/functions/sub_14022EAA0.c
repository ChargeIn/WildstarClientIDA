//----- (000000014022EAA0) ----------------------------------------------------
__int64 __fastcall sub_14022EAA0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CA50, a1, qword_140C63858);
	if (dword_140C6564C || (int)sub_14022E7E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64388 + 32i64))(qword_140C64388, a1);
}
// 140A6CA50: using guessed type wchar_t *off_140A6CA50[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64388: using guessed type __int64 qword_140C64388;
// 140C6564C: using guessed type int dword_140C6564C;

