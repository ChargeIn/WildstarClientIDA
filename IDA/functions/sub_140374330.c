#include "../winhttp.h"

//----- (0000000140374330) ----------------------------------------------------
__int64 __fastcall sub_140374330(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			sub_1403733C0((_QWORD*)a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

