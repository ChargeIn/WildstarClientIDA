//----- (000000014016BE80) ----------------------------------------------------
__int64 __fastcall sub_14016BE80(_QWORD* a1)
{
	unsigned int v2; // edx
	unsigned __int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned __int64 v7; // rbx
	__int64 v8; // rcx
	unsigned int* v9; // rdi
	__int64 v10; // r8
	int v11; // edx
	__m128 v13; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

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
	v5 = sub_1400D66A0(a1, 1u);
	v6 = v5;
	if (v5 && (*(_BYTE*)(v5 + 432) & 8) != 0)
	{
		v13 = (__m128)xmmword_140C777D0;
		sub_140143880(&v14, a1, 2u, &v13);
		v7 = v14;
		v8 = qword_140C63678;
		v9 = (unsigned int*)(v6 + 1444);
		if (v9 != &v14)
		{
			sub_1401429A0(qword_140C63678, *v9);
			v8 = qword_140C63678;
			*v9 = v7;
			if (v7 < *(_QWORD*)(v8 + 48))
			{
				v10 = 32i64 * (unsigned int)v7 + *(_QWORD*)(v8 + 40);
				v11 = *(_DWORD*)(v10 + 16);
				if ((unsigned int)(v11 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(v10 + 16) = v11 + 1;
			}
		}
		sub_1401429A0(v8, v7);
	}
	return 0i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 14016BE80: using guessed type __m128 var_18;

