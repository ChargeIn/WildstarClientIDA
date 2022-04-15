//----- (000000014085E210) ----------------------------------------------------
char __fastcall sub_14085E210(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rdi
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	int v9; // [rsp+30h] [rbp+8h] BYREF
	__int64 v10; // [rsp+40h] [rbp+18h] BYREF
	__int64 v11; // [rsp+48h] [rbp+20h] BYREF

	v1 = a1[23];
	v2 = 0i64;
	if (!v1)
		return 0;
	v4 = *(_QWORD*)(v1 + 16);
	if (v4 && *(_QWORD**)(v4 + 24) == a1)
		v2 = *(_QWORD*)(v1 + 16);
	v5 = *(_QWORD*)(v1 + 24);
	if (v5 && *(_QWORD**)(v5 + 24) == a1)
		v2 = v5;
	if (!v2)
		return 0;
	if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v2 + 120i64))(v2))
		return 0;
	v6 = a1[21];
	v10 = 0i64;
	v9 = 0;
	v11 = 0i64;
	sub_1408563B0(v6, &v10, &v9, (unsigned __int64*)&v11);
	if (!v10)
		return 0;
	if ((*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 128i64))(v2, v10, a1[52]) != 1)
	{
		if (v10)
			sub_140856790(a1[21]);
		if (v11)
			sub_140841FE0(v11, 0);
		return 0;
	}
	if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v2 + 136i64))(v2))
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(*(_QWORD*)a1[23] + 104i64))(a1[23], v10, a1[52]);
	if (a1[52])
		sub_140856790(a1[21]);
	v7 = a1[5];
	if (v7)
		sub_140841FE0(v7, 0);
	a1[52] = v10;
	a1[5] = v11;
	return 1;
}

