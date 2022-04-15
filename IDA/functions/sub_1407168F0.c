#include "../winhttp.h"

//----- (00000001407168F0) ----------------------------------------------------
__int64 __fastcall sub_1407168F0(__int64 a1, int a2)
{
	int* v4; // rax
	int* v5; // r8
	bool v6; // zf
	int** i; // rax

	v4 = sub_14018B280(56i64, 0);
	v5 = v4;
	if (v4)
	{
		*((_QWORD*)v4 + 3) = 0i64;
		*((_QWORD*)v4 + 4) = 0i64;
		*((_QWORD*)v4 + 5) = 0i64;
		*((_QWORD*)v4 + 6) = 0i64;
		*(_QWORD*)v4 = off_140B73B38;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = *((_QWORD*)v5 + 5) == 0i64;
	v5[2] = a2;
	v5[3] = 0;
	*((_QWORD*)v5 + 2) = 0i64;
	if (v6)
	{
		for (i = (int**)(a1 + 16); *i; i = (int**)(*i + 12))
			;
		*((_QWORD*)v5 + 5) = i;
		*((_QWORD*)v5 + 6) = 0i64;
		*i = v5;
	}
	return 0i64;
}
// 140B73B38: using guessed type __int64 (__fastcall *off_140B73B38[50])();

