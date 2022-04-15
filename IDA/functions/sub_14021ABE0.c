//----- (000000014021ABE0) ----------------------------------------------------
__int64 __fastcall sub_14021ABE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B9E8, a1, qword_140C63858);
	if (dword_140C6556C || (int)sub_14021A920() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63CB0 + 32i64))(qword_140C63CB0, a1);
}
// 140A6B9E8: using guessed type wchar_t *off_140A6B9E8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63CB0: using guessed type __int64 qword_140C63CB0;
// 140C6556C: using guessed type int dword_140C6556C;

