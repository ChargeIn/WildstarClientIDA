//----- (00000001402156E0) ----------------------------------------------------
__int64 __fastcall sub_1402156E0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B588, a1, qword_140C63858);
	if (dword_140C6558C || (int)sub_140215420() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D10 + 32i64))(qword_140C64D10, a1);
}
// 140A6B588: using guessed type wchar_t *off_140A6B588[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D10: using guessed type __int64 qword_140C64D10;
// 140C6558C: using guessed type int dword_140C6558C;

