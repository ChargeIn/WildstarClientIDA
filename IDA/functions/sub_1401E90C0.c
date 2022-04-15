//----- (00000001401E90C0) ----------------------------------------------------
__int64 __fastcall sub_1401E90C0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69100, a1, qword_140C63858);
	if (dword_140C6501C || (int)sub_1401E8E00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A58 + 32i64))(qword_140C63A58, a1);
}
// 140A69100: using guessed type wchar_t *off_140A69100[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A58: using guessed type __int64 qword_140C63A58;
// 140C6501C: using guessed type int dword_140C6501C;

