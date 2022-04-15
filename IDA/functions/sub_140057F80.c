//----- (0000000140057F80) ----------------------------------------------------
__int64 __fastcall sub_140057F80(_QWORD* a1, __int64 a2, __int64 a3, char* a4)
{
	char* v5; // rax
	__int64 v6; // r9
	__int64 v7; // rax
	unsigned int v8; // eax
	__int64 v9; // rbx
	__int64 v10; // rdi
	unsigned int v11; // esi
	_QWORD v13[2]; // [rsp+30h] [rbp-68h] BYREF
	_QWORD* v14; // [rsp+40h] [rbp-58h] BYREF
	__int64 v15; // [rsp+48h] [rbp-50h]
	__int64 v16; // [rsp+58h] [rbp-40h]
	char* v17; // [rsp+60h] [rbp-38h]
	_QWORD v18[5]; // [rsp+68h] [rbp-30h] BYREF

	v18[4] = a1;
	v13[0] = a2;
	v13[1] = a3;
	v18[2] = sub_140057F60;
	v5 = asc_140C1DC04;
	if (a4)
		v5 = a4;
	v6 = a1[2] - a1[8];
	v18[3] = v13;
	v17 = v5;
	v7 = a1[22];
	v18[0] = 0i64;
	v18[1] = 0i64;
	v15 = 0i64;
	v16 = 0i64;
	v14 = v18;
	v8 = sub_140061FB0((__int64)a1, (void(__fastcall*)(__int64, __int64))sub_1400620B0, (__int64)&v14, v6, v7);
	v9 = a1[4];
	v10 = v16;
	v11 = v8;
	(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(v9 + 16))(*(_QWORD*)(v9 + 24), v15, v16, 0i64);
	*(_QWORD*)(v9 + 120) -= v10;
	return v11;
}

