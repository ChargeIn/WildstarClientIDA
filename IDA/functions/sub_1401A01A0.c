#include "../winhttp.h"

//----- (00000001401A01A0) ----------------------------------------------------
__int64 __fastcall sub_1401A01A0(__int64 a1)
{
	__int64 result; // rax
	void* v3; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B5E770;
			v3 = *(void**)(a1 + 16);
			if (v3)
				CloseHandle(v3);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B5E770: using guessed type __int64 (__fastcall *off_140B5E770[9])();

