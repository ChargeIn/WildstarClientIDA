//----- (000000014023CFC0) ----------------------------------------------------
__int64 __fastcall sub_14023CFC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D620, a1, qword_140C63858);
	if (dword_140C64680 || (int)sub_14023CD60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64558 + 24i64))(qword_140C64558, a1);
}
// 140A6D620: using guessed type wchar_t *off_140A6D620[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64558: using guessed type __int64 qword_140C64558;
// 140C64680: using guessed type int dword_140C64680;

