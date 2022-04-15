#include "../winhttp.h"

//----- (00000001408AB930) ----------------------------------------------------
__int64 __fastcall sub_1408AB930(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rdi
	__int64 result; // rax

	v2 = a1 + 24;
	v3 = 2i64;
	do
	{
		result = sub_1408AD480(v2, *(_QWORD*)(a1 + 16));
		v2 += 944i64;
		--v3;
	} while (v3);
	return result;
}

