#include "../winhttp.h"

//----- (00000001404CBC60) ----------------------------------------------------
__int64 __fastcall sub_1404CBC60(__int64 a1)
{
	__int64 v1; // r14
	unsigned int v2; // ebx
	unsigned int v3; // eax
	unsigned int v4; // ebp
	unsigned int v5; // edi
	__int64 v6; // rax
	int* v7; // rsi
	int* v8; // rax
	int* v9; // rcx
	int v10; // eax
	unsigned int v11; // eax
	unsigned int v12; // edi
	__int64 v13; // rax
	__int64 v14; // r8
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64* v18; // rcx
	__int64 v19; // rcx
	_QWORD v21[2]; // [rsp+20h] [rbp-38h] BYREF
	char v22[40]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v23; // [rsp+60h] [rbp+8h] BYREF
	__int64 v24; // [rsp+68h] [rbp+10h] BYREF

	v23 = a1;
	v1 = qword_140C65A00;
	v2 = 0;
	if (qword_140C63838)
	{
		v3 = qword_140C63838(off_140A6A590, qword_140C63858);
	}
	else
	{
		if (dword_140C63CF0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140201D80() < 0)
		{
			v4 = 0;
			goto LABEL_9;
		}
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63BA8 + 40i64))(qword_140C63BA8);
	}
	v4 = v3;
LABEL_9:
	v5 = 0;
	if (v4)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C63CF0 && (int)sub_140201D80() >= 0)
			{
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BA8 + 32i64))(qword_140C63BA8, v5);
			LABEL_15:
				v7 = (int*)v6;
				if (v6)
				{
					v8 = sub_14018B280(152i64, 0);
					v9 = v8;
					if (v8)
					{
						*((_QWORD*)v8 + 1) = 0i64;
						*((_QWORD*)v8 + 2) = 0i64;
						*((_QWORD*)v8 + 3) = 0i64;
						*((_QWORD*)v8 + 5) = 0i64;
						*((_QWORD*)v8 + 6) = 0i64;
						*((_QWORD*)v8 + 7) = 0i64;
						v8[16] = 0;
						*((_QWORD*)v8 + 9) = v7;
						*((_QWORD*)v8 + 12) = 0i64;
						*((_QWORD*)v8 + 13) = 0i64;
						*((_QWORD*)v8 + 15) = 0i64;
						*((_QWORD*)v8 + 16) = 0i64;
						v8[20] = 1414420037;
						v8[37] = 0;
					}
					else
					{
						v9 = 0i64;
					}
					v10 = *v7;
					v21[1] = v9;
					LODWORD(v21[0]) = v10;
					sub_140055F80(v1, (__int64)v22, v21);
				}
			}
			if (++v5 >= v4)
				goto LABEL_21;
		}
		v6 = qword_140C63848(off_140A6A590, v5, qword_140C63858);
		goto LABEL_15;
	}
LABEL_21:
	if (qword_140C63838)
	{
		v11 = qword_140C63838(off_140A6A558, qword_140C63858);
	}
	else
	{
		if (dword_140C64744)
		{
			v12 = 0;
			goto LABEL_29;
		}
		if ((int)sub_140201940() < 0)
		{
			v12 = 0;
			goto LABEL_29;
		}
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63ED8 + 40i64))(qword_140C63ED8);
	}
	v12 = v11;
LABEL_29:
	if (v12)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C64744 && (int)sub_140201940() >= 0)
			{
				v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63ED8 + 32i64))(qword_140C63ED8, v2);
			LABEL_35:
				v14 = v13;
				if (v13)
				{
					v15 = *(_QWORD*)(v1 + 8);
					v16 = v15;
					v17 = *(_QWORD*)(v15 + 8);
					while (v17)
					{
						if (*(_DWORD*)(v17 + 32) < *(_DWORD*)(v14 + 4))
						{
							v17 = *(_QWORD*)(v17 + 24);
						}
						else
						{
							v16 = v17;
							v17 = *(_QWORD*)(v17 + 16);
						}
					}
					if (v16 == v15 || *(_DWORD*)(v14 + 4) < *(_DWORD*)(v16 + 32))
					{
						v24 = *(_QWORD*)(v1 + 8);
						v18 = &v24;
					}
					else
					{
						v23 = v16;
						v18 = &v23;
					}
					v19 = *v18;
					if (v19 != v15)
						sub_140722C90(*(_QWORD*)(v19 + 40), v14);
				}
			}
			if (++v2 >= v12)
				return 0i64;
		}
		v13 = qword_140C63848(off_140A6A558, v2, qword_140C63858);
		goto LABEL_35;
	}
	return 0i64;
}
// 140A6A558: using guessed type wchar_t *off_140A6A558[2];
// 140A6A590: using guessed type wchar_t *off_140A6A590[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BA8: using guessed type __int64 qword_140C63BA8;
// 140C63CF0: using guessed type int dword_140C63CF0;
// 140C63ED8: using guessed type __int64 qword_140C63ED8;
// 140C64744: using guessed type int dword_140C64744;
// 140C65A00: using guessed type __int64 qword_140C65A00;
// 1404CBC60: using guessed type char var_28[40];

