//----- (000000014024D360) ----------------------------------------------------
__int64 __fastcall sub_14024D360(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6E378, a1, qword_140C63858);
	if (dword_140C645DC || (int)sub_14024D0A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A00 + 32i64))(qword_140C63A00, a1);
}
// 140A6E378: using guessed type wchar_t *off_140A6E378[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A00: using guessed type __int64 qword_140C63A00;
// 140C645DC: using guessed type int dword_140C645DC;

