//----- (00000001407402B0) ----------------------------------------------------
__int64 __fastcall sub_1407402B0(_QWORD* a1, unsigned int a2, int a3, __int64 a4)
{
	__int64 v4; // rbx
	_DWORD* v6; // rax
	_QWORD* v7; // rsi
	int* v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v13; // [rsp+20h] [rbp-118h] BYREF
	int v14; // [rsp+28h] [rbp-110h]
	__int64(__fastcall * *v15)(); // [rsp+30h] [rbp-108h] BYREF
	unsigned int v16; // [rsp+38h] [rbp-100h]
	int v17; // [rsp+3Ch] [rbp-FCh]
	__int64 v18; // [rsp+40h] [rbp-F8h]

	v4 = 0i64;
	v6 = 0i64;
	if (a3)
	{
		if (a3 == 1 && a2 < 5)
		{
			v6 = (_DWORD*)(qword_140C65898 + 72i64 * a2 + 2264);
		LABEL_7:
			if (v6)
				goto LABEL_10;
		}
	}
	else if (a2 <= 0xB)
	{
		v6 = (_DWORD*)(qword_140C65898 + 72i64 * (int)a2 + 1400);
		goto LABEL_7;
	}
	if (a2 != -1)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
LABEL_10:
	v16 = a2;
	v15 = off_140B74CE8;
	v17 = a3;
	v18 = a4;
	sub_14073F5C0((__int64)&v15, v6);
	v7 = (_QWORD*)sub_140059170(a1, 0x10ui64);
	v8 = sub_14018B280(232i64, 0);
	if (v8)
		v4 = sub_140741170((__int64)v8, (__int64)&v15);
	*v7 = 14672i64;
	v7[1] = v4;
	v9 = a1[4];
	v10 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Costume", 0xCui64);
	v11 = a1[2];
	v13 = v10;
	v14 = 4;
	sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v13, v11);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140B74CE8: using guessed type __int64 (__fastcall *off_140B74CE8[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

