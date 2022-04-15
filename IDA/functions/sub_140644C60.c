//----- (0000000140644C60) ----------------------------------------------------
__int64 __fastcall sub_140644C60(__int64 a1, int* a2)
{
	unsigned int v5; // ecx
	__int64 v6; // rax
	__int64 v7; // rbx
	unsigned __int64 v8; // rdx
	unsigned __int64 v9; // rax
	_DWORD* v10; // rcx
	int v11; // eax
	__int64 v12; // rbx
	int v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14[4]; // [rsp+28h] [rbp-20h] BYREF

	if (!a2)
		return 0i64;
	v5 = a2[3];
	if (v5)
	{
		v6 = sub_1401E98E0(v5);
		v7 = sub_140644C60(a1, v6);
	}
	else
	{
		v7 = a1 + 136;
	}
	if (!v7)
		return 0i64;
	v8 = *(_QWORD*)(v7 + 16);
	v9 = 0i64;
	if (v8)
	{
		v10 = *(_DWORD**)(v7 + 8);
		while (*v10 != *a2)
		{
			++v9;
			v10 += 6;
			if (v9 >= v8)
				goto LABEL_11;
		}
		return *(_QWORD*)(v7 + 8) + 24 * v9;
	}
	else
	{
	LABEL_11:
		v11 = *a2;
		v14[1] = 0i64;
		v14[0] = 0i64;
		v13 = v11;
		v12 = *(_QWORD*)(v7 + 8) + 24 * sub_140645020((__int64*)(v7 + 8), (__int64)&v13);
		sub_140644FB0(v14);
		return v12;
	}
}

