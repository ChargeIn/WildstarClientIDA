#include "../winhttp.h"

//----- (0000000140732D70) ----------------------------------------------------
__int64 __fastcall sub_140732D70(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // rdi
	int v8; // eax
	__int64 v9; // rcx
	int* v10; // rax
	int v12; // [rsp+38h] [rbp+10h] BYREF

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = (int)sub_1400F26A0(v1 + 384, 1);
	v8 = sub_1400F26A0(v1 + 384, 2);
	v10 = sub_1404B7EC0(v9, &v12, v7 | ((__int64)v8 << 32), (__m128*) & ymmword_140C78390);
	return sub_1406AE160(a1, *v10);
}
// 140732DFF: variable 'v9' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C78390: using guessed type __m256 ymmword_140C78390;

