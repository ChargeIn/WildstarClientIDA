//----- (000000014022F320) ----------------------------------------------------
__int64 __fastcall sub_14022F320(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CAC0, a1, qword_140C63858);
	if (dword_140C651A0 || (int)sub_14022F060() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C651A8 + 32i64))(qword_140C651A8, a1);
}
// 140A6CAC0: using guessed type wchar_t *off_140A6CAC0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C651A0: using guessed type int dword_140C651A0;
// 140C651A8: using guessed type __int64 qword_140C651A8;
