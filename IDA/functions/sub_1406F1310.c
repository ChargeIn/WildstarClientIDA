//----- (00000001406F1310) ----------------------------------------------------
__int64 __fastcall sub_1406F1310(_QWORD* a1)
{
	int v2; // eax
	__int64 v4; // rax
	__int64 v5; // rbx
	_QWORD* v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+30h] [rbp-18h]

	if ((dword_140DC4C00 & 1) != 0)
	{
		v2 = dword_140DC4C0C;
	}
	else
	{
		dword_140DC4C00 |= 1u;
		v2 = 0;
		dword_140DC4C0C = 0;
	}
	if (!qword_140C65970)
		return 0i64;
	if (v2)
	{
		LODWORD(v4) = dword_140DC4C08;
	}
	else
	{
		dword_140DC4C0C = 1;
		v4 = sub_140200220(0x93Du);
		if (v4)
		{
			LODWORD(v4) = *(_DWORD*)(v4 + 4);
			dword_140DC4C08 = v4;
		}
		else
		{
			dword_140DC4C08 = 0;
		}
	}
	v5 = (int)v4;
	v11 = 15i64;
	v12 = 0x900000000i64;
	v6 = (_QWORD*)sub_140059170(a1, 0x18ui64);
	*v6 = v5;
	v6[1] = v11;
	v6[2] = v12;
	v7 = a1[4];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v9 = a1[2];
	v10 = v8;
	LODWORD(v11) = 4;
	sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v10, v9);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140C65970: using guessed type __int64 qword_140C65970;
// 140DC4C00: using guessed type int dword_140DC4C00;
// 140DC4C08: using guessed type int dword_140DC4C08;
// 140DC4C0C: using guessed type int dword_140DC4C0C;

