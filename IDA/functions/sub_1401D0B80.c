#include "../winhttp.h"

//----- (00000001401D0B80) ----------------------------------------------------
__int64 __fastcall sub_1401D0B80(__int64 a1, int* a2)
{
	__int64 v2; // rdi
	__int64* v5; // rbx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 16);
	sub_14004EED0((__int64*)(a1 + 8), v2 + 1);
	v5 = (__int64*)(*(_QWORD*)(a1 + 8) + 8 * v2);
	result = sub_1401D15D0(a1, a2);
	*v5 = result;
	return result;
}

