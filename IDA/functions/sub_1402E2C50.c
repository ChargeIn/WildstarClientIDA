#include "../winhttp.h"

//----- (00000001402E2C50) ----------------------------------------------------
__int64 __fastcall sub_1402E2C50(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
			sub_1402E2C80((_QWORD*)a1);
		return 0i64;
	}
	return result;
}

