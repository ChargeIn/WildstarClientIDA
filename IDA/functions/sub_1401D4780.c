#include "../winhttp.h"

//----- (00000001401D4780) ----------------------------------------------------
__int64 __fastcall sub_1401D4780(__int64 a1)
{
	__int64 result; // rax
	void* v3; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 68));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B5FD10;
			v3 = *(void**)(a1 + 48);
			if (v3 != (void*)-1i64)
				CloseHandle(v3);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B5FD10: using guessed type __int64 (__fastcall *off_140B5FD10[4])();

