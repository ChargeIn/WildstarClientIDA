//----- (00000001402457C0) ----------------------------------------------------
__int64 __fastcall sub_1402457C0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6DD20, a1, qword_140C63858);
	if (dword_140C63DE8 || (int)sub_140245560() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64828 + 24i64))(qword_140C64828, a1);
}
// 140A6DD20: using guessed type wchar_t *off_140A6DD20[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DE8: using guessed type int dword_140C63DE8;
// 140C64828: using guessed type __int64 qword_140C64828;

