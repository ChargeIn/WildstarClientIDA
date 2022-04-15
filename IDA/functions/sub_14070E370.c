#include "../winhttp.h"

//----- (000000014070E370) ----------------------------------------------------
__int64 __fastcall sub_14070E370(_QWORD* a1)
{
	char* v2; // rax
	char* v3; // rax
	__int64 v5; // [rsp+20h] [rbp-48h] BYREF
	__int64 v6; // [rsp+28h] [rbp-40h]
	__int64 v7; // [rsp+40h] [rbp-28h] BYREF
	__int64 v8; // [rsp+48h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v7, v2);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v5, v3);
	sub_1405DE2E0(qword_140C65898 + 26680, (__int64)&v7, (__int64)&v5);
	if (v6)
		sub_14018B900(v6, 0);
	if (v8)
		sub_14018B900(v8, 0);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

