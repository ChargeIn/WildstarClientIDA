#include "../winhttp.h"

//----- (000000014058B030) ----------------------------------------------------
void __fastcall sub_14058B030(__int64 a1)
{
	int* v2; // r14
	__int64 v3; // rax
	bool v4; // zf
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r15
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rsi
	__int16* v13; // rax
	int* v14; // rax
	int* v15; // rax
	int* v16; // r14
	__int64 v17; // rax
	__int64 v18; // r15
	_WORD* v19; // rax
	__int64 v20; // r13
	__int64 v21; // r15
	unsigned __int64 v22; // rax
	__int64 v23; // rcx
	unsigned __int64 v24; // r14
	_QWORD* v25; // rbx
	__int64 v26; // r15
	unsigned __int64 v27; // r14
	__int64 v28; // rbx
	__int64 v29; // r12
	__int16* v30; // rax
	__int64 i; // rbx
	__int64 v32; // rcx
	__int64* v33; // r8
	__int64 v34; // rbx
	__int64 v35; // rcx
	__int64 j; // rbx
	__int64 v37; // rcx
	__int64 v38; // [rsp+30h] [rbp-39h] BYREF
	int* v39; // [rsp+38h] [rbp-31h]
	int* v40; // [rsp+40h] [rbp-29h]
	int* v41; // [rsp+48h] [rbp-21h]
	char v42[8]; // [rsp+50h] [rbp-19h] BYREF
	int* v43; // [rsp+58h] [rbp-11h]
	_WORD* v44; // [rsp+60h] [rbp-9h]
	__int64 v45; // [rsp+68h] [rbp-1h]
	__int64 v46; // [rsp+70h] [rbp+7h] BYREF
	__int64 v47; // [rsp+78h] [rbp+Fh]
	int* v48; // [rsp+80h] [rbp+17h]
	int* v49; // [rsp+88h] [rbp+1Fh]
	void* v50; // [rsp+90h] [rbp+27h]
	__int64 v51; // [rsp+98h] [rbp+2Fh]
	__int64 v52; // [rsp+D0h] [rbp+67h] BYREF

	v2 = 0i64;
	v39 = 0i64;
	v41 = 0i64;
	v3 = 0i64;
	do
		v4 = asc_140B1F468[++v3] == 0;
	while (!v4);
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v39 = v2;
		v41 = (int*)((char*)v2 + 2 * v5 + 2);
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	v40 = (int*)((char*)v2 + 2 * v5);
	if (v40)
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v8 = 0i64;
	v43 = 0i64;
	v45 = 0i64;
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
		v43 = v8;
		v45 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	v44 = (_WORD*)v8 + v9;
	if (v44)
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)&v46, (__int64)v42, (__int64)&v38, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v11 = (__int64)v48;
	v12 = v47;
	if ((((unsigned __int64)v48 - v47) & 0xFFFFFFFFFFFFFFE0ui64) == 0)
	{
		v13 = sub_14034BDD0(v10, 428554);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v13, 0, 0i64);
	LABEL_46:
		for (i = v12; i != v11; i += 32i64)
		{
			v32 = *(_QWORD*)(i + 8);
			if (v32)
				sub_14018B900(v32, 0);
		}
		goto LABEL_50;
	}
	v14 = sub_14018B280(16i64, 0);
	v47 = (__int64)v14;
	v48 = v14;
	v49 = v14 + 4;
	if (v14)
		*(_WORD*)v14 = 0;
	v15 = sub_14018B280(16i64, 0);
	v39 = v15;
	v40 = v15;
	v41 = v15 + 4;
	if (v15)
		*(_WORD*)v15 = 0;
	v16 = 0i64;
	v43 = 0i64;
	v45 = 0i64;
	v17 = 0i64;
	do
		v4 = asc_140B1F428[++v17] == 0;
	while (!v4);
	v18 = (2 * v17) >> 1;
	if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v16 = sub_14018B280(2 * (v18 + 1), 0);
		v43 = v16;
		v45 = (__int64)v16 + 2 * v18 + 2;
	}
	sub_1407DB590(v16, (int*)L" \t\r\n", 2 * v18);
	v19 = (_WORD*)v16 + v18;
	v44 = v19;
	if (v19)
		*v19 = 0;
	sub_14018FBD0(a1, &v46, &v38, (__int64)v42);
	if (v16)
		sub_14018B900((__int64)v16, 0);
	v20 = v47;
	v21 = qword_140C658A0;
	v52 = v47;
	v22 = (*(__int64(__fastcall**)(__int64*))(qword_140C658A0 + 40))(&v52);
	v23 = *(_QWORD*)(v21 + 32);
	v24 = v22;
	v25 = *(_QWORD**)(v23 + 8 * (v22 % *(_QWORD*)(v21 + 24)));
	if (!v25)
		goto LABEL_42;
	while (v24 != *v25 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v21 + 48))(&v52, v25 + 2))
	{
		v25 = (_QWORD*)v25[1];
		if (!v25)
			goto LABEL_42;
	}
	if (v25 == (_QWORD*)-24i64)
		goto LABEL_42;
	v26 = v25[3];
	if (!v26)
		goto LABEL_42;
	v27 = qword_140C7DE20;
	v28 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_42;
	v29 = qword_140C7DE18;
	while (sub_140580040(*(__int64**)(v29 + 8 * v28)) != v26)
	{
		if (++v28 >= v27)
			goto LABEL_42;
	}
	v33 = *(__int64**)(v29 + 8 * v28);
	if (!v33)
	{
	LABEL_42:
		v30 = sub_14034BDD0(v23, 240550);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v30, 0, 0i64);
		if (v39)
			sub_14018B900((__int64)v39, 0);
		if (v20)
			sub_14018B900(v20, 0);
		goto LABEL_46;
	}
	v34 = (__int64)v39;
	if ((((char*)v40 - (char*)v39) & 0xFFFFFFFFFFFFFFFEui64) != 0)
	{
		sub_14057FC80(v33, (__int64)v39);
	}
	else
	{
		v46 = 0i64;
		v47 = 0i64;
		v48 = 0i64;
		v49 = 0i64;
		v50 = 0i64;
		v51 = 27i64;
		LODWORD(v38) = *(_DWORD*)(qword_140C635F0 + 5760);
		v35 = *v33;
		v46 = v38;
		v47 = v35;
		v50 = &unk_1409F2FDC;
		v49 = 0i64;
		sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)&v46);
	}
	if (v34)
		sub_14018B900(v34, 0);
	if (v20)
		sub_14018B900(v20, 0);
	for (j = v12; j != v11; j += 32i64)
	{
		v37 = *(_QWORD*)(j + 8);
		if (v37)
			sub_14018B900(v37, 0);
	}
LABEL_50:
	if (v12)
		sub_14018B900(v12, 0);
}
// 14058B1AD: variable 'v10' is possibly undefined
// 14058B362: variable 'v23' is possibly undefined
// 140B1F428: using guessed type wchar_t asc_140B1F428[5];
// 140B1F468: using guessed type wchar_t asc_140B1F468[5];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 14058B030: using guessed type char var_70[8];

