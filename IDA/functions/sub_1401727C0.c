#include "../winhttp.h"

//----- (00000001401727C0) ----------------------------------------------------
__int64 __fastcall sub_1401727C0(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 v3; // rbx
	signed int v4; // ebp
	char* v5; // rax
	__int64 v6; // rdi
	_QWORD* v7; // rcx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	void* v10; // [rsp+28h] [rbp-20h]

	v2 = sub_140171EB0(a1);
	v3 = (int)sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u) - 1;
	if (v4 < 0)
		v4 = 0;
	v5 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v9, v5);
	v6 = (__int64)v10;
	if ((int)v3 >= 0 && (int)v3 < (int)((__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3))
	{
		v7 = *(_QWORD**)(*(_QWORD*)(v2 + 1416) + 8 * v3);
		if (v7)
			sub_14016CC70(v7, v4, v10);
	}
	if (v6)
		sub_14018B900(v6, 0);
	return 0i64;
}

