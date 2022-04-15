//----- (000000014072C8C0) ----------------------------------------------------
__int64 __fastcall sub_14072C8C0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int* v6; // rax
	__int64 v7; // rcx
	int v9; // [rsp+38h] [rbp+10h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
	{
	LABEL_9:
		v3 = qword_140C65898;
		goto LABEL_10;
	}
	v3 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v4 = sub_140056AB0(a1, 1u);
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 8);
			if (v5)
			{
				v6 = (unsigned int*)sub_1401F1860(*(_DWORD*)(v5 + 8));
				if (v6)
				{
					sub_1403CA2F0(v7, *v6);
					return 0i64;
				}
			}
		}
		goto LABEL_9;
	}
LABEL_10:
	v9 = 0;
	sub_1403F4900(v3, 0x78Eu, (__int64)&v9);
	return 0i64;
}
// 14072C922: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

