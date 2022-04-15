#include "../winhttp.h"

//----- (000000014070E400) ----------------------------------------------------
__int64 __fastcall sub_14070E400(_QWORD* a1)
{
	char* v1; // rax
	__int64 v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]

	v1 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v3, v1);
	sub_1405DE2E0(qword_140C65898 + 26680, (__int64)&v3, 0i64);
	if (v4)
		sub_14018B900(v4, 0);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

