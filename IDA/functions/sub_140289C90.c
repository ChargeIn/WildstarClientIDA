#include "../winhttp.h"

//----- (0000000140289C90) ----------------------------------------------------
__int64 __fastcall sub_140289C90(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			sub_140289880(a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

