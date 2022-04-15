#include "../winhttp.h"

//----- (00000001400BD4A0) ----------------------------------------------------
int* __fastcall sub_1400BD4A0(__int64 a1, int* a2, int* a3)
{
	unsigned __int64 v6; // rbp
	int** v7; // rdi
	int* result; // rax
	int* v9; // rcx

	if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8))
		sub_1400290D0(a1);
	v6 = (*(__int64(__fastcall**)(int*))(a1 + 24))(a2);
	v7 = (int**)(*(_QWORD*)(a1 + 16) + 8 * (v6 % *(_QWORD*)(a1 + 8)));
	result = sub_14018B280(24i64, 0);
	if (result)
	{
		v9 = *v7;
		*(_QWORD*)result = v6;
		*((_QWORD*)result + 1) = v9;
		result[4] = *a2;
		result[5] = *a3;
		*v7 = result;
	}
	else
	{
		*v7 = 0i64;
	}
	++* (_QWORD*)a1;
	return result;
}

