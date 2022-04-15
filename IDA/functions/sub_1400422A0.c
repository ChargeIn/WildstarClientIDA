#include "../winhttp.h"

//----- (00000001400422A0) ----------------------------------------------------
_QWORD* __fastcall sub_1400422A0(_QWORD* a1, __int64 a2, __int64 a3)
{
	unsigned __int64 v6; // rbx
	__int64 v7; // rbx
	int* v8; // rax
	_WORD* v9; // rax

	v6 = ((__int64)(*(_QWORD*)(a2 + 16) - *(_QWORD*)(a2 + 8)) >> 1)
		+ 1
		+ ((__int64)(*(_QWORD*)(a3 + 16) - *(_QWORD*)(a3 + 8)) >> 1);
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (v6 <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v7 = 2 * v6;
		v8 = sub_14018B280(v7, 0);
		a1[1] = v8;
		a1[2] = v8;
		a1[3] = (char*)v8 + v7;
	}
	v9 = (_WORD*)a1[2];
	if (v9)
		*v9 = 0;
	sub_14001C310(a1, *(int**)(a2 + 8), *(int**)(a2 + 16));
	sub_14001C310(a1, *(int**)(a3 + 8), *(int**)(a3 + 16));
	return a1;
}

