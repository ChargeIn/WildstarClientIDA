#include "../winhttp.h"

//----- (00000001401CE3A0) ----------------------------------------------------
__int64 __fastcall sub_1401CE3A0(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 88));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			sub_1401CE7A0((_QWORD*)a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}

