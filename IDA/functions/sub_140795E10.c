#include "../winhttp.h"

//----- (0000000140795E10) ----------------------------------------------------
__int64 __fastcall sub_140795E10(_QWORD* a1, const char* a2)
{
	_DWORD* v4; // rax
	_QWORD* v5; // rax
	__int64 v6; // rdi
	_QWORD* v7; // rsi
	unsigned __int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v11; // rcx
	int v13; // ecx
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]

	sub_140058780((__int64)a1, (unsigned __int64*)"%s%s", aLoadlib, a2);
	sub_14005E8E0((__int64)a1, a1[4] + 160i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
	v4 = (_DWORD*)(a1[2] - 16i64);
	if (v4 == dword_140A12138 || v4[2])
	{
		v13 = v4[2];
		if (v13 == 2)
		{
			return *(_QWORD*)v4;
		}
		else if (v13 == 7)
		{
			return *(_QWORD*)v4 + 48i64;
		}
		else
		{
			return 0i64;
		}
	}
	else
	{
		a1[2] = v4;
		v5 = (_QWORD*)sub_140059170(a1, 8ui64);
		*v5 = 0i64;
		v6 = a1[4];
		v7 = v5;
		v8 = -1i64;
		do
			++v8;
		while (aLoadlib_0[v8]);
		v9 = sub_140062650((__int64)a1, (unsigned __int64*)aLoadlib_0, v8);
		v10 = a1[2];
		v14 = v9;
		v15 = 4;
		sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v14, v10);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		sub_140058780((__int64)a1, (unsigned __int64*)"%s%s", aLoadlib_1, a2);
		v11 = a1[2];
		*(_QWORD*)v11 = *(_QWORD*)(v11 - 32);
		*(_DWORD*)(v11 + 8) = *(_DWORD*)(v11 - 24);
		a1[2] += 16i64;
		sub_14005EA50((__int64)a1, (__int64*)(a1[4] + 160i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		return (__int64)v7;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

