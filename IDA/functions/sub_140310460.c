#include "../winhttp.h"

//----- (0000000140310460) ----------------------------------------------------
__int64 __fastcall sub_140310460(__int64 a1)
{
	bool v1; // zf
	__int64 result; // rax

	v1 = (*(_DWORD*)(a1 + 8))-- == 1;
	result = *(unsigned int*)(a1 + 8);
	if (v1)
	{
		sub_14030FFF0(a1);
		sub_14018B900(a1, 0);
		return 0i64;
	}
	return result;
}

