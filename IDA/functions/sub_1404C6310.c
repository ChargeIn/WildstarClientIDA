#include "../winhttp.h"

//----- (00000001404C6310) ----------------------------------------------------
__m128* __fastcall sub_1404C6310(__int64 a1, __m128* a2, unsigned int a3)
{
	double v7[8]; // [rsp+30h] [rbp-138h] BYREF
	char v8[64]; // [rsp+70h] [rbp-F8h] BYREF
	char v9[64]; // [rsp+B0h] [rbp-B8h] BYREF
	__m128* v10[10]; // [rsp+F0h] [rbp-78h] BYREF

	v10[0] = (__m128*)sub_1404C27A0(a1, (__int64)v8);
	sub_1401AFC20((__int64*)v10, v7);
	v10[0] = (__m128*)(*(__int64(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)a1 + 136i64))(a1, v9, a3);
	v10[1] = (__m128*)v7;
	sub_1401AFB10(v10, a2);
	return a2;
}
// 1404C6310: using guessed type char var_F8[64];
// 1404C6310: using guessed type double var_138[8];
// 1404C6310: using guessed type char var_B8[64];

