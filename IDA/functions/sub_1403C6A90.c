#include "../winhttp.h"

//----- (00000001403C6A90) ----------------------------------------------------
int* __fastcall sub_1403C6A90(__int64 a1, unsigned int* a2)
{
	int* result; // rax
	__int64 v4; // rcx
	__int64 v5; // rdi
	int* v6; // r14
	int* v7; // rbp
	__int64 v8; // rcx
	bool v9; // zf
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	int* v12; // r12
	int* v13; // rsi
	__int64 v14; // rax
	__int64 v15; // rbx
	signed __int64 v16; // rbx
	int* v17; // r15
	unsigned __int64 v18; // rbx
	__int64 v19; // rbx
	int* v20; // rax
	int* v21; // r14
	int* v22; // rdi
	__int64 v23; // rcx
	unsigned __int64 v24; // rbx
	__int64 v25; // rbx
	int* v26; // rax
	__int64 v27; // rbx
	__int64 v28; // [rsp+30h] [rbp-48h] BYREF
	int* v29; // [rsp+38h] [rbp-40h]
	int* v30; // [rsp+40h] [rbp-38h]
	__int64 v31; // [rsp+48h] [rbp-30h]

	result = sub_1400B5DF0(qword_140C658F0, *a2, 0i64);
	if (result)
	{
		v5 = 0i64;
		v6 = (int*)sub_14034BDD0(v4, result[120]);
		v7 = 0i64;
		v8 = 0i64;
		do
			v9 = asc_140AEC404[++v8] == 0;
		while (!v9);
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v7 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v7, (int*)L"! ", v11);
		v12 = (int*)((char*)v7 + v11);
		if ((int*)((char*)v7 + v11))
			*(_WORD*)v12 = 0;
		v13 = 0i64;
		v14 = 0i64;
		do
			v9 = aCreated[++v14] == 0;
		while (!v9);
		v15 = (2 * v14) >> 1;
		if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v13 = sub_14018B280(2 * (v15 + 1), 0);
		v16 = 2 * v15;
		sub_1407DB590(v13, (int*)L"Created ", v16);
		v17 = (int*)((char*)v13 + v16);
		if ((int*)((char*)v13 + v16))
			*(_WORD*)v17 = 0;
		if (*(_WORD*)v6)
		{
			do
				++v5;
			while (*((_WORD*)v6 + v5));
		}
		v29 = 0i64;
		v30 = 0i64;
		v31 = 0i64;
		v18 = v5 + (v16 >> 1) + 1;
		if (v18 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v19 = 2 * v18;
			v20 = sub_14018B280(v19, 0);
			v29 = v20;
			v30 = v20;
			v31 = (__int64)v20 + v19;
			if (v20)
				*(_WORD*)v20 = 0;
		}
		sub_14001C310(&v28, v13, v17);
		sub_14001C310(&v28, v6, (int*)((char*)v6 + 2 * v5));
		v21 = v30;
		v22 = v29;
		v23 = ((char*)v30 - (char*)v29) >> 1;
		v29 = 0i64;
		v30 = 0i64;
		v31 = 0i64;
		v24 = v23 + 1 + (((char*)v12 - (char*)v7) >> 1);
		if (v24 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v25 = 2 * v24;
			v26 = sub_14018B280(v25, 0);
			v29 = v26;
			v30 = v26;
			v31 = (__int64)v26 + v25;
			if (v26)
				*(_WORD*)v26 = 0;
		}
		sub_14001C310(&v28, v22, v21);
		sub_14001C310(&v28, v7, v12);
		if (v22)
			sub_14018B900((__int64)v22, 0);
		if (v13)
			sub_14018B900((__int64)v13, 0);
		if (v7)
			sub_14018B900((__int64)v7, 0);
		v27 = (__int64)v29;
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "GenericFloater", "US", *(unsigned int*)(*(_QWORD*)(a1 + 120) + 8i64), v29);
		if (v27)
			sub_14018B900(v27, 0);
		return 0i64;
	}
	return result;
}
// 1403C6AE5: variable 'v4' is possibly undefined
// 140AEC404: using guessed type wchar_t asc_140AEC404[3];
// 140AF62C0: using guessed type wchar_t aCreated[9];
// 140C658F0: using guessed type __int64 qword_140C658F0;

