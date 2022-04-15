//----- (00000001401FE900) ----------------------------------------------------
__int64 __fastcall sub_1401FE900(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A2B8, a1, qword_140C63858);
	if (dword_140C643F4 || (int)sub_1401FE640() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F40 + 32i64))(qword_140C64F40, a1);
}
// 140A6A2B8: using guessed type wchar_t *off_140A6A2B8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C643F4: using guessed type int dword_140C643F4;
// 140C64F40: using guessed type __int64 qword_140C64F40;

