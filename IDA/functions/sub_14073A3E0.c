//----- (000000014073A3E0) ----------------------------------------------------
__int64 __fastcall sub_14073A3E0(_QWORD* a1, int a2, int a3)
{
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]

	if (a2 < 16)
	{
		v6 = sub_140059170(a1, 0x20ui64);
		*(_QWORD*)(v6 + 16) = 0i64;
		*(_QWORD*)(v6 + 24) = 0i64;
		*(_DWORD*)(v6 + 8) = 0;
		*(_DWORD*)v6 = a2;
		*(_DWORD*)(v6 + 4) = a3;
		v7 = a1[4];
		v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.MatchMakingEntry", 0x15ui64);
		v9 = a1[2];
		v11 = v8;
		v12 = 4;
		sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v11, v9);
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

