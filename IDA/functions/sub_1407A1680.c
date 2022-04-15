//----- (00000001407A1680) ----------------------------------------------------
__int64 __fastcall sub_1407A1680(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r10
	__int64 v4; // r9
	__int64 v5; // rax
	int v6; // edx
	_DWORD* i; // rcx
	__int64 v9; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 1432);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v9 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v9 = *(_QWORD*)(a1 + 1432);
	if (v9 == v3)
		return 0i64;
	v6 = 0;
	for (i = (_DWORD*)(v9 + 44); *i != a3; ++i)
	{
		if ((unsigned int)++v6 >= 4)
			return 0i64;
	}
	return v9 + 40;
}

