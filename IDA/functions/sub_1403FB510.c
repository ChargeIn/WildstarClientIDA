#include "../winhttp.h"

//----- (00000001403FB510) ----------------------------------------------------
int* __fastcall sub_1403FB510(_QWORD* a1, __int64 a2)
{
	__int64 v2; // r14
	__int64 v3; // rbx
	__int64 v4; // r12
	__int64 v6; // rbp
	int* v7; // rax
	int* v8; // r15
	char* v9; // rdi
	_QWORD* v10; // rdi
	_QWORD* i; // rbx
	__int64 v12; // rcx
	int* result; // rax

	v2 = a1[2];
	v3 = a1[1];
	v4 = 28 * a2;
	v6 = (v2 - v3) / 112;
	v7 = sub_14018B280(112 * a2, 0);
	v8 = v7;
	if (v3 != v2)
	{
		v9 = (char*)v7 - v3;
		do
		{
			if (&v9[v3])
				sub_140474E10((__int64)&v9[v3], v3);
			v3 += 112i64;
		} while (v3 != v2);
	}
	v10 = (_QWORD*)a1[2];
	for (i = (_QWORD*)a1[1]; i != v10; i += 14)
		sub_140474FA0(i);
	v12 = a1[1];
	if (v12)
		sub_14018B900(v12, 0);
	result = &v8[v4];
	a1[1] = v8;
	a1[2] = &v8[28 * v6];
	a1[3] = &v8[v4];
	return result;
}

