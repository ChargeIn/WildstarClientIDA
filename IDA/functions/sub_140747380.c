#include "../winhttp.h"

//----- (0000000140747380) ----------------------------------------------------
__int64 __fastcall sub_140747380(_QWORD* a1)
{
	int v1; // edi
	int v3; // eax
	_DWORD* v4; // r8
	int v5; // ecx
	char* v6; // rax
	char* v7; // rax
	char* v8; // rax
	int* v9; // rax
	__int64 v10; // r14
	__int64 v11; // r15
	unsigned __int64 v12; // rdi
	unsigned __int64 v13; // r12
	_WORD* v14; // rax
	__int64 v15; // rsi
	__int64 v16; // r13
	__int64* v17; // rax
	__int64 v18; // rdx
	unsigned __int64 v19; // rax
	__int64 v20; // rdi
	char* v21; // r14
	int* v22; // r15
	unsigned __int64 v23; // rbx
	__int64 v24; // rbx
	char* v25; // rbx
	__int64 v26; // rdi
	__int64 v27; // rcx
	int v28; // r9d
	__int64 v29; // rdx
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64 v32; // rax
	int* v33; // r12
	int* v34; // r14
	__int64 v35; // rdi
	__int64 v36; // rsi
	__int64* v37; // rbx
	__int64 v39; // [rsp+30h] [rbp-89h] BYREF
	__int64 v40; // [rsp+38h] [rbp-81h]
	int* v41; // [rsp+40h] [rbp-79h]
	unsigned __int64 v42; // [rsp+48h] [rbp-71h] BYREF
	unsigned __int64 v43; // [rsp+50h] [rbp-69h] BYREF
	__int64 v44; // [rsp+58h] [rbp-61h] BYREF
	__int64 v45; // [rsp+60h] [rbp-59h]
	__int64 v46; // [rsp+68h] [rbp-51h]
	char v47[8]; // [rsp+78h] [rbp-41h] BYREF
	int* v48; // [rsp+80h] [rbp-39h]
	char* v49; // [rsp+88h] [rbp-31h]
	__int64 v50; // [rsp+90h] [rbp-29h]
	__int64 v51; // [rsp+98h] [rbp-21h] BYREF
	int* v52; // [rsp+A0h] [rbp-19h]
	__int64 v53; // [rsp+B8h] [rbp-1h] BYREF
	int* v54; // [rsp+C0h] [rbp+7h]
	bool v55; // [rsp+128h] [rbp+6Fh]
	int v56; // [rsp+130h] [rbp+77h]
	__int64 v57; // [rsp+130h] [rbp+77h]
	int v58; // [rsp+138h] [rbp+7Fh]

	v1 = 1;
	v3 = sub_140056D60(a1, 1u);
	v4 = dword_140A12138;
	v56 = v3;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = v4[2];
	if (!v5 || v5 == 1 && !*v4)
		v1 = 0;
	v55 = v1 != 0;
	v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v53, v6);
	v7 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v51, v7);
	v8 = (char*)sub_140056BB0(a1, 5u, 0i64);
	sub_14018F2D0(&v44, v8);
	v9 = sub_14018B280(16i64, 0);
	v41 = v9;
	if (v9)
		*(_WORD*)v9 = 0;
	v10 = v46;
	v11 = v45;
	v40 = 0i64;
	v39 = 0i64;
	v12 = 0i64;
	v13 = (v46 - v45) >> 1;
	while (1)
	{
		if (v12 >= v13 || (HIWORD(v58) = 10, v14 = sub_14002C8A0((_WORD*)(v11 + 2 * v12), v10, v58), v14 == (_WORD*)v10))
		{
			v15 = -1i64;
		}
		else
		{
			v15 = ((__int64)v14 - v11) >> 1;
			if (v15 != -1)
			{
				v16 = ((__int64)v14 - v11) >> 1;
				goto LABEL_17;
			}
		}
		v16 = v13;
	LABEL_17:
		v17 = (__int64*)&v43;
		v42 = v16 - v12;
		v18 = 0i64;
		if (v13 - v12 >= v16 - v12)
			v17 = (__int64*)&v42;
		v43 = v13 - v12;
		v19 = v12 + *v17;
		v20 = v11 + 2 * v12;
		v21 = (char*)(v11 + 2 * v19);
		v22 = 0i64;
		v23 = ((__int64)&v21[-v20] >> 1) + 1;
		if (v23 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v24 = 2 * v23;
			v22 = sub_14018B280(v24, 0);
			v18 = (__int64)v22 + v24;
		}
		v25 = (char*)v22;
		if ((char*)v20 != v21)
		{
			v26 = v20 - (_QWORD)v22;
			do
			{
				if (v25)
					*(_WORD*)v25 = *(_WORD*)&v25[v26];
				v25 += 2;
			} while (&v25[v26] != v21);
		}
		if (v25)
			*(_WORD*)v25 = 0;
		v27 = (__int64)v41;
		v48 = v22;
		v49 = v25;
		v41 = v22;
		v50 = v18;
		if (v27)
			sub_14018B900(v27, 0);
		v12 = v16 + 1;
		if ((v25 - (char*)v22) >> 1)
			sub_140554170(&v39, (__int64)v47);
		v10 = v46;
		if (v15 == -1)
			break;
		v11 = v45;
	}
	v28 = v56;
	v29 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29520) + 32i64);
	v30 = v29;
	v31 = *(_QWORD*)(v29 + 8);
	while (v31)
	{
		if (*(_DWORD*)(v31 + 32) < v56)
		{
			v31 = *(_QWORD*)(v31 + 24);
		}
		else
		{
			v30 = v31;
			v31 = *(_QWORD*)(v31 + 16);
		}
	}
	if (v30 == v29 || (v57 = v30, v28 < *(_DWORD*)(v30 + 32)))
		v57 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29520) + 32i64);
	if (v57 == v29)
		v32 = 0i64;
	else
		v32 = *(_QWORD*)(v57 + 40);
	v33 = v52;
	v34 = v54;
	sub_1407771F0(v32, v55, v54, v52, &v39);
	v35 = v40;
	v36 = v39;
	if (v40)
	{
		v37 = (__int64*)(v39 + 8);
		do
		{
			if (*v37)
				sub_14018B900(*v37, 0);
			v37 += 4;
			--v35;
		} while (v35);
	}
	if (v36)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v36 - 16) + 8i64))(v36 - 16);
	if (v22)
		sub_14018B900((__int64)v22, 0);
	if (v45)
		sub_14018B900(v45, 0);
	if (v33)
		sub_14018B900((__int64)v33, 0);
	if (v34)
		sub_14018B900((__int64)v34, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140747380: using guessed type char var_98[8];

