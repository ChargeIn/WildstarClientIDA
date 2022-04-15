#include "../winhttp.h"

//----- (00000001401D4480) ----------------------------------------------------
__int64 __fastcall sub_1401D4480(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 568));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B5FCC0;
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B5FCC0: using guessed type __int64 (__fastcall *off_140B5FCC0[14])();

