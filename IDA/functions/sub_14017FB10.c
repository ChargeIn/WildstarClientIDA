#include "../winhttp.h"

//----- (000000014017FB10) ----------------------------------------------------
__int64 __fastcall sub_14017FB10(_QWORD* a1)
{
	__int64 v2; // rdi
	char* v3; // rax
	_WORD* v4; // rbx
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	_WORD* v7; // [rsp+28h] [rbp-20h]

	v2 = sub_14017F690(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v6, v3);
	v4 = v7;
	sub_14017E490(v2, v7);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 0i64;
}

