#include "../winhttp.h"

//----- (00000001404F89D0) ----------------------------------------------------
__int64 __fastcall sub_1404F89D0(_QWORD* a1)
{
	__int64 v2; // rdi
	char* v3; // rax
	__m128i* v4; // rbx
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__m128i* v7; // [rsp+28h] [rbp-20h]

	v2 = sub_1404F87C0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v6, v3);
	v4 = v7;
	sub_1404F68E0(v2, v7);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 0i64;
}

