#include "../winhttp.h"

//----- (00000001407BFDC0) ----------------------------------------------------
__int64 __fastcall sub_1407BFDC0(int a1, int a2, __int64 a3)
{
	__int64 result; // rax

	result = 1i64;
	if (*(_QWORD*)((unsigned int)(a1 * *(_DWORD*)(*(_QWORD*)(a3 + 24) + 8i64)) + *(_QWORD*)(a3 + 56)) < *(_QWORD*)((unsigned int)(a2 * *(_DWORD*)(*(_QWORD*)(a3 + 24) + 8i64)) + *(_QWORD*)(a3 + 56)))
		return 0xFFFFFFFFi64;
	return result;
}

