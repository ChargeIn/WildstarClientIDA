//----- (000000014017A650) ----------------------------------------------------
__int64 __fastcall sub_14017A650(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	int* v9; // rax
	__int64 v10; // r14
	_DWORD* v11; // rbx
	wchar_t** v12; // rdi
	__int64 v13; // rbp
	__int64 v14; // rsi
	__int64 v15; // rax
	_WORD* v16; // rax
	_OWORD v18[6]; // [rsp+40h] [rbp-A8h] BYREF

	sub_1400D45E0((__int64)v18, a1, a2, a5, 0i64);
	v9 = sub_14018B280(1264i64, 0);
	if (v9)
		v10 = sub_140178B10((__int64)v9, a1, a2, a3, v18, a4);
	else
		v10 = 0i64;
	v11 = (_DWORD*)(v10 + 1152);
	v12 = off_140A32EF8;
	v13 = 4i64;
	v14 = v10 + 1152;
	do
	{
		*v11 = 0;
		v15 = sub_1401A6B80(a5, *v12);
		if (v15)
		{
			v16 = (_WORD*)sub_1401A4F40(v15 + 32);
			sub_1407DF428(v16, (__int64)L"%d", v14);
		}
		v14 += 4i64;
		++v11;
		++v12;
		--v13;
	} while (v13);
	return v10;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A32EF8: using guessed type wchar_t *off_140A32EF8[47];
// 14017A650: using guessed type _OWORD var_A8[6];

