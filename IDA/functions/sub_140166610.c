#include "../winhttp.h"

//----- (0000000140166610) ----------------------------------------------------
__int64 __fastcall sub_140166610(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // ebp
	int v4; // eax
	int v5; // edi
	int v6; // ebp
	unsigned __int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rdi
	unsigned int* v10; // rdi
	__int64 v11; // rcx
	__int64 v12; // r8
	int v13; // edx
	__m128 v15; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u);
	v15 = (__m128)xmmword_140C777D0;
	v5 = v4 - 1;
	sub_140143880(&v16, a1, 4u, &v15);
	v6 = v3 - 1;
	v7 = v16;
	if (v6 < 0
		|| v6 >= *(_DWORD*)(v2 + 1160)
		|| v5 < 0
		|| v5 >= *(_DWORD*)(v2 + 1144)
		|| ((v8 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v6), v5 >= *(_DWORD*)(v8 + 24))
			? (v9 = 0i64)
			: (v9 = *(_QWORD*)(*(_QWORD*)(v8 + 16) + 8i64 * v5)),
			v10 = (unsigned int*)(v9 + 164),
			v10 == &v16))
	{
		v11 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v10);
		v11 = qword_140C63678;
		*v10 = v7;
		if (v7 < *(_QWORD*)(v11 + 48))
		{
			v12 = 32 * v7 + *(_QWORD*)(v11 + 40);
			v13 = *(_DWORD*)(v12 + 16);
			if ((unsigned int)(v13 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v12 + 16) = v13 + 1;
		}
	}
	sub_1401429A0(v11, v7);
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140166610: using guessed type __m128 var_18;

