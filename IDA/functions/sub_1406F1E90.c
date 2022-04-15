#include "../winhttp.h"

//----- (00000001406F1E90) ----------------------------------------------------
__int64 __fastcall sub_1406F1E90(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbx
	_QWORD* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+30h] [rbp-18h]

	if (*(_DWORD*)(qword_140C635F0 + 5896)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| v3 == -8)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v4 = *(_QWORD*)(v3 + 16);
		v11 = 1i64;
		v12 = 0i64;
		v5 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v5 = v4;
		v5[1] = v11;
		v5[2] = v12;
		v6 = a1[4];
		v7 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v8 = a1[2];
		v10 = v7;
		LODWORD(v11) = 4;
		sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v10, v8);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

