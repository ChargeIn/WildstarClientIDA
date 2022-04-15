#include "../winhttp.h"

//----- (000000014083CDF0) ----------------------------------------------------
__int64 __fastcall sub_14083CDF0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	__int64 result; // rax

	v2 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_14083CFC0(a1, 4) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
		*(_QWORD*)(v3 + 8) = 1i64;
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 16;
	return result;
}

