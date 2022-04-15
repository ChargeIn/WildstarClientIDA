#include "../winhttp.h"

//----- (00000001406DD860) ----------------------------------------------------
__int64* __fastcall sub_1406DD860(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__m128i* v9; // rsi
	__int64 v10; // rax
	_WORD* v11; // rax
	int* v12; // rax
	__int64* v13; // rdi
	__int64 v14; // rax
	__m128i* v15; // rax
	__int64 v16; // rax
	__m128i* v17; // rax
	__int64 v18; // rax
	int v20; // [rsp+30h] [rbp-C8h]
	int v21; // [rsp+40h] [rbp-B8h] BYREF
	int v22[3]; // [rsp+44h] [rbp-B4h] BYREF
	_OWORD v23[6]; // [rsp+50h] [rbp-A8h] BYREF

	v9 = 0i64;
	sub_1400D45E0((__int64)v23, a1, a2, a5, 0i64);
	v21 = 0;
	v10 = sub_1401A6B80(a5, L"EquipmentSlot");
	if (v10)
	{
		v11 = (_WORD*)sub_1401A4F40(v10 + 32);
		sub_1407DF428(v11, (__int64)L"%d", &v21);
	}
	v12 = sub_14018B280(2752i64, 0);
	if (v12)
	{
		v22[1] = v21;
		v22[0] = 8;
		v13 = (__int64*)sub_1406DD390((__int64)v12, a1, a2, a3, v23, a4, v20, (__int64)v22);
	}
	else
	{
		v13 = 0i64;
	}
	v14 = sub_1401A6B80(a5, L"ItemFrame");
	if (v14)
		v15 = (__m128i*)sub_1401A4F40(v14 + 32);
	else
		v15 = 0i64;
	if (a1)
		sub_140109710(v13 + 323, a1 + 240, v15, 0);
	v16 = sub_1401A6B80(a5, L"WhenEmpty");
	if (v16)
		v17 = (__m128i*)sub_1401A4F40(v16 + 32);
	else
		v17 = 0i64;
	if (a1)
		sub_140109710(v13 + 329, a1 + 240, v17, 0);
	v18 = sub_1401A6B80(a5, L"LockedIcon");
	if (v18)
		v9 = (__m128i*)sub_1401A4F40(v18 + 32);
	if (a1)
		sub_140109710(v13 + 335, a1 + 240, v9, 0);
	return v13;
}
// 1406DD92B: variable 'v20' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140B3DD00: using guessed type wchar_t aEquipmentslot_0[14];
// 140B3DD28: using guessed type wchar_t aItemframe_0[10];
// 140B3DD48: using guessed type wchar_t aWhenempty_0[10];
// 140B3DD68: using guessed type wchar_t aLockedicon_0[11];
// 1406DD860: using guessed type _OWORD var_A8[6];

