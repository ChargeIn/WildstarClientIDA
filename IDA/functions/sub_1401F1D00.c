//----- (00000001401F1D00) ----------------------------------------------------
__int64 __fastcall sub_1401F1D00(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69838, a1, qword_140C63858);
	if (dword_140C639C0 || (int)sub_1401F1A40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C639E0 + 32i64))(qword_140C639E0, a1);
}
// 140A69838: using guessed type wchar_t *off_140A69838[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639C0: using guessed type int dword_140C639C0;
// 140C639E0: using guessed type __int64 qword_140C639E0;

