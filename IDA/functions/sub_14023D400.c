//----- (000000014023D400) ----------------------------------------------------
__int64 __fastcall sub_14023D400(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D658, a1, qword_140C63858);
	if (dword_140C64C94 || (int)sub_14023D1A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FE8 + 24i64))(qword_140C64FE8, a1);
}
// 140A6D658: using guessed type wchar_t *off_140A6D658[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C94: using guessed type int dword_140C64C94;
// 140C64FE8: using guessed type __int64 qword_140C64FE8;
