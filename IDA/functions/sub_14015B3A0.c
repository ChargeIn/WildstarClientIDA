//----- (000000014015B3A0) ----------------------------------------------------
__int64 __fastcall sub_14015B3A0(_QWORD* a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]

	if (a2)
	{
		*(_QWORD*)sub_140059170(a1, 8ui64) = a2;
		(**a2)(a2);
		v5 = a1[4];
		v6 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo.Menu", 0xBui64);
		v7 = a1[2];
		v8 = v6;
		v9 = 4;
		sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v8, v7);
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

