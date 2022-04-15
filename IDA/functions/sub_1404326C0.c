#include "../winhttp.h"

//----- (00000001404326C0) ----------------------------------------------------
__int64 __fastcall sub_1404326C0(__int64 a1, int a2)
{
	int* v2; // rsi
	__int64 v4; // rdi
	__int64 v5; // rax
	int* v6; // r12
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	int* v9; // r13
	int* v10; // rsi
	int* v11; // r15
	__int64 v12; // rax
	__int64 v13; // rbx
	unsigned __int64 v14; // rbx
	int* v15; // rsi
	__int64 v16; // rax
	int* v17; // r14
	__int64 v18; // rbx
	unsigned __int64 v19; // rbx
	int* v20; // rbx
	int* v21; // rax
	__int64 v22; // rax
	bool v23; // zf
	char v25; // [rsp+20h] [rbp-58h] BYREF
	int* v26; // [rsp+80h] [rbp+8h]

	v2 = (int*)&unk_1409EFC3C;
	if (*(_QWORD*)(qword_140C635F0 + 5744))
		v2 = *(int**)(qword_140C635F0 + 5744);
	v4 = 0i64;
	v5 = 0i64;
	v6 = 0i64;
	if (*(_WORD*)v2)
	{
		do
			++v5;
		while (*((_WORD*)v2 + v5));
	}
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v6 = sub_14018B280(2 * (v7 + 1), 0);
	v8 = 2 * v7;
	sub_1407DB590(v6, v2, v8);
	v9 = (int*)((char*)v6 + v8);
	if ((int*)((char*)v6 + v8))
		*(_WORD*)v9 = 0;
	v10 = (int*)&unk_1409EFC1C;
	v11 = 0i64;
	v12 = 0i64;
	if (*(_QWORD*)(qword_140C635F0 + 5752))
		v10 = *(int**)(qword_140C635F0 + 5752);
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
	v26 = (int*)((char*)v11 + v14);
	if ((int*)((char*)v11 + v14))
		*(_WORD*)((char*)v11 + v14) = 0;
	if (qword_140C65898)
	{
		v15 = (int*)&unk_1409EFBEC;
		if (*(_QWORD*)(qword_140C65898 + 136))
			v15 = *(int**)(qword_140C65898 + 136);
	}
	else
	{
		v15 = (int*)&unk_1409EFBB4;
	}
	v16 = 0i64;
	v17 = 0i64;
	if (*(_WORD*)v15)
	{
		do
			++v16;
		while (*((_WORD*)v15 + v16));
	}
	v18 = (2 * v16) >> 1;
	if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v17 = sub_14018B280(2 * (v18 + 1), 0);
	v19 = 2 * v18;
	sub_1407DB590(v17, v15, v19);
	v20 = (int*)((char*)v17 + v19);
	if (v20)
		*(_WORD*)v20 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	v21 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 8) = v21;
	*(_QWORD*)(a1 + 16) = v21;
	*(_QWORD*)(a1 + 24) = v21 + 4;
	if (v21)
		*(_WORD*)v21 = 0;
	if (a2 >= 2 && &v25 != (char*)a1)
		sub_14001C480(a1, v6, v9);
	if (a2 >= 3)
	{
		v22 = 0i64;
		do
			v23 = asc_140B01754[++v22] == 0;
		while (!v23);
		sub_14001C310((_QWORD*)a1, (int*)L"::", (int*)&asc_140B01754[v22]);
		sub_14001C310((_QWORD*)a1, v11, v26);
	}
	if (a2 >= 4)
	{
		do
			v23 = asc_140B016D4[++v4] == 0;
		while (!v23);
		sub_14001C310((_QWORD*)a1, (int*)L"::", (int*)&asc_140B016D4[v4]);
		sub_14001C310((_QWORD*)a1, v17, v20);
	}
	if (v17)
		sub_14018B900((__int64)v17, 0);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return a1;
}
// 140B016D4: using guessed type wchar_t asc_140B016D4[3];
// 140B01754: using guessed type wchar_t asc_140B01754[3];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

