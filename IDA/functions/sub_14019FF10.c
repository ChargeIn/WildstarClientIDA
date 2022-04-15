#include "../winhttp.h"

//----- (000000014019FF10) ----------------------------------------------------
__int64 __fastcall sub_14019FF10(__int64 a1)
{
	__int64 result; // rax
	void* v3; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B5E790;
			v3 = *(void**)(a1 + 16);
			if (v3)
				CloseHandle(v3);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B5E790: using guessed type __int64 (__fastcall *off_140B5E790[5])();

