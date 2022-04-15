#include "../winhttp.h"

//----- (000000014015B900) ----------------------------------------------------
__int64 __fastcall sub_14015B900(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned __int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rdi
	char* v6; // rax
	char* v7; // rax
	__int64 v8; // rax
	__m128i* v9; // rbx
	__int64 v10; // rdx
	__int64 v12; // [rsp+30h] [rbp-48h] BYREF
	int* v13; // [rsp+38h] [rbp-40h]
	__int64 v14; // [rsp+50h] [rbp-28h] BYREF
	__m128i* v15; // [rsp+58h] [rbp-20h]

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	v5 = sub_14015B0A0((__int64)a1, 1);
	if (v5)
	{
		v6 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v12, v6);
		v7 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v14, v7);
		v8 = sub_14015AD50(v5, v13);
		v9 = v15;
		if (v8)
		{
			v10 = *(_QWORD*)(v5 + 16);
			if (v10)
				sub_140109710((__int64*)(v8 + 48), v10 + 240, v15, 0);
		}
		if (v9)
			sub_14018B900((__int64)v9, 0);
		if (v13)
			sub_14018B900((__int64)v13, 0);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

