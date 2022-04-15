//----- (0000000140020590) ----------------------------------------------------
int* __fastcall sub_140020590(_QWORD* a1, int* a2, __int64 a3)
{
	int* v3; // rdi
	unsigned __int64 v5; // rbx
	int* v6; // r14
	__int64 v8; // rsi
	int* v9; // rdi
	__int64 v10; // rcx
	int* result; // rax
	__int64 v12; // rax
	int* v13; // rcx
	unsigned __int64 v14; // rax
	unsigned __int64 v15; // rbx
	int* v16; // rsi

	v3 = (int*)a1[1];
	v5 = (a3 - (__int64)a2) >> 2;
	v6 = a2;
	if (v5 <= (__int64)(a1[3] - (_QWORD)v3) >> 2)
	{
		v12 = a1[2];
		v13 = (int*)a1[1];
		v14 = (v12 - (__int64)v3) >> 2;
		if (v14 < v5)
		{
			v16 = &a2[v14];
			sub_1407DB590(v13, a2, 4 * v14);
			v3 = (int*)a1[2];
			a2 = v16;
			v13 = v3;
			v15 = (a3 - (__int64)v16) >> 2;
		}
		else
		{
			v15 = v5;
		}
		sub_1407DB590(v13, a2, v15 * 4);
		result = &v3[v15];
	}
	else
	{
		v8 = v5;
		v9 = sub_14018B280(4 * v5, 0);
		sub_1407DB590(v9, v6, 4 * v5);
		v10 = a1[1];
		if (v10)
			sub_14018B900(v10, 0);
		result = &v9[v8];
		a1[1] = v9;
		a1[3] = &v9[v8];
	}
	a1[2] = result;
	return result;
}

