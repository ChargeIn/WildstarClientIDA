//----- (00000001401F3A60) ----------------------------------------------------
__int64 __fastcall sub_1401F3A60(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A699C0, a1, qword_140C63858);
	if (dword_140C64030 || (int)sub_1401F3800() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64CF0 + 24i64))(qword_140C64CF0, a1);
}
// 140A699C0: using guessed type wchar_t *off_140A699C0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64030: using guessed type int dword_140C64030;
// 140C64CF0: using guessed type __int64 qword_140C64CF0;

