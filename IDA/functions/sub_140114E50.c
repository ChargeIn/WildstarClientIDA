//----- (0000000140114E50) ----------------------------------------------------
__int64 __fastcall sub_140114E50(_QWORD* a1)
{
	__int64 v2; // rdi
	unsigned __int64 v3; // rbx
	__int64 v4; // rcx
	unsigned int* v5; // rdi
	__int64 v6; // r8
	int v7; // edx
	__m128 v9; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140114A30(a1);
	if (v2)
	{
		v9 = (__m128)xmmword_140C777D0;
		sub_140143880(&v10, a1, 2u, &v9);
		v3 = v10;
		v4 = qword_140C63678;
		v5 = (unsigned int*)(v2 + 1260);
		if (v5 != &v10)
		{
			sub_1401429A0(qword_140C63678, *v5);
			v4 = qword_140C63678;
			*v5 = v3;
			if (v3 < *(_QWORD*)(v4 + 48))
			{
				v6 = 32i64 * (unsigned int)v3 + *(_QWORD*)(v4 + 40);
				v7 = *(_DWORD*)(v6 + 16);
				if ((unsigned int)(v7 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(v6 + 16) = v7 + 1;
			}
		}
		sub_1401429A0(v4, v3);
	}
	return 0i64;
}
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140114E50: using guessed type __m128 var_18;

