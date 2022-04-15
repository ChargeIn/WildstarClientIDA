//----- (0000000140172D40) ----------------------------------------------------
__int64 __fastcall sub_140172D40(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // eax
	__int64 v4; // rdi
	unsigned __int64 v5; // rbx
	unsigned int* v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // r8
	int v9; // edx
	__m128 v11; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	v11 = (__m128)xmmword_140C777D0;
	v4 = v3;
	sub_140143880(&v12, a1, 3u, &v11);
	v5 = v12;
	if ((int)v4 < 0
		|| (int)v4 >= *(_DWORD*)(v2 + 1400)
		|| (v6 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)(v2 + 1392) + 8 * v4) + 76i64), v6 == &v12))
	{
		v7 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v6);
		v7 = qword_140C63678;
		*v6 = v5;
		if (v5 < *(_QWORD*)(v7 + 48))
		{
			v8 = 32i64 * (unsigned int)v5 + *(_QWORD*)(v7 + 40);
			v9 = *(_DWORD*)(v8 + 16);
			if ((unsigned int)(v9 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v8 + 16) = v9 + 1;
		}
	}
	sub_1401429A0(v7, v5);
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140172D40: using guessed type __m128 var_18;

