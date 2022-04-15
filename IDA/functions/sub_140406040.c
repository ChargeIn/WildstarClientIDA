#include "../winhttp.h"

//----- (0000000140406040) ----------------------------------------------------
void __fastcall sub_140406040(__int64 a1)
{
	int* v2; // r14
	__int64 v3; // rax
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r15
	__int64 v10; // r14
	__int64 v11; // rdi
	unsigned __int64 v12; // rax
	int* v13; // rsi
	__int64 v14; // rax
	int* v15; // r15
	__int64 v16; // rbx
	unsigned __int64 v17; // rbx
	__int64 v18; // r13
	unsigned __int64 v19; // rax
	__int64 v20; // rcx
	unsigned __int64 v21; // rsi
	_QWORD* v22; // rbx
	__int64 v23; // rbx
	char* v24; // rax
	__int64* v25; // rbx
	__int64 v26; // rbx
	int v27; // eax
	__int64 v28; // rax
	__int64 i; // rbx
	__int64 v30; // rcx
	__int64 v31; // [rsp+20h] [rbp-39h]
	__int64 v32; // [rsp+30h] [rbp-29h] BYREF
	__int64 v33; // [rsp+38h] [rbp-21h]
	char* v34; // [rsp+40h] [rbp-19h]
	__int64 v35; // [rsp+48h] [rbp-11h]
	char v36[8]; // [rsp+50h] [rbp-9h] BYREF
	int* v37; // [rsp+58h] [rbp-1h]
	__int64 v39; // [rsp+68h] [rbp+Fh]
	char v40[8]; // [rsp+70h] [rbp+17h] BYREF
	__int64 v41; // [rsp+78h] [rbp+1Fh]
	__int64 v42; // [rsp+80h] [rbp+27h]
	int* v43; // [rsp+C0h] [rbp+67h] BYREF

	v2 = 0i64;
	v33 = 0i64;
	v35 = 0i64;
	v3 = 0i64;
	while (asc_140AF88A0[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v33 = (__int64)v2;
		v35 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	v34 = (char*)v2 + 2 * v5;
	if (v34)
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v37 = 0i64;
	v8 = 0i64;
	v39 = 0i64;
	if (*(_WORD*)v6)
	{
		do
			++v7;
		while (*((_WORD*)v6 + v7));
	}
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v8 = sub_14018B280(2 * (v9 + 1), 0);
		v37 = v8;
		v39 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	if ((int*)((char*)v8 + 2 * v9))
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)v40, (__int64)v36, (__int64)&v32, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v10 = v42;
	v11 = v41;
	v12 = (v42 - v41) >> 5;
	if (v12 == 1)
	{
		v13 = *(int**)(v41 + 8);
		v14 = 0i64;
		v15 = 0i64;
		if (*(_WORD*)v13)
		{
			do
				++v14;
			while (*((_WORD*)v13 + v14));
		}
		v16 = (2 * v14) >> 1;
		if ((unsigned __int64)(v16 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v15 = sub_14018B280(2 * (v16 + 1), 0);
		v17 = 2 * v16;
		sub_1407DB590(v15, v13, v17);
		if ((int*)((char*)v15 + v17))
			*(_WORD*)((char*)v15 + v17) = 0;
		v18 = qword_140C658A0;
		v43 = v15;
		v19 = (*(__int64(__fastcall**)(int**))(qword_140C658A0 + 40))(&v43);
		v20 = *(_QWORD*)(v18 + 32);
		v21 = v19;
		v22 = *(_QWORD**)(v20 + 8 * (v19 % *(_QWORD*)(v18 + 24)));
		if (!v22)
			goto LABEL_28;
		while (v21 != *v22 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v18 + 48))(&v43, v22 + 2))
		{
			v22 = (_QWORD*)v22[1];
			if (!v22)
				goto LABEL_28;
		}
		v25 = v22 + 3;
		if (v25)
			v23 = *v25;
		else
			LABEL_28:
		v23 = 0i64;
		if (v15)
			sub_14018B900((__int64)v15, 0);
		v32 = 0i64;
		v33 = 0i64;
		v34 = 0i64;
		v35 = 0i64;
		if (!v23)
		{
			v26 = *(_QWORD*)(v11 + 8);
			v27 = sub_140404390(v20, v11);
			v33 = v26;
			LODWORD(v32) = v27;
			v24 = (char*)&unk_1409E857C;
		LABEL_39:
			v34 = v24;
			LODWORD(v35) = 0;
			sub_1403F4740(qword_140C65898, 0x1BAu, (__int64)&v32);
			goto LABEL_41;
		}
		v33 = *(_QWORD*)(v11 + 8);
		v24 = (char*)&unk_1409E854C;
	LABEL_38:
		LODWORD(v32) = 18;
		goto LABEL_39;
	}
	if (v12 >= 2)
	{
		v33 = 0i64;
		v32 = 0i64;
		v34 = 0i64;
		v35 = 0i64;
		v33 = *(_QWORD*)(v41 + 8);
		v24 = *(char**)(v41 + 40);
		goto LABEL_38;
	}
	v28 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
	LODWORD(v31) = 1;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v28, v31);
LABEL_41:
	for (i = v11; i != v10; i += 32i64)
	{
		v30 = *(_QWORD*)(i + 8);
		if (v30)
			sub_14018B900(v30, 0);
	}
	if (v11)
		sub_14018B900(v11, 0);
}
// 14040629E: variable 'v20' is possibly undefined
// 140406337: variable 'v31' is possibly undefined
// 140AF88A0: using guessed type wchar_t asc_140AF88A0[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140406040: using guessed type char var_60[8];
// 140406040: using guessed type char var_40[8];

