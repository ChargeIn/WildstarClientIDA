#include "../winhttp.h"

//----- (0000000140692DF0) ----------------------------------------------------
__int64 __fastcall sub_140692DF0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // r15
	char* v5; // rax
	char* v6; // rdx
	_DWORD* v7; // rax
	int* v8; // rax
	__int64 v9; // rdi
	int v10; // esi
	int* v11; // rax
	int* v12; // rbx
	__int64 v13; // r14
	unsigned __int8 v14; // cl
	int v15; // r9d
	_DWORD* v16; // rcx
	int* v17; // rdi
	__int64 v19; // [rsp+70h] [rbp-29h] BYREF
	__int64 v20; // [rsp+78h] [rbp-21h]
	int* v21; // [rsp+80h] [rbp-19h] BYREF
	int* v22; // [rsp+88h] [rbp-11h]
	__int64 v23; // [rsp+90h] [rbp-9h]
	__int64 v24; // [rsp+98h] [rbp-1h]
	__int64 v25; // [rsp+A0h] [rbp+7h] BYREF
	int* v26; // [rsp+A8h] [rbp+Fh]
	int* v27; // [rsp+B0h] [rbp+17h]
	int* v28; // [rsp+B8h] [rbp+1Fh]
	__int64 v29; // [rsp+C0h] [rbp+27h] BYREF
	int* v30; // [rsp+C8h] [rbp+2Fh]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		return 0i64;
	v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
	if (!v4)
		return 0i64;
	v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v21, v5);
	v6 = (char*)sub_14018F0E0(&v25, word_1409F5AFC)[1];
	v7 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v7 < a1[2] && v7 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v6 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v29, v6);
	if (v26)
		sub_14018B900((__int64)v26, 0);
	v8 = (int*)sub_1406622C0((__int64)a1, 4);
	if (v8)
	{
		v9 = sub_1403D90D0(qword_140C65898, *v8);
		if (v9)
		{
			v16 = (_DWORD*)(a1[3] + 64i64);
			if ((unsigned __int64)v16 < a1[2] && v16 != dword_140A12138 && *(int*)(a1[3] + 72i64) > 0)
			{
				v10 = sub_140056D60(a1, 5u);
				goto LABEL_13;
			}
		}
	}
	else
	{
		v9 = 0i64;
	}
	v10 = 0;
LABEL_13:
	v20 = 0i64;
	v19 = 0i64;
	v11 = sub_14018B280(16i64, 0);
	v26 = v11;
	v27 = v11;
	v28 = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	v12 = v22;
	sub_140402720(v4, (__int64)&v25, &v19, v22);
	v13 = v19;
	v24 = 0i64;
	v23 = v19;
	v21 = v12;
	v22 = (int*)(unsigned int)v20;
	if (v9)
	{
		v14 = *(_BYTE*)(v9 + 434);
		v15 = *(_DWORD*)(v9 + 8);
	}
	else
	{
		v14 = 0;
		v15 = 0;
	}
	v17 = v30;
	sub_1404045C0(
		(__int64*)qword_140C658A0,
		**(_DWORD**)(v4 + 8),
		*(_QWORD*)(v4 + 16),
		v15,
		v30,
		0i64,
		0,
		&v21,
		0,
		0,
		0,
		v10,
		0,
		v14);
	if (v26)
		sub_14018B900((__int64)v26, 0);
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	if (v17)
		sub_14018B900((__int64)v17, 0);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	return 0i64;
}
// 1409F5AFC: using guessed type unsigned __int16 word_1409F5AFC[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

