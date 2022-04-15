#include "../winhttp.h"

//----- (000000014063DF50) ----------------------------------------------------
void __fastcall sub_14063DF50(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v5; // rbp
	int* v6; // r14
	__int64 v7; // rax
	__int64 v8; // rdi
	int* v9; // rdi
	__int64 v10; // rax
	int* v11; // rsi
	__int64 v12; // r15
	__int64 v13; // rcx
	__int64 v14; // r15
	__int64 v15; // r14
	__int64 v16; // rcx
	__int64 v17; // rax
	int v18; // edx
	__int64 v19; // rbx
	bool v20; // zf
	int v21; // edx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int16* v24; // rax
	int* v25; // rsi
	__int64 v26; // rdi
	int* v27; // rax
	int* v28; // rbx
	unsigned __int64 v29; // rdi
	int* v30; // rbp
	int* v31; // r13
	__int64 v32; // r12
	__int64 v33; // rsi
	__int64 v34; // r12
	__int64 v35; // rsi
	int* v36; // rbp
	__int16* v37; // rax
	__int64 i; // rbx
	__int64 v39; // rcx
	char v40[8]; // [rsp+30h] [rbp-88h] BYREF
	int* v41; // [rsp+38h] [rbp-80h]
	__int64 v43; // [rsp+48h] [rbp-70h]
	char v44[8]; // [rsp+50h] [rbp-68h] BYREF
	int* v45; // [rsp+58h] [rbp-60h]
	__int64 v47; // [rsp+68h] [rbp-50h]
	char v48[8]; // [rsp+70h] [rbp-48h] BYREF
	__int64 v49; // [rsp+78h] [rbp-40h]
	__int64 v50; // [rsp+80h] [rbp-38h]

	v5 = *(_QWORD*)(qword_140C65898 + 25744);
	if (!v5)
		return;
	v6 = 0i64;
	v41 = 0i64;
	v43 = 0i64;
	v7 = 0i64;
	do
		v20 = asc_140B28D18[++v7] == 0;
	while (!v20);
	v8 = (2 * v7) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v8 + 1), 0);
		v41 = v6;
		v43 = (__int64)v6 + 2 * v8 + 2;
	}
	sub_1407DB590(v6, (int*)L" \t\r\n", 2 * v8);
	if ((int*)((char*)v6 + 2 * v8))
		*((_WORD*)v6 + v8) = 0;
	v9 = *(int**)(a1 + 8);
	v10 = 0i64;
	v45 = 0i64;
	v11 = 0i64;
	v47 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v10;
		while (*((_WORD*)v9 + v10));
	}
	v12 = (2 * v10) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v11 = sub_14018B280(2 * (v12 + 1), 0);
		v45 = v11;
		v47 = (__int64)v11 + 2 * v12 + 2;
	}
	sub_1407DB590(v11, v9, 2 * v12);
	if ((int*)((char*)v11 + 2 * v12))
		*((_WORD*)v11 + v12) = 0;
	sub_14018F570((__int64)v48, (__int64)v44, (__int64)v40, 34, 92);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v14 = v50;
	v15 = v49;
	if ((v50 - v49) >> 5)
	{
		v22 = sub_1403D9200(v13, *(unsigned __int16**)(v49 + 8));
		v19 = v22;
		if (!v22)
		{
			v24 = sub_14034BDD0(v23, 363703);
			v25 = (int*)v24;
			if (v24)
			{
				v26 = 0i64;
				if (*v24)
				{
					do
						++v26;
					while (v24[v26]);
				}
				v27 = sub_14018B280(2 * v26 + 18, 0);
				if (v27)
				{
					*((_QWORD*)v27 + 1) = v26;
					*(_QWORD*)v27 = off_140B55060;
				}
				else
				{
					v27 = 0i64;
				}
				v28 = v27 + 4;
				v29 = 2 * v26;
				sub_1407DB590(v27 + 4, v25, v29);
				*(_WORD*)((char*)v28 + v29) = 0;
			}
			else
			{
				v28 = 0i64;
			}
			v30 = *(int**)(v15 + 8);
			if (v30)
			{
				v31 = v28;
				if (v28)
					v32 = *((_QWORD*)v28 - 1);
				else
					v32 = 0i64;
				v33 = 0i64;
				if (*(_WORD*)v30)
				{
					do
						++v33;
					while (*((_WORD*)v30 + v33));
				}
				v28 = (int*)sub_14018D140(v28, v33 + v32);
				sub_1407DB590((int*)((char*)v28 + 2 * v32), v30, 2 * v33);
				*((_WORD*)v28 + v33 + v32) = 0;
				if (v31 != v28 && v31)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v31 - 2) + 8i64))(v31 - 4);
			}
			if (v28)
				v34 = *((_QWORD*)v28 - 1);
			else
				v34 = 0i64;
			v35 = 0i64;
			do
				v20 = asc_140B25034[++v35] == 0;
			while (!v20);
			v36 = (int*)sub_14018D140(v28, v35 + v34);
			sub_1407DB590((int*)((char*)v36 + 2 * v34), (int*)L"'.", 2 * v35);
			*((_WORD*)v36 + v35 + v34) = 0;
			if (v28 != v36 && v28)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v28 - 2) + 8i64))(v28 - 4);
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v36, 0, 0i64);
			if (v36)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v36 - 2) + 8i64))(v36 - 4);
			goto LABEL_57;
		}
		v20 = (unsigned int)sub_14045A950(v5, *(_DWORD*)(v22 + 8)) == 2;
	}
	else
	{
		v16 = qword_140C65898;
		v17 = *(_QWORD*)(qword_140C65898 + 25744);
		if (!v17 || (v18 = *(_DWORD*)(v17 + 264)) == 0 || (v19 = sub_1403D90D0(qword_140C65898, v18)) == 0)
		{
			v21 = 363702;
			goto LABEL_55;
		}
		v20 = *(_DWORD*)(v5 + 268) == 2;
	}
	if (v20)
	{
		sub_14055B8B0(v16, v19, a3, a4);
		goto LABEL_57;
	}
	v21 = 363959;
LABEL_55:
	v37 = sub_14034BDD0(v16, v21);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v37, 0, 0i64);
LABEL_57:
	for (i = v15; i != v14; i += 32i64)
	{
		v39 = *(_QWORD*)(i + 8);
		if (v39)
			sub_14018B900(v39, 0);
	}
	if (v15)
		sub_14018B900(v15, 0);
}
// 14063E133: variable 'v13' is possibly undefined
// 14063E149: variable 'v23' is possibly undefined
// 14063E2DB: variable 'v16' is possibly undefined
// 140B25034: using guessed type wchar_t asc_140B25034[3];
// 140B28D18: using guessed type wchar_t asc_140B28D18[5];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 14063DF50: using guessed type char var_88[8];
// 14063DF50: using guessed type char var_68[8];
// 14063DF50: using guessed type char var_48[8];

