#include "../winhttp.h"

//----- (00000001401820B0) ----------------------------------------------------
__int64 __fastcall sub_1401820B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	unsigned int v4; // ebx
	__m128* v5; // rax
	__int128 v7; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1400D66A0(a1, 1u);
	v3 = v2;
	if (v2 && (*(_DWORD*)(v2 + 432) & 0x800i64) != 0)
	{
		v7 = xmmword_140C777D0;
		sub_140143880(&v8, a1, 2u, (__m128*) & v7);
		v4 = v8;
		if ((unsigned __int64)v8 >= *(_QWORD*)(qword_140C63678 + 48))
			v5 = *(__m128**)(qword_140C63678 + 40);
		else
			v5 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32i64 * v8);
		v7 = (__int128)*v5;
		sub_140180F20(v3, (__m128*) & v7);
		sub_1401429A0(qword_140C63678, v4);
	}
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 1401820B0: using guessed type __m128 var_18;

