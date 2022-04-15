//----- (00000001401EFAA0) ----------------------------------------------------
__int64 __fastcall sub_1401EFAA0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A69678, a1, qword_140C63858);
	if (dword_140C647B8 || (int)sub_1401EF840() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64450 + 24i64))(qword_140C64450, a1);
}
// 140A69678: using guessed type wchar_t *off_140A69678[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64450: using guessed type __int64 qword_140C64450;
// 140C647B8: using guessed type int dword_140C647B8;

