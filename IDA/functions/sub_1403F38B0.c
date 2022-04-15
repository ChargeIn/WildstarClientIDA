//----- (00000001403F38B0) ----------------------------------------------------
__int64 __fastcall sub_1403F38B0(__int64 a1, unsigned int* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rbx
	int* v6; // rsi
	int* v7; // rax
	int* v8; // rax
	_QWORD* v9; // rbp
	int* v10; // rdi
	int v11; // ebx
	__int64 v12; // rcx
	int* v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v18; // [rsp+20h] [rbp-118h]
	__int64(__fastcall * *v19)(); // [rsp+40h] [rbp-F8h] BYREF
	char v20[8]; // [rsp+48h] [rbp-F0h] BYREF
	_WORD* v21; // [rsp+50h] [rbp-E8h]
	_WORD* v22; // [rsp+58h] [rbp-E0h]
	__int128 v23; // [rsp+100h] [rbp-38h]
	int* v24; // [rsp+110h] [rbp-28h]

	v5 = sub_140643E20(qword_140C65C28, *a2);
	if (!v5)
		return 0i64;
	v6 = (int*)*((_QWORD*)a2 + 1);
	if (!v6 || !*(_WORD*)v6)
		v6 = (int*)sub_14034BDD0(v4, 108);
	sub_1400B6F30((__int64)&v19);
	v19 = off_140B69230;
	v23 = 0i64;
	v24 = 0i64;
	v7 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v23 = v7;
	*((_QWORD*)&v23 + 1) = v7;
	v24 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	v8 = sub_14018B280(96i64, 0);
	if (v8)
		v9 = (_QWORD*)sub_1404DDB40((__int64)v8, v6);
	else
		v9 = 0i64;
	v10 = sub_14018B280(96i64, 0);
	if (v10)
	{
		v11 = *(_DWORD*)(*(_QWORD*)v5 + 20i64);
		sub_1400B6390(v10);
		*(_QWORD*)v10 = off_140B69170;
		v10[22] = 1;
		sub_1400B6D70((__int64)v10, (__int64)L"name", v11);
	}
	else
	{
		v10 = 0i64;
	}
	sub_1400B7480((__int64)&v19, v9);
	sub_1400B7480((__int64)&v19, v10);
	if (a2[1])
	{
		v13 = (int*)sub_14034BDD0(v12, 538143);
		if (!v13)
		{
			if (v21 != v22)
			{
				*v21 = 0;
				v22 = v21;
			}
			goto LABEL_26;
		}
		v14 = 0i64;
		if (*(_WORD*)v13)
		{
			do
				++v14;
			while (*((_WORD*)v13 + v14));
		}
	}
	else
	{
		v13 = (int*)sub_14034BDD0(v12, 538142);
		if (!v13)
		{
			if (v21 != v22)
			{
				*v21 = 0;
				v22 = v21;
			}
			goto LABEL_26;
		}
		v14 = 0i64;
		if (*(_WORD*)v13)
		{
			do
				++v14;
			while (*((_WORD*)v13 + v14));
		}
	}
	sub_14001C480((__int64)v20, v13, (int*)((char*)v13 + 2 * v14));
LABEL_26:
	v15 = sub_1400B7660(&v19);
	sub_140003890((__int64*)qword_140C658A0, 0x19u, 0i64, *(int**)(v15 + 8), 0, 0i64);
	v16 = sub_1400B7660(&v19);
	LODWORD(v18) = a2[1];
	sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "RealmFirstAchievementAnnounce", "ibSS", *a2, v18, v6, *(_QWORD*)(v16 + 8));
	if ((_QWORD)v23)
		sub_14018B900(v23, 0);
	sub_1400B7390(&v19);
	return 0i64;
}
// 1403F3911: variable 'v4' is possibly undefined
// 1403F3A15: variable 'v12' is possibly undefined
// 1403F3B0B: variable 'v18' is possibly undefined
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65C28: using guessed type __int64 qword_140C65C28;
// 1403F38B0: using guessed type char var_F0[8];

