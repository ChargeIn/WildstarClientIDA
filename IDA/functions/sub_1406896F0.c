//----- (00000001406896F0) ----------------------------------------------------
__int64 __fastcall sub_1406896F0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rbx
	unsigned __int64* v5; // rdx
	int* v6; // rax
	__int64 v7; // r14
	int* v8; // rax
	__int64 v9; // rax
	int* v11; // rsi
	__int64 v12; // rbx
	__int64 v13; // rax
	unsigned __int64* v14; // rdx
	unsigned __int64 v15; // r8
	__int64 v17; // [rsp+20h] [rbp-108h] BYREF
	__int64 v18; // [rsp+28h] [rbp-100h]
	__int64(__fastcall * *v19)(); // [rsp+40h] [rbp-E8h] BYREF
	char v20[184]; // [rsp+48h] [rbp-E0h] BYREF
	__int128 v21; // [rsp+100h] [rbp-28h]
	int* v22; // [rsp+110h] [rbp-18h]

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		v5 = (unsigned __int64*)&unk_1409D14C3;
		goto LABEL_29;
	}
	if (!*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) + 12))
	{
		v5 = (unsigned __int64*)&unk_1409D14DB;
	LABEL_29:
		sub_140058710((__int64)a1, v5, 0i64);
		return 1i64;
	}
	v6 = sub_14018B280(16i64, 0);
	v7 = (__int64)v6;
	if (v6)
		*(_WORD*)v6 = 0;
	sub_1400B6F30((__int64)&v19);
	v19 = off_140B69230;
	v22 = 0i64;
	v21 = 0i64;
	v8 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v21 = v8;
	*((_QWORD*)&v21 + 1) = v8;
	v22 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	v9 = 0i64;
	while (a1n_14[++v9] != 0)
		;
	sub_14001C480((__int64)v20, (int*)L"$1n", (int*)&a1n_14[v9]);
	v11 = sub_14018B280(88i64, 0);
	if (v11)
	{
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
		sub_1400B6390(v11);
		*(_QWORD*)v11 = off_140B69300;
		sub_1404DDD60((__int64)v11, v12);
	}
	else
	{
		v11 = 0i64;
	}
	sub_1400B7480((__int64)&v19, v11);
	v13 = sub_1400B7660(&v19);
	v14 = (unsigned __int64*)sub_14018F0E0(&v17, *(unsigned __int16**)(v13 + 8))[1];
	if (v14)
	{
		v15 = -1i64;
		do
			++v15;
		while (*((_BYTE*)v14 + v15));
		sub_140058710((__int64)a1, v14, v15);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v18)
		sub_14018B900(v18, 0);
	if ((_QWORD)v21)
		sub_14018B900(v21, 0);
	sub_1400B7390(&v19);
	if (v7)
		sub_14018B900(v7, 0);
	return 1i64;
}
// 140B32C18: using guessed type wchar_t a1n_14[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406896F0: using guessed type char var_E0[184];

