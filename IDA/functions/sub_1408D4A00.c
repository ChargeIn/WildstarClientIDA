#include "../winhttp.h"

//----- (00000001408D4A00) ----------------------------------------------------
__int64 __fastcall sub_1408D4A00(__int64 a1, double a2)
{
	unsigned int i; // ebx
	__int64 result; // rax

	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		result = sub_1408D8CA0(a1, a2 * 0.01 * -2.0, 1176i64 * i + *(_QWORD*)(a1 + 8) + 80i64, 8);
	return result;
}

