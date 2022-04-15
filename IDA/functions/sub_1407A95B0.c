//----- (00000001407A95B0) ----------------------------------------------------
__int64 __fastcall sub_1407A95B0(__int64 a1, int a2)
{
	unsigned __int64 v2; // r9
	int v3; // r8d
	__int64 v5; // r10
	__int64 v6; // rax
	_DWORD* v8; // rdx
	unsigned int v9; // ecx

	v2 = *(_QWORD*)(a1 + 144);
	v3 = 0;
	if (!v2)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 136);
	v6 = 0i64;
	while (**(_DWORD**)(v5 + 8 * v6) != a2)
	{
		v6 = (unsigned int)++v3;
		if ((unsigned int)v3 >= v2)
			return 0i64;
	}
	if (v3 < 0)
		return 0i64;
	v8 = *(_DWORD**)(v5 + 8i64 * v3);
	if (!v8[95])
		return (unsigned int)v8[97];
	v9 = *(_DWORD*)(a1 + 436348);
	if (v8[96] > v9)
		v9 = v8[96];
	return v8[97] + *(_DWORD*)(a1 + 436352) - v9;
}

