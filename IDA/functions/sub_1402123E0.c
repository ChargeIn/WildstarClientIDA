//----- (00000001402123E0) ----------------------------------------------------
__int64 __fastcall sub_1402123E0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B2E8, a1, qword_140C63858);
	if (dword_140C642BC || (int)sub_140212120() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652A8 + 32i64))(qword_140C652A8, a1);
}
// 140A6B2E8: using guessed type wchar_t *off_140A6B2E8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642BC: using guessed type int dword_140C642BC;
// 140C652A8: using guessed type __int64 qword_140C652A8;

