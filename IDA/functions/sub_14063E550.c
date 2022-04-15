#include "../winhttp.h"

//----- (000000014063E550) ----------------------------------------------------
void __fastcall sub_14063E550(__int64 a1)
{
	__int16* v1; // rax
	__int64 v2; // r8
	int* v3; // rbx
	__int64 v4; // [rsp+30h] [rbp-28h] BYREF
	int* v5; // [rsp+38h] [rbp-20h]

	v1 = sub_14034BDD0(a1, 444830);
	v2 = 0i64;
	if (qword_140C65898)
		v2 = *(unsigned __int8*)(qword_140C65898 + 28140) + 1;
	sub_14018EFA0(&v4, (__int64)v1, v2);
	v3 = v5;
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v5, 0, 0i64);
	if (v3)
		sub_14018B900((__int64)v3, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

