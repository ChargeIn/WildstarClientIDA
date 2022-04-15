//----- (000000014004DEC0) ----------------------------------------------------
__int64 __fastcall sub_14004DEC0(void(__fastcall*** a1)(_QWORD), _QWORD* a2)
{
	__int64 result; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]

	result = sub_140059170(a2, 8ui64);
	if (result)
	{
		*(_QWORD*)result = a1;
		if (a1)
			(**a1)(a1);
		v5 = a2[4];
		v6 = sub_140062650((__int64)a2, (unsigned __int64*)"Client.ScreenModelManager", 0x19ui64);
		v7 = a2[2];
		v8 = v6;
		v9 = 4;
		sub_14005E8E0((__int64)a2, v5 + 160, (int*)&v8, v7);
		a2[2] += 16i64;
		sub_140058BF0((__int64)a2, -2);
		return 1i64;
	}
	return result;
}

