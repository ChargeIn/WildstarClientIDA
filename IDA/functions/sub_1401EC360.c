//----- (00000001401EC360) ----------------------------------------------------
__int64 __fastcall sub_1401EC360(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A693A0, a1, qword_140C63858);
	if (dword_140C64380 || (int)sub_1401EC100() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64EB0 + 24i64))(qword_140C64EB0, a1);
}
// 140A693A0: using guessed type wchar_t *off_140A693A0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64380: using guessed type int dword_140C64380;
// 140C64EB0: using guessed type __int64 qword_140C64EB0;

