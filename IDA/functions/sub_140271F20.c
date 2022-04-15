#include "../winhttp.h"

//----- (0000000140271F20) ----------------------------------------------------
__int64 __fastcall sub_140271F20(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
	__int64 v7; // rbp
	__int64 v8; // rsi
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 result; // rax
	int v13; // r8d
	int v14; // r8d
	int v15; // r8d
	int v16; // r8d
	int v17; // r8d
	int v18; // r8d
	int v19; // r8d
	int v20; // r8d
	int v21; // r8d

	v7 = a4;
	v8 = a3;
	if (a5 == a2 && a6 == a3 && a7 == a4)
	{
		if (a2 == 1 && !a3 && !a4)
		{
			if (!*(_DWORD*)(a1 + 7856))
				return result;
			*(_DWORD*)(a1 + 7856) = 0;
			v10 = *(_QWORD*)(a1 + 6608);
			v11 = 27i64;
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 456i64))(v10, v11);
		}
		result = a2;
		v13 = dword_140AE7CC8[a2];
		if (*(_DWORD*)(a1 + 7824) != v13)
		{
			*(_DWORD*)(a1 + 7824) = v13;
			result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
				*(_QWORD*)(a1 + 6608),
				19i64);
		}
		v14 = dword_140AE7CC8[v8];
		if (*(_DWORD*)(a1 + 7828) != v14)
		{
			*(_DWORD*)(a1 + 7828) = v14;
			result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
				*(_QWORD*)(a1 + 6608),
				20i64);
		}
		v15 = dword_140AE7CF0[v7];
		if (*(_DWORD*)(a1 + 8432) != v15)
		{
			*(_DWORD*)(a1 + 8432) = v15;
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
		LABEL_35:
			v10 = *(_QWORD*)(a1 + 6608);
			v11 = 206i64;
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v10 + 456i64))(v10, v11);
		}
	}
	else
	{
		v16 = dword_140AE7CC8[a2];
		if (*(_DWORD*)(a1 + 7824) != v16)
		{
			*(_DWORD*)(a1 + 7824) = v16;
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 19i64);
		}
		v17 = dword_140AE7CC8[v8];
		if (*(_DWORD*)(a1 + 7828) != v17)
		{
			*(_DWORD*)(a1 + 7828) = v17;
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 20i64);
		}
		v18 = dword_140AE7CF0[v7];
		if (*(_DWORD*)(a1 + 8432) != v18)
		{
			*(_DWORD*)(a1 + 8432) = v18;
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 171i64);
		}
		v19 = dword_140AE7CC8[a5];
		if (*(_DWORD*)(a1 + 8576) != v19)
		{
			*(_DWORD*)(a1 + 8576) = v19;
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 207i64);
		}
		v20 = dword_140AE7CC8[a6];
		if (*(_DWORD*)(a1 + 8580) != v20)
		{
			*(_DWORD*)(a1 + 8580) = v20;
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(*(_QWORD*)(a1 + 6608), 208i64);
		}
		result = a7;
		v21 = dword_140AE7CF0[a7];
		if (*(_DWORD*)(a1 + 8584) != v21)
		{
			*(_DWORD*)(a1 + 8584) = v21;
			result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
				*(_QWORD*)(a1 + 6608),
				209i64);
		}
		if (*(_DWORD*)(a1 + 7856) != 1)
		{
			*(_DWORD*)(a1 + 7856) = 1;
			result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6608) + 456i64))(
				*(_QWORD*)(a1 + 6608),
				27i64,
				1i64);
		}
		if (*(_DWORD*)(a1 + 8572) != 1)
		{
			*(_DWORD*)(a1 + 8572) = 1;
			goto LABEL_35;
		}
	}
	return result;
}
// 140AE7CC8: using guessed type int dword_140AE7CC8[10];
// 140AE7CF0: using guessed type int dword_140AE7CF0[6];

