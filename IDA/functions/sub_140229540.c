//----- (0000000140229540) ----------------------------------------------------
__int64 __fastcall sub_140229540(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C5F0, a1, qword_140C63858);
	if (dword_140C64BD8 || (int)sub_1402292E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63888 + 24i64))(qword_140C63888, a1);
}
// 140A6C5F0: using guessed type wchar_t *off_140A6C5F0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63888: using guessed type __int64 qword_140C63888;
// 140C64BD8: using guessed type int dword_140C64BD8;

