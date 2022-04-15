//----- (0000000140029C50) ----------------------------------------------------
_QWORD* __fastcall sub_140029C50(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdx
	int* v8; // rdi
	unsigned __int64 v9; // rbx

	v4 = (__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8)) >> 2;
	if (v4)
	{
		v5 = v4;
		v6 = sub_14018B280(v5 * 4, 0);
		a1[1] = v6;
		a1[2] = v6;
		a1[3] = &v6[v5];
	}
	else
	{
		a1[1] = 0i64;
		a1[2] = 0i64;
		a1[3] = 0i64;
	}
	v7 = *(int**)(a2 + 8);
	v8 = (int*)a1[1];
	v9 = (__int64)(*(_QWORD*)(a2 + 16) - (_QWORD)v7) >> 2;
	sub_1407DB590(v8, v7, v9 * 4);
	a1[2] = &v8[v9];
	return a1;
}

