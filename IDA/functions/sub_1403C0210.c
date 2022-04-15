//----- (00000001403C0210) ----------------------------------------------------
__int64 __fastcall sub_1403C0210(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	unsigned int v3; // ebx
	__int64 v5; // rcx
	__int64 v7; // rax
	__int64 v8; // r11
	int v9; // r9d
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	int* v13; // rcx
	int v14; // r8d
	__int64 v15; // rax
	__int64 result; // rax
	__int64 v17; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 25744);
	v3 = a2;
	if (!a2)
		return 0i64;
	if (!v2)
	{
	LABEL_11:
		v7 = sub_1407A0FD0(qword_140C65B70, a2);
		if (v7)
			goto LABEL_12;
		return 0i64;
	}
	v5 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120) == v2 || *(_QWORD*)(qword_140C65898 + 25744) == v2)
		v5 = qword_140C65898;
	if (!v5 || (v7 = sub_1405A5B90(v5, a2)) == 0)
	{
		a2 = v3;
		goto LABEL_11;
	}
LABEL_12:
	v8 = *(_QWORD*)(v7 + 112);
	v9 = *(_DWORD*)(v8 + 24);
	if (((v9 - 2) & 0xFFFFFFFB) == 0)
		return *(unsigned int*)(v8 + 388);
	v10 = *(_QWORD*)(a1 + 5512);
	v11 = v10;
	v12 = *(_QWORD*)(v10 + 8);
	while (v12)
	{
		if (*(_DWORD*)(v12 + 32) < v3)
		{
			v12 = *(_QWORD*)(v12 + 24);
		}
		else
		{
			v11 = v12;
			v12 = *(_QWORD*)(v12 + 16);
		}
	}
	if (v11 == v10 || (v17 = v11, v3 < *(_DWORD*)(v11 + 32)))
		v17 = *(_QWORD*)(a1 + 5512);
	if (v17 == v10)
		return 0i64;
	v13 = *(int**)(v17 + 40);
	v14 = *v13;
	if (v13[1])
		--v14;
	if (v14 == -1)
		return *(unsigned int*)(v8 + 388);
	if (v9 == 7)
		++v14;
	v15 = sub_140564F40(qword_140C65B70, v3, v14);
	if (!v15)
		return *(unsigned int*)(v8 + 388);
	result = *(unsigned int*)(v15 + 16);
	if (!(_DWORD)result)
		return *(unsigned int*)(v8 + 388);
	return result;
}
// 1403C0321: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

