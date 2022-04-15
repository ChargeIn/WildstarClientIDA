//----- (00000001406F7D60) ----------------------------------------------------
__int64 __fastcall sub_1406F7D60(_QWORD* a1)
{
	__int64 v1; // rbx
	__int64 v4; // rbx
	_QWORD* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+30h] [rbp-18h]

	v1 = qword_140C65898;
	if ((unsigned int)sub_1403B5040(qword_140C65898))
	{
		v4 = *(_QWORD*)(v1 + 5744);
		v11 = 0i64;
		v10 = 1i64;
		v5 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v5 = v4;
		v5[1] = 1i64;
		v5[2] = v11;
		v6 = a1[4];
		v7 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v8 = a1[2];
		v9 = v7;
		LODWORD(v10) = 4;
		sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v9, v8);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

