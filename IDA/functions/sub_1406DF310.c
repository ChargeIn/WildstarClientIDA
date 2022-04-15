#include "../winhttp.h"

//----- (00000001406DF310) ----------------------------------------------------
__int64 __fastcall sub_1406DF310(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rbx
	_QWORD* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+30h] [rbp-18h]

	v2 = sub_1406DF190(a1);
	v3 = *(_QWORD*)(v2 + 1176);
	v4 = *(_QWORD*)(v2 + 1024);
	v12 = *(_QWORD*)(v3 + 16);
	v13 = *(_QWORD*)(v3 + 24);
	v5 = (_QWORD*)sub_140059170(a1, 0x18ui64);
	v6 = v12;
	*v5 = v4;
	v5[1] = v6;
	v5[2] = v13;
	v7 = a1[4];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v9 = a1[2];
	v11 = v8;
	LODWORD(v12) = 4;
	sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v11, v9);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

