//----- (00000001401F4BC0) ----------------------------------------------------
__int64 __fastcall sub_1401F4BC0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69AA0, a1, qword_140C63858);
	if (dword_140C64B6C || (int)sub_1401F4900() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A90 + 32i64))(qword_140C64A90, a1);
}
// 140A69AA0: using guessed type wchar_t *off_140A69AA0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A90: using guessed type __int64 qword_140C64A90;
// 140C64B6C: using guessed type int dword_140C64B6C;

