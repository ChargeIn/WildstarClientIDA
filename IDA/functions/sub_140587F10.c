//----- (0000000140587F10) ----------------------------------------------------
void __fastcall sub_140587F10(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int16* v4; // rax
	__int64* v5; // r15
	int* v6; // rbp
	__int64 v7; // rax
	__int64 v9; // rdi
	int* v10; // rdi
	__int64 v11; // rax
	int* v12; // rsi
	__int64 v13; // r14
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rsi
	int v17; // edx
	__int64 v18; // rax
	__int64 v19; // rbp
	__int64 v20; // rbx
	__int16* v21; // rax
	__int64 j; // rbx
	__int64 v23; // rcx
	__int64 i; // rbx
	__int64 v25; // rcx
	char v26[8]; // [rsp+30h] [rbp-88h] BYREF
	int* v27; // [rsp+38h] [rbp-80h]
	__int64 v29; // [rsp+48h] [rbp-70h]
	char v30[8]; // [rsp+50h] [rbp-68h] BYREF
	int* v31; // [rsp+58h] [rbp-60h]
	__int64 v33; // [rsp+68h] [rbp-50h]
	char v34[8]; // [rsp+70h] [rbp-48h] BYREF
	__int64 v35; // [rsp+78h] [rbp-40h]
	__int64 v36; // [rsp+80h] [rbp-38h]

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
	v27 = 0i64;
	v29 = 0i64;
	v7 = 0i64;
	while (asc_140B1F3E8[++v7] != 0)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v9 + 1), 0);
		v27 = v6;
		v29 = (__int64)v6 + 2 * v9 + 2;
	}
	sub_1407DB590(v6, (int*)L" \t\r\n", 2 * v9);
	if ((int*)((char*)v6 + 2 * v9))
		*((_WORD*)v6 + v9) = 0;
	v10 = *(int**)(a1 + 8);
	v11 = 0i64;
	v31 = 0i64;
	v12 = 0i64;
	v33 = 0i64;
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
		v31 = v12;
		v33 = (__int64)v12 + 2 * v13 + 2;
	}
	sub_1407DB590(v12, v10, 2 * v13);
	if ((int*)((char*)v12 + 2 * v13))
		*((_WORD*)v12 + v13) = 0;
	sub_14018F570((__int64)v34, (__int64)v30, (__int64)v26, 34, 92);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v15 = v36;
	v16 = v35;
	if ((v36 - v35) >> 5)
	{
		v18 = sub_14018E8F0(*(WCHAR**)(v35 + 8));
		v19 = qword_140C65898;
		v20 = v18;
		if (!(unsigned int)sub_1403B5040(qword_140C65898) || abs64(v20) <= *(_QWORD*)(v19 + 5744))
		{
			sub_14057FB20(v5, v20);
			for (i = v16; i != v15; i += 32i64)
			{
				v25 = *(_QWORD*)(i + 8);
				if (v25)
					sub_14018B900(v25, 0);
			}
			goto LABEL_32;
		}
		v17 = 741974;
	}
	else
	{
		v17 = 328949;
	}
	v21 = sub_14034BDD0(v14, v17);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v21, 0, 0i64);
	for (j = v16; j != v15; j += 32i64)
	{
		v23 = *(_QWORD*)(j + 8);
		if (v23)
			sub_14018B900(v23, 0);
	}
	if (v16)
		LABEL_32:
	sub_14018B900(v16, 0);
}
// 140588166: variable 'v14' is possibly undefined
// 140B1F3E8: using guessed type wchar_t asc_140B1F3E8[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 140587F10: using guessed type char var_88[8];
// 140587F10: using guessed type char var_68[8];
// 140587F10: using guessed type char var_48[8];

