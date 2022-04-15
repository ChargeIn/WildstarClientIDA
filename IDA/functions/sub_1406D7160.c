#include "../winhttp.h"

//----- (00000001406D7160) ----------------------------------------------------
__int64 __fastcall sub_1406D7160(_QWORD* a1)
{
	__int64 v2; // rdi
	unsigned int* v3; // rax
	__m128 v5; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1406D5FA0(a1);
	if (v2)
	{
		v5 = (__m128)xmmword_140C777D0;
		v3 = sub_140143880(&v6, a1, 2u, &v5);
		sub_14004F630((unsigned int*)(v2 + 2504), v3);
		sub_1401429A0(qword_140C63678, v6);
	}
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 1406D7160: using guessed type __m128 var_18;

