//----- (0000000140298DF0) ----------------------------------------------------
__int64 __fastcall sub_140298DF0(__int64 a1)
{
	signed int v2; // edi
	__int64 v4; // rcx
	__int64 v5; // rdx
	unsigned int v6; // edi
	signed int v7; // esi
	__int64 v8; // rax
	int v9[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v10; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * v11)(__int64); // [rsp+30h] [rbp-28h]
	__int64 v12; // [rsp+38h] [rbp-20h]
	int v13; // [rsp+40h] [rbp-18h]
	void(__fastcall * **v14)(_QWORD); // [rsp+60h] [rbp+8h] BYREF
	__int64 v15; // [rsp+68h] [rbp+10h] BYREF

	v2 = sub_1401C5690(112i64, (int**)(a1 + 104), 0);
	if (v2 < 0)
	{
		v15 = 0x141DE40D8i64;
		sub_1401A3130(14, 2, &v15, (unsigned int)v2);
		return sub_14029B080(a1, v2);
	}
	v4 = *(_QWORD*)(a1 + 96);
	v5 = *(_QWORD*)(a1 + 104);
	v6 = 0;
	v14 = 0i64;
	v7 = (*(__int64(__fastcall**)(__int64, __int64, void(__fastcall****)(_QWORD), _QWORD))(*(_QWORD*)v4 + 88i64))(
		v4,
		v5,
		&v14,
		0i64);
	if (v7 < 0)
	{
		v8 = 0x141DE4B58i64;
	LABEL_7:
		v15 = v8;
		sub_1401A3130(14, 2, &v15, (unsigned int)v7);
		v6 = sub_14029B080(a1, v7);
		goto LABEL_8;
	}
	v11 = sub_140298F20;
	v9[0] = 12;
	v9[1] = 2;
	v10 = a1;
	v12 = 0i64;
	v13 = 1;
	v7 = sub_14019DCA0((__int64)v9, 0, v14, (int**)(a1 + 120));
	if (v7 < 0)
	{
		v8 = 0x141DE47C8i64;
		goto LABEL_7;
	}
LABEL_8:
	if (v14)
		(*v14)[1](v14);
	return v6;
}

