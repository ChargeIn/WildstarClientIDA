//----- (00000001404A1950) ----------------------------------------------------
__int64 __fastcall sub_1404A1950(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v3; // r9
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	_QWORD** v8; // rbx
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rax
	unsigned int v12; // r8d
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // [rsp+30h] [rbp+8h]
	__int64 v16; // [rsp+30h] [rbp+8h]

	v2 = qword_140C65970;
	v3 = *(_QWORD*)(qword_140C65970 + 88);
	if (!v3)
		return 0i64;
	v5 = *(_QWORD*)(v3 + 16);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v15 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v15 = *(_QWORD*)(v3 + 16);
	if (v15 == v5)
		return 0i64;
	v8 = *(_QWORD***)(v15 + 40);
	if (!v8)
		return 0i64;
	if (*(_DWORD*)(qword_140C65970 + 8))
		return ((__int64(__fastcall*)(_QWORD**))(*v8)[5])(v8);
	if (!((unsigned int(__fastcall*)(_QWORD**))(*v8)[5])(v8))
		return 0i64;
	v9 = *v8[6];
	v10 = *(_DWORD*)(v9 + 12);
	if (v10)
	{
		if ((unsigned int)(v10 - 4) <= 3)
			return ((__int64(__fastcall*)(_QWORD**))(*v8)[11])(v8) & 1;
		return ((__int64(__fastcall*)(_QWORD**))(*v8)[5])(v8);
	}
	v11 = *(_QWORD*)(v2 + 104);
	v12 = *(_DWORD*)(v9 + 20);
	v13 = *(_QWORD*)(v11 + 8);
	v14 = v11;
	while (v13)
	{
		if (*(_DWORD*)(v13 + 32) < v12)
		{
			v13 = *(_QWORD*)(v13 + 24);
		}
		else
		{
			v14 = v13;
			v13 = *(_QWORD*)(v13 + 16);
		}
	}
	if (v14 == v11 || (v16 = v14, v12 < *(_DWORD*)(v14 + 32)))
		v16 = *(_QWORD*)(v2 + 104);
	return v16 != v11;
}
// 140C65970: using guessed type __int64 qword_140C65970;

