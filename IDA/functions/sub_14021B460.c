//----- (000000014021B460) ----------------------------------------------------
__int64 __fastcall sub_14021B460(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6BA58, a1, qword_140C63858);
	if (dword_140C648A0 || (int)sub_14021B1A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653B0 + 32i64))(qword_140C653B0, a1);
}
// 140A6BA58: using guessed type wchar_t *off_140A6BA58[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C648A0: using guessed type int dword_140C648A0;
// 140C653B0: using guessed type __int64 qword_140C653B0;
