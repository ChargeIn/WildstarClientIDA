//----- (000000014074B9C0) ----------------------------------------------------
__int64 __fastcall sub_14074B9C0(_QWORD* a1)
{
	__int64 v1; // rbx
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int128 v10; // [rsp+28h] [rbp-20h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C65898 + 26392);
	v10 = 1ui64;
	if (v3)
	{
		if (*(_DWORD*)v3 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64))
			v1 = *(_QWORD*)(v3 + 40);
		else
			v1 = *(_QWORD*)(v3 + 48);
	}
	v4 = sub_140059170(a1, 0x18ui64);
	*(_QWORD*)v4 = v1;
	*(_OWORD*)(v4 + 8) = v10;
	v5 = a1[4];
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
	v7 = a1[2];
	v9 = v6;
	LODWORD(v10) = 4;
	sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v9, v7);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

