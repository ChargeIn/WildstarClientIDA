//----- (00000001401F9400) ----------------------------------------------------
__int64 __fastcall sub_1401F9400(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69E58, a1, qword_140C63858);
	if (dword_140C64708 || (int)sub_1401F9140() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65028 + 32i64))(qword_140C65028, a1);
}
// 140A69E58: using guessed type wchar_t *off_140A69E58[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64708: using guessed type int dword_140C64708;
// 140C65028: using guessed type __int64 qword_140C65028;

