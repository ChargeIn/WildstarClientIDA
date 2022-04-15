#include "../winhttp.h"

//----- (0000000140845910) ----------------------------------------------------
__int64 __fastcall sub_140845910(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	__int64 result; // rax

	v2 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_140846070(a1, 1) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
		*(_QWORD*)(v3 + 8) = 0i64;
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 16;
	return result;
}

