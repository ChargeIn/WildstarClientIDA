//----- (00000001404A7F50) ----------------------------------------------------
__int64 __fastcall sub_1404A7F50(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	unsigned int** v11; // rdi
	unsigned int v12; // esi
	__int64 v13; // rax
	_DWORD*** v14; // rdx
	_DWORD*** v15; // r9
	unsigned int i; // r8d
	unsigned int v17; // eax
	__int64 v18; // [rsp+30h] [rbp+8h]
	__int64 v19; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 1016);
	v5 = *(_QWORD*)(v2 + 8);
	v6 = v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v2 || (v18 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v18 = *(_QWORD*)(a1 + 1016);
	if (v18 != v2)
		return 1i64;
	v8 = *(_QWORD*)(a1 + 16);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < a2)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v19 = v9, a2 < *(_DWORD*)(v9 + 32)))
		v19 = v8;
	if (v19 == v8)
		return 0i64;
	v11 = *(unsigned int***)(*(_QWORD*)(v19 + 40) + 8i64);
	if (!v11)
		return 0i64;
	v12 = sub_1404A8310(a1, **v11, 1);
	if (v12)
	{
		v13 = sub_1404A88A0(a1, **v11);
		if (v13)
		{
			v14 = *(_DWORD****)(v13 + 8);
			v15 = *(_DWORD****)(v13 + 16);
			for (i = 0; v14 != v15; ++v14)
			{
				v17 = i++;
				if (v17 >= v12)
					break;
				if (***v14 == a2)
					return 1i64;
			}
		}
	}
	return 0i64;
}

