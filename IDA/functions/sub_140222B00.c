//----- (0000000140222B00) ----------------------------------------------------
__int64 __fastcall sub_140222B00(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C078, a1, qword_140C63858);
	if (dword_140C645E4 || (int)sub_1402228A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C641D0 + 24i64))(qword_140C641D0, a1);
}
// 140A6C078: using guessed type wchar_t *off_140A6C078[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C641D0: using guessed type __int64 qword_140C641D0;
// 140C645E4: using guessed type int dword_140C645E4;
