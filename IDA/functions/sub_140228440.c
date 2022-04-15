//----- (0000000140228440) ----------------------------------------------------
__int64 __fastcall sub_140228440(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C510, a1, qword_140C63858);
	if (dword_140C638C4 || (int)sub_1402281E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64890 + 24i64))(qword_140C64890, a1);
}
// 140A6C510: using guessed type wchar_t *off_140A6C510[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638C4: using guessed type int dword_140C638C4;
// 140C64890: using guessed type __int64 qword_140C64890;

