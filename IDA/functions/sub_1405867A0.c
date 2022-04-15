#include "../winhttp.h"

//----- (00000001405867A0) ----------------------------------------------------
void __fastcall sub_1405867A0(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int16* v4; // rax
	__int64 v5; // r15
	int* v6; // rbp
	__int64 v7; // rax
	__int64 v9; // rdi
	int* v10; // rdi
	__int64 v11; // rax
	int* v12; // rsi
	__int64 v13; // r14
	__int64 v14; // rcx
	__int64 v15; // rdi
	_QWORD* v16; // rsi
	__int16* v17; // rax
	_QWORD* j; // rbx
	__int64 v19; // rcx
	WCHAR* v20; // rcx
	int v21; // eax
	WCHAR* v22; // rcx
	int v23; // ebx
	int v24; // eax
	int v25; // ecx
	int v26; // eax
	WCHAR* v27; // rcx
	int v28; // eax
	WCHAR* v29; // rcx
	int v30; // eax
	_QWORD* i; // rbx
	__int64 v32; // rcx
	char v33[8]; // [rsp+30h] [rbp-98h] BYREF
	int* v34; // [rsp+38h] [rbp-90h]
	__int64 v36; // [rsp+48h] [rbp-80h]
	char v37[8]; // [rsp+50h] [rbp-78h] BYREF
	int* v38; // [rsp+58h] [rbp-70h]
	__int64 v40; // [rsp+68h] [rbp-60h]
	char v41[8]; // [rsp+70h] [rbp-58h] BYREF
	__int64 v42; // [rsp+78h] [rbp-50h]
	__int64 v43; // [rsp+80h] [rbp-48h]
	int v44; // [rsp+E0h] [rbp+18h] BYREF
	int v45; // [rsp+E4h] [rbp+1Ch]
	int v46; // [rsp+E8h] [rbp+20h] BYREF
	int v47; // [rsp+ECh] [rbp+24h]

	v2 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 1)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v5 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
	if (!v3)
	{
	LABEL_4:
		v4 = sub_14034BDD0(a1, 114120);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
		return;
	}
	v6 = 0i64;
	v34 = 0i64;
	v36 = 0i64;
	v7 = 0i64;
	while (asc_140B1F250[++v7] != 0)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v9 + 1), 0);
		v34 = v6;
		v36 = (__int64)v6 + 2 * v9 + 2;
	}
	sub_1407DB590(v6, (int*)L" \t\r\n", 2 * v9);
	if ((int*)((char*)v6 + 2 * v9))
		*((_WORD*)v6 + v9) = 0;
	v10 = *(int**)(a1 + 8);
	v11 = 0i64;
	v38 = 0i64;
	v12 = 0i64;
	v40 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v11;
		while (*((_WORD*)v10 + v11));
	}
	v13 = (2 * v11) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v12 = sub_14018B280(2 * (v13 + 1), 0);
		v38 = v12;
		v40 = (__int64)v12 + 2 * v13 + 2;
	}
	sub_1407DB590(v12, v10, 2 * v13);
	if ((int*)((char*)v12 + 2 * v13))
		*((_WORD*)v12 + v13) = 0;
	sub_14018F570((__int64)v41, (__int64)v37, (__int64)v33, 34, 92);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v15 = v43;
	v16 = (_QWORD*)v42;
	if ((unsigned __int64)((v43 - v42) >> 5) >= 4)
	{
		v20 = *(WCHAR**)(v42 + 8);
		v46 = 1;
		v21 = sub_14018E820(v20);
		v22 = (WCHAR*)v16[9];
		v23 = *(_DWORD*)(v5 + 16);
		v47 = v21 - 1;
		v24 = sub_14018E820(v22);
		v25 = 200;
		if (v23 == 1)
			v25 = 100;
		v26 = v25 + v24 - 1;
		v27 = (WCHAR*)v16[13];
		v44 = v26;
		v28 = sub_14018E820(v27);
		v29 = (WCHAR*)v16[5];
		v45 = v28 - 1;
		v30 = sub_14018E820(v29);
		sub_14057F0B0((__int64*)v5, (__int64)&v46, v30, &v44, 0);
		for (i = v16; i != (_QWORD*)v15; i += 4)
		{
			v32 = i[1];
			if (v32)
				sub_14018B900(v32, 0);
		}
		goto LABEL_28;
	}
	v17 = sub_14034BDD0(v14, 294772);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v17, 0, 0i64);
	for (j = v16; j != (_QWORD*)v15; j += 4)
	{
		v19 = j[1];
		if (v19)
			sub_14018B900(v19, 0);
	}
	if (v16)
		LABEL_28:
	sub_14018B900((__int64)v16, 0);
}
// 1405869BC: variable 'v14' is possibly undefined
// 140B1F250: using guessed type wchar_t asc_140B1F250[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 1405867A0: using guessed type char var_98[8];
// 1405867A0: using guessed type char var_78[8];
// 1405867A0: using guessed type char var_58[8];

