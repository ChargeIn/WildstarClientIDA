//----- (00000001401FFDE0) ----------------------------------------------------
__int64 __fastcall sub_1401FFDE0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A3D0, a1, qword_140C63858);
	if (dword_140C64D90 || (int)sub_1401FFB80() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65218 + 24i64))(qword_140C65218, a1);
}
// 140A6A3D0: using guessed type wchar_t *off_140A6A3D0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D90: using guessed type int dword_140C64D90;
// 140C65218: using guessed type __int64 qword_140C65218;

