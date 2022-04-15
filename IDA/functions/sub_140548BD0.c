//----- (0000000140548BD0) ----------------------------------------------------
__int64 __fastcall sub_140548BD0(__int64 a1, __int64 a2)
{
	unsigned int* v3; // rcx
	__int64 v5; // r9
	int* v6; // rdx
	__int64 v7; // rax
	unsigned int v8; // eax
	_QWORD* v9; // rcx
	__int64* v10; // rdi
	__int64 v11; // rdx
	__int64* v12; // rcx
	int* v13; // rax
	int* v14; // rsi
	__int64 v15; // r9
	__int64 v16; // r8
	int* v18; // [rsp+50h] [rbp+8h] BYREF

	v3 = *(unsigned int**)(a2 + 48);
	v5 = *(_QWORD*)(a1 + 584);
	v6 = (int*)v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < *v3)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = (int*)v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == (int*)v5 || (v8 = v6[8], v18 = v6, *v3 < v8))
		v18 = (int*)v5;
	if (v18 != (int*)v5)
		return 2147500037i64;
	if (*(_QWORD*)a2)
		**(_QWORD**)a2 = *(_QWORD*)(a2 + 8);
	v9 = *(_QWORD**)(a2 + 8);
	v10 = (__int64*)(a2 + 8);
	if (v9)
		*v9 = *(_QWORD*)a2;
	v11 = *(_QWORD*)(a2 + 48);
	*(_QWORD*)a2 = 0i64;
	*v10 = 0i64;
	if ((*(_DWORD*)(v11 + 68) & 0x40000) != 0)
	{
		v12 = (__int64*)(a1 + 624);
	}
	else if (*(_DWORD*)(v11 + 96))
	{
		if (!*(_QWORD*)sub_140055BE0(a1 + 728, (_DWORD*)(v11 + 96)))
		{
			v13 = sub_14018B280(8i64, 0);
			v14 = v13;
			if (v13)
				*(_QWORD*)v13 = 0i64;
			else
				v14 = 0i64;
			*(_QWORD*)sub_140055BE0(a1 + 728, (_DWORD*)(*(_QWORD*)(a2 + 48) + 96i64)) = v14;
		}
		v12 = *(__int64**)sub_140055BE0(a1 + 728, (_DWORD*)(*(_QWORD*)(a2 + 48) + 96i64));
		if (*(_QWORD*)a2)
			goto LABEL_27;
	}
	else
	{
		v12 = (__int64*)(a1 + 608);
	}
	*(_QWORD*)a2 = v12;
	*v10 = *v12;
	*v12 = a2;
	if (*v10)
		*(_QWORD*)*v10 = v10;
LABEL_27:
	sub_14054A2B0(a2, a1);
	sub_14054A370(a2);
	v15 = *(_QWORD*)(a1 + 584);
	v16 = *(_QWORD*)(v15 + 8);
	while (v16)
	{
		v15 = v16;
		if (**(_DWORD**)(a2 + 48) >= *(_DWORD*)(v16 + 32))
			v16 = *(_QWORD*)(v16 + 24);
		else
			v16 = *(_QWORD*)(v16 + 16);
	}
	sub_140029D00(a1 + 576, &v18, v16, v15, *(int**)(a2 + 48));
	return 0i64;
}

