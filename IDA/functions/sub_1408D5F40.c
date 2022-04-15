#include "../winhttp.h"

//----- (00000001408D5F40) ----------------------------------------------------
__int64 __fastcall sub_1408D5F40(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // edi
	int i; // esi

	result = sub_1408DA370(*(_DWORD*)a1, 1.0);
	v3 = 0;
	for (i = result; v3 < *(_DWORD*)(a1 + 4); ++v3)
		result = sub_1408D8CC0(a1, i, *(_QWORD*)(a1 + 8) + 168i64 * v3, 15);
	return result;
}

