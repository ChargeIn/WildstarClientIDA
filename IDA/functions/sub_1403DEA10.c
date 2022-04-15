//----- (00000001403DEA10) ----------------------------------------------------
__int64 __fastcall sub_1403DEA10(__int64 a1, __int64 a2)
{
	unsigned __int64 v5; // rdx
	__int64 v6; // rbp
	__int64 v7; // r8
	__int64 v8; // rcx
	_QWORD* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rdi
	unsigned __int64 v12; // rcx
	unsigned int v13; // esi
	unsigned __int64 v14; // rdx
	_DWORD* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // [rsp+48h] [rbp+10h] BYREF

	if (!a2)
		return 2147500037i64;
	v5 = *(_QWORD*)(a2 + 312);
	v6 = a1 + 28392;
	v7 = *(_QWORD*)(a1 + 28400);
	v8 = v7;
	v9 = *(_QWORD**)(v7 + 8);
	while (v9)
	{
		if (v9[4] < v5)
		{
			v9 = (_QWORD*)v9[3];
		}
		else
		{
			v8 = (__int64)v9;
			v9 = (_QWORD*)v9[2];
		}
	}
	if (v8 == v7 || (v17 = v8, v5 < *(_QWORD*)(v8 + 32)))
		v17 = v7;
	v10 = v17;
	if (v17 == *(_QWORD*)(a1 + 28400))
		return 2147500037i64;
	v11 = *(_QWORD*)(v17 + 40);
	if (!v11)
		return 2147500037i64;
	v12 = *(_QWORD*)(v11 + 24);
	v13 = 0;
	v14 = 0i64;
	if (v12)
	{
		v15 = *(_DWORD**)(v11 + 16);
		while (*v15 != *(_DWORD*)(a2 + 8))
		{
			++v14;
			++v15;
			if (v14 >= v12)
				goto LABEL_19;
		}
		sub_1401C2F20(v11 + 16, v14);
		*(_DWORD*)(v11 + 8) = sub_140625E00(v11);
	}
	else
	{
	LABEL_19:
		v13 = -2147467259;
	}
	if (!*(_QWORD*)(v11 + 24))
	{
		v17 = v10;
		sub_1403DF6E0(v6, &v17);
		v16 = *(_QWORD*)(v11 + 16);
		if (v16)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
		sub_14018B900(v11, 0);
	}
	return v13;
}

