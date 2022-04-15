#include "../winhttp.h"

//----- (0000000140856210) ----------------------------------------------------
BOOL __fastcall sub_140856210(__int64 a1)
{
	HANDLE v2; // rcx
	BOOL result; // eax

	*(_BYTE*)(a1 + 8) = 1;
	v2 = hThread;
	if (hThread)
	{
		if (*(_QWORD*)a1)
		{
			SetEvent(*(HANDLE*)a1);
			v2 = hThread;
		}
		WaitForSingleObject(v2, 0xFFFFFFFF);
		result = CloseHandle(hThread);
		hThread = 0i64;
	}
	if (*(_QWORD*)a1)
		result = CloseHandle(*(HANDLE*)a1);
	*(_QWORD*)a1 = 0i64;
	return result;
}

