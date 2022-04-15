//----- (0000000140561D80) ----------------------------------------------------
__int64 __fastcall sub_140561D80(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	_DWORD* v7; // rax
	_DWORD* v8; // rcx
	__int64 v10; // [rsp+20h] [rbp+20h]

	if (!a3)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 1824);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a3)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v10 = v4, a3 < *(_DWORD*)(v4 + 32)))
		v10 = v3;
	if (v10 == v3)
		return 0i64;
	v6 = *(_QWORD*)(v10 + 40);
	if (!v6)
		return 0i64;
	v7 = *(_DWORD**)(v6 + 8);
	v8 = *(_DWORD**)(v6 + 16);
	if (v7 == v8)
		return 0i64;
	while (*v7 != a2)
	{
		if (++v7 == v8)
			return 0i64;
	}
	return 1i64;
}

