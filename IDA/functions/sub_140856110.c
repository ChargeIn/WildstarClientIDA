#include "../winhttp.h"

//----- (0000000140856110) ----------------------------------------------------
__int64 __fastcall sub_140856110(_BYTE* lpParameter)
{
	HANDLE EventW; // rax
	DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

	lpParameter[8] = 0;
	EventW = CreateEventW(0i64, 0, 0, 0i64);
	*(_QWORD*)lpParameter = EventW;
	if (!EventW)
		return 2i64;
	hThread = CreateThread(
		0i64,
		(unsigned int)dwStackSize,
		(LPTHREAD_START_ROUTINE)sub_1408560A0,
		lpParameter,
		0,
		&ThreadId);
	if (!hThread)
		goto LABEL_6;
	sub_14083E140(ThreadId, (ULONG_PTR)"AK::EventManager");
	if (!SetThreadPriority(hThread, *((int*)&hWnd + 2))
		|| *((_DWORD*)&hWnd + 3) && !SetThreadAffinityMask(hThread, *((unsigned int*)&hWnd + 3)))
	{
		CloseHandle(hThread);
	LABEL_6:
		hThread = 0i64;
		return 2i64;
	}
	if (hThread)
		return 1i64;
	else
		return 2i64;
}

