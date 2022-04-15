//----- (0000000140783300) ----------------------------------------------------
__int64 __fastcall sub_140783300(unsigned int* a1, unsigned int a2, _DWORD* a3)
{
	unsigned int v4; // edx
	__int64 v7; // r9
	__int64 v8; // rax
	unsigned int v9; // eax
	unsigned int v10; // r13d
	__int64 v11; // rax
	int* v12; // rbp
	__int64 v13; // rax
	int* v14; // rax
	unsigned int v15; // ebx
	__int64 v16; // rdx
	int* v17; // rsi
	unsigned __int64 v18; // rcx
	int* v19; // rdx
	unsigned int v20; // ebx
	unsigned __int64 v21; // rdi
	unsigned __int64 v22; // rbx
	__int64 v23; // rdx
	unsigned int v24; // ecx
	__int64 result; // rax

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
		v10 = 2 * v9;
		if (!v9)
			v10 = 16;
		v11 = 4i64 * v10;
		if (!is_mul_ok(v10, 4ui64))
			v11 = -1i64;
		v12 = sub_14018B280(v11, 8u);
		v13 = 4i64 * v10;
		if (!is_mul_ok(v10, 4ui64))
			v13 = -1i64;
		v14 = sub_14018B280(v13, 8u);
		v15 = a1[1];
		v16 = a1[2];
		v17 = v14;
		v18 = *a1 - (unsigned int)v16;
		v19 = (int*)(*((_QWORD*)a1 + 2) + 4 * v16);
		if (v15 < (unsigned int)v18)
			v18 = v15;
		v20 = v15 - v18;
		v21 = v18;
		sub_1407DB590(v12, v19, 4 * v18);
		v22 = 4i64 * v20;
		sub_1407DB590(&v12[v21], *((int**)a1 + 2), v22);
		sub_1407DB590(v17, (int*)(*((_QWORD*)a1 + 3) + 4i64 * a1[2]), v21 * 4);
		sub_1407DB590(&v17[v21], *((int**)a1 + 3), v22);
		sub_14018B900(*((_QWORD*)a1 + 2), 0);
		sub_14018B900(*((_QWORD*)a1 + 3), 0);
		*a1 = v10;
		*((_QWORD*)a1 + 2) = v12;
		*((_QWORD*)a1 + 3) = v17;
		a1[2] = 0;
	}
	v23 = 4i64 * ((*a1 - 1) & (a1[1] + a1[2]));
	*(_DWORD*)(v23 + *((_QWORD*)a1 + 2)) = a2;
	*(_DWORD*)(v23 + *((_QWORD*)a1 + 3)) = *a3;
	v24 = a1[1];
	if (!v24)
	{
		a1[8] = a2;
		a1[9] = *a3;
	}
	result = v24 + 1;
	a1[1] = result;
	return result;
}

