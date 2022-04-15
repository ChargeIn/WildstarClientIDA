#include "../winhttp.h"

//----- (00000001408426D0) ----------------------------------------------------
__int64 __fastcall sub_1408426D0(_BYTE* lpParameter)
{
	HANDLE EventW; // rax
	DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

	if (hHandle)
		return 2i64;
	lpParameter[72] = 0;
	EventW = CreateEventW(0i64, 0, 0, 0i64);
	*((_QWORD*)lpParameter + 8) = EventW;
	if (!EventW)
		return 2i64;
	hHandle = CreateThread(
		0i64,
		*((unsigned int*)&dwStackSize + 3),
		(LPTHREAD_START_ROUTINE)sub_14083E180,
		lpParameter,
		0,
		&ThreadId);
	if (!hHandle)
		goto LABEL_7;
	sub_14083E140(ThreadId, (ULONG_PTR)"AK::BankManager");
	if (!SetThreadPriority(hHandle, SHIDWORD(dwStackSize))
		|| *((_DWORD*)&dwStackSize + 2) && !SetThreadAffinityMask(hHandle, *((unsigned int*)&dwStackSize + 2)))
	{
		CloseHandle(hHandle);
	LABEL_7:
		hHandle = 0i64;
		return 2i64;
	}
	if (hHandle)
		return 1i64;
	else
		return 2i64;
}

