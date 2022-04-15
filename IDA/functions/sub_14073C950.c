//----- (000000014073C950) ----------------------------------------------------
__int64 __fastcall sub_14073C950(_QWORD* a1, _QWORD* a2)
{
	__int64 v4; // rbx
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	v4 = sub_140059170(a1, 0x418ui64);
	sub_1407E4830((int*)(v4 + 8), 0i64, 0x410ui64);
	*(_QWORD*)v4 = *a2;
	v5 = a1[4];
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.CustomerSurvey", 0x13ui64);
	v7 = a1[2];
	v9 = v6;
	v10 = 4;
	sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v9, v7);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

