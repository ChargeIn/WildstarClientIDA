#include "../winhttp.h"

//----- (00000001401C42E0) ----------------------------------------------------
BOOL __fastcall sub_1401C42E0(HINTERNET hInternet, __int64 a2, int a3)
{
	BOOL result; // eax
	void* v7; // rcx
	DWORD v8; // edx
	void* v9; // rcx

	WinHttpSetStatusCallback(hInternet, 0i64, 0, 0i64);
	result = WinHttpCloseHandle(hInternet);
	v7 = *(void**)a2;
	v8 = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a2 + 60) = a3;
	if (v7)
	{
		*(_QWORD*)a2 = 0i64;
		*(_QWORD*)(a2 + 8) = 0i64;
		return PostQueuedCompletionStatus(v7, v8, 1ui64, (LPOVERLAPPED)a2);
	}
	else
	{
		v9 = *(void**)(a2 + 24);
		if (v9)
			return SetEvent(v9);
	}
	return result;
}

