#include "../winhttp.h"

//----- (000000014002CAD0) ----------------------------------------------------
void __fastcall sub_14002CAD0(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int* v5; // rsi
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	_WORD* v8; // r14
	__int64 v9; // rbx
	int* v10; // rax
	int* v11; // rdi

	v4 = 0i64;
	v5 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v6 + 1), 0);
	v7 = 2 * v6;
	sub_1407DB590(v5, a2, v7);
	v8 = (_WORD*)((char*)v5 + v7);
	if ((int*)((char*)v5 + v7))
		*v8 = 0;
	v9 = *(_QWORD*)(a1 + 72);
	v10 = sub_14018B280(48i64, 0);
	v11 = v10;
	if (v10 != (int*)-16i64)
	{
		*((_QWORD*)v10 + 3) = 0i64;
		*((_QWORD*)v10 + 4) = 0i64;
		*((_QWORD*)v10 + 5) = 0i64;
		sub_14001C1B0((_QWORD*)v10 + 2, v5, (__int64)v8);
	}
	*(_QWORD*)v11 = v9;
	*((_QWORD*)v11 + 1) = *(_QWORD*)(v9 + 8);
	**(_QWORD**)(v9 + 8) = v11;
	*(_QWORD*)(v9 + 8) = v11;
	if (v5)
		sub_14018B900((__int64)v5, 0);
}

