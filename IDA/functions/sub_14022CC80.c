//----- (000000014022CC80) ----------------------------------------------------
__int64 __fastcall sub_14022CC80(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C8C8, a1, qword_140C63858);
	if (dword_140C6494C || (int)sub_14022CA20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B78 + 24i64))(qword_140C63B78, a1);
}
// 140A6C8C8: using guessed type wchar_t *off_140A6C8C8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B78: using guessed type __int64 qword_140C63B78;
// 140C6494C: using guessed type int dword_140C6494C;

