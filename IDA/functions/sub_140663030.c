//----- (0000000140663030) ----------------------------------------------------
__int64 __fastcall sub_140663030(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]

	if (!a2)
		return 0i64;
	*(_QWORD*)sub_140059170(a1, 8ui64) = a2;
	v4 = a1[4];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Quest", 0xAui64);
	v6 = a1[2];
	v7 = v5;
	v8 = 4;
	sub_14005E8E0((__int64)a1, v4 + 160, (int*)&v7, v6);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

