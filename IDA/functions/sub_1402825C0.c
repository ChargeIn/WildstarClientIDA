#include "../winhttp.h"

//----- (00000001402825C0) ----------------------------------------------------
void __fastcall sub_1402825C0(_QWORD* a1, __int64* a2)
{
	__int64 v3; // rcx
	__int64* v4; // rcx
	__int64 v5; // rdi
	__int64* v6; // rax
	__int64 v7; // rax
	bool v8; // zf
	_QWORD* v9; // rax

	v3 = a1[3];
	if (v3 == a1[4])
	{
		v5 = *a2;
		if (!((__int64)(a1[6] - a1[1]) >> 3))
			sub_140282940((__int64)a1, (__int64)a2, 1);
		*(_QWORD*)(a1[6] - 8i64) = sub_14018B280(496i64, 0);
		v6 = (__int64*)(a1[6] - 8i64);
		a1[6] = v6;
		v7 = *v6;
		a1[4] = v7;
		v7 += 496i64;
		a1[5] = v7;
		v8 = v7 == 8;
		v9 = (_QWORD*)(v7 - 8);
		a1[3] = v9;
		if (!v8)
			*v9 = v5;
	}
	else
	{
		v4 = (__int64*)(v3 - 8);
		if (v4)
			*v4 = *a2;
		a1[3] -= 8i64;
	}
}

