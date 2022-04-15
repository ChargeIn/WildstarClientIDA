//----- (0000000140271DD0) ----------------------------------------------------
__int64 __fastcall sub_140271DD0(__int64 a1, int a2, int a3, int a4)
{
	__int64 v4; // rsi
	__int64 v5; // rdi
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 result; // rax
	int v10; // r8d
	int v11; // r8d
	int v12; // r8d

	v4 = a4;
	v5 = a3;
	if (a2 == 1 && !a3 && !a4)
	{
		if (!*(_DWORD*)(a1 + 7856))
			return result;
		*(_DWORD*)(a1 + 7856) = 0;
		v7 = *(_QWORD*)(a1 + 6608);
		v8 = 27i64;
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v7 + 456i64))(v7, v8, 0i64);
	}
	result = a2;
	v10 = dword_140AE7CC8[a2];
	if (*(_DWORD*)(a1 + 7824) != v10)
	{
		*(_DWORD*)(a1 + 7824) = v10;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			19i64);
	}
	v11 = dword_140AE7CC8[v5];
	if (*(_DWORD*)(a1 + 7828) != v11)
	{
		*(_DWORD*)(a1 + 7828) = v11;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			20i64);
	}
	v12 = dword_140AE7CF0[v4];
	if (*(_DWORD*)(a1 + 8432) != v12)
	{
		*(_DWORD*)(a1 + 8432) = v12;
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			171i64);
	}
	if (*(_DWORD*)(a1 + 7856) != 1)
	{
		*(_DWORD*)(a1 + 7856) = 1;
		result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			27i64,
			1i64);
	}
	if (*(_DWORD*)(a1 + 8572))
	{
		*(_DWORD*)(a1 + 8572) = 0;
		v7 = *(_QWORD*)(a1 + 6608);
		v8 = 206i64;
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v7 + 456i64))(v7, v8, 0i64);
	}
	return result;
}
// 140AE7CC8: using guessed type int dword_140AE7CC8[10];
// 140AE7CF0: using guessed type int dword_140AE7CF0[6];

