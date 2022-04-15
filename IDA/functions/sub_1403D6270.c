//----- (00000001403D6270) ----------------------------------------------------
int* __fastcall sub_1403D6270(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbx
	int* v3; // rdi
	__int64 v4; // r15
	int* v6; // r14
	__int64 v7; // rcx
	int* result; // rax

	v2 = a1[2];
	v3 = (int*)a1[1];
	v4 = a2;
	v6 = sub_14018B280(4 * a2, 0);
	sub_1407DB590(v6, v3, (v2 - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCui64);
	v7 = a1[1];
	if (v7)
		sub_14018B900(v7, 0);
	a1[2] = &v6[(v2 - (__int64)v3) >> 2];
	result = &v6[v4];
	a1[1] = v6;
	a1[3] = &v6[v4];
	return result;
}

