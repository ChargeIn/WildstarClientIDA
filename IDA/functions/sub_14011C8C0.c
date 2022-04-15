#include "../winhttp.h"

//----- (000000014011C8C0) ----------------------------------------------------
__int64 __fastcall sub_14011C8C0(_QWORD* a1)
{
	char* v2; // rax
	unsigned int v3; // ebx
	unsigned __int64 v4; // r8
	unsigned int v5; // edx
	__int64 v6; // rcx
	__int64 v7; // rax
	_QWORD* v8; // rcx
	__int64 v9; // rax
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v12; // [rsp+28h] [rbp-20h]

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v11, v2);
	v3 = 0;
	v4 = *(_QWORD*)(qword_140C63650 + 768);
	v5 = 0;
	if (v4)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
		{
			v7 = ++v5;
			if (v5 >= v4)
				goto LABEL_5;
		}
		v8 = *(_QWORD**)(v6 + 8i64 * v5);
	}
	else
	{
	LABEL_5:
		v8 = 0i64;
	}
	v9 = sub_1400E9080(v8, v12);
	if (v9)
		v3 = sub_1400D62A0(a1, v9);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	return v3;
}
// 140C63650: using guessed type __int64 qword_140C63650;

