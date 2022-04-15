//----- (00000001404065F0) ----------------------------------------------------
void __fastcall sub_1404065F0(__int64 a1)
{
	int* v2; // rbp
	__int64 v3; // rax
	__int64 v5; // rdi
	int* v6; // rdi
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // r14
	__int64 v10; // rdi
	__int64 v11; // rsi
	__int64 v12; // rax
	__int64 v13; // rcx
	_DWORD* v14; // rax
	__int64 v15; // rax
	__int64 i; // rbx
	__int64 v17; // rcx
	__int64 v18; // [rsp+20h] [rbp-88h]
	__int64 v19; // [rsp+30h] [rbp-78h] BYREF
	__int64 v20; // [rsp+38h] [rbp-70h]
	__int64 v22; // [rsp+48h] [rbp-60h]
	char v23[8]; // [rsp+50h] [rbp-58h] BYREF
	int* v24; // [rsp+58h] [rbp-50h]
	__int64 v26; // [rsp+68h] [rbp-40h]
	char v27[8]; // [rsp+70h] [rbp-38h] BYREF
	__int64 v28; // [rsp+78h] [rbp-30h]
	__int64 v29; // [rsp+80h] [rbp-28h]

	v2 = 0i64;
	v20 = 0i64;
	v22 = 0i64;
	v3 = 0i64;
	while (asc_140AF88D8[++v3] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v20 = (__int64)v2;
		v22 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)L" \t\r\n", 2 * v5);
	if ((int*)((char*)v2 + 2 * v5))
		*((_WORD*)v2 + v5) = 0;
	v6 = *(int**)(a1 + 8);
	v7 = 0i64;
	v24 = 0i64;
	v8 = 0i64;
	v26 = 0i64;
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
		v24 = v8;
		v26 = (__int64)v8 + 2 * v9 + 2;
	}
	sub_1407DB590(v8, v6, 2 * v9);
	if ((int*)((char*)v8 + 2 * v9))
		*((_WORD*)v8 + v9) = 0;
	sub_14018F570((__int64)v27, (__int64)v23, (__int64)&v19, 34, 92);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v10 = v29;
	v11 = v28;
	if ((v29 - v28) >> 5 && (v12 = sub_140404300(qword_140C658A0, v28)) != 0)
	{
		v19 = 0i64;
		v20 = 0i64;
		v13 = *(_QWORD*)(v12 + 16);
		v14 = *(_DWORD**)(v12 + 8);
		v20 = v13;
		LODWORD(v19) = *v14;
		sub_1403F4740(qword_140C65898, 0x1D2u, (__int64)&v19);
	}
	else
	{
		v15 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
		LODWORD(v18) = 1;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChatResult", "Hi", v15, v18);
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
// 1404067F4: variable 'v18' is possibly undefined
// 140AF88D8: using guessed type wchar_t asc_140AF88D8[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1404065F0: using guessed type char var_58[8];
// 1404065F0: using guessed type char var_38[8];

