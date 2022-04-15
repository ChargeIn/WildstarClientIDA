#include "../winhttp.h"

//----- (000000014076F600) ----------------------------------------------------
_QWORD* __fastcall sub_14076F600(_QWORD* a1, int a2, int** a3, int* a4, void(__fastcall*** a5)(_QWORD), __int64 a6)
{
	__int64 v7; // rcx
	int v8; // eax
	__int64 v11; // rbx
	int** v12; // rbp
	int* v13; // rax
	int** v14; // rdi
	int* v15; // rax
	int* v16; // rax
	int* v17; // r8
	int* v18; // rdx
	int* v19; // rdx

	v7 = (__int64)(a1 + 1);
	v8 = dword_140C8A07C + 1;
	*(_DWORD*)(v7 - 8) = dword_140C8A07C + 1;
	*(_DWORD*)(v7 - 4) = a2;
	dword_140C8A07C = v8;
	sub_1400F9DD0(v7, a6);
	v11 = 0i64;
	a1[5] = 0i64;
	a1[4] = 0i64;
	a1[7] = 0i64;
	a1[6] = 0i64;
	a1[9] = 0i64;
	a1[8] = 0i64;
	a1[12] = 0i64;
	a1[13] = 0i64;
	v12 = (int**)(a1 + 14);
	a1[15] = 0i64;
	a1[16] = 0i64;
	a1[17] = 0i64;
	v13 = sub_14018B280(16i64, 0);
	a1[15] = v13;
	a1[16] = v13;
	a1[17] = v13 + 4;
	if (v13)
		*(_WORD*)v13 = 0;
	v14 = (int**)(a1 + 18);
	a1[19] = 0i64;
	a1[20] = 0i64;
	a1[21] = 0i64;
	v15 = sub_14018B280(16i64, 0);
	a1[19] = v15;
	a1[20] = v15;
	a1[21] = v15 + 4;
	if (v15)
		*(_WORD*)v15 = 0;
	a1[23] = 0i64;
	a1[24] = 0i64;
	a1[25] = 0i64;
	v16 = sub_14018B280(16i64, 0);
	a1[23] = v16;
	a1[24] = v16;
	a1[25] = v16 + 4;
	if (v16)
		*(_WORD*)v16 = 0;
	a1[26] = a5;
	if (a5)
		(**a5)(a5);
	a1[27] = 1i64;
	if (a3 + 4 != v12)
		sub_14001C480((__int64)(a1 + 14), a3[5], a3[6]);
	v17 = a3[10];
	v18 = a3[9];
	if (v18 == v17)
	{
		if (v12 == v14)
			goto LABEL_16;
		v17 = (int*)a1[16];
		v18 = (int*)a1[15];
	}
	else if (a3 + 8 == v14)
	{
		goto LABEL_16;
	}
	sub_14001C480((__int64)(a1 + 18), v18, v17);
LABEL_16:
	v19 = (int*)&unk_1409F988C;
	if (a4)
		v19 = a4;
	if (*(_WORD*)v19)
	{
		do
			++v11;
		while (*((_WORD*)v19 + v11));
	}
	sub_14001C480((__int64)(a1 + 22), v19, (int*)((char*)v19 + 2 * v11));
	return a1;
}
// 140C8A07C: using guessed type int dword_140C8A07C;

