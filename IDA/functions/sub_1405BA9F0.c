#include "../winhttp.h"

//----- (00000001405BA9F0) ----------------------------------------------------
int* __fastcall sub_1405BA9F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rdi
	unsigned __int64 i; // rbx
	wchar_t* v10; // rdx
	__int64 v11; // rax
	wchar_t* v12; // rax
	__int64 v13; // rax
	_WORD* v14; // rax
	int* result; // rax
	bool v16; // [rsp+40h] [rbp-A8h] BYREF
	int v17[3]; // [rsp+44h] [rbp-A4h] BYREF
	_OWORD v18[6]; // [rsp+50h] [rbp-98h] BYREF

	sub_1400D45E0((__int64)v18, a1, a2, a5, 0i64);
	v8 = 0i64;
	for (i = 0i64; i < 0xC; ++i)
	{
		v10 = off_140B21BE0[i];
		v16 = 0;
		v11 = sub_1401A6B80(a5, v10);
		if (v11)
		{
			v12 = (wchar_t*)sub_1401A4F40(v11 + 32);
			sub_1401A52E0(v12, &v16);
			if (v16)
				v8 |= 1i64 << i;
		}
	}
	v17[0] = 0;
	v13 = sub_1401A6B80(a5, L"BuffIndex");
	if (v13)
	{
		v14 = (_WORD*)sub_1401A4F40(v13 + 32);
		sub_1407DF428(v14, (__int64)L"%d", v17);
	}
	--v17[0];
	result = sub_14018B280(1280i64, 0);
	if (result)
		return (int*)sub_1405B9350((__int64)result, a1, a2, v18, a4, v8, v17[0]);
	return result;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140B215C8: using guessed type wchar_t aBuffindex[10];
// 140B21BE0: using guessed type wchar_t *off_140B21BE0[12];
// 1405BA9F0: using guessed type _OWORD var_98[6];
// 1405BA9F0: using guessed type int var_A4[3];

