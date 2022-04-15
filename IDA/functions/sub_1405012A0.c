#include "../winhttp.h"

//----- (00000001405012A0) ----------------------------------------------------
__int64 __fastcall sub_1405012A0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int128 v9; // [rsp+28h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		LODWORD(v9) = 1;
	else
		LODWORD(v9) = sub_140056D60(a1, 1u);
	*(_QWORD*)((char*)&v9 + 4) = 0i64;
	HIDWORD(v9) = 0;
	v3 = sub_140059170(a1, 0x18ui64);
	*(_QWORD*)v3 = 0i64;
	*(_OWORD*)(v3 + 8) = v9;
	v4 = a1[4];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v6 = a1[2];
	v8 = v5;
	LODWORD(v9) = 4;
	sub_14005E8E0((__int64)a1, v4 + 160, (int*)&v8, v6);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

