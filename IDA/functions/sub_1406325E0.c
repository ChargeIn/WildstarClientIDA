#include "../winhttp.h"

//----- (00000001406325E0) ----------------------------------------------------
__int64 __fastcall sub_1406325E0(_QWORD* a1, unsigned __int64 a2)
{
	__int64* v4; // rax
	unsigned __int64 v5; // r14
	unsigned __int64 v6; // rbx
	__int64 v7; // rcx
	int* v8; // rax
	unsigned __int64 v9; // rcx
	int* v10; // r15
	int* v11; // rsi
	int* i; // rbx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 result; // rax
	__int64 v16; // rbp
	unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF
	__int64 v18; // [rsp+58h] [rbp+10h] BYREF

	v18 = 8i64;
	v4 = (__int64*)&v17;
	v5 = a2 / 0xF;
	v6 = a2 / 0xF + 1;
	v17 = a2 / 0xF + 3;
	if (v17 <= 8)
		v4 = &v18;
	v7 = *v4;
	a1[2] = *v4;
	v8 = sub_14018B280(8 * v7, 0);
	v9 = a1[2] - v6;
	a1[1] = v8;
	v10 = &v8[2 * (v9 >> 1)];
	v11 = &v10[2 * v6];
	for (i = v10; i < v11; *((_QWORD*)i - 1) = sub_14018B280(480i64, 0))
		i += 2;
	a1[6] = v10;
	v13 = *(_QWORD*)v10;
	a1[4] = *(_QWORD*)v10;
	a1[5] = v13 + 480;
	a1[10] = v11 - 2;
	v14 = *((_QWORD*)v11 - 1);
	a1[8] = v14;
	a1[9] = v14 + 480;
	result = a1[4];
	v16 = a1[8] + 32 * (a2 - 15 * v5);
	a1[3] = result;
	a1[7] = v16;
	return result;
}

