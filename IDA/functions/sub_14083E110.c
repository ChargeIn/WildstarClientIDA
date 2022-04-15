#include "../winhttp.h"

//----- (000000014083E110) ----------------------------------------------------
__int64 __fastcall sub_14083E110(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v3; // rcx
	__int64 result; // rax

	v3 = *(_QWORD**)(a2 + 96);
	result = ((__int64)v3 - *(_QWORD*)(a2 + 88)) >> 3;
	if ((unsigned int)result < *(_DWORD*)(a2 + 104))
	{
		result = (__int64)(v3 + 1);
		*(_QWORD*)(a2 + 96) = v3 + 1;
		if (v3)
			*v3 = a3;
	}
	return result;
}

