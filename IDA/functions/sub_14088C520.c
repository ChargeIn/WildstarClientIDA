#include "../winhttp.h"

//----- (000000014088C520) ----------------------------------------------------
__int64 __fastcall sub_14088C520(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 result; // rax

	v2 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 40i64;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_14088C660(a1, 1) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 40;
	return result;
}

