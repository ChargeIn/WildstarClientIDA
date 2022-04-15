//----- (00000001402BBB00) ----------------------------------------------------
int* __fastcall sub_1402BBB00(_QWORD* a1, __int64 a2)
{
	int* v3; // rax
	__int64 v4; // rcx
	int* v5; // rdi
	int* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx
	int* result; // rax

	a1[12] = a2;
	v3 = sub_14018B280(2 * a2 + 2, 0);
	v4 = a1[12];
	v5 = 0i64;
	a1[8] = v3;
	if (v4)
		v6 = sub_14018B280(2 * v4, 0);
	else
		v6 = 0i64;
	v7 = a1[12];
	a1[7] = v6;
	if (v7)
		v5 = sub_14018B280(v7, 0);
	v8 = a1[12];
	a1[9] = v5;
	result = sub_14018B280(2 * v8 + 2, 0);
	a1[10] = result;
	return result;
}

