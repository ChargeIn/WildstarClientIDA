#include "../winhttp.h"

//----- (00000001402D26C0) ----------------------------------------------------
void __fastcall sub_1402D26C0(__int64 a1)
{
	unsigned __int64 v2; // r9
	__m128 v3[11]; // [rsp+30h] [rbp-D0h] BYREF
	__m128 v4; // [rsp+E0h] [rbp-20h] BYREF
	__int128 v5; // [rsp+F0h] [rbp-10h]
	__int64 v6; // [rsp+100h] [rbp+0h]
	__int64 v7; // [rsp+108h] [rbp+8h]
	__int64 v8[6]; // [rsp+130h] [rbp+30h] BYREF
	char v9[64]; // [rsp+160h] [rbp+60h] BYREF

	v5 = 0ui64;
	memset(v8, 0, 32);
	v6 = a1 + 64;
	v7 = a1 + 48;
	v8[4] = a1 + 64;
	v8[5] = a1 + 48;
	sub_1401AFF00((__int64)v8, (__int64)v9);
	v4.m128_u64[0] = (unsigned __int64)v9;
	v4.m128_u64[1] = v2;
	sub_1401AFB10((__m128**) & v4, (__m128*)(a1 + 208));
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)a1 + 16i64))(a1, v3);
	sub_140252DD0(v3, &v4);
	*(__m128*)(a1 + 272) = v4;
	*(_OWORD*)(a1 + 288) = v5;
}
// 1402D2781: variable 'v2' is possibly undefined
// 1402D26C0: using guessed type __m128 var_180[11];

