//----- (0000000140232A60) ----------------------------------------------------
__int64 __fastcall sub_140232A60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CD98, a1, qword_140C63858);
	if (dword_140C64740 || (int)sub_1402327A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63EF0 + 32i64))(qword_140C63EF0, a1);
}
// 140A6CD98: using guessed type wchar_t *off_140A6CD98[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EF0: using guessed type __int64 qword_140C63EF0;
// 140C64740: using guessed type int dword_140C64740;

