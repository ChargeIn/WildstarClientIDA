//----- (000000014010DB00) ----------------------------------------------------
int* __fastcall sub_14010DB00(_QWORD* a1)
{
	__int64* v1; // rbp
	__int64* i; // rbx
	__int64 v4; // rdi
	int* v5; // rdi
	int* v6; // rbx
	__int64* j; // rdi
	__int64 v8; // rbx
	int* v9; // rdi
	int* v10; // rbx
	int* result; // rax

	v1 = (__int64*)a1[3];
	for (i = (__int64*)a1[2]; i != v1; ++i)
	{
		v4 = *i;
		if (*i)
		{
			sub_14010BFF0((_QWORD*)*i);
			sub_14018B900(v4, 0);
		}
	}
	v5 = (int*)a1[3];
	v6 = (int*)a1[2];
	sub_1407DB590(v6, v5, 0i64);
	a1[3] += -8 * (((char*)v5 - (char*)v6) >> 3);
	for (j = (__int64*)a1[6]; j != (__int64*)a1[7]; ++j)
	{
		v8 = *j;
		if ((_QWORD*)*j != a1 + 9 && v8)
		{
			sub_14010DA30((_QWORD*)*j);
			sub_14018B900(v8, 0);
		}
	}
	v9 = (int*)a1[7];
	v10 = (int*)a1[6];
	result = sub_1407DB590(v10, v9, 0i64);
	a1[7] += -8 * (((char*)v9 - (char*)v10) >> 3);
	return result;
}

