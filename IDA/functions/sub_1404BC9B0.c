#include "../winhttp.h"

//----- (00000001404BC9B0) ----------------------------------------------------
__int64 __fastcall sub_1404BC9B0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rdi
	_QWORD* v4; // rax
	int* v6; // rax
	__int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v7 = a1;
	v2 = qword_140C659F8;
	v4 = sub_1404CB460(qword_140C659F8 + 120, (__int64)a2);
	if (v4)
		return *v4;
	v6 = sub_14018B280(8i64, 0);
	if (v6)
	{
		*(_QWORD*)v6 = 0i64;
		v7 = (__int64)v6;
	}
	else
	{
		v7 = 0i64;
	}
	sub_1404BC4D0(v2 + 120, a2, &v7);
	return v7;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

