#include "../winhttp.h"

//----- (00000001402E3510) ----------------------------------------------------
__int64 __fastcall sub_1402E3510(__int64 a1, __int64* a2)
{
	unsigned int v2; // r9d
	__int64 result; // rax

	v2 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 4i64);
	if (v2)
	{
		if (!a2)
			return 0i64;
		result = sub_1402DC230(*(__int64**)(a1 + 16), v2, a2);
		if ((int)result >= 0)
			return 0i64;
	}
	else
	{
		if (a2)
			*a2 = 0i64;
		return 1i64;
	}
	return result;
}

