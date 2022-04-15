//----- (0000000140146D40) ----------------------------------------------------
__int64 __fastcall sub_140146D40(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // r9
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	int v7; // [rsp+28h] [rbp-20h]

	*(_OWORD*)sub_140059170(a1, 0x10ui64) = 0i64;
	v2 = a1[4];
	v3 = sub_140062650((__int64)a1, (unsigned __int64*)"Vector2", 7ui64);
	v4 = a1[2];
	v6 = v3;
	v7 = 4;
	sub_14005E8E0((__int64)a1, v2 + 160, (int*)&v6, v4);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

