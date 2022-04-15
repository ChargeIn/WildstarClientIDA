//----- (0000000140133420) ----------------------------------------------------
__int64 __fastcall sub_140133420(_QWORD* a1, __int64 a2)
{
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]

	if (!a2)
		return 0i64;
	*(_DWORD*)sub_140059170(a1, 4ui64) = *(_DWORD*)(a2 + 16);
	(**(void(__fastcall***)(__int64))a2)(a2);
	v5 = a1[4];
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo.ApolloTimer", 0x12ui64);
	v7 = a1[2];
	v8 = v6;
	v9 = 4;
	sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v8, v7);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

