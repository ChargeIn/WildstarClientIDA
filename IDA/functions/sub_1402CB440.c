//----- (00000001402CB440) ----------------------------------------------------
__int64 __fastcall sub_1402CB440(__int64 a1, _WORD* a2, int a3, _OWORD* a4, int a5, __int64 a6)
{
	__int64 v6; // rbp
	unsigned __int64 v10; // rdi
	_QWORD* v11; // rbx
	int* v12; // rax
	int* v13; // rbx
	int** v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // r9
	__int64 v17; // r8
	int v19; // edi
	_WORD* v20; // [rsp+48h] [rbp+10h] BYREF

	v20 = a2;
	v6 = qword_140C657F0;
	v10 = (*(__int64(__fastcall**)(_WORD**))(qword_140C657F0 + 120))(&v20);
	v11 = *(_QWORD**)(*(_QWORD*)(v6 + 112) + 8 * (v10 % *(_QWORD*)(v6 + 104)));
	if (!v11)
		goto LABEL_5;
	while (v10 != *v11 || !(*(unsigned int(__fastcall**)(_WORD**, _QWORD*))(v6 + 128))(&v20, v11 + 2))
	{
		v11 = (_QWORD*)v11[1];
		if (!v11)
			goto LABEL_5;
	}
	v14 = (int**)(v11 + 3);
	if (v14)
	{
		v13 = *v14;
		(**(void(__fastcall***)(int*))v13)(v13);
	}
	else
	{
	LABEL_5:
		v12 = sub_14018B280(64i64, 0);
		v13 = v12;
		if (v12)
		{
			*(_QWORD*)v12 = off_140B62C10;
			v12[2] = 1;
			*(_QWORD*)v12 = off_140B628A0;
			*((_QWORD*)v12 + 2) = 0i64;
			v12[6] = 0;
			*((_QWORD*)v12 + 4) = 0i64;
			*((_QWORD*)v12 + 5) = 0i64;
			*((_QWORD*)v12 + 6) = 0i64;
			v12[14] = 0;
		}
		else
		{
			v13 = 0i64;
		}
		v19 = sub_1402D57C0((__int64)v13, v20);
		if (v19 < 0)
		{
			if (v13)
			{
				sub_1402D5740(v13);
				sub_14018B900((__int64)v13, 0);
			}
			return (unsigned int)v19;
		}
	}
	if (*(int**)(a1 + 16) != v13)
	{
		if (v13)
			(**(void(__fastcall***)(int*))v13)(v13);
		v15 = *(_QWORD*)(a1 + 16);
		if (v15)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		*(_QWORD*)(a1 + 16) = v13;
	}
	(*(void(__fastcall**)(int*))(*(_QWORD*)v13 + 8i64))(v13);
	v16 = a6;
	*(_DWORD*)(a1 + 40) = a3;
	sub_1402CB390(a1, a4, v17, v16);
	return 0i64;
}
// 1402CB54E: variable 'v17' is possibly undefined
// 140B628A0: using guessed type __int64 (__fastcall *off_140B628A0[61])();
// 140B62C10: using guessed type __int64 (__fastcall *off_140B62C10[19])();
// 140C657F0: using guessed type __int64 qword_140C657F0;

