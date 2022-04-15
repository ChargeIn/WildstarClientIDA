#include "../winhttp.h"

//----- (000000014058DB40) ----------------------------------------------------
void __fastcall sub_14058DB40(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
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
	__int64 v15; // rsi
	_QWORD* v16; // rbp
	__int16* v17; // rax
	_QWORD* j; // rbx
	__int64 v19; // rcx
	int v20; // ebx
	int v21; // eax
	int v22; // edi
	int v23; // ecx
	int v24; // eax
	WCHAR* v25; // rcx
	int v26; // eax
	WCHAR* v27; // rcx
	int v28; // ebx
	int v29; // eax
	WCHAR* v30; // rcx
	int v31; // eax
	WCHAR* v32; // rcx
	int v33; // eax
	_QWORD* i; // rbx
	__int64 v35; // rcx
	char v36[8]; // [rsp+30h] [rbp-98h] BYREF
	int* v37; // [rsp+38h] [rbp-90h]
	__int64 v39; // [rsp+48h] [rbp-80h]
	char v40[8]; // [rsp+50h] [rbp-78h] BYREF
	int* v41; // [rsp+58h] [rbp-70h]
	__int64 v43; // [rsp+68h] [rbp-60h]
	char v44[8]; // [rsp+70h] [rbp-58h] BYREF
	__int64 v45; // [rsp+78h] [rbp-50h]
	__int64 v46; // [rsp+80h] [rbp-48h]
	int v47; // [rsp+E0h] [rbp+18h] BYREF
	int v48; // [rsp+E4h] [rbp+1Ch]
	int v49; // [rsp+E8h] [rbp+20h] BYREF
	int v50; // [rsp+ECh] [rbp+24h]

	v2 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 3)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v5 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
	if (!v3)
	{
	LABEL_4:
		v4 = sub_14034BDD0(a1, 282577);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
		return;
	}
	v6 = 0i64;
	v37 = 0i64;
	v39 = 0i64;
	v7 = 0i64;
	while (asc_140B1F4F0[++v7] != 0)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v9 + 1), 0);
		v37 = v6;
		v39 = (__int64)v6 + 2 * v9 + 2;
	}
	sub_1407DB590(v6, (int*)L" \t\r\n", 2 * v9);
	if ((int*)((char*)v6 + 2 * v9))
		*((_WORD*)v6 + v9) = 0;
	v10 = *(int**)(a1 + 8);
	v11 = 0i64;
	v41 = 0i64;
	v12 = 0i64;
	v43 = 0i64;
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
		v41 = v12;
		v43 = (__int64)v12 + 2 * v13 + 2;
	}
	sub_1407DB590(v12, v10, 2 * v13);
	if ((int*)((char*)v12 + 2 * v13))
		*((_WORD*)v12 + v13) = 0;
	sub_14018F570((__int64)v44, (__int64)v40, (__int64)v36, 34, 92);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v15 = v46;
	v16 = (_QWORD*)v45;
	if ((unsigned __int64)((v46 - v45) >> 5) >= 5)
	{
		v20 = *(_DWORD*)(v5 + 16);
		v21 = sub_14018E820(*(WCHAR**)(v45 + 8));
		v22 = 200;
		v23 = 200;
		if (v20 == 1)
			v23 = 100;
		v24 = v23 + v21 - 1;
		v25 = (WCHAR*)v16[5];
		v49 = v24;
		v26 = sub_14018E820(v25);
		v27 = (WCHAR*)v16[13];
		v28 = *(_DWORD*)(v5 + 16);
		v50 = v26 - 1;
		v29 = sub_14018E820(v27);
		v30 = (WCHAR*)v16[17];
		if (v28 == 1)
			v22 = 100;
		v47 = v22 + v29 - 1;
		v31 = sub_14018E820(v30);
		v32 = (WCHAR*)v16[9];
		v48 = v31 - 1;
		v33 = sub_14018E820(v32);
		sub_14057F0B0((__int64*)v5, (__int64)&v49, v33, &v47, 0);
		for (i = v16; i != (_QWORD*)v15; i += 4)
		{
			v35 = i[1];
			if (v35)
				sub_14018B900(v35, 0);
		}
		goto LABEL_28;
	}
	v17 = sub_14034BDD0(v14, 294783);
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
// 14058DD50: variable 'v14' is possibly undefined
// 140B1F4F0: using guessed type wchar_t asc_140B1F4F0[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 14058DB40: using guessed type char var_98[8];
// 14058DB40: using guessed type char var_78[8];
// 14058DB40: using guessed type char var_58[8];

