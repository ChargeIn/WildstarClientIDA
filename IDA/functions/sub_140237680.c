//----- (0000000140237680) ----------------------------------------------------
__int64 __fastcall sub_140237680(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D188, a1, qword_140C63858);
	if (dword_140C64F14 || (int)sub_140237420() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A28 + 24i64))(qword_140C64A28, a1);
}
// 140A6D188: using guessed type wchar_t *off_140A6D188[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A28: using guessed type __int64 qword_140C64A28;
// 140C64F14: using guessed type int dword_140C64F14;
