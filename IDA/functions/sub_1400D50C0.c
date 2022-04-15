//----- (00000001400D50C0) ----------------------------------------------------
__int64 __fastcall sub_1400D50C0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	int* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	_WORD* v12; // rax
	__int64 v13; // rax
	_WORD* v14; // rax
	__int64 v16[2]; // [rsp+40h] [rbp-B8h] BYREF
	_OWORD v17[6]; // [rsp+50h] [rbp-A8h] BYREF

	sub_1400D45E0((__int64)v17, a1, a2, a5, 0i64);
	v9 = sub_14018B280(1024i64, 0);
	if (v9)
		v10 = sub_1400C5920((__int64)v9, a1, a2, a3, v17, a4, 0i64);
	else
		v10 = 0i64;
	v16[0] = 0i64;
	v11 = sub_1401A6B80(a5, L"WindowTextXMargin");
	if (v11)
	{
		v12 = (_WORD*)sub_1401A4F40(v11 + 32);
		sub_1407DF428(v12, (__int64)L"%d", v16);
	}
	v13 = sub_1401A6B80(a5, L"WindowTextYMargin");
	if (v13)
	{
		v14 = (_WORD*)sub_1401A4F40(v13 + 32);
		sub_1407DF428(v14, (__int64)L"%d", (char*)v16 + 4);
	}
	*(_QWORD*)(v10 + 272) = v16[0];
	return v10;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31BF0: using guessed type wchar_t aWindowtextymar[18];
// 140A31C18: using guessed type wchar_t aWindowtextxmar[18];
// 1400D50C0: using guessed type _OWORD var_A8[6];

