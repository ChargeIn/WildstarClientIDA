#include "../winhttp.h"

//----- (00000001404FE250) ----------------------------------------------------
__int64 __fastcall sub_1404FE250(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	_DWORD* v4; // rax
	unsigned int v5; // ebx
	_DWORD* v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rbx
	_QWORD* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]

	result = sub_1404F87C0(a1, 1u);
	if (result)
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v5 = 0;
		else
			v5 = sub_140056D60(a1, 2u);
		v6 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v7 = 0;
		else
			v7 = sub_140056D60(a1, 3u);
		v14 = 1i64;
		v15 = 0i64;
		v8 = sub_140500700(v3, v5, v7);
		v9 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v9 = v8;
		v9[1] = 1i64;
		v9[2] = v15;
		v10 = a1[4];
		v11 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v12 = a1[2];
		v13 = v11;
		LODWORD(v14) = 4;
		sub_14005E8E0((__int64)a1, v10 + 160, (int*)&v13, v12);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	return result;
}
// 1404FE2DA: variable 'v3' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

