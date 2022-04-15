#include "../winhttp.h"

//----- (0000000140851590) ----------------------------------------------------
__int64 __fastcall sub_140851590(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 result; // rax

	v2 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 3;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_140892EF0(a1, 8) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 8;
	return result;
}

