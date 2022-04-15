//----- (0000000140211B00) ----------------------------------------------------
__int64 __fastcall sub_140211B00(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6B278, a1, qword_140C63858);
	if (dword_140C63BE8 || (int)sub_1402118A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F00 + 24i64))(qword_140C64F00, a1);
}
// 140A6B278: using guessed type wchar_t *off_140A6B278[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BE8: using guessed type int dword_140C63BE8;
// 140C64F00: using guessed type __int64 qword_140C64F00;

