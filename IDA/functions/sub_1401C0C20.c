#include "../winhttp.h"

//----- (00000001401C0C20) ----------------------------------------------------
__int64 __fastcall sub_1401C0C20(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 536));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B5F380;
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B5F380: using guessed type __int64 (__fastcall *off_140B5F380[13])();

