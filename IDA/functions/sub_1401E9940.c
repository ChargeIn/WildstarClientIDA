//----- (00000001401E9940) ----------------------------------------------------
__int64 __fastcall sub_1401E9940(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69170, a1, qword_140C63858);
	if (dword_140C638BC || (int)sub_1401E9680() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 32i64))(qword_140C64768, a1);
}
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C64768: using guessed type __int64 qword_140C64768;

