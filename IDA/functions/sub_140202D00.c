//----- (0000000140202D00) ----------------------------------------------------
__int64 __fastcall sub_140202D00(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A638, a1, qword_140C63858);
	if (dword_140C655D0 || (int)sub_140202A40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C646B0 + 32i64))(qword_140C646B0, a1);
}
// 140A6A638: using guessed type wchar_t *off_140A6A638[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C646B0: using guessed type __int64 qword_140C646B0;
// 140C655D0: using guessed type int dword_140C655D0;

