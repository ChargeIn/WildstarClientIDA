#include "../winhttp.h"

//----- (00000001402B1DE0) ----------------------------------------------------
__int64 __fastcall sub_1402B1DE0(__int64* a1, const __m128i* a2)
{
	__int64 v2; // rax
	int* v5; // r8
	int v7; // edi
	__int64 v8; // rcx
	void* v9; // rax
	int v10[6]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v11; // [rsp+50h] [rbp+8h] BYREF

	v2 = *a1;
	v10[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 32))(a1, v10);
	v5 = (int*)a1[8];
	if (!v5)
		return 2147500037i64;
	v7 = sub_14027A1A0(a1[7], a2, v5);
	if (v7 >= 0)
		return 0i64;
	v8 = a1[43];
	if (v8 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8))
		v9 = (void*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[43] + 16i64))(a1[43]);
	else
		v9 = &unk_1409E429C;
	v11 = 0x141DE7380i64;
	sub_1401A3130(14, 2, &v11, (unsigned int)v7, v9);
	return (unsigned int)v7;
}
// 1402B1DE0: using guessed type int var_18[6];

