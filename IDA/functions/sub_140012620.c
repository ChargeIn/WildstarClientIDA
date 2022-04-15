#include "../winhttp.h"

//----- (0000000140012620) ----------------------------------------------------
void __fastcall sub_140012620(__int64 a1, int* a2)
{
	__int64 v4; // rbx
	unsigned __int64 v5; // rbx
	__int64 v6; // rax
	int* v7; // rax
	int* v8; // rdi
	__int64 v9; // rax
	int* v10; // rsi
	__int64 v11; // r14
	_WORD* v12; // rax
	int v13; // edx
	char v14[8]; // [rsp+20h] [rbp-28h] BYREF
	int* v15; // [rsp+28h] [rbp-20h]
	_WORD* v16; // [rsp+30h] [rbp-18h]
	__int64 v17; // [rsp+38h] [rbp-10h]

	sub_14018B900(*(_QWORD*)(a1 + 5776), 0);
	*(_QWORD*)(a1 + 5776) = 0i64;
	if (a2)
	{
		v4 = -1i64;
		do
			++v4;
		while (*((_WORD*)a2 + v4));
		v5 = v4 + 1;
		v6 = 2 * v5;
		if (!is_mul_ok(v5, 2ui64))
			v6 = -1i64;
		v7 = sub_14018B280(v6, 0);
		*(_QWORD*)(a1 + 5776) = v7;
		sub_1407DB590(v7, a2, 2 * v5);
		v8 = *(int**)(a1 + 5776);
		v9 = 0i64;
		v10 = 0i64;
		v15 = 0i64;
		v17 = 0i64;
		if (*(_WORD*)v8)
		{
			do
				++v9;
			while (*((_WORD*)v8 + v9));
		}
		v11 = (2 * v9) >> 1;
		if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v10 = sub_14018B280(2 * (v11 + 1), 0);
			v15 = v10;
			v17 = (__int64)v10 + 2 * v11 + 2;
		}
		sub_1407DB590(v10, v8, 2 * v11);
		v12 = (_WORD*)v10 + v11;
		v16 = v12;
		if (v12)
			*v12 = 0;
		v13 = dword_140C66A50;
		if (*(_DWORD*)qword_140C63750 < dword_140C66A50)
			v13 = *(_DWORD*)qword_140C63750;
		sub_14001A9B0((__int64)&unk_140C66A40, v13, (__int64)v14);
		if (v10)
			sub_14018B900((__int64)v10, 0);
	}
}
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C66A50: using guessed type int dword_140C66A50;
// 140012620: using guessed type char var_28[8];

