//----- (0000000140220D40) ----------------------------------------------------
__int64 __fastcall sub_140220D40(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BEF0, a1, qword_140C63858);
	if (dword_140C64B00 || (int)sub_140220AE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F58 + 24i64))(qword_140C64F58, a1);
}
// 140A6BEF0: using guessed type wchar_t *off_140A6BEF0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B00: using guessed type int dword_140C64B00;
// 140C64F58: using guessed type __int64 qword_140C64F58;

