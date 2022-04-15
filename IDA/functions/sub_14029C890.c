#include "../winhttp.h"

//----- (000000014029C890) ----------------------------------------------------
__int64 __fastcall sub_14029C890(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 24));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			sub_14029C760((_QWORD*)a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

