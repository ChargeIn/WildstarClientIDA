//----- (0000000140220080) ----------------------------------------------------
__int64 __fastcall sub_140220080(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BE48, a1, qword_140C63858);
	if (dword_140C63F88 || (int)sub_14021FE20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B60 + 24i64))(qword_140C64B60, a1);
}
// 140A6BE48: using guessed type wchar_t *off_140A6BE48[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F88: using guessed type int dword_140C63F88;
// 140C64B60: using guessed type __int64 qword_140C64B60;
