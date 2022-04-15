//----- (0000000140049EA0) ----------------------------------------------------
__int64 __fastcall sub_140049EA0(__int64 a1, _QWORD* a2)
{
	__int64 result; // rax
	void(__fastcall * **v5)(_QWORD); // rcx
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	result = sub_140059170(a2, 8ui64);
	if (result)
	{
		*(_QWORD*)result = *(_QWORD*)(a1 + 8);
		v5 = *(void(__fastcall****)(_QWORD))(a1 + 8);
		if (v5)
			(**v5)(v5);
		v6 = a2[4];
		v7 = sub_140062650((__int64)a2, (unsigned __int64*)"Client.ScreenModelActor", 0x17ui64);
		v8 = a2[2];
		v9 = v7;
		v10 = 4;
		sub_14005E8E0((__int64)a2, v6 + 160, (int*)&v9, v8);
		a2[2] += 16i64;
		sub_140058BF0((__int64)a2, -2);
		return 1i64;
	}
	return result;
}

