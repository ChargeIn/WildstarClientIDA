//----- (00000001400E2630) ----------------------------------------------------
_QWORD* __fastcall sub_1400E2630(__int64 a1, _QWORD* a2, WCHAR* a3, int* a4)
{
	int* v5; // rdx
	__int64 v6; // rax
	__int64 v9; // rsi
	unsigned __int64 v10; // rbp
	_QWORD* v11; // rbx
	__int64 v12; // rcx
	int v13; // eax
	_QWORD* v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rdx
	int* v18; // rbx
	_QWORD* v19; // rax
	__int64 v21; // [rsp+20h] [rbp-38h] BYREF
	__int64 v22; // [rsp+28h] [rbp-30h]
	__int64 v23; // [rsp+60h] [rbp+8h] BYREF

	v23 = a1;
	v5 = (int*)&unk_1409D37C4;
	if (a4)
		v5 = a4;
	v6 = 0i64;
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	if (*(_WORD*)v5)
	{
		do
			++v6;
		while (*((_WORD*)v5 + v6));
	}
	sub_14001C1B0(a2, v5, (__int64)v5 + 2 * v6);
	if (a3 && *a3)
	{
		v9 = qword_140C63650;
		v23 = (__int64)a3;
		v10 = (*(__int64(__fastcall**)(__int64*))(qword_140C63650 + 1944))(&v23);
		v11 = *(_QWORD**)(*(_QWORD*)(v9 + 1936) + 8 * (v10 % *(_QWORD*)(v9 + 1928)));
		if (!v11)
			goto LABEL_11;
		while (v10 != *v11 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v9 + 1952))(&v23, v11 + 2))
		{
			v11 = (_QWORD*)v11[1];
			if (!v11)
				goto LABEL_11;
		}
		v18 = (int*)(v11 + 3);
		if (v18)
			v13 = *v18;
		else
			LABEL_11:
		v13 = sub_1407DF510(a3);
		if (v13)
		{
			v14 = sub_1400E2540(v12, &v21, v13, a4);
			v15 = a2[1];
			a2[1] = v14[1];
			v14[1] = v15;
			v16 = a2[2];
			a2[2] = v14[2];
			v14[2] = v16;
			v17 = a2[3];
			a2[3] = v14[3];
			v14[3] = v17;
		}
		else
		{
			v19 = sub_14018EFA0(&v21, (__int64)L"#%s#", a3);
			if (v19 != a2)
				sub_14001C480((__int64)a2, (int*)v19[1], (int*)v19[2]);
		}
		if (v22)
			sub_14018B900(v22, 0);
	}
	return a2;
}
// 1400E2727: variable 'v12' is possibly undefined
// 140A171D0: using guessed type wchar_t aS_0[5];
// 140C63650: using guessed type __int64 qword_140C63650;

