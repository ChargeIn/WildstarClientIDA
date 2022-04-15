#include "../winhttp.h"

//----- (000000014033DF00) ----------------------------------------------------
__int64 __fastcall sub_14033DF00(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	bool v4; // zf
	__int64 v5; // rcx
	__int64* v6; // rax
	__int64 v7; // rax

	v2 = a1[3];
	result = a1[5] - 16i64;
	v4 = v2 == result;
	v5 = *(_QWORD*)(v2 + 8);
	if (v4)
	{
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		sub_14018B900(a1[4], 0);
		v6 = (__int64*)(a1[6] + 8i64);
		a1[6] = v6;
		v7 = *v6;
		a1[4] = v7;
		a1[5] = v7 + 496;
		result = a1[4];
		a1[3] = result;
	}
	else
	{
		if (v5)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[3] += 16i64;
	}
	return result;
}

