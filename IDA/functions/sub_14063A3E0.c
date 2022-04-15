#include "../winhttp.h"

//----- (000000014063A3E0) ----------------------------------------------------
__int64 __fastcall sub_14063A3E0(__int64 a1, int* a2)
{
	unsigned __int64 v4; // rbp
	int** v5; // rdi
	int* v6; // rax
	int* v7; // rcx

	if (*(_QWORD*)a1 == *(_QWORD*)(a1 + 8))
		sub_1400290D0(a1);
	v4 = (*(__int64(__fastcall**)(int*))(a1 + 24))(a2);
	v5 = (int**)(*(_QWORD*)(a1 + 16) + 8 * (v4 % *(_QWORD*)(a1 + 8)));
	v6 = sub_14018B280(104i64, 0);
	if (v6)
	{
		v7 = *v5;
		*(_QWORD*)v6 = v4;
		*((_QWORD*)v6 + 1) = v7;
		v6[4] = *a2;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 3) = 0i64;
		*((_QWORD*)v6 + 6) = 0i64;
		*((_QWORD*)v6 + 5) = 0i64;
		*((_QWORD*)v6 + 8) = 0i64;
		*((_QWORD*)v6 + 7) = 0i64;
		*((_QWORD*)v6 + 10) = 0i64;
		*((_QWORD*)v6 + 9) = 0i64;
		*((_QWORD*)v6 + 12) = 0i64;
		*((_QWORD*)v6 + 11) = 0i64;
	}
	else
	{
		v6 = 0i64;
	}
	*v5 = v6;
	++* (_QWORD*)a1;
	return (__int64)(*v5 + 6);
}

