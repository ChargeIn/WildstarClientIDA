//----- (000000014011DF20) ----------------------------------------------------
__int64 __fastcall sub_14011DF20(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	_DWORD* v6; // rax
	unsigned int v7; // ecx

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = (_DWORD*)a1[3];
	if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && (int)v6[2] > 0)
	{
		v7 = sub_140056D60(a1, 1u) - 1;
		if (v7 <= 2)
			*(_DWORD*)(v1 + 108) = 1u >> v7;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

