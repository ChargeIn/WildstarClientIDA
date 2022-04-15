#include "../winhttp.h"

//----- (00000001401303B0) ----------------------------------------------------
_QWORD* __fastcall sub_1401303B0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rdx
	__int64 v3; // rcx
	__int64 v4; // rcx
	char v5; // r9
	__m128 v7; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(_QWORD*)(a1 + 32);
	v2 = a1;
	v7 = (__m128)xmmword_140B7B240;
	v3 = *(_QWORD*)(v1 + 2896);
	v5 = 1;
	if (v3 != v2
		&& (*(char*)(v2 + 28) >= 0 || !v3 || (v4 = *(_QWORD*)(v3 + 16)) == 0 || v4 != v2 && !sub_1400D1A90(v4, v2)))
	{
		v5 = 0;
	}
	return sub_1400C3CB0(v2 + 1024, &v7, (*(_BYTE*)(v2 + 28) & 8) != 0, v5);
}
// 140130402: variable 'v2' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 1401303B0: using guessed type __m128 var_18;

