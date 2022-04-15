#include "../winhttp.h"

//----- (00000001405BAE90) ----------------------------------------------------
__int64 __fastcall sub_1405BAE90(__int64 a1)
{
	__int64 result; // rax
	int v2; // edx

	result = *(_QWORD*)(a1 + 664) >> 12;
	if ((*(_QWORD*)(a1 + 664) & 0x1000i64) != 0)
	{
		v2 = 0;
		if ((*(_QWORD*)(a1 + 664) & 0x2000i64) != 0)
			v2 = 2;
		return sub_1400CD7A0(a1, v2);
	}
	return result;
}

