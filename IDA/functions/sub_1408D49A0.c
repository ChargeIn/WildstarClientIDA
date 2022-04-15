#include "../winhttp.h"

//----- (00000001408D49A0) ----------------------------------------------------
__int64 __fastcall sub_1408D49A0(__int64 a1)
{
	unsigned int i; // ebx
	__int64 result; // rax

	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		result = sub_1408D8CA0(a1, 0.0, *(_QWORD*)(a1 + 8) + 1176i64 * i, 11);
	return result;
}

