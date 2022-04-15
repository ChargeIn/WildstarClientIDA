#include "../winhttp.h"

//----- (000000014029B740) ----------------------------------------------------
__int64 __fastcall sub_14029B740(__int64* a1, const __m128i* a2)
{
	__int64 v2; // rax
	__int64* v5; // rdx
	int v7; // ebx
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	v2 = *a1;
	v8[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 32))(a1, v8);
	v5 = (__int64*)a1[7];
	if (!v5)
		return 2147500037i64;
	v7 = sub_14026C5F0(a2, v5);
	if (v7 >= 0)
		return 0i64;
	v9 = 0x141DE5330i64;
	sub_1401A3130(14, 2, &v9, (unsigned int)v7);
	return (unsigned int)v7;
}
// 14029B740: using guessed type int var_18[6];

