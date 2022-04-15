#include "../winhttp.h"

//----- (000000014086C4D0) ----------------------------------------------------
__int64 __fastcall sub_14086C4D0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rcx
	__int64 result; // rax

	v2 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 40i64;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_14086D2E0(a1, 2) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
		sub_140865E70(v3);
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 40;
	return result;
}

