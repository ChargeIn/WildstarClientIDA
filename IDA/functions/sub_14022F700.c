//----- (000000014022F700) ----------------------------------------------------
__int64 __fastcall sub_14022F700(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6CAF8, a1, qword_140C63858);
	if (dword_140C653FC || (int)sub_14022F4A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65228 + 24i64))(qword_140C65228, a1);
}
// 140A6CAF8: using guessed type wchar_t *off_140A6CAF8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65228: using guessed type __int64 qword_140C65228;
// 140C653FC: using guessed type int dword_140C653FC;

