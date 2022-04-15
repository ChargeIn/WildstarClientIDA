#include "../winhttp.h"

//----- (0000000140716610) ----------------------------------------------------
__int64 __fastcall sub_140716610(__int64 a1, int a2, int* a3)
{
	int* v6; // rax
	int* v7; // r9
	bool v8; // zf
	int** i; // rax

	v6 = sub_14018B280(64i64, 0);
	v7 = v6;
	if (v6)
	{
		*((_QWORD*)v6 + 3) = 0i64;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 5) = 0i64;
		*((_QWORD*)v6 + 6) = 0i64;
		*(_QWORD*)v6 = off_140B73AF0;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = *((_QWORD*)v7 + 5) == 0i64;
	v7[2] = a2;
	v7[3] = 0;
	*((_QWORD*)v7 + 2) = 0i64;
	v7[14] = *a3;
	if (v8)
	{
		for (i = (int**)(a1 + 16); *i; i = (int**)(*i + 12))
			;
		*((_QWORD*)v7 + 5) = i;
		*((_QWORD*)v7 + 6) = 0i64;
		*i = v7;
	}
	return 0i64;
}
// 140B73AF0: using guessed type __int64 (__fastcall *off_140B73AF0[59])();

