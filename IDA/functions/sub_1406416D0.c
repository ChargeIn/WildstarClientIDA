//----- (00000001406416D0) ----------------------------------------------------
__int64 __fastcall sub_1406416D0(__int64 a1, __int64 a2, int a3)
{
	int* v3; // r15
	__int64 v4; // rdi
	int v5; // ebx
	__int64 v9; // r14
	int* v10; // rax
	_DWORD* v11; // rsi
	int* v12; // rax
	int* v13; // rax
	int v14; // ebx
	int* v15; // rax
	__int64 v16; // rbx
	int* v17; // rax
	__int64 v18; // rax
	_BYTE* v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rbx
	_QWORD* v22; // rax
	int* v23; // rax
	_WORD* v24; // rax
	int* v25; // rax
	int* v26; // rax
	__int64 v28; // rcx
	int v29; // ebx
	int v30; // r8d
	int v31; // esi
	int v32; // r14d
	int v33; // r8d
	__int64 v34; // rax
	__int64 v35; // rax
	int v36; // eax
	__int64 v37[2]; // [rsp+30h] [rbp-68h] BYREF
	__int64 v38; // [rsp+40h] [rbp-58h] BYREF
	__int64 v39; // [rsp+48h] [rbp-50h]
	int v40; // [rsp+A8h] [rbp+10h]
	__int64* v41; // [rsp+B8h] [rbp+20h]

	v3 = *(int**)(a2 + 16);
	v4 = 0i64;
	v5 = 0;
	v37[0] = (__int64)word_140B0A7C8;
	v37[1] = (__int64)word_140B0A7D8;
	v40 = 0;
	if (*(_BYTE*)(a2 + 8))
	{
		v9 = (__int64)(v3 + 2);
		v41 = v37;
		while (2)
		{
			switch (*(_DWORD*)(v9 - 8))
			{
			case 0:
				v10 = sub_14018B280(88i64, 0);
				if (!v10)
					goto LABEL_16;
				v11 = (_DWORD*)sub_1404DC400((__int64)v10, *(_DWORD*)v9);
				goto LABEL_17;
			case 1:
				v12 = sub_14018B280(96i64, 0);
				if (!v12)
					goto LABEL_16;
				v11 = (_DWORD*)sub_1404DDB40((__int64)v12, *(int**)v9);
				goto LABEL_17;
			case 2:
				v13 = sub_14018B280(96i64, 0);
				v11 = v13;
				if (!v13)
					goto LABEL_16;
				v14 = *(_DWORD*)v9;
				sub_1400B6390(v13);
				*(_QWORD*)v11 = off_140B69170;
				v11[22] = 1;
				sub_1400B6D70((__int64)v11, (__int64)L"name", v14);
				v5 = v40;
				goto LABEL_17;
			case 3:
				v15 = sub_14018B280(88i64, 0);
				if (!v15)
					goto LABEL_16;
				v11 = (_DWORD*)sub_1404DC000((__int64)v15, v9);
				goto LABEL_17;
			case 4:
				v16 = sub_1403D90D0(qword_140C65898, *(_DWORD*)v9);
				if (v16)
				{
					v17 = sub_14018B280(96i64, 0);
					if (v17)
					{
						v18 = sub_1404DB7E0((__int64)v17, v16);
						v5 = v40;
						v11 = (_DWORD*)v18;
						goto LABEL_17;
					}
				}
				else
				{
					v25 = sub_14018B280(88i64, 0);
					if (v25)
					{
						v5 = v40;
						v11 = (_DWORD*)sub_1404DC400((__int64)v25, *(_DWORD*)(v9 + 4));
						goto LABEL_17;
					}
				}
				v5 = v40;
			LABEL_16:
				v11 = 0i64;
			LABEL_17:
				v19 = *(_BYTE**)(v9 + 56);
				if (v19)
				{
					v20 = 0i64;
					if (*v19)
					{
						do
							++v20;
						while (v19[v20]);
						if (v20)
						{
							v21 = *(_QWORD*)v11;
							v22 = sub_14018F2D0(&v38, *(char**)(v9 + 56));
							(*(void(__fastcall**)(_DWORD*, _QWORD*))(v21 + 72))(v11, v22);
							if (v39)
								sub_14018B900(v39, 0);
							v5 = v40;
						}
					}
				}
				if ((unsigned __int64)v5 < 2)
					(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v11 + 80i64))(v11, *v41);
				(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v11 + 104i64))(v11, *(unsigned int*)(v9 + 48));
				sub_1400B7480(a1, v11);
				++v41;
				++v5;
				v9 += 72i64;
				v40 = v5;
				if (v5 >= *(unsigned __int8*)(a2 + 8))
					break;
				continue;
			case 5:
				v26 = sub_14018B280(96i64, 0);
				if (!v26)
					goto LABEL_16;
				v11 = (_DWORD*)sub_1404DB7E0((__int64)v26, *(_QWORD*)(qword_140C65898 + 120));
				goto LABEL_17;
			default:
				return 2147500037i64;
			}
			break;
		}
	}
	if (a3)
	{
		v23 = (int*)sub_14034BDD0(a1, a3);
		if (!v23)
		{
		LABEL_29:
			v24 = *(_WORD**)(a1 + 16);
			if (v24 != *(_WORD**)(a1 + 24))
			{
				*v24 = 0;
				*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 16);
			}
			return 0i64;
		}
		if (*(_WORD*)v23)
		{
			do
				++v4;
			while (*((_WORD*)v23 + v4));
		}
	}
	else
	{
		if (!*(_DWORD*)a2)
		{
			if (*(_BYTE*)(a2 + 8) >= 2u)
			{
				v28 = *(_QWORD*)(a2 + 16);
				v29 = 3;
				v30 = *(_DWORD*)(v28 + 72);
				v31 = 17;
				v32 = 23;
				if (v30)
				{
					v33 = v30 - 3;
					if (v33)
					{
						if (v33 == 1)
						{
							v34 = sub_1403D90D0(qword_140C65898, v3[20]);
							if (v34)
							{
								v31 = *(_DWORD*)(v34 + 216);
								v29 = *(_DWORD*)(v34 + 52);
							}
						}
					}
					else
					{
						v32 = v3[27];
						v31 = v3[26];
						v29 = v3[25];
					}
				}
				else
				{
					v35 = sub_1404835C0(qword_140C65918, v3[20]);
					if (v35)
					{
						v31 = *(unsigned __int8*)(v35 + 346);
						v29 = (*(_BYTE*)(v35 + 347) & 3) != 0;
					}
				}
				v36 = sub_140612E30(v28, *(_DWORD*)(a2 + 4), v29, v32, v31);
				sub_1400B75F0(a1, v36);
			}
			return 0i64;
		}
		v23 = (int*)sub_14034BDD0(a1, *(_DWORD*)a2);
		if (!v23)
			goto LABEL_29;
		if (*(_WORD*)v23)
		{
			do
				++v4;
			while (*((_WORD*)v23 + v4));
		}
	}
	sub_14001C480(a1 + 8, v23, (int*)((char*)v23 + 2 * v4));
	return 0i64;
}
// 14064191B: variable 'a1' is possibly undefined
// 140641A93: variable 'v28' is possibly undefined
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;

