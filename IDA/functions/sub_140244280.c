//----- (0000000140244280) ----------------------------------------------------
__int64 __fastcall sub_140244280(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6DC08, a1, qword_140C63858);
	if (dword_140C64338 || (int)sub_140244020() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63968 + 24i64))(qword_140C63968, a1);
}
// 140A6DC08: using guessed type wchar_t *off_140A6DC08[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63968: using guessed type __int64 qword_140C63968;
// 140C64338: using guessed type int dword_140C64338;
