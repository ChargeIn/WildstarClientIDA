#include "../winhttp.h"

//----- (00000001401C0710) ----------------------------------------------------
__int64 __fastcall sub_1401C0710(__int64 a1)
{
	__int64 result; // rax
	void* v3; // rcx
	void* v4; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 144));
	if (!(_DWORD)result)
	{
		if (a1)
		{
			*(_QWORD*)a1 = off_140B5F2E0;
			v3 = *(void**)(a1 + 128);
			if (v3)
				WinHttpCloseHandle(v3);
			v4 = *(void**)(a1 + 120);
			if (v4)
				WinHttpCloseHandle(v4);
			sub_14018B900(*(_QWORD*)(a1 + 8), 0);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	return result;
}
// 140B5F2E0: using guessed type __int64 (__fastcall *off_140B5F2E0[19])();

