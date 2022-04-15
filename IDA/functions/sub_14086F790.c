#include "../winhttp.h"

//----- (000000014086F790) ----------------------------------------------------
float __fastcall sub_14086F790(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 i; // r8

	v2 = *(_QWORD*)(a1 + 168);
	for (i = *(_QWORD*)(a1 + 176); v2 != i; v2 += 16i64)
	{
		if (*(_QWORD*)(v2 + 8) == a2)
			break;
	}
	return *(float*)(*(_QWORD*)(v2 + 8) + 44i64);
}

