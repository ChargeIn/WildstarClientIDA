//----- (0000000140485790) ----------------------------------------------------
__int64 __fastcall sub_140485790(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r12d
	unsigned int i; // r15d
	__int64 v5; // rax
	__int64 v6; // rdi
	int* v7; // rcx
	unsigned int v8; // r9d
	__int64 v9; // rax
	int* v10; // rcx
	unsigned int v11; // r9d
	__int64 v12; // rax
	unsigned int v13; // esi
	__int64 v14; // rax
	unsigned int v15; // ecx
	__int64 v16; // r8
	__int64 v17; // rdx
	unsigned int v18; // ecx
	int* v19; // rcx
	unsigned int v20; // r9d
	__int64 v21; // rax
	unsigned int v22; // ebx
	unsigned int* v23; // rsi
	__int64 v24; // r14
	int* v25; // rax
	int* v26; // rsi
	unsigned int v27; // ebx
	int* v29; // [rsp+38h] [rbp-39h] BYREF
	__int64 v30; // [rsp+40h] [rbp-31h]
	char v31[16]; // [rsp+48h] [rbp-29h] BYREF
	char v32[16]; // [rsp+58h] [rbp-19h] BYREF
	char v33[16]; // [rsp+68h] [rbp-9h] BYREF
	char v34[8]; // [rsp+78h] [rbp+7h] BYREF
	int* v35; // [rsp+80h] [rbp+Fh]
	__int64 v36; // [rsp+88h] [rbp+17h]
	unsigned int v37; // [rsp+D8h] [rbp+67h] BYREF

	v36 = 0i64;
	v35 = sub_14018B280(40i64, 0);
	*(_BYTE*)v35 = 0;
	*((_QWORD*)v35 + 1) = 0i64;
	*((_QWORD*)v35 + 2) = v35;
	*((_QWORD*)v35 + 3) = v35;
	v30 = 0i64;
	v29 = 0i64;
	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A69C60, qword_140C63858);
	}
	else
	{
		if (dword_140C63EC0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_1401F6B00() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63D10 + 40i64))(qword_140C63D10);
	}
	v3 = v2;
LABEL_9:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A69C60, i, qword_140C63858);
		}
		else
		{
			if (dword_140C63EC0)
			{
				v6 = 0i64;
				goto LABEL_18;
			}
			if ((int)sub_1401F6B00() < 0)
			{
				v6 = 0i64;
				goto LABEL_18;
			}
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63D10 + 32i64))(qword_140C63D10, i);
		}
		v6 = v5;
	LABEL_18:
		if (*(float*)(v6 + 56) <= 0.0)
		{
			v7 = v35;
			v8 = *(_DWORD*)v6;
			v9 = *((_QWORD*)v35 + 1);
			v37 = *(_DWORD*)v6;
			if (!v9)
				goto LABEL_26;
			do
			{
				if (*(_DWORD*)(v9 + 32) < v8)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v7 = (int*)v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			} while (v9);
			if (v7 == v35 || v8 < v7[8])
			{
			LABEL_26:
				sub_1400035B0();
				sub_1400293C0((__int64)v34, (__int64)v31, (int*)&v37);
			}
			continue;
		}
		if (*(_DWORD*)(v6 + 4) >= 0x1Au)
		{
			v10 = v35;
			v11 = *(_DWORD*)v6;
			v12 = *((_QWORD*)v35 + 1);
			v37 = *(_DWORD*)v6;
			if (!v12)
				goto LABEL_35;
			do
			{
				if (*(_DWORD*)(v12 + 32) < v11)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v10 = (int*)v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			} while (v12);
			if (v10 == v35 || v11 < v10[8])
			{
			LABEL_35:
				sub_1400035B0();
				sub_1400293C0((__int64)v34, (__int64)v32, (int*)&v37);
			}
			continue;
		}
		v13 = *(_DWORD*)(v6 + 32);
		if (qword_140C63840)
		{
			v14 = qword_140C63840(off_140A69BB8, v13, qword_140C63858);
		}
		else
		{
			if (dword_140C64F08 || (int)sub_1401F5E40() < 0)
				goto LABEL_67;
			v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64260 + 24i64))(qword_140C64260, v13);
		}
		if (v14)
		{
			v15 = *(_DWORD*)(v6 + 28);
			if (!v15 || sub_1401F64E0(v15))
			{
				v18 = *(_DWORD*)(v6 + 684);
				if (!v18 || sub_1401F71A0(v18))
				{
					if (*(_DWORD*)(v6 + 44))
					{
						v22 = 0;
						v23 = (unsigned int*)(v6 + 360);
						do
						{
							if (*v23 && !sub_1402096E0(*v23))
								sub_1404856C0(*(_DWORD*)v6, 8i64, v6 + 4 * (v22 + 90i64), (__int64)v34);
							++v22;
							++v23;
						} while (v22 < 2);
						v24 = v30 + 1;
						v25 = sub_14018DB00((__int64)v29, v30 + 1, 8i64);
						v26 = v25;
						*(_QWORD*)&v25[2 * v30] = v6;
						if (v29 != v25)
						{
							sub_1407DB590(v25, v29, 8 * v30);
							if (v29)
								(*(void(__fastcall**)(int*))(*((_QWORD*)v29 - 2) + 8i64))(v29 - 4);
							v29 = v26;
						}
						v30 = v24;
					}
					else
					{
						v19 = v35;
						v20 = *(_DWORD*)v6;
						v21 = *((_QWORD*)v35 + 1);
						v37 = *(_DWORD*)v6;
						if (!v21)
							goto LABEL_56;
						do
						{
							if (*(_DWORD*)(v21 + 32) < v20)
							{
								v21 = *(_QWORD*)(v21 + 24);
							}
							else
							{
								v19 = (int*)v21;
								v21 = *(_QWORD*)(v21 + 16);
							}
						} while (v21);
						if (v19 == v35 || v20 < v19[8])
						{
						LABEL_56:
							sub_1400035B0();
							sub_1400293C0((__int64)v34, (__int64)v33, (int*)&v37);
						}
					}
					continue;
				}
				v16 = v6 + 684;
				v17 = 7i64;
			}
			else
			{
				v16 = v6 + 28;
				v17 = 6i64;
			}
			goto LABEL_68;
		}
	LABEL_67:
		v16 = v6 + 32;
		v17 = 5i64;
	LABEL_68:
		sub_1404856C0(*(_DWORD*)v6, v17, v16, (__int64)v34);
	}
	v27 = (*(__int64(__fastcall**)(__int64, int**))(*(_QWORD*)a1 + 8i64))(a1, &v29);
	if (v29)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v29 - 2) + 8i64))(v29 - 4);
	sub_140008410((__int64)v34);
	sub_14018B900((__int64)v35, 0);
	return v27;
}
// 140A69BB8: using guessed type wchar_t *off_140A69BB8[2];
// 140A69C60: using guessed type wchar_t *off_140A69C60[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D10: using guessed type __int64 qword_140C63D10;
// 140C63EC0: using guessed type int dword_140C63EC0;
// 140C64260: using guessed type __int64 qword_140C64260;
// 140C64F08: using guessed type int dword_140C64F08;
// 140485790: using guessed type char var_80[16];
// 140485790: using guessed type char var_50[8];
// 140485790: using guessed type char var_70[16];
// 140485790: using guessed type char var_60[16];

