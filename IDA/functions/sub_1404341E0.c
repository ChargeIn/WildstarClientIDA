//----- (00000001404341E0) ----------------------------------------------------
__int64 __fastcall sub_1404341E0(_QWORD* a1, _QWORD* a2)
{
	_QWORD* v5; // rsi
	int* v6; // rax
	int* v7; // rdx
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]

	if (a2)
	{
		v5 = (_QWORD*)sub_140059170(a1, 0x10ui64);
		v6 = sub_14018B280(48i64, 0);
		v7 = v6;
		if (v6)
		{
			*(_QWORD*)v6 = off_140B72590;
			*((_QWORD*)v6 + 1) = *a2;
			*((_QWORD*)v6 + 2) = a2[1];
			*((_QWORD*)v6 + 3) = a2[2];
			*((_QWORD*)v6 + 4) = a2[3];
			*((_QWORD*)v6 + 5) = a2[4];
		}
		else
		{
			v7 = 0i64;
		}
		v5[1] = v7;
		*v5 = 14672i64;
		v8 = a1[4];
		v9 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.CREDDExchangeOrder", 0x17ui64);
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
// 140B72590: using guessed type __int64 (__fastcall *off_140B72590[2])();

