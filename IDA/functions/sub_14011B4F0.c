#include "../winhttp.h"

//----- (000000014011B4F0) ----------------------------------------------------
__int64 __fastcall sub_14011B4F0(__int64 a1)
{
	__int64 v1; // rdi
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	int* v6; // rbx
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int* v9; // [rsp+28h] [rbp-20h]
	int* v10; // [rsp+30h] [rbp-18h]

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	sub_1400F2540(v1 + 384, &v8, 1);
	v6 = v9;
	if (v10 != v9)
		sub_1400EB5D0(v1, v9);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

