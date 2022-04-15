//----- (0000000140444130) ----------------------------------------------------
__int64 __fastcall sub_140444130(__int64 a1, _DWORD* a2)
{
	unsigned int v2; // r9d
	__int64 v4; // r10
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // rdx
	__int64 v9; // rax
	unsigned __int64 v10; // r9
	__int64 v11; // rcx
	unsigned int v12; // r8d
	__int64 i; // rax
	__int64 v15; // [rsp+10h] [rbp+10h]
	__int64 v16; // [rsp+10h] [rbp+10h]

	v2 = a2[11];
	if (!v2 || (a2[31] & 0x4000) != 0)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 32);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v15 = v5, v2 < *(_DWORD*)(v5 + 32)))
		v15 = *(_QWORD*)(a1 + 32);
	if (v15 == v4)
		return 0i64;
	v7 = *(_QWORD*)(v15 + 48);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a2[9])
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v16 = v8, a2[9] < *(_DWORD*)(v8 + 32)))
		v16 = v7;
	if (v16 == v7)
		return 0i64;
	v10 = *(_QWORD*)(v16 + 48);
	v11 = 0i64;
	if (!v10)
		return 0i64;
	v12 = a2[15];
	for (i = *(_QWORD*)(v16 + 40);
		*(_DWORD*)(*(_QWORD*)i + 12i64) > v12 || v12 > *(_DWORD*)(*(_QWORD*)i + 16i64);
		i += 8i64)
	{
		if (++v11 >= v10)
			return 0i64;
	}
	return *(_QWORD*)(*(_QWORD*)(v16 + 40) + 8 * v11);
}

