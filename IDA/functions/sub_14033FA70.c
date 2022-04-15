#include "../winhttp.h"

//----- (000000014033FA70) ----------------------------------------------------
__int64 __fastcall sub_14033FA70(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	int* v7; // rax
	int* v8; // rcx
	bool v9; // zf
	int** v10; // r8
	__int64 v11; // rax

	v3 = qword_140C65850;
	if (!a2)
		return 2147942487i64;
	if (!*(_QWORD*)(qword_140C65850 + 88))
		return 2147500036i64;
	v7 = sub_14018B280(32i64, 0);
	v8 = v7;
	if (v7)
	{
		*((_QWORD*)v7 + 2) = 0i64;
		*((_QWORD*)v7 + 3) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = *((_QWORD*)v8 + 2) == 0i64;
	*(_QWORD*)v8 = a2;
	*((_QWORD*)v8 + 1) = a3;
	v10 = (int**)(v3 + 112);
	if (v9)
	{
		*((_QWORD*)v8 + 2) = v10;
		*((_QWORD*)v8 + 3) = *v10;
		*v10 = v8;
		v11 = *((_QWORD*)v8 + 3);
		if (v11)
			*(_QWORD*)(v11 + 16) = v8 + 6;
	}
	return 0i64;
}
// 140C65850: using guessed type __int64 qword_140C65850;

