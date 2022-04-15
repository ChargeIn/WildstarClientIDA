//----- (000000014004C0B0) ----------------------------------------------------
__int64 __fastcall sub_14004C0B0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	unsigned int* v5; // rax
	__m128 v7; // [rsp+20h] [rbp-18h] BYREF
	unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
	{
		v3 = sub_140056AB0(a1, 1u);
		if (v3)
		{
			v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
			if (v4)
			{
				v7 = (__m128)xmmword_140C777D0;
				v5 = sub_140143880(&v8, a1, 2u, &v7);
				sub_14004F690(v4, v5);
				sub_1401429A0(qword_140C63678, v8);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 14004C0B0: using guessed type __m128 var_18;

