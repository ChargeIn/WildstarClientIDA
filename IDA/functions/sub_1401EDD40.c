//----- (00000001401EDD40) ----------------------------------------------------
__int64 __fastcall sub_1401EDD40(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A694F0, a1, qword_140C63858);
	if (dword_140C64024 || (int)sub_1401EDA80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64308 + 32i64))(qword_140C64308, a1);
}
// 140A694F0: using guessed type wchar_t *off_140A694F0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64024: using guessed type int dword_140C64024;
// 140C64308: using guessed type __int64 qword_140C64308;

