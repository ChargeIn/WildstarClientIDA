//----- (00000001401ED900) ----------------------------------------------------
__int64 __fastcall sub_1401ED900(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A694B8, a1, qword_140C63858);
	if (dword_140C653CC || (int)sub_1401ED640() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65410 + 32i64))(qword_140C65410, a1);
}
// 140A694B8: using guessed type wchar_t *off_140A694B8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C653CC: using guessed type int dword_140C653CC;
// 140C65410: using guessed type __int64 qword_140C65410;

