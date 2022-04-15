#include "../winhttp.h"

//----- (000000014058E220) ----------------------------------------------------
void __fastcall sub_14058E220(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rdx
	__int64 v4; // rax
	__int16* v5; // rax
	__int64 v6; // r13
	int* v7; // r15
	__int64 v8; // rax
	__int64 v10; // rsi
	int* v11; // rsi
	__int64 v12; // rax
	int* v13; // r14
	__int64 v14; // rbp
	__int64 v15; // rcx
	__int64 v16; // rbp
	__int64 v17; // rsi
	int v18; // r15d
	int v19; // ebx
	int v20; // eax
	__int64 v21; // r14
	__int64 v22; // r12
	int v23; // ecx
	char v24; // dl
	char v25; // r9
	__int64 v26; // rax
	__int64 v27; // r10
	char v28; // cl
	__int64 v29; // r8
	__int64 v30; // r9
	__int64 v31; // r10
	__int64 v32; // rax
	__int64 v33; // r8
	__int64 i; // rbx
	__int64 v35; // rcx
	__int16* v36; // rax
	__int64 j; // rbx
	__int64 v38; // rcx
	int v39; // [rsp+30h] [rbp-A8h] BYREF
	char v40[8]; // [rsp+38h] [rbp-A0h] BYREF
	int* v41; // [rsp+40h] [rbp-98h]
	__int64 v43; // [rsp+50h] [rbp-88h]
	char v44[8]; // [rsp+58h] [rbp-80h] BYREF
	int* v45; // [rsp+60h] [rbp-78h]
	__int64 v47; // [rsp+70h] [rbp-68h]
	char v48[8]; // [rsp+78h] [rbp-60h] BYREF
	__int64 v49; // [rsp+80h] [rbp-58h]
	__int64 v50; // [rsp+88h] [rbp-50h]
	int v51; // [rsp+F0h] [rbp+18h] BYREF
	int v52; // [rsp+F8h] [rbp+20h] BYREF

	v1 = 0i64;
	v3 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v4 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
		if (*(_DWORD*)(v4 + 16) == 3)
			break;
		if (++v3 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	v6 = *(_QWORD*)(qword_140C7DE18 + 8 * v3);
	if (!v4)
	{
	LABEL_4:
		v5 = sub_14034BDD0(a1, 282577);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v5, 0, 0i64);
		return;
	}
	v41 = 0i64;
	v7 = 0i64;
	v43 = 0i64;
	v8 = 0i64;
	while (asc_140B1F510[++v8] != 0)
		;
	v10 = (2 * v8) >> 1;
	if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v7 = sub_14018B280(2 * (v10 + 1), 0);
		v41 = v7;
		v43 = (__int64)v7 + 2 * v10 + 2;
	}
	sub_1407DB590(v7, (int*)L" \t\r\n", 2 * v10);
	if ((int*)((char*)v7 + 2 * v10))
		*((_WORD*)v7 + v10) = 0;
	v11 = *(int**)(a1 + 8);
	v12 = 0i64;
	v13 = 0i64;
	v45 = 0i64;
	v47 = 0i64;
	if (*(_WORD*)v11)
	{
		do
			++v12;
		while (*((_WORD*)v11 + v12));
	}
	v14 = (2 * v12) >> 1;
	if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v13 = sub_14018B280(2 * (v14 + 1), 0);
		v45 = v13;
		v47 = (__int64)v13 + 2 * v14 + 2;
	}
	sub_1407DB590(v13, v11, 2 * v14);
	if ((int*)((char*)v13 + 2 * v14))
		*((_WORD*)v13 + v14) = 0;
	sub_14018F570((__int64)v48, (__int64)v44, (__int64)v40, 34, 92);
	if (v13)
		sub_14018B900((__int64)v13, 0);
	if (v7)
		sub_14018B900((__int64)v7, 0);
	v16 = v50;
	v17 = v49;
	if ((unsigned __int64)((v50 - v49) >> 5) >= 6)
	{
		v18 = sub_14018E820(*(WCHAR**)(v49 + 8)) - 1;
		v19 = sub_14018E820(*(WCHAR**)(v17 + 40)) - 1;
		v20 = sub_14018E820(*(WCHAR**)(v17 + 72));
		v15 = v18;
		v21 = v20;
		if ((unsigned __int64)v18 < 0xA)
		{
			v15 = 5i64 * v18;
			v22 = v6 + 40i64 * v18 + 24;
			if (v22)
			{
				if ((int)sub_14063B7E0(v17 + 96, &v51) >= 0
					&& (int)sub_14063B7E0(v17 + 128, &v52) >= 0
					&& (int)sub_14063B7E0(v17 + 160, &v39) >= 0
					&& (unsigned int)v21 <= 7
					&& v19 < *(_DWORD*)(v6 + 632))
				{
					v23 = *(_DWORD*)(v6 + 16);
					v24 = -56;
					v25 = -56;
					if (v23 == 1)
						v25 = 100;
					if (v23 == 1)
						v24 = 100;
					v26 = *(_QWORD*)(v22 + 16) & ~(7i64 << (6 * (v25 + (unsigned __int8)v19 - v24))) | (7i64 << (6 * (v25 + (unsigned __int8)v19 - v24))) & (v21 << (6 * (v25 + (unsigned __int8)v19 - v24)));
					v27 = 0i64;
					v28 = 6 * v19;
					v29 = 16i64 << (6 * (unsigned __int8)v19);
					v30 = 32i64 << (6 * (unsigned __int8)v19);
					if (v51)
						v27 = 8i64 << v28;
					v31 = ~v29 & (v26 & ~(8i64 << v28) | (8i64 << v28) & v27);
					v32 = 0i64;
					if (v52)
						v32 = 16i64 << v28;
					v33 = ~v30 & (v31 | v32 & v29);
					if (v39)
						v1 = 32i64 << v28;
					sub_14057F9A0((__int64*)v6, v18, v30 & v1 | v33);
					for (i = v17; i != v16; i += 32i64)
					{
						v35 = *(_QWORD*)(i + 8);
						if (v35)
							sub_14018B900(v35, 0);
					}
				LABEL_44:
					sub_14018B900(v17, 0);
					return;
				}
			}
		}
	}
	v36 = sub_14034BDD0(v15, 326778);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v36, 0, 0i64);
	for (j = v17; j != v16; j += 32i64)
	{
		v38 = *(_QWORD*)(j + 8);
		if (v38)
			sub_14018B900(v38, 0);
	}
	if (v17)
		goto LABEL_44;
}
// 14058E4EE: conditional instruction was optimized away because r14d.4<8u
// 14058E60C: variable 'v15' is possibly undefined
// 140B1F510: using guessed type wchar_t asc_140B1F510[5];
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 14058E220: using guessed type char var_A0[8];
// 14058E220: using guessed type char var_80[8];
// 14058E220: using guessed type char var_60[8];

