//----- (00000001401F97E0) ----------------------------------------------------
__int64 __fastcall sub_1401F97E0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A69E90, a1, qword_140C63858);
	if (dword_140C64974 || (int)sub_1401F9580() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64398 + 24i64))(qword_140C64398, a1);
}
// 140A69E90: using guessed type wchar_t *off_140A69E90[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64398: using guessed type __int64 qword_140C64398;
// 140C64974: using guessed type int dword_140C64974;

