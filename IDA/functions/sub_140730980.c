#include "../winhttp.h"

//----- (0000000140730980) ----------------------------------------------------
__int64 __fastcall sub_140730980(_QWORD* a1)
{
	unsigned int v2; // r13d
	char* v3; // rax
	char* v4; // rax
	_DWORD* v5; // rcx
	int* v6; // rax
	__int64 v7; // rdi
	int v8; // r12d
	__int64* v9; // r15
	int* v10; // rsi
	int* v11; // r14
	__int64 v12; // rbx
	int* v13; // rax
	__int64 v14; // r15
	int* v15; // r13
	unsigned __int8 v16; // cl
	int v17; // r9d
	_DWORD* v18; // rcx
	__int64 v20; // [rsp+78h] [rbp-29h] BYREF
	int* v21; // [rsp+80h] [rbp-21h]
	int* v22; // [rsp+98h] [rbp-9h] BYREF
	int* v23; // [rsp+A0h] [rbp-1h]
	__int64 v24; // [rsp+A8h] [rbp+7h]
	__int64 v25; // [rsp+B0h] [rbp+Fh]
	__int64 v26; // [rsp+B8h] [rbp+17h] BYREF
	int* v27; // [rsp+C0h] [rbp+1Fh]
	int* v28; // [rsp+C8h] [rbp+27h]
	int* v29; // [rsp+D0h] [rbp+2Fh]

	v2 = sub_140056D60(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v22, v3);
	v4 = (char*)sub_14018F0E0(&v26, word_1409F9124)[1];
	v5 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v4 = (char*)sub_140056BB0(a1, 3u, 0i64);
	sub_14018F2D0(&v20, v4);
	if (v27)
		sub_14018B900((__int64)v27, 0);
	v6 = (int*)sub_1406622C0((__int64)a1, 4);
	if (!v6)
	{
		v7 = 0i64;
	LABEL_9:
		v8 = 0;
		goto LABEL_10;
	}
	v7 = sub_1403D90D0(qword_140C65898, *v6);
	if (!v7)
		goto LABEL_9;
	v18 = (_DWORD*)(a1[3] + 64i64);
	if ((unsigned __int64)v18 >= a1[2] || v18 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
		goto LABEL_9;
	v8 = sub_140056D60(a1, 5u);
LABEL_10:
	v9 = (__int64*)qword_140C658A0;
	v10 = v23;
	v11 = v21;
	if (qword_140C658A0)
	{
		v12 = sub_140401220((__int64*)qword_140C658A0, v2, 0i64);
		if (!v12)
			v12 = sub_140401220(v9, 4u, 0i64);
		v21 = 0i64;
		v20 = 0i64;
		v13 = sub_14018B280(16i64, 0);
		v27 = v13;
		v28 = v13;
		v29 = v13 + 4;
		if (v13)
			*(_WORD*)v13 = 0;
		sub_140402720(v12, (__int64)&v26, &v20, v10);
		v14 = v20;
		v15 = v27;
		v25 = 0i64;
		v24 = v20;
		v22 = v27;
		v23 = (int*)(unsigned int)v21;
		if (v7)
		{
			v16 = *(_BYTE*)(v7 + 434);
			v17 = *(_DWORD*)(v7 + 8);
		}
		else
		{
			v16 = 0;
			v17 = 0;
		}
		sub_1404045C0(
			(__int64*)qword_140C658A0,
			**(_DWORD**)(v12 + 8),
			*(_QWORD*)(v12 + 16),
			v17,
			v11,
			0i64,
			0,
			&v22,
			0,
			0,
			0,
			v8,
			0,
			v16);
		if (v15)
			sub_14018B900((__int64)v15, 0);
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	}
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return 0i64;
}
// 1409F9124: using guessed type unsigned __int16 word_1409F9124[40];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

