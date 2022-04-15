//----- (0000000140723CE0) ----------------------------------------------------
__int64 __fastcall sub_140723CE0(__int64 a1)
{
	__int64 v1; // r15
	unsigned int v2; // eax
	unsigned int v3; // r13d
	__int64 v4; // rax
	bool v5; // cf
	__int64 v6; // rax
	int* v7; // rax
	int* v8; // rsi
	int v9; // edi
	__int64 i; // rbx
	unsigned int v11; // ebp
	__int64 v12; // r12
	__int64 v13; // rdi
	__int64 v14; // rax
	unsigned __int64 v15; // r14
	int** v16; // rbx
	int* v17; // rax
	int* v18; // rcx
	__int64 v19; // rbx
	int* v20; // rax
	unsigned int v21; // eax
	unsigned int v22; // r12d
	unsigned int v23; // r14d
	__int64 v24; // rax
	_DWORD* v25; // rdi
	unsigned __int64 v26; // rsi
	_QWORD* v27; // rbx
	__int64 v28; // rcx
	__int64 v29; // rsi
	__int64 v30; // rax
	__int64 v31; // rbx
	__int64 v32; // rcx
	int v33; // edx
	unsigned int** v34; // rax
	unsigned int v35; // eax
	__int64 v37; // [rsp+50h] [rbp+8h] BYREF

	v37 = a1;
	v1 = qword_140C665D8;
	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6A2B8, qword_140C63858);
	}
	else
	{
		if (dword_140C643F4)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401FE640() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64F40 + 40i64))(qword_140C64F40);
	}
	v3 = v2;
LABEL_9:
	v4 = 104i64 * v3;
	if (!is_mul_ok(v3, 0x68ui64))
		v4 = -1i64;
	v5 = __CFADD__(v4, 8i64);
	v6 = v4 + 8;
	if (v5)
		v6 = -1i64;
	v7 = sub_14018B280(v6, 0);
	if (v7)
	{
		v8 = v7 + 2;
		*v7 = v3;
		v9 = v3 - 1;
		for (i = (__int64)(v7 + 2); v9 >= 0; --v9)
		{
			sub_140787970(i);
			i += 104i64;
		}
	}
	else
	{
		v8 = 0i64;
	}
	v11 = 0;
	*(_QWORD*)v1 = v8;
	if (v3)
	{
		v12 = 0i64;
		do
		{
			v13 = v12 + *(_QWORD*)v1;
			if (qword_140C63848)
			{
				v14 = qword_140C63848(off_140A6A2B8, v11, qword_140C63858);
			}
			else if (dword_140C643F4)
			{
				v14 = 0i64;
			}
			else if ((int)sub_1401FE640() >= 0)
			{
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F40 + 32i64))(qword_140C64F40, v11);
			}
			else
			{
				v14 = 0i64;
			}
			sub_140787B10(v13, v14);
			LODWORD(v37) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			if (*(_QWORD*)(v1 + 8) == *(_QWORD*)(v1 + 16))
				sub_1400290D0(v1 + 8);
			v15 = (*(__int64(__fastcall**)(__int64*))(v1 + 32))(&v37);
			v16 = (int**)(*(_QWORD*)(v1 + 24) + 8 * (v15 % *(_QWORD*)(v1 + 16)));
			v17 = sub_14018B280(32i64, 0);
			if (v17)
			{
				v18 = *v16;
				*(_QWORD*)v17 = v15;
				*((_QWORD*)v17 + 1) = v18;
				LODWORD(v18) = v37;
				*((_QWORD*)v17 + 3) = v13;
				v17[4] = (int)v18;
			}
			*v16 = v17;
			++* (_QWORD*)(v1 + 8);
			v19 = *(_QWORD*)(v1 + 104);
			v20 = sub_14018B280(24i64, 0);
			if (v20 != (int*)-16i64)
				*((_QWORD*)v20 + 2) = v13;
			*(_QWORD*)v20 = v19;
			++v11;
			*((_QWORD*)v20 + 1) = *(_QWORD*)(v19 + 8);
			v12 += 104i64;
			**(_QWORD**)(v19 + 8) = v20;
			*(_QWORD*)(v19 + 8) = v20;
		} while (v11 < v3);
	}
	if (qword_140C63838)
	{
		v21 = qword_140C63838(off_140A6A2F0, qword_140C63858);
	}
	else
	{
		if (dword_140C654CC)
		{
			v22 = 0;
			goto LABEL_42;
		}
		if ((int)sub_1401FEA80() < 0)
		{
			v22 = 0;
			goto LABEL_42;
		}
		v21 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63958 + 40i64))(qword_140C63958);
	}
	v22 = v21;
LABEL_42:
	v23 = 0;
	if (v22)
	{
		while (!qword_140C63848)
		{
			if (dword_140C654CC)
			{
				v25 = 0i64;
			}
			else
			{
				if ((int)sub_1401FEA80() >= 0)
				{
					v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63958 + 32i64))(qword_140C63958, v23);
					goto LABEL_50;
				}
				v25 = 0i64;
			}
		LABEL_51:
			v26 = (*(__int64(__fastcall**)(_DWORD*))(v1 + 32))(v25 + 1);
			v27 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 8 * (v26 % *(_QWORD*)(v1 + 16)));
			if (v27)
			{
				while (v26 != *v27 || !(*(unsigned int(__fastcall**)(_DWORD*, _QWORD*))(v1 + 40))(v25 + 1, v27 + 2))
				{
					v27 = (_QWORD*)v27[1];
					if (!v27)
						goto LABEL_63;
				}
				if (v27 != (_QWORD*)-24i64)
				{
					v29 = v27[3];
					v30 = sub_1405A8A40(v28, v25[2]);
					v31 = v30;
					if (v30)
					{
						v32 = *(_QWORD*)(v30 + 8);
						v33 = *(_DWORD*)(v32 + 420);
						if (!v33)
							v33 = 1;
						v34 = (unsigned int**)sub_1405A9420(v32, v33);
						if (v34)
							sub_14077D790(v34, v29);
						v35 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
						sub_1405532D0(v31, v35, v25[3], (__int64)v25);
						sub_140787BD0(v29, v25, v31);
					}
				}
			}
		LABEL_63:
			if (++v23 >= v22)
				return 0i64;
		}
		v24 = qword_140C63848(off_140A6A2F0, v23, qword_140C63858);
	LABEL_50:
		v25 = (_DWORD*)v24;
		goto LABEL_51;
	}
	return 0i64;
}
// 140723FBF: variable 'v28' is possibly undefined
// 140A6A2B8: using guessed type wchar_t *off_140A6A2B8[2];
// 140A6A2F0: using guessed type wchar_t *off_140A6A2F0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63958: using guessed type __int64 qword_140C63958;
// 140C643F4: using guessed type int dword_140C643F4;
// 140C64F40: using guessed type __int64 qword_140C64F40;
// 140C654CC: using guessed type int dword_140C654CC;
// 140C665D8: using guessed type __int64 qword_140C665D8;

