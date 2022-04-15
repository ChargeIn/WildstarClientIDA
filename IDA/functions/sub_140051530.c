#include "../winhttp.h"

//----- (0000000140051530) ----------------------------------------------------
__int64 __fastcall sub_140051530(__int64 a1, __int64 a2, int a3)
{
	int* v6; // rax
	__int64 v7; // r8
	__int64* v8; // rbx
	int v9; // edi
	__int64 v10; // rbx

	if (qword_140C63628)
		return 2147500037i64;
	v6 = sub_14018B280(1536i64, 0);
	if (v6)
	{
		v8 = (__int64*)sub_14004F700((__int64)v6);
		qword_140C63628 = (__int64)v8;
	}
	else
	{
		v8 = 0i64;
		qword_140C63628 = 0i64;
	}
	v9 = sub_14004F950((__int64)v8, a1, v7, a3);
	if (v9 < 0)
	{
		v10 = qword_140C63628;
		if (qword_140C63628)
		{
			sub_14004F810((_QWORD*)qword_140C63628);
			sub_14018B900(v10, 0);
		}
		qword_140C63628 = 0i64;
		return (unsigned int)v9;
	}
	else
	{
		sub_14004FA30((__int64)v8);
		sub_1400BBE10((__int64)(v8 + 2));
		sub_14004FE00(v8);
		sub_140050D30((__int64)v8);
		sub_140051E80((__int64)v8);
		return (unsigned int)v9;
	}
}
// 140051596: variable 'v7' is possibly undefined
// 140C63628: using guessed type __int64 qword_140C63628;

