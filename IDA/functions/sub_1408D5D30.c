#include "../winhttp.h"

//----- (00000001408D5D30) ----------------------------------------------------
__int64 __fastcall sub_1408D5D30(__int64 a1)
{
	unsigned int i; // ebx
	__int64 result; // rax

	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		result = sub_1408D8CC0(a1, 0, *(_QWORD*)(a1 + 8) + 168i64 * i, 11);
	return result;
}

