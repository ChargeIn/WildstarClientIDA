#include "../winhttp.h"

//----- (0000000140172C90) ----------------------------------------------------
__int64 __fastcall sub_140172C90(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rsi
	char* v4; // rax
	__m128i* v5; // rbx
	__int64 v6; // rdx
	__int64 v8; // [rsp+30h] [rbp-28h] BYREF
	__m128i* v9; // [rsp+38h] [rbp-20h]

	v2 = sub_140171EB0(a1);
	v3 = (int)sub_140056D60(a1, 2u);
	v4 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v8, v4);
	v5 = v9;
	if ((int)v3 >= 0 && (int)v3 < *(_DWORD*)(v2 + 1400))
	{
		v6 = *(_QWORD*)(v2 + 32);
		if (v6)
			sub_140109710((__int64*)(*(_QWORD*)(*(_QWORD*)(v2 + 1392) + 8 * v3) + 24i64), v6 + 240, v9, 0);
	}
	if (v5)
		sub_14018B900((__int64)v5, 0);
	return 0i64;
}

