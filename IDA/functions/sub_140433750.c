//----- (0000000140433750) ----------------------------------------------------
__int64 __fastcall sub_140433750(_QWORD* a1, __int64 a2)
{
	_QWORD* v5; // rsi
	int* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]

	if (a2)
	{
		v5 = (_QWORD*)sub_140059170(a1, 0x10ui64);
		v6 = sub_14018B280(144i64, 0);
		if (v6)
			v7 = sub_1406A0620((__int64)v6, a2);
		else
			v7 = 0i64;
		v5[1] = v7;
		*v5 = 14672i64;
		v8 = a1[4];
		v9 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.ItemAuction", 0x10ui64);
		v10 = a1[2];
		v11 = v9;
		v12 = 4;
		sub_14005E8E0((__int64)a1, v8 + 160, (int*)&v11, v10);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

