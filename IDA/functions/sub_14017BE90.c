#include "../winhttp.h"

//----- (000000014017BE90) ----------------------------------------------------
__int64 __fastcall sub_14017BE90(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v7; // rax
	__int64 v8; // rsi
	__int64 v9; // rax
	int* v10; // rdi
	int* v11; // rbp
	__int64 v12; // rax
	__int64 v13; // rbx
	unsigned __int64 v14; // rbx
	__int64 v15; // rdi
	unsigned __int64 i; // rbx
	wchar_t* v17; // rdx
	__int64 v18; // rax
	wchar_t* v19; // rax
	int* v20; // rax
	unsigned __int64 v21; // rbx
	__int64 v22; // rcx
	unsigned int* v23; // rdi
	__int64 v24; // r8
	int v25; // edx
	bool v27; // [rsp+40h] [rbp-D8h] BYREF
	_QWORD* v28; // [rsp+48h] [rbp-D0h] BYREF
	__int64 v29; // [rsp+50h] [rbp-C8h]
	_OWORD v30[6]; // [rsp+60h] [rbp-B8h] BYREF

	v29 = a4;
	v28 = a3;
	v7 = sub_1401A6B80(a5, L"Base");
	v8 = 0i64;
	if (v7)
		v9 = sub_1401A4F40(v7 + 32);
	else
		v9 = 0i64;
	v10 = (int*)&unk_1409DE4EC;
	v11 = 0i64;
	if (v9)
		v10 = (int*)v9;
	v12 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v12;
		while (*((_WORD*)v10 + v12));
	}
	v13 = (2 * v12) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v11 = sub_14018B280(2 * (v13 + 1), 0);
	v14 = 2 * v13;
	sub_1407DB590(v11, v10, v14);
	if ((int*)((char*)v11 + v14))
		*(_WORD*)((char*)v11 + v14) = 0;
	sub_1400D45E0((__int64)v30, a1, a2, a5, 0i64);
	v15 = 0i64;
	for (i = 0i64; i < 2; ++i)
	{
		v17 = off_140A3B930[i];
		v27 = 0;
		v18 = sub_1401A6B80(a5, v17);
		if (v18)
		{
			v19 = (wchar_t*)sub_1401A4F40(v18 + 32);
			sub_1401A52E0(v19, &v27);
			if (v27)
				v15 |= 1i64 << i;
		}
	}
	v20 = sub_14018B280(1152i64, 0);
	if (v20)
		v8 = sub_14017B4C0((__int64)v20, a1, a2, v28, v30, v29, v15);
	sub_1400F66F0(&v28, a5, &word_140A31AB8, 0xFFFFFFFF);
	v21 = (unsigned int)v28;
	v22 = qword_140C63678;
	v23 = (unsigned int*)(v8 + 708);
	if ((_QWORD**)(v8 + 708) != &v28)
	{
		sub_1401429A0(qword_140C63678, *v23);
		v22 = qword_140C63678;
		*v23 = v21;
		if (v21 < *(_QWORD*)(v22 + 48))
		{
			v24 = 32i64 * (unsigned int)v21 + *(_QWORD*)(v22 + 40);
			v25 = *(_DWORD*)(v24 + 16);
			if ((unsigned int)(v25 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v24 + 16) = v25 + 1;
		}
	}
	sub_1401429A0(v22, v21);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	return v8;
}
// 140A31928: using guessed type wchar_t aBase[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A3B930: using guessed type wchar_t *off_140A3B930[2];
// 140C63678: using guessed type __int64 qword_140C63678;
// 14017BE90: using guessed type _OWORD var_B8[6];

