#include "../winhttp.h"

//----- (000000014079AAA0) ----------------------------------------------------
void __fastcall sub_14079AAA0(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rdx
	__int64 v4; // rdx

	for (; a1[18]; *(_QWORD*)(v2 + 32) = 0i64)
	{
		*(_QWORD*)(a1[18] + 16i64) = 0i64;
		v2 = a1[18];
		v3 = *(_QWORD**)(v2 + 24);
		if (v3)
			*v3 = *(_QWORD*)(v2 + 32);
		v4 = *(_QWORD*)(v2 + 32);
		if (v4)
			*(_QWORD*)(v4 + 24) = *(_QWORD*)(v2 + 24);
		*(_QWORD*)(v2 + 24) = 0i64;
	}
	sub_140195D70((__int64)(a1 + 1));
	*a1 = 0i64;
}

