#include "../winhttp.h"

//----- (0000000140282660) ----------------------------------------------------
__int64 __fastcall sub_140282660(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64* v4; // rax
	__int64 v5; // rax

	v2 = a1[3];
	if (v2 == a1[5] - 8i64)
	{
		sub_14018B900(a1[4], 0);
		v4 = (__int64*)(a1[6] + 8i64);
		a1[6] = v4;
		v5 = *v4;
		a1[4] = v5;
		a1[5] = v5 + 496;
		result = a1[4];
		a1[3] = result;
	}
	else
	{
		result = v2 + 8;
		a1[3] = v2 + 8;
	}
	return result;
}

