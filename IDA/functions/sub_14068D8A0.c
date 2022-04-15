//----- (000000014068D8A0) ----------------------------------------------------
__int64 __fastcall sub_14068D8A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rsi
	__int64 v5; // rbp
	__int64 v6; // rax
	unsigned __int64* v7; // rdx
	bool v9; // zf
	__int64 v10; // rax
	int v11; // ebp
	__int64 v12; // rsi
	unsigned int v13; // eax
	__int64 v14; // r14
	int* v15; // rax
	int* v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // rcx
	int* v19; // rdx
	__int64 v20; // rax
	__int64 v21; // rax
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-108h] BYREF
	char v25[8]; // [rsp+28h] [rbp-100h] BYREF
	_WORD* v26; // [rsp+30h] [rbp-F8h]
	_WORD* v27; // [rsp+38h] [rbp-F0h]
	__int128 v28; // [rsp+E0h] [rbp-48h]
	int* v29; // [rsp+F0h] [rbp-38h]
	__int64 v30; // [rsp+100h] [rbp-28h] BYREF
	__int64 v31; // [rsp+108h] [rbp-20h]

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = *(_QWORD*)(v4 + 8);
	v6 = sub_140498A40(qword_140C65980, *(_DWORD*)(v5 + 4), 0);
	if (!v6)
	{
		v7 = (unsigned __int64*)&unk_1409D1526;
	LABEL_7:
		sub_140058710((__int64)a1, v7, 0i64);
		return 1i64;
	}
	v9 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 368i64))(v6) == *(_DWORD*)(v5 + 20);
	v10 = *(_QWORD*)(v4 + 8);
	if (v9)
	{
		v11 = *(_DWORD*)(v10 + 32);
		if (v11)
			goto LABEL_11;
	LABEL_21:
		v7 = (unsigned __int64*)&unk_1409D1557;
		goto LABEL_7;
	}
	v11 = *(_DWORD*)(v10 + 36);
	if (!v11)
		goto LABEL_21;
LABEL_11:
	v12 = sub_14068D500(a1);
	if (sub_14068D560(v12) && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 336i64))(v12) == 24)
	{
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 360i64))(v12);
		v14 = sub_140229100(v13);
		if (v14)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 120i64))(v12) < 0x10)
				v11 = *(_DWORD*)(v14 + 4i64 * (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 120i64))(v12) + 4);
		}
	}
	sub_1400B6F30((__int64)&v24);
	v24 = off_140B69230;
	v29 = 0i64;
	v28 = 0i64;
	v15 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v28 = v15;
	*((_QWORD*)&v28 + 1) = v15;
	v29 = v15 + 4;
	if (v15)
		*(_WORD*)v15 = 0;
	v16 = sub_14018B280(96i64, 0);
	if (v16)
		v17 = (_QWORD*)sub_1404DB7E0((__int64)v16, *(_QWORD*)(qword_140C65898 + 120));
	else
		v17 = 0i64;
	sub_1400B7480((__int64)&v24, v17);
	v19 = (int*)sub_14034BDD0(v18, v11);
	if (v19)
	{
		v20 = 0i64;
		if (*(_WORD*)v19)
		{
			do
				++v20;
			while (*((_WORD*)v19 + v20));
		}
		sub_14001C480((__int64)v25, v19, (int*)((char*)v19 + 2 * v20));
	}
	else if (v26 != v27)
	{
		*v26 = 0;
		v27 = v26;
	}
	v21 = sub_1400B7660(&v24);
	v22 = (unsigned __int64*)sub_14018F0E0(&v30, *(unsigned __int16**)(v21 + 8))[1];
	if (v22)
	{
		v23 = -1i64;
		do
			++v23;
		while (*((_BYTE*)v22 + v23));
		sub_140058710((__int64)a1, v22, v23);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v31)
		sub_14018B900(v31, 0);
	if ((_QWORD)v28)
		sub_14018B900(v28, 0);
	sub_1400B7390(&v24);
	return 1i64;
}
// 14068DA98: variable 'v18' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 14068D8A0: using guessed type char var_100[8];

