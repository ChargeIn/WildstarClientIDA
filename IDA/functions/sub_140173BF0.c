#include "../winhttp.h"

//----- (0000000140173BF0) ----------------------------------------------------
_DWORD* __fastcall sub_140173BF0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	int* v9; // rax
	_DWORD* v10; // rbx
	__int64 v11; // rax
	_WORD* v12; // rax
	__int64 v13; // rax
	_WORD* v14; // rax
	__int64 v15; // rax
	_WORD* v16; // rax
	int v17; // xmm1_4
	int v18; // xmm0_4
	_DWORD* result; // rax
	int v20; // [rsp+40h] [rbp-A8h] BYREF
	int v21; // [rsp+44h] [rbp-A4h] BYREF
	int v22; // [rsp+48h] [rbp-A0h] BYREF
	_OWORD v23[6]; // [rsp+50h] [rbp-98h] BYREF

	sub_1400D45E0((__int64)v23, a1, a2, a5, 0i64);
	v9 = sub_14018B280(1152i64, 0);
	if (v9)
		v10 = (_DWORD*)sub_140173180((__int64)v9, a1, a2, a3, v23, a4);
	else
		v10 = 0i64;
	v22 = 0;
	v21 = 0;
	v20 = 1120403456;
	v11 = sub_1401A6B80(a5, L"Min");
	if (v11)
	{
		v12 = (_WORD*)sub_1401A4F40(v11 + 32);
		sub_1407DF428(v12, (__int64)L"%f", &v21);
	}
	v13 = sub_1401A6B80(a5, L"Max");
	if (v13)
	{
		v14 = (_WORD*)sub_1401A4F40(v13 + 32);
		sub_1407DF428(v14, (__int64)L"%f", &v20);
	}
	v15 = sub_1401A6B80(a5, L"Decimals");
	if (v15)
	{
		v16 = (_WORD*)sub_1401A4F40(v15 + 32);
		sub_1407DF428(v16, (__int64)L"%d", &v22);
	}
	v17 = v20;
	v18 = v21;
	v10[262] = v22;
	result = v10;
	v10[263] = v18;
	v10[264] = v17;
	return result;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 1409E441C: using guessed type wchar_t asc_1409E441C[3];
// 140A38E60: using guessed type wchar_t aDecimals[9];
// 140A38E78: using guessed type wchar_t aMax[4];
// 140A38EB0: using guessed type wchar_t aMin_0[4];
// 140173BF0: using guessed type _OWORD var_98[6];

