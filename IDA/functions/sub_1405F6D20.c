#include "../winhttp.h"

//----- (00000001405F6D20) ----------------------------------------------------
int* __fastcall sub_1405F6D20(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	unsigned __int64 v5; // rbp
	int** v6; // rdi
	int* result; // rax
	int* v8; // rcx
	int v9; // [rsp+38h] [rbp+10h] BYREF

	v9 = a2;
	v3 = a1 + 88;
	if (*(_QWORD*)(a1 + 88) == *(_QWORD*)(a1 + 96))
		sub_1400290D0(a1 + 88);
	v5 = (*(__int64(__fastcall**)(int*))(v3 + 24))(&v9);
	v6 = (int**)(*(_QWORD*)(v3 + 16) + 8 * (v5 % *(_QWORD*)(v3 + 8)));
	result = sub_14018B280(24i64, 0);
	if (result)
	{
		v8 = *v6;
		*(_QWORD*)result = v5;
		*((_QWORD*)result + 1) = v8;
		LODWORD(v8) = v9;
		result[5] = a3;
		result[4] = (int)v8;
		*v6 = result;
	}
	else
	{
		*v6 = 0i64;
	}
	++* (_QWORD*)v3;
	return result;
}

