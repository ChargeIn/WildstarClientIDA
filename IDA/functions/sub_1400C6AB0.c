#include "../winhttp.h"

//----- (00000001400C6AB0) ----------------------------------------------------
__int64* __fastcall sub_1400C6AB0(__int64* a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	__int64 v4; // rcx

	v1 = a1[1];
	if (v1)
	{
		sub_140150220(a1[1]);
		sub_14018B900(v1, 0);
	}
	v3 = a1[3];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[3] = 0i64;
	}
	v4 = a1[6];
	if (v4)
		sub_14018B900(v4, 0);
	sub_14018B900((__int64)a1, 0);
	return a1;
}

