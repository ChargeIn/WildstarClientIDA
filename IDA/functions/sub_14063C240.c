//----- (000000014063C240) ----------------------------------------------------
void __fastcall sub_14063C240(__int64 a1)
{
	int* v2; // r14
	__int64 v3; // rax
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r15
	__int64 v10; // rdi
	__int64 v11; // rsi
	_QWORD* v12; // rdx
	__int64 v13; // r8
	int v14; // ecx
	unsigned int v15; // ecx
	__int64 i; // rbx
	__int64 v17; // rcx
	__int64 v18; // [rsp+30h] [rbp-29h] BYREF
	int* v19; // [rsp+38h] [rbp-21h]
	__int64 v20; // [rsp+40h] [rbp-19h]
	__int64 v21; // [rsp+48h] [rbp-11h]
	char v22[8]; // [rsp+50h] [rbp-9h] BYREF
	int* v23; // [rsp+58h] [rbp-1h]
	__int64 v25; // [rsp+68h] [rbp+Fh]
	char v26[8]; // [rsp+70h] [rbp+17h] BYREF
	__int64 v27; // [rsp+78h] [rbp+1Fh]
	__int64 v28; // [rsp+80h] [rbp+27h]

	v2 = 0i64;
	v19 = 0i64;
	v21 = 0i64;
	v3 = 0i64;
	while (asc_140B28CA0[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v19 = v2;
		v21 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	v20 = (__int64)v2 + 2 * v5;
	if (v20)
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v23 = 0i64;
	v8 = 0i64;
	v25 = 0i64;
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
		v23 = v8;
		v25 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	if ((int*)((char*)v8 + 2 * v9))
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)v26, (__int64)v22, (__int64)&v18, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v10 = v28;
	v11 = v27;
	v12 = *(_QWORD**)(qword_140C65898 + 27728);
	if (v12)
	{
		if (v12[12])
		{
			v13 = *(_QWORD*)(v12[11] + 8i64 * v12[13]);
			if (v13)
			{
				v18 = 0i64;
				v19 = 0i64;
				v20 = 0i64;
				v21 = 0i64;
				v18 = v12[9];
				v19 = *(int**)(v13 + 16);
				v20 = *(_QWORD*)(v13 + 24);
				v14 = *(_DWORD*)(v13 + 8);
				if ((v28 - v27) >> 5)
					v15 = v14 | 0x800;
				else
					v15 = v14 & 0xFFFFF7FF;
				LODWORD(v21) = v15 | 0x4000;
				HIDWORD(v21) = (v15 | 0x4000) ^ *(_DWORD*)(v13 + 8);
				sub_1403F4740(qword_140C65898, 0x408u, (__int64)&v18);
			}
		}
	}
	for (i = v11; i != v10; i += 32i64)
	{
		v17 = *(_QWORD*)(i + 8);
		if (v17)
			sub_14018B900(v17, 0);
	}
	if (v11)
		sub_14018B900(v11, 0);
}
// 140B28CA0: using guessed type wchar_t asc_140B28CA0[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 14063C240: using guessed type char var_60[8];
// 14063C240: using guessed type char var_40[8];

