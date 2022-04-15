#include "../winhttp.h"

//----- (0000000140409B60) ----------------------------------------------------
void __fastcall sub_140409B60(__int64 a1)
{
	unsigned __int64 v2; // r15
	int* v3; // r14
	__int64 v4; // rax
	__int64 v6; // rdi
	int* v7; // rdi
	__int64 v8; // rax
	int* v9; // rsi
	__int64 v10; // r12
	__int64 v11; // rdi
	__int64 v12; // r14
	__int64 v13; // r13
	int* v14; // rsi
	__int64 v15; // rdi
	int* v16; // rax
	int* v17; // rbx
	unsigned __int64 v18; // rdi
	int* v19; // rdi
	int* v20; // r12
	__int64 v21; // rsi
	int* v22; // rax
	int* v23; // r14
	unsigned __int64 v24; // rsi
	__int64 v25; // rcx
	__int16* v26; // rax
	__int64 v27; // rcx
	__int64 i; // rbx
	__int64 v29; // rcx
	unsigned __int64 v30; // rdx
	__int64 v31; // rcx
	__int64 v32; // rax
	int* v33; // rax
	int* j; // rbx
	__int64 v35; // rdi
	__int64 v36; // rcx
	__int64 v37; // [rsp+30h] [rbp-89h] BYREF
	__int64 v38; // [rsp+38h] [rbp-81h]
	__int64 v39; // [rsp+40h] [rbp-79h]
	__int64 v40; // [rsp+48h] [rbp-71h]
	int* v41; // [rsp+58h] [rbp-61h]
	__int64 v42; // [rsp+60h] [rbp-59h]
	__int64 v43; // [rsp+68h] [rbp-51h]
	__int64 v44; // [rsp+70h] [rbp-49h]
	__int64 v45; // [rsp+78h] [rbp-41h]
	__int64 v46; // [rsp+80h] [rbp-39h]
	unsigned __int64 v47; // [rsp+88h] [rbp-31h]
	char v48[8]; // [rsp+90h] [rbp-29h] BYREF
	int* v49; // [rsp+98h] [rbp-21h]
	__int64 v51; // [rsp+A8h] [rbp-11h]
	char v52[8]; // [rsp+B0h] [rbp-9h] BYREF
	int* v53; // [rsp+B8h] [rbp-1h]
	__int64 v55; // [rsp+C8h] [rbp+Fh]
	char v56[8]; // [rsp+D0h] [rbp+17h] BYREF
	__int64 v57; // [rsp+D8h] [rbp+1Fh]
	__int64 v58; // [rsp+E0h] [rbp+27h]

	v37 = 0i64;
	v38 = 0i64;
	v39 = 0i64;
	v40 = 0i64;
	v2 = 0i64;
	v41 = sub_14018B280(24i64, 0);
	*(_QWORD*)v41 = v41;
	v3 = 0i64;
	*((_QWORD*)v41 + 1) = v41;
	v53 = 0i64;
	v55 = 0i64;
	v43 = 0i64;
	v42 = 0i64;
	v45 = 0i64;
	v44 = 0i64;
	v47 = 0i64;
	v46 = 0i64;
	v4 = 0i64;
	while (asc_140AF8A38[++v4] != 0)
		;
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v6 + 1), 0);
		v53 = v3;
		v55 = (__int64)v3 + 2 * v6 + 2;
	}
	sub_1407DB590(v3, (int*)L" \t\r\n", 2 * v6);
	if ((int*)((char*)v3 + 2 * v6))
		*((_WORD*)v3 + v6) = 0;
	v7 = *(int**)(a1 + 8);
	v8 = 0i64;
	v49 = 0i64;
	v9 = 0i64;
	v51 = 0i64;
	if (*(_WORD*)v7)
	{
		do
			++v8;
		while (*((_WORD*)v7 + v8));
	}
	v10 = (2 * v8) >> 1;
	if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v9 = sub_14018B280(2 * (v10 + 1), 0);
		v49 = v9;
		v51 = (__int64)v9 + 2 * v10 + 2;
	}
	sub_1407DB590(v9, v7, 2 * v10);
	if ((int*)((char*)v9 + 2 * v10))
		*((_WORD*)v9 + v10) = 0;
	sub_14018F570((__int64)v56, (__int64)v48, (__int64)v52, 34, 92);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	v11 = v57;
	v12 = v58;
	v13 = v57;
	if (v57 != v58)
	{
		do
		{
			v14 = *(int**)(v13 + 8);
			if (v14)
			{
				v15 = 0i64;
				if (*(_WORD*)v14)
				{
					do
						++v15;
					while (*((_WORD*)v14 + v15));
				}
				v16 = sub_14018B280(2 * v15 + 18, 0);
				if (v16)
				{
					*(_QWORD*)v16 = off_140B55060;
					*((_QWORD*)v16 + 1) = v15;
				}
				else
				{
					v16 = 0i64;
				}
				v17 = v16 + 4;
				v18 = 2 * v15;
				sub_1407DB590(v16 + 4, v14, v18);
				*(_WORD*)((char*)v17 + v18) = 0;
			}
			else
			{
				v17 = 0i64;
			}
			v19 = v41;
			v20 = sub_14018B280(24i64, 0);
			if (v20 != (int*)-16i64)
			{
				if (v17)
				{
					v21 = *((_QWORD*)v17 - 1);
					v22 = sub_14018B280(2 * v21 + 18, 0);
					if (v22)
					{
						*((_QWORD*)v22 + 1) = v21;
						*(_QWORD*)v22 = off_140B55060;
					}
					else
					{
						v22 = 0i64;
					}
					v23 = v22 + 4;
					v24 = 2 * v21;
					sub_1407DB590(v22 + 4, v17, v24);
					*(_WORD*)((char*)v23 + v24) = 0;
					*((_QWORD*)v20 + 2) = v23;
					v12 = v58;
				}
				else
				{
					*((_QWORD*)v20 + 2) = 0i64;
				}
			}
			*(_QWORD*)v20 = v19;
			*((_QWORD*)v20 + 1) = *((_QWORD*)v19 + 1);
			**((_QWORD**)v19 + 1) = v20;
			*((_QWORD*)v19 + 1) = v20;
			if (v17)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
			v13 += 32i64;
		} while (v13 != v12);
		v11 = v57;
	}
	if (*(int**)v41 == v41
		|| (int)sub_140647C90(&v37) >= 0
		&& (*(int**)v41 == v41 || (int)sub_140646FF0((__int64)&v37) >= 0 && (int)sub_140647EF0((__int64)&v37) >= 0))
	{
		LODWORD(v37) = v43;
		v38 = v42;
		LODWORD(v39) = v45;
		v40 = v44;
		sub_1403F4740(qword_140C65898, 0x959u, (__int64)&v37);
		sub_1404012C0(v27, *(int**)(a1 + 8));
	}
	else
	{
		v26 = sub_14034BDD0(v25, 48422);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v26, 0, 0i64);
	}
	for (i = v11; i != v12; i += 32i64)
	{
		v29 = *(_QWORD*)(i + 8);
		if (v29)
			sub_14018B900(v29, 0);
	}
	if (v11)
		sub_14018B900(v11, 0);
	v30 = v47;
	v31 = v46;
	if (v47)
	{
		do
		{
			v32 = *(_QWORD*)(v31 + 8 * v2);
			if (v32)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
				v30 = v47;
				v31 = v46;
			}
			++v2;
		} while (v2 < v30);
	}
	if (v31)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
	if (v44)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v44 - 16) + 8i64))(v44 - 16);
	if (v42)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
	v33 = v41;
	for (j = *(int**)v41; j != v41; v33 = v41)
	{
		v35 = (__int64)j;
		j = *(int**)j;
		v36 = *(_QWORD*)(v35 + 16);
		if (v36)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v36 - 16) + 8i64))(v36 - 16);
		sub_14018B900(v35, 0);
	}
	*(_QWORD*)v33 = v33;
	*((_QWORD*)v41 + 1) = v41;
	sub_14018B900((__int64)v41, 0);
}
// 140409E6E: variable 'v25' is possibly undefined
// 140409ED1: variable 'v27' is possibly undefined
// 140AF8A38: using guessed type wchar_t asc_140AF8A38[5];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140409B60: using guessed type char var_60[8];
// 140409B60: using guessed type char var_80[8];
// 140409B60: using guessed type char var_40[8];

