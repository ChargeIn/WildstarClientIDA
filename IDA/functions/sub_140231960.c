//----- (0000000140231960) ----------------------------------------------------
__int64 __fastcall sub_140231960(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CCB8, a1, qword_140C63858);
	if (dword_140C64E5C || (int)sub_1402316A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E60 + 32i64))(qword_140C64E60, a1);
}
// 140A6CCB8: using guessed type wchar_t *off_140A6CCB8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E5C: using guessed type int dword_140C64E5C;
// 140C64E60: using guessed type __int64 qword_140C64E60;

