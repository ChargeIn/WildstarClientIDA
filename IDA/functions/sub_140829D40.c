#include "../winhttp.h"

//----- (0000000140829D40) ----------------------------------------------------
__int64 __fastcall sub_140829D40(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 result; // rax

	v2 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 12i64;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_14082A190((__int64*)a1, 5) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 12;
	return result;
}

