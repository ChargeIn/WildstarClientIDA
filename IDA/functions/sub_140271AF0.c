//----- (0000000140271AF0) ----------------------------------------------------
__int64 __fastcall sub_140271AF0(__int64 a1, int a2, int a3, int a4, int a5)
{
	__int64 v5; // rdi
	int v6; // r8d
	__int64 v7; // rsi
	int v9; // r8d
	int v10; // r8d
	__int64 result; // rax
	int v12; // r8d

	v5 = a3;
	v6 = dword_140AE7D08[a2];
	v7 = a4;
	if (*(_DWORD*)(a1 + 7960) != v6)
	{
		*(_DWORD*)(a1 + 7960) = v6;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 53i64);
	}
	v9 = dword_140AE7D08[v5];
	if (*(_DWORD*)(a1 + 7964) != v9)
	{
		*(_DWORD*)(a1 + 7964) = v9;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 54i64);
	}
	v10 = dword_140AE7D08[v7];
	if (*(_DWORD*)(a1 + 7968) != v10)
	{
		*(_DWORD*)(a1 + 7968) = v10;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 55i64);
	}
	result = a5;
	v12 = dword_140AE7CA8[a5];
	if (*(_DWORD*)(a1 + 7972) != v12)
	{
		*(_DWORD*)(a1 + 7972) = v12;
		return (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			56i64);
	}
	return result;
}
// 140AE7CA8: using guessed type int dword_140AE7CA8[8];
// 140AE7D08: using guessed type int dword_140AE7D08[8];

