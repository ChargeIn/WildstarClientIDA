#include "../winhttp.h"

//----- (00000001405085C0) ----------------------------------------------------
__int64 __fastcall sub_1405085C0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v9; // rdi
	unsigned __int64 i; // rbx
	wchar_t* v11; // rdx
	__int64 v12; // rax
	wchar_t* v13; // rax
	int* v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	_WORD* v17; // rax
	__int64 result; // rax
	bool v19; // [rsp+40h] [rbp-C8h] BYREF
	int v20[3]; // [rsp+44h] [rbp-C4h] BYREF
	_OWORD v21[6]; // [rsp+50h] [rbp-B8h] BYREF

	sub_1400D45E0((__int64)v21, a1, a2, a5, 0i64);
	v9 = 0i64;
	for (i = 0i64; i < 2; ++i)
	{
		v11 = off_140B106C0[i];
		v19 = 0;
		v12 = sub_1401A6B80(a5, v11);
		if (v12)
		{
			v13 = (wchar_t*)sub_1401A4F40(v12 + 32);
			sub_1401A52E0(v13, &v19);
			if (v19)
				v9 |= 1i64 << i;
		}
	}
	v14 = sub_14018B280(1552i64, 0);
	if (v14)
		v15 = sub_140505860((__int64)v14, a1, a2, a3, v21, a4, v9);
	else
		v15 = 0i64;
	v20[0] = 0;
	v16 = sub_1401A6B80(a5, L"RightJustified");
	if (!v16)
		return v15;
	v17 = (_WORD*)sub_1401A4F40(v16 + 32);
	if ((unsigned int)sub_1407DF428(v17, (__int64)L"%d", v20) != 1)
		return v15;
	result = v15;
	if (v20[0])
		*(_DWORD*)(v15 + 704) = 2;
	return result;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140B10330: using guessed type wchar_t aRightjustified[15];
// 140B106C0: using guessed type wchar_t *off_140B106C0[2];
// 1405085C0: using guessed type _OWORD var_B8[6];
// 1405085C0: using guessed type int var_C4[3];

