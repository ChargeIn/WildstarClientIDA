//----- (00000001402493A0) ----------------------------------------------------
__int64 __fastcall sub_1402493A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6E030, a1, qword_140C63858);
	if (dword_140C63E44 || (int)sub_1402490E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64330 + 32i64))(qword_140C64330, a1);
}
// 140A6E030: using guessed type wchar_t *off_140A6E030[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E44: using guessed type int dword_140C63E44;
// 140C64330: using guessed type __int64 qword_140C64330;

