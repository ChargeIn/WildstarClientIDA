//----- (00000001406AE160) ----------------------------------------------------
__int64 __fastcall sub_1406AE160(_QWORD* a1, unsigned int a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]

	v3 = sub_140059170(a1, 0x18ui64);
	*(_DWORD*)(v3 + 8) = a2;
	v4 = v3;
	v6 = sub_1404C9B90(v5, a2);
	if (v6)
		*(_QWORD*)(v4 + 16) = *(_QWORD*)(v6 + 88);
	else
		*(_QWORD*)(v4 + 16) = 0i64;
	v7 = a1[4];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Decor", 0xAui64);
	v9 = a1[2];
	v11 = v8;
	v12 = 4;
	sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v11, v9);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 1406AE189: variable 'v5' is possibly undefined

