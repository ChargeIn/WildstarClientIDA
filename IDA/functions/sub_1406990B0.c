#include "../winhttp.h"

//----- (00000001406990B0) ----------------------------------------------------
__int64 __fastcall sub_1406990B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rbp
	_DWORD* v6; // rax
	__int64** v7; // rax
	__int64** v8; // r14
	_DWORD* v9; // rax
	__int64 v10; // rdi
	int v11; // esi
	int v12; // eax
	unsigned __int64 v13; // r8
	char* v14; // rdx

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v4 = *(_QWORD*)(v2 + 8)) == 0 || (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && !*(_DWORD*)(a1[3] + 24i64)
		|| (v7 = (__int64**)sub_140056AB0(a1, 2u), (v8 = v7) == 0i64)
		|| !*v7
		|| !**v7)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v9 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
	{
		v10 = 0i64;
		v11 = 0;
	}
	else
	{
		v10 = 0i64;
		v11 = sub_140056D60(a1, 3u);
		if (v11 < 0)
			v11 = 0;
	}
	v12 = *(_DWORD*)(v5 + 16);
	if (v12 == 1)
	{
		v13 = 15i64;
		v14 = "DDGuildBankItem";
	}
	else
	{
		if (v12 != 3)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		v13 = 18i64;
		v14 = "DDWarPartyBankItem";
	}
	sub_140058710((__int64)a1, (unsigned __int64*)v14, v13);
	if (*v8)
		v10 = **v8;
	sub_14057F6A0(v5, v10, v11);
	return 1i64;
}
// 1406990ED: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

