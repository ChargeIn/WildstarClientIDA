//----- (00000001401FA0C0) ----------------------------------------------------
__int64 __fastcall sub_1401FA0C0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69F00, a1, qword_140C63858);
	if (dword_140C63FAC || (int)sub_1401F9E00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64DD0 + 32i64))(qword_140C64DD0, a1);
}
// 140A69F00: using guessed type wchar_t *off_140A69F00[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63FAC: using guessed type int dword_140C63FAC;
// 140C64DD0: using guessed type __int64 qword_140C64DD0;

