//----- (00000001401F2E00) ----------------------------------------------------
__int64 __fastcall sub_1401F2E00(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69918, a1, qword_140C63858);
	if (dword_140C64084 || (int)sub_1401F2B40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64540 + 32i64))(qword_140C64540, a1);
}
// 140A69918: using guessed type wchar_t *off_140A69918[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64084: using guessed type int dword_140C64084;
// 140C64540: using guessed type __int64 qword_140C64540;

