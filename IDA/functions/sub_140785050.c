#include "../winhttp.h"

//----- (0000000140785050) ----------------------------------------------------
__int64 __fastcall sub_140785050(unsigned int* a1, unsigned int a2, _DWORD* a3)
{
	unsigned int v4; // edx
	__int64 v7; // r9
	__int64 v8; // rax
	unsigned int v9; // eax
	unsigned int v10; // eax
	unsigned __int64 v11; // rbx
	__int64 v12; // rax
	unsigned __int64 v13; // kr00_8
	int* v14; // r14
	__int64 v15; // rax
	int* v16; // rax
	unsigned int v17; // esi
	__int64 v18; // rdx
	int* v19; // rbp
	__int64 v20; // rcx
	int* v21; // rdx
	unsigned int v22; // esi
	__int64 v23; // rdi
	__int64 v24; // rbx
	__int64 v25; // rcx
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 result; // rax
	unsigned int v29; // [rsp+58h] [rbp+10h]

	v4 = a1[1];
	if (v4)
	{
		v7 = (*a1 - 1) & (v4 + a1[2] - 1);
		v8 = *((_QWORD*)a1 + 2);
		if ((int)(a2 - *(_DWORD*)(v8 + 4 * v7)) < 0)
			a2 = *(_DWORD*)(v8 + 4 * v7);
	}
	v9 = *a1;
	if (v4 == *a1)
	{
		if (v9)
			v10 = 2 * v9;
		else
			v10 = 16;
		v29 = v10;
		v11 = v10;
		v13 = v10;
		v12 = 4i64 * v10;
		if (!is_mul_ok(v13, 4ui64))
			v12 = -1i64;
		v14 = sub_14018B280(v12, 8u);
		v15 = 12 * v11;
		if (!is_mul_ok(v11, 0xCui64))
			v15 = -1i64;
		v16 = sub_14018B280(v15, 8u);
		v17 = a1[1];
		v18 = a1[2];
		v19 = v16;
		v20 = *a1 - (unsigned int)v18;
		v21 = (int*)(*((_QWORD*)a1 + 2) + 4 * v18);
		if (v17 < (unsigned int)v20)
			v20 = v17;
		v22 = v17 - v20;
		v23 = (unsigned int)v20;
		v24 = v20;
		sub_1407DB590(v14, v21, 4 * v20);
		sub_1407DB590(&v14[v24], *((int**)a1 + 2), 4i64 * v22);
		sub_1407DB590(v19, (int*)(*((_QWORD*)a1 + 3) + 12i64 * a1[2]), 12 * v23);
		sub_1407DB590(&v19[3 * v23], *((int**)a1 + 3), 12i64 * v22);
		sub_14018B900(*((_QWORD*)a1 + 2), 0);
		sub_14018B900(*((_QWORD*)a1 + 3), 0);
		*((_QWORD*)a1 + 2) = v14;
		*((_QWORD*)a1 + 3) = v19;
		*a1 = v29;
		a1[2] = 0;
	}
	v25 = (*a1 - 1) & (a1[1] + a1[2]);
	*(_DWORD*)(*((_QWORD*)a1 + 2) + 4 * v25) = a2;
	v26 = 3 * v25;
	v27 = *((_QWORD*)a1 + 3);
	*(_DWORD*)(v27 + 4 * v26) = *a3;
	*(_DWORD*)(v27 + 4 * v26 + 4) = a3[1];
	result = (unsigned int)a3[2];
	*(_DWORD*)(v27 + 4 * v26 + 8) = result;
	if (!a1[1])
	{
		a1[8] = a2;
		a1[9] = *a3;
		a1[10] = a3[1];
		result = (unsigned int)a3[2];
		a1[11] = result;
	}
	++a1[1];
	return result;
}

