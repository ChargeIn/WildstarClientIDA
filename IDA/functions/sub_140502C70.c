#include "../winhttp.h"

//----- (0000000140502C70) ----------------------------------------------------
__int64 __fastcall sub_140502C70(_QWORD* a1)
{
	__int64 result; // rax
	__int64* v3; // r14
	_DWORD* v4; // rax
	int v5; // ecx
	__int64 v6; // rdi
	__int64 v7; // rsi
	__int64 v8; // rbx
	_QWORD* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]

	result = sub_140056AB0(a1, 1u);
	v3 = (__int64*)result;
	if (result)
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v5 = 1;
		else
			v5 = sub_140056D60(a1, 2u);
		v6 = v3[1];
		v7 = v3[2];
		v13 = *v3;
		v8 = v13 * v5;
		v9 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v9 = v8;
		v9[1] = v6;
		v9[2] = v7;
		v10 = a1[4];
		v11 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v12 = a1[2];
		v13 = v11;
		v14 = 4;
		sub_14005E8E0((__int64)a1, v10 + 160, (int*)&v13, v12);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

