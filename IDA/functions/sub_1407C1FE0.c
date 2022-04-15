#include "../winhttp.h"

//----- (00000001407C1FE0) ----------------------------------------------------
_QWORD* __fastcall sub_1407C1FE0(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rdx
	int* v4; // rdi
	__int64 v5; // rcx

	*a1 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	a1[5] = 0i64;
	a1[6] = 0i64;
	a1[16] = 0i64;
	a1[15] = 0i64;
	v2 = sub_14018B280(272i64, 0);
	if (v2)
	{
		*((_QWORD*)v2 + 1) = 32i64;
		*(_QWORD*)v2 = off_140B55060;
	}
	else
	{
		v2 = 0i64;
	}
	v3 = (int*)a1[15];
	v4 = v2 + 4;
	if (v3 != v2 + 4)
	{
		sub_1407DB590(v2 + 4, v3, 8i64 * a1[16]);
		v5 = a1[15];
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
		a1[15] = v4;
	}
	a1[8] = 0i64;
	a1[9] = 0i64;
	a1[10] = 0i64;
	a1[11] = 0i64;
	a1[12] = 0i64;
	a1[13] = 0i64;
	a1[14] = 0i64;
	a1[7] = 0i64;
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

