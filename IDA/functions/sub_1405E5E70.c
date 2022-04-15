//----- (00000001405E5E70) ----------------------------------------------------
__int64 __fastcall sub_1405E5E70(__int64* a1, unsigned int a2)
{
	__int64 v4; // rax
	unsigned __int64 v5; // rdx
	int v6; // r10d
	unsigned int v7; // r8d
	unsigned int v8; // ecx
	__int64 v9; // r9
	__int64 v10; // rax
	__int64 v12; // rax
	unsigned __int64 v13; // rdx
	__int64 v14; // rcx
	_DWORD* i; // rax

	v4 = sub_140245C00(a2);
	if (!v4)
		return 0i64;
	v5 = a1[1];
	v6 = *(_DWORD*)(v4 + 8);
	v7 = 0;
	v8 = 0;
	if (!v5)
		return 0i64;
	v9 = *a1;
	v10 = 0i64;
	while (*(_DWORD*)(*(_QWORD*)(v9 + 8 * v10) + 8i64) != v6)
	{
		v10 = ++v8;
		if (v8 >= v5)
			return 0i64;
	}
	v12 = *(_QWORD*)(v9 + 8i64 * v8);
	if (!v12)
		return 0i64;
	v13 = *(_QWORD*)(v12 + 72);
	v14 = 0i64;
	if (v13)
	{
		for (i = *(_DWORD**)(v12 + 64); *i != a2; ++i)
		{
			if (++v14 >= v13)
				return 0i64;
		}
		return 1;
	}
	return v7;
}

