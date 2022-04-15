//----- (0000000140588210) ----------------------------------------------------
void __fastcall sub_140588210(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int16* v4; // rax
	__int64* v5; // r12
	int* v6; // r14
	__int64 v7; // rax
	__int64 v9; // rdi
	int* v10; // rdi
	__int64 v11; // rax
	int* v12; // rsi
	__int64 v13; // r15
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rsi
	unsigned __int64 v17; // rbx
	__int16* v18; // rax
	unsigned int v19; // eax
	__int64 i; // rbx
	__int64 v21; // rcx
	int* v22; // rax
	__int16* v23; // r14
	unsigned int v24; // eax
	__int64 v25; // rax
	__int64 v26; // rcx
	int* v27; // rax
	_QWORD* v28; // rax
	__int64 v29; // rax
	__int64 j; // rbx
	__int64 v31; // rcx
	char v32[8]; // [rsp+30h] [rbp-D0h] BYREF
	int* v33; // [rsp+38h] [rbp-C8h]
	__int64 v35; // [rsp+48h] [rbp-B8h]
	char v36[8]; // [rsp+50h] [rbp-B0h] BYREF
	int* v37; // [rsp+58h] [rbp-A8h]
	__int64 v39; // [rsp+68h] [rbp-98h]
	char v40[8]; // [rsp+70h] [rbp-90h] BYREF
	__int64 v41; // [rsp+78h] [rbp-88h]
	__int64 v42; // [rsp+80h] [rbp-80h]
	__int64 v43[24]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v44; // [rsp+150h] [rbp+50h]
	int* v45; // [rsp+160h] [rbp+60h]

	v2 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 1)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v5 = *(__int64**)(qword_140C7DE18 + 8 * v2);
	if (!v3)
	{
	LABEL_4:
		v4 = sub_14034BDD0(a1, 114120);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
		return;
	}
	v6 = 0i64;
	v37 = 0i64;
	v39 = 0i64;
	v7 = 0i64;
	while (asc_140B1F3A8[++v7] != 0)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v9 + 1), 0);
		v37 = v6;
		v39 = (__int64)v6 + 2 * v9 + 2;
	}
	sub_1407DB590(v6, (int*)L" \t\r\n", 2 * v9);
	if ((int*)((char*)v6 + 2 * v9))
		*((_WORD*)v6 + v9) = 0;
	v10 = *(int**)(a1 + 8);
	v11 = 0i64;
	v33 = 0i64;
	v12 = 0i64;
	v35 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v11;
		while (*((_WORD*)v10 + v11));
	}
	v13 = (2 * v11) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v12 = sub_14018B280(2 * (v13 + 1), 0);
		v33 = v12;
		v35 = (__int64)v12 + 2 * v13 + 2;
	}
	sub_1407DB590(v12, v10, 2 * v13);
	if ((int*)((char*)v12 + 2 * v13))
		*((_WORD*)v12 + v13) = 0;
	sub_14018F570((__int64)v40, (__int64)v32, (__int64)v36, 34, 92);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v15 = v42;
	v16 = v41;
	v17 = (v42 - v41) >> 5;
	if (v17 >= 2)
	{
		v18 = sub_14034BDD0(v14, 134485);
		if (!(unsigned int)sub_14018E2C0(*(_QWORD*)(v16 + 40), (unsigned __int16*)v18))
		{
			v19 = sub_14018E820(*(WCHAR**)(v16 + 8));
			sub_14057FB80(v5, v19);
			for (i = v16; i != v15; i += 32i64)
			{
				v21 = *(_QWORD*)(i + 8);
				if (v21)
					sub_14018B900(v21, 0);
			}
		LABEL_28:
			sub_14018B900(v16, 0);
			return;
		}
	}
	sub_1400B7090((__int64)v43, 395974);
	v43[0] = (__int64)off_140B69230;
	v45 = 0i64;
	v44 = 0i64;
	v22 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v44 = v22;
	*((_QWORD*)&v44 + 1) = v22;
	v45 = v22 + 4;
	if (v22)
		*(_WORD*)v22 = 0;
	v23 = (__int16*)&unk_1409F2F64;
	if (v17 == 1)
	{
		v24 = sub_14018E820(*(WCHAR**)(v16 + 8));
		v25 = sub_140202CA0(v24);
		if (v25)
			v23 = sub_14034BDD0(v26, *(_DWORD*)(v25 + 4));
	}
	v27 = sub_14018B280(96i64, 0);
	if (v27)
		v28 = (_QWORD*)sub_1404DDB40((__int64)v27, (int*)v23);
	else
		v28 = 0i64;
	sub_1400B7480((__int64)v43, v28);
	v29 = sub_1400B7660(v43);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v29 + 8), 0, 0i64);
	if ((_QWORD)v44)
		sub_14018B900(v44, 0);
	sub_1400B7390(v43);
	for (j = v16; j != v15; j += 32i64)
	{
		v31 = *(_QWORD*)(j + 8);
		if (v31)
			sub_14018B900(v31, 0);
	}
	if (v16)
		goto LABEL_28;
}
// 140588422: variable 'v14' is possibly undefined
// 140588508: variable 'v26' is possibly undefined
// 140B1F3A8: using guessed type wchar_t asc_140B1F3A8[5];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140588210: using guessed type char var_140[8];
// 140588210: using guessed type char var_160[8];
// 140588210: using guessed type char var_120[8];

