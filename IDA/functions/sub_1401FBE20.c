//----- (00000001401FBE20) ----------------------------------------------------
__int64 __fastcall sub_1401FBE20(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A088, a1, qword_140C63858);
	if (dword_140C6531C || (int)sub_1401FBBC0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F60 + 24i64))(qword_140C63F60, a1);
}
// 140A6A088: using guessed type wchar_t *off_140A6A088[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F60: using guessed type __int64 qword_140C63F60;
// 140C6531C: using guessed type int dword_140C6531C;
