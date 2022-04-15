//----- (000000014023FAA0) ----------------------------------------------------
__int64 __fastcall sub_14023FAA0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6D850, a1, qword_140C63858);
	if (dword_140C63F5C || (int)sub_14023F7E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C650E0 + 32i64))(qword_140C650E0, a1);
}
// 140A6D850: using guessed type wchar_t *off_140A6D850[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F5C: using guessed type int dword_140C63F5C;
// 140C650E0: using guessed type __int64 qword_140C650E0;

