//----- (00000001401726E0) ----------------------------------------------------
__int64 __fastcall sub_1401726E0(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // eax
	__int64 v4; // rbx
	__int64 v5; // rdi
	unsigned __int64 v6; // rbx
	__int64 v7; // rcx
	unsigned int* v8; // rdi
	__int64 v9; // r8
	int v10; // edx
	__m128 v12; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	v12 = (__m128)xmmword_140C777D0;
	v4 = v3;
	sub_140143880(&v13, a1, 3u, &v12);
	if ((int)v4 < 0 || (int)v4 >= (int)((__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3))
		v5 = 0i64;
	else
		v5 = *(_QWORD*)(*(_QWORD*)(v2 + 1416) + 8 * v4);
	v6 = v13;
	v7 = qword_140C63678;
	v8 = (unsigned int*)(v5 + 120);
	if (v8 != &v13)
	{
		sub_1401429A0(qword_140C63678, *v8);
		v7 = qword_140C63678;
		*v8 = v6;
		if (v6 < *(_QWORD*)(v7 + 48))
		{
			v9 = 32i64 * (unsigned int)v6 + *(_QWORD*)(v7 + 40);
			v10 = *(_DWORD*)(v9 + 16);
			if ((unsigned int)(v10 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v9 + 16) = v10 + 1;
		}
	}
	sub_1401429A0(v7, v6);
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 1401726E0: using guessed type __m128 var_18;

