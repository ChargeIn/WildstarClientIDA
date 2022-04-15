//----- (0000000140051B70) ----------------------------------------------------
__int64 __fastcall sub_140051B70(unsigned int a1, unsigned int a2)
{
	__int64 v2; // rdi
	int v5; // eax
	int v6; // r8d
	int v7; // r9d
	int v8; // eax
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdx
	int* v12; // rsi
	__int64 v13; // rcx
	unsigned __int64 v15; // [rsp+40h] [rbp+18h]

	v2 = qword_140C63628;
	if (!*(_QWORD*)(qword_140C63628 + 8i64 * (int)a1 + 720) || !a2)
		return 2147500037i64;
	v5 = sub_14018CDF0();
	v6 = *(_DWORD*)(v2 + 1472);
	v7 = v5;
	if (!v6 || v5 - v6 < 0)
	{
		if (!*(_QWORD*)(v2 + 1464) || !v6)
		{
			v8 = dword_140C3B830;
			if (*(_DWORD*)qword_140C63750 < dword_140C3B830)
				v8 = *(_DWORD*)qword_140C63750;
			*(_DWORD*)(v2 + 1472) = v7 + dword_140C3B840[v8];
		}
		if (!*(_DWORD*)(v2 + 1472))
			*(_DWORD*)(v2 + 1472) = 1;
		v15 = __PAIR64__(a1, a2);
		v9 = *(_QWORD*)(v2 + 1464);
		v10 = sub_14018DB00(*(_QWORD*)(v2 + 1456), v9 + 1, 8i64);
		*(_QWORD*)&v10[2 * v9] = v15;
		v11 = *(int**)(v2 + 1456);
		v12 = v10;
		if (v11 != v10)
		{
			sub_1407DB590(v10, v11, 8i64 * *(_QWORD*)(v2 + 1464));
			v13 = *(_QWORD*)(v2 + 1456);
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
			*(_QWORD*)(v2 + 1456) = v12;
		}
		*(_QWORD*)(v2 + 1464) = v9 + 1;
	}
	return 0i64;
}
// 140C3B830: using guessed type int dword_140C3B830;
// 140C3B840: using guessed type _DWORD dword_140C3B840[16];
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;

