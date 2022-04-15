#include "../winhttp.h"

//----- (0000000140131B70) ----------------------------------------------------
__int64 __fastcall sub_140131B70(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	unsigned int* v5; // rdi
	unsigned __int64 v6; // rbx
	__int64 v7; // r8
	int v8; // edx
	__m128 v10; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140131630(a1, 1u);
	v10 = (__m128)xmmword_140C777D0;
	v3 = v2;
	sub_140143880(&v11, a1, 2u, &v10);
	v4 = qword_140C63678;
	v5 = (unsigned int*)(v3 + 1548);
	v6 = v11;
	if (v5 != &v11)
	{
		sub_1401429A0(qword_140C63678, *v5);
		v4 = qword_140C63678;
		*v5 = v6;
		if (v6 < *(_QWORD*)(v4 + 48))
		{
			v7 = 32i64 * (unsigned int)v6 + *(_QWORD*)(v4 + 40);
			v8 = *(_DWORD*)(v7 + 16);
			if ((unsigned int)(v8 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v7 + 16) = v8 + 1;
		}
	}
	sub_1401429A0(v4, v6);
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140131B70: using guessed type __m128 var_18;

