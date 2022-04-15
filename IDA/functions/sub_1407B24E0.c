#include "../winhttp.h"

//----- (00000001407B24E0) ----------------------------------------------------
__int64 __fastcall sub_1407B24E0(__int64 a1, int** a2)
{
	__int64 v2; // rdi
	int* v5; // r14
	__int64 v6; // rax
	bool v7; // zf
	__int64 v8; // rsi
	int* v9; // rsi
	__int64 v10; // rax
	__int64 v11; // r15
	_WORD* v12; // rax
	__int64 v13; // r14
	__int64 v14; // rsi
	unsigned int v15; // edi
	unsigned __int64 v16; // rcx
	__int64 v17; // r11
	__int64 v18; // r8
	__int64 v19; // rdx
	unsigned __int64 v20; // rcx
	__int64 v21; // r11
	__int16 v22; // dx
	__int16 v23; // ax
	__int64 i; // rbx
	__int64 v25; // rcx
	int v27; // [rsp+20h] [rbp-59h]
	__int64 v28; // [rsp+30h] [rbp-49h] BYREF
	char v29[8]; // [rsp+38h] [rbp-41h] BYREF
	int* v30; // [rsp+40h] [rbp-39h]
	__int64 v32; // [rsp+50h] [rbp-29h]
	char v33[8]; // [rsp+58h] [rbp-21h] BYREF
	int* v34; // [rsp+60h] [rbp-19h]
	_WORD* v35; // [rsp+68h] [rbp-11h]
	__int64 v36; // [rsp+70h] [rbp-9h]
	char v37[8]; // [rsp+78h] [rbp-1h] BYREF
	__int64 v38; // [rsp+80h] [rbp+7h]
	__int64 v39; // [rsp+88h] [rbp+Fh]
	__int64 v40; // [rsp+F0h] [rbp+77h] BYREF
	__int64 v41; // [rsp+F8h] [rbp+7Fh] BYREF

	v2 = 0i64;
	v5 = 0i64;
	v30 = 0i64;
	v32 = 0i64;
	v6 = 0i64;
	do
		v7 = asc_140B53A58[++v6] == 0;
	while (!v7);
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v8 + 1), 0);
		v30 = v5;
		v32 = (__int64)v5 + 2 * v8 + 2;
	}
	sub_1407DB590(v5, (int*)L" \r\n\t", 2 * v8);
	if ((int*)((char*)v5 + 2 * v8))
		*((_WORD*)v5 + v8) = 0;
	v9 = 0i64;
	v34 = 0i64;
	v36 = 0i64;
	v10 = 0i64;
	do
		v7 = asc_140B53A68[++v10] == 0;
	while (!v7);
	v11 = (2 * v10) >> 1;
	if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v9 = sub_14018B280(2 * (v11 + 1), 0);
		v34 = v9;
		v36 = (__int64)v9 + 2 * v11 + 2;
	}
	sub_1407DB590(v9, (int*)L"{[]},:", 2 * v11);
	v12 = (_WORD*)v9 + v11;
	v35 = v12;
	if (v12)
		*v12 = 0;
	sub_1407B0A40((__int64)v37, a1, (__int64)v33, (__int64)v29, v27);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v5)
		sub_14018B900((__int64)v5, 0);
	v13 = v39;
	v14 = v38;
	if (((v39 - v38) & 0xFFFFFFFFFFFFFFE0ui64) == 0)
	{
		v15 = -2147467259;
		goto LABEL_39;
	}
	v16 = 0i64;
	do
		++v16;
	while (word_1409FAF8C[v16]);
	v17 = *(_QWORD*)(v38 + 8);
	v18 = (*(_QWORD*)(v38 + 16) - v17) >> 1;
	if (v18 == v16)
	{
		v19 = 0i64;
		if (!v16)
		{
		LABEL_27:
			v40 = v39;
			v41 = v38 + 32;
			v15 = sub_1407B1670(&v41, &v40, &v28, a2);
			goto LABEL_39;
		}
		while (*(_WORD*)(v17 + 2 * v19) == word_1409FAF8C[v19])
		{
			if (++v19 >= v16)
				goto LABEL_27;
		}
	}
	v20 = 0i64;
	do
		++v20;
	while (word_1409FAFAC[v20]);
	if (v18 == v20)
	{
		if (!v20)
		{
		LABEL_37:
			v40 = v39;
			v41 = v38 + 32;
			v15 = sub_1407B1160(&v41, &v40, &v28, a2);
			goto LABEL_39;
		}
		v21 = v17 - (_QWORD)word_1409FAFAC;
		while (1)
		{
			v22 = *(_WORD*)((char*)&word_1409FAFAC[v2] + v21);
			v23 = word_1409FAFAC[v2];
			if (v22 != v23)
				break;
			if (++v2 >= v20)
				goto LABEL_37;
		}
	}
	v15 = -2147418113;
LABEL_39:
	for (i = v14; i != v13; i += 32i64)
	{
		v25 = *(_QWORD*)(i + 8);
		if (v25)
			sub_14018B900(v25, 0);
	}
	if (v14)
		sub_14018B900(v14, 0);
	return v15;
}
// 1407B26E1: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1407B2754: conditional instruction was optimized away because r15d.4 is in (==1|==FFFFFFFF)
// 1407B261C: variable 'v27' is possibly undefined
// 1409FAF8C: using guessed type _WORD word_1409FAF8C[16];
// 1409FAFAC: using guessed type _WORD word_1409FAFAC[272];
// 140B53A58: using guessed type wchar_t asc_140B53A58[5];
// 140B53A68: using guessed type wchar_t asc_140B53A68[7];
// 1407B24E0: using guessed type char var_98[8];
// 1407B24E0: using guessed type char var_78[8];
// 1407B24E0: using guessed type char var_58[8];

