#include "../winhttp.h"

//----- (00000001407C08E0) ----------------------------------------------------
__int64 __fastcall sub_1407C08E0(_QWORD** a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* v9; // rax
	char* v10; // r8

	v9 = sub_14018B280(48i64, 0);
	*(_QWORD*)v9 = a3;
	*((_QWORD*)v9 + 1) = a4;
	if (a4)
		v10 = (char*)*a1 - a2;
	else
		v10 = 0i64;
	*((_QWORD*)v9 + 2) = v10;
	*((_QWORD*)v9 + 4) = 0i64;
	*((_QWORD*)v9 + 5) = 0i64;
	*((_QWORD*)v9 + 3) = a5;
	*a1[2] = v9;
	a1[2] = v9 + 10;
	*a1 = (_QWORD*)((char*)*a1 + ((a4 + 15) & 0xFFFFFFFFFFFFFFF0ui64));
	return (__int64)*a1;
}

