//----- (0000000140685BE0) ----------------------------------------------------
__int64 __fastcall sub_140685BE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // r8
	unsigned int v5; // edx
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // eax
	int v11; // edx
	bool v12; // cf
	int v13; // eax
	_DWORD* v14; // rcx
	bool v15; // zf
	__int64 result; // rax
	_DWORD* v17; // rax
	__int64 v18; // [rsp+38h] [rbp+10h]

	if (!*(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_19;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_19;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_19;
	v4 = *(unsigned int**)(v3 + 8);
	if (!v4)
		goto LABEL_19;
	v5 = *v4;
	v6 = *(_QWORD*)(qword_140C65948 + 48);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v5)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v18 = v7, v5 < *(_DWORD*)(v7 + 32)))
		v18 = *(_QWORD*)(qword_140C65948 + 48);
	if (v18 != v6 && (v9 = *(_QWORD*)(v18 + 40)) != 0)
	{
		v10 = v4[6];
		v11 = 0;
		if (v10 == -1 || (v12 = *(_DWORD*)(v9 + 40) < v10, v13 = 1, v12))
			v13 = 0;
		v14 = (_DWORD*)a1[2];
		v15 = v13 == 0;
		result = 1i64;
		LOBYTE(v11) = !v15;
		v14[2] = 1;
		*v14 = v11;
		a1[2] += 16i64;
	}
	else
	{
	LABEL_19:
		v17 = (_DWORD*)a1[2];
		v17[2] = 1;
		*v17 = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

