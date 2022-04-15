//----- (00000001401EAA40) ----------------------------------------------------
__int64 __fastcall sub_1401EAA40(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69250, a1, qword_140C63858);
	if (dword_140C64434 || (int)sub_1401EA780() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F08 + 32i64))(qword_140C63F08, a1);
}
// 140A69250: using guessed type wchar_t *off_140A69250[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F08: using guessed type __int64 qword_140C63F08;
// 140C64434: using guessed type int dword_140C64434;

