//----- (00000001401F2140) ----------------------------------------------------
__int64 __fastcall sub_1401F2140(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69870, a1, qword_140C63858);
	if (dword_140C6528C || (int)sub_1401F1E80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64728 + 32i64))(qword_140C64728, a1);
}
// 140A69870: using guessed type wchar_t *off_140A69870[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64728: using guessed type __int64 qword_140C64728;
// 140C6528C: using guessed type int dword_140C6528C;

