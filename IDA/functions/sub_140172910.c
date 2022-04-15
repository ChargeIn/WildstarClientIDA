#include "../winhttp.h"

//----- (0000000140172910) ----------------------------------------------------
__int64 __fastcall sub_140172910(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 v3; // rbx
	char* v4; // rax
	_QWORD* v5; // rcx
	__m128i* v6; // rbx
	__int64 v8; // [rsp+30h] [rbp-28h] BYREF
	__m128i* v9; // [rsp+38h] [rbp-20h]

	v2 = sub_140171EB0(a1);
	v3 = (int)sub_140056D60(a1, 2u);
	v4 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v8, v4);
	if ((int)v3 < 0 || (int)v3 >= (int)((__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3))
		v5 = 0i64;
	else
		v5 = *(_QWORD**)(*(_QWORD*)(v2 + 1416) + 8 * v3);
	v6 = v9;
	if (*v5)
		sub_140109710(v5 + 4, *v5 + 240i64, v9, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 0i64;
}

