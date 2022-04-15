#include "../winhttp.h"

//----- (0000000140588DC0) ----------------------------------------------------
void __fastcall sub_140588DC0(__int64 a1)
{
	__int64 v1; // rax
	int* v3; // rbp
	bool v4; // zf
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r14
	__int64 v10; // rcx
	__int64 v11; // r15
	__int64 v12; // rbp
	unsigned __int64 v13; // rsi
	__int16* v14; // rax
	int* v15; // rax
	unsigned int v16; // edi
	__int64 v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rax
	int* v20; // r14
	__int16* v21; // rdi
	__int64 v22; // rcx
	__int16* v23; // rbx
	__int64 v24; // rcx
	__int16* v25; // rax
	__int64 v26; // rcx
	__int64 i; // rbx
	__int64 v28; // rcx
	char v29[8]; // [rsp+30h] [rbp-88h] BYREF
	int* v30; // [rsp+38h] [rbp-80h]
	__int64 v32; // [rsp+48h] [rbp-70h]
	__int64 v33; // [rsp+50h] [rbp-68h] BYREF
	int* v34; // [rsp+58h] [rbp-60h]
	int* v35; // [rsp+60h] [rbp-58h]
	int* v36; // [rsp+68h] [rbp-50h]
	char v37[8]; // [rsp+70h] [rbp-48h] BYREF
	__int64 v38; // [rsp+78h] [rbp-40h]
	__int64 v39; // [rsp+80h] [rbp-38h]

	v30 = 0i64;
	v32 = 0i64;
	v1 = 0i64;
	v3 = 0i64;
	do
		v4 = asc_140B1F398[++v1] == 0;
	while (!v4);
	v5 = (2 * v1) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = sub_14018B280(2 * (v5 + 1), 0);
		v30 = v3;
		v32 = (__int64)v3 + 2 * v5 + 2;
	}
	sub_1407DB590(v3, (int*)L" \t\r\n", 2 * v5);
	if ((int*)((char*)v3 + 2 * v5))
		*((_WORD*)v3 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v34 = 0i64;
	v8 = 0i64;
	v36 = 0i64;
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
		v34 = v8;
		v36 = (int*)((char*)v8 + 2 * v9 + 2);
	}
	sub_1407DB590(v8, v6, 2 * v9);
	v35 = (int*)((char*)v8 + 2 * v9);
	if (v35)
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)v37, (__int64)&v33, (__int64)v29, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	v11 = v39;
	v12 = v38;
	v13 = (v39 - v38) >> 5;
	if (v13)
	{
		v15 = sub_14018B280(16i64, 0);
		v34 = v15;
		v35 = v15;
		v36 = v15 + 4;
		if (v15)
			*(_WORD*)v15 = 0;
		v16 = 0;
		v17 = 0i64;
		do
		{
			sub_14001C310(&v33, *(int**)(32 * v17 + v12 + 8), *(int**)(32 * v17 + v12 + 16));
			if (v17 != v13 - 1)
			{
				v19 = 0i64;
				do
					v4 = *((_WORD*)&unk_1409F2EDC + ++v19) == 0;
				while (!v4);
				sub_14001C310(&v33, (int*)&unk_1409F2EDC, (int*)((char*)&unk_1409F2EDC + 2 * v19));
			}
			v17 = ++v16;
		} while (v16 < v13);
		v20 = v34;
		v21 = sub_14034BDD0(v18, 240577);
		v23 = sub_14034BDD0(v22, 240576);
		v25 = sub_14034BDD0(v24, 240575);
		sub_140584360(v26, 2, v20, (__int64)v25, (__int64)v23, (__int64)v21);
		if (v20)
			sub_14018B900((__int64)v20, 0);
	}
	else
	{
		v14 = sub_14034BDD0(v10, 240163);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v14, 0, 0i64);
	}
	for (i = v12; i != v11; i += 32i64)
	{
		v28 = *(_QWORD*)(i + 8);
		if (v28)
			sub_14018B900(v28, 0);
	}
	if (v12)
		sub_14018B900(v12, 0);
}
// 140588F9D: conditional instruction was optimized away because rsi.8!=0
// 140588F44: variable 'v10' is possibly undefined
// 14058901B: variable 'v18' is possibly undefined
// 140589028: variable 'v22' is possibly undefined
// 140589035: variable 'v24' is possibly undefined
// 14058904F: variable 'v26' is possibly undefined
// 140B1F398: using guessed type wchar_t asc_140B1F398[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140588DC0: using guessed type char var_88[8];
// 140588DC0: using guessed type char var_48[8];

