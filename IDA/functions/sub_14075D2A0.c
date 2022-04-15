#include "../winhttp.h"

//----- (000000014075D2A0) ----------------------------------------------------
__int64 __fastcall sub_14075D2A0(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rax
	int v4; // eax
	__int64 v5; // rbx
	_QWORD* v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]

	v14 = 1i64;
	v13 = 0i64;
	v15 = 0i64;
	v2 = sub_140056D60(a1, 1u);
	if (v2 == 1)
	{
		v3 = sub_140200220(0x2FCu);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 1000000;
		v5 = v4;
		LODWORD(v14) = 1;
		v6 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v6 = v5;
		v6[1] = v14;
		v6[2] = v15;
		v7 = a1[4];
		v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v9 = a1[2];
		v13 = v8;
		LODWORD(v14) = 4;
		sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v13, v9);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	else if (v2 == 7)
	{
		v11 = sub_140200220(0x487u);
		if (v11)
			v12 = *(_DWORD*)(v11 + 4);
		else
			v12 = 1000000;
		v13 = v12;
		LODWORD(v14) = 1;
		sub_140501210(a1, &v13);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

