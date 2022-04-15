//----- (000000014019FD40) ----------------------------------------------------
__int64 __fastcall sub_14019FD40(_BYTE* a1, __int64 a2, __int64 a3, _BYTE* a4, int a5)
{
	__int64 v6; // rax
	int v9; // edi
	__int64 v10; // rdx
	char* v11; // r8
	char v12; // al
	char v13; // cl
	unsigned int v14; // eax
	char* v15; // rcx
	unsigned __int64 v16; // rdx
	__int64 v17; // rdi
	const wchar_t* v18; // r9
	__int64 v20; // [rsp+30h] [rbp-D0h]
	char* v21; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
	int v23[5]; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v24; // [rsp+64h] [rbp-9Ch]
	__int16 v25; // [rsp+6Ch] [rbp-94h]
	char v26[64]; // [rsp+6Eh] [rbp-92h] BYREF
	__int64 v27; // [rsp+B0h] [rbp-50h]
	char v28[32]; // [rsp+C0h] [rbp-40h] BYREF
	char v29[96]; // [rsp+E0h] [rbp-20h] BYREF

	v6 = 0i64;
	v24 = 0i64;
	v25 = 0;
	v23[0] = 1732584193;
	v23[1] = -271733879;
	v23[2] = -1732584194;
	v23[3] = 271733878;
	v23[4] = -1009589776;
	v27 = 0i64;
	if (*(_WORD*)a4)
	{
		do
			++v6;
		while (*(_WORD*)&a4[2 * v6]);
	}
	if (!(2 * v6))
	{
	LABEL_6:
		sub_1401C8F20((__int64)v23);
		memset(v26, 0, sizeof(v26));
		v24 = 0i64;
		LODWORD(v27) = 1;
	LABEL_7:
		v9 = 0;
		v10 = 0i64;
		v11 = v28;
		do
		{
			v12 = v9++;
			++v11;
			v13 = 3 - (v12 & 3);
			v14 = v23[v10 >> 2];
			v10 = v9;
			*(v11 - 1) = v14 >> (8 * v13);
		} while ((unsigned __int64)v9 < 0x14);
		goto LABEL_9;
	}
	sub_1401C8C20((__int64)v23, a4, 2 * v6);
	if (!HIDWORD(v27))
	{
		if ((_DWORD)v27)
			goto LABEL_7;
		goto LABEL_6;
	}
LABEL_9:
	v15 = v29;
	v16 = 41i64;
	v17 = 0i64;
	v21 = v29;
	v22 = 41i64;
	while (1)
	{
		LODWORD(v20) = (unsigned __int8)v28[v17];
		if ((int)sub_1401A3210((int*)v15, v16, (__int64*)&v21, &v22, 0, L"%0.2x", v20) < 0)
			break;
		if ((unsigned __int64)++v17 >= 0x14)
			break;
		v16 = v22;
		v15 = v21;
	}
	v18 = L"Local";
	if (a5)
		v18 = L"Global";
	return sub_14001B370(a1, a2, L"%s\\%s.%s.%s", v18, L"NCSOFT", a3, v29);
}
// 14019FE8D: variable 'v20' is possibly undefined
// 140A44748: using guessed type wchar_t aGlobal_0[7];
// 140A44828: using guessed type wchar_t aSSSS_2[12];
// 140A44840: using guessed type wchar_t aLocal_0[6];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47D08: using guessed type wchar_t a02x_0[6];
// 14019FD40: using guessed type char var_D0[32];

