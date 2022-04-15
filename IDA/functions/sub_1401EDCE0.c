//----- (00000001401EDCE0) ----------------------------------------------------
__int64 __fastcall sub_1401EDCE0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A694F0, a1, qword_140C63858);
	if (dword_140C64024 || (int)sub_1401EDA80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64308 + 24i64))(qword_140C64308, a1);
}
// 140A694F0: using guessed type wchar_t *off_140A694F0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64024: using guessed type int dword_140C64024;
// 140C64308: using guessed type __int64 qword_140C64308;

