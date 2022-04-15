//----- (00000001401EB700) ----------------------------------------------------
__int64 __fastcall sub_1401EB700(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A692F8, a1, qword_140C63858);
	if (dword_140C64E08 || (int)sub_1401EB440() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D68 + 32i64))(qword_140C63D68, a1);
}
// 140A692F8: using guessed type wchar_t *off_140A692F8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D68: using guessed type __int64 qword_140C63D68;
// 140C64E08: using guessed type int dword_140C64E08;

