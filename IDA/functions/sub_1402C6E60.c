//----- (00000001402C6E60) ----------------------------------------------------
__int64 __fastcall sub_1402C6E60(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	int v5; // eax
	bool v6; // zf
	__int64 v7; // r15
	int* v8; // rbp
	__int64 v9; // rdi
	__int64 v10; // r14

	result = sub_1402B2FE0(a2, 2, *(_QWORD*)a1, *(_QWORD*)(a1 + 8), 1i64, 1i64);
	if ((int)result < 0)
		return result;
	if (!*(_QWORD*)(a2 + 48))
		goto LABEL_17;
	v5 = *(_DWORD*)(a2 + 68);
	if (v5 < 2)
		goto LABEL_17;
	if (v5 <= 3)
	{
		v6 = *(_QWORD*)(a2 + 40) == 0i64;
		goto LABEL_8;
	}
	if (v5 != 4)
	{
	LABEL_17:
		sub_1402B34D0((_QWORD*)a2);
		return 2147500035i64;
	}
	v6 = *(_QWORD*)(a2 + 32) == 0i64;
LABEL_8:
	if (v6)
		goto LABEL_17;
	v7 = *(_QWORD*)(a2 + 72);
	if (!v7)
		goto LABEL_17;
	v8 = *(int**)(v7 + 40);
	if (!v8)
		goto LABEL_17;
	v9 = 0i64;
	v10 = *(_QWORD*)(a1 + 40);
	if (!*(_QWORD*)(a1 + 8))
		return 0i64;
	while (sub_1402C33B0(v8, *(_QWORD*)a1, v10, *(_QWORD*)(a1 + 24), *(_DWORD*)(a1 + 16)))
	{
		v10 += *(_QWORD*)(a1 + 24);
		v8 = (int*)((char*)v8 + *(_QWORD*)(v7 + 24));
		if ((unsigned __int64)++v9 >= *(_QWORD*)(a1 + 8))
			return 0i64;
	}
	sub_1402B34D0((_QWORD*)a2);
	return 2147500037i64;
}

