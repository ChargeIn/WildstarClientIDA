#include "../winhttp.h"

//----- (0000000140731240) ----------------------------------------------------
__int64 __fastcall sub_140731240(_QWORD* a1)
{
	char* v1; // rax
	__int64 v3; // [rsp+20h] [rbp-48h] BYREF
	int* v4; // [rsp+28h] [rbp-40h]
	__int64 v5; // [rsp+40h] [rbp-28h] BYREF
	__int64 v6; // [rsp+48h] [rbp-20h]

	v1 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v3, v1);
	sub_14011B780(&v5, *(_QWORD*)(qword_140C65898 + 29504), v4);
	if (v6)
		sub_14018B900(v6, 0);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

