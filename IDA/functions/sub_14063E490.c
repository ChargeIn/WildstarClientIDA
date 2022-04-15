#include "../winhttp.h"

//----- (000000014063E490) ----------------------------------------------------
void __fastcall sub_14063E490(__int64 a1)
{
	__int16* v1; // rax
	__int64 v2; // r8
	__int64 v3; // rcx
	int* v4; // rbx
	__int64 v5; // [rsp+30h] [rbp-28h] BYREF
	int* v6; // [rsp+38h] [rbp-20h]

	v1 = sub_14034BDD0(a1, 432654);
	v2 = 0i64;
	if (qword_140C65898)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 28048);
		if (v3)
			v2 = *(_QWORD*)(v3 + 48) + 1i64;
	}
	sub_14018EFA0(&v5, (__int64)v1, v2);
	v4 = v6;
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v6, 0, 0i64);
	if (v4)
		sub_14018B900((__int64)v4, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

