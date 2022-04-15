//----- (00000001408892A0) ----------------------------------------------------
__int64 __fastcall sub_1408892A0(LPVOID lpParameter, int* a2)
{
	HANDLE v4; // rax
	unsigned int v5; // eax
	__int64 result; // rax
	DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

	*((_QWORD*)lpParameter + 10) = CreateEventW(0i64, 1, 0, 0i64);
	*((_QWORD*)lpParameter + 11) = CreateEventW(0i64, 1, 0, 0i64);
	*((_QWORD*)lpParameter + 8) = CreateEventW(0i64, 1, 0, 0i64);
	*((_QWORD*)lpParameter + 9) = CreateEventW(0i64, 1, 1, 0i64);
	*((_QWORD*)lpParameter + 12) = 0i64;
	*((_DWORD*)lpParameter + 27) = 0;
	v4 = CreateThread(0i64, (unsigned int)a2[2], (LPTHREAD_START_ROUTINE)sub_140889130, lpParameter, 0, &ThreadId);
	*((_QWORD*)lpParameter + 2) = v4;
	if (!v4)
		goto LABEL_6;
	sub_14083E140(ThreadId, (ULONG_PTR)"AK::IOThread");
	if (!SetThreadPriority(*((HANDLE*)lpParameter + 2), *a2)
		|| (v5 = a2[1]) != 0 && !SetThreadAffinityMask(*((HANDLE*)lpParameter + 2), v5))
	{
		CloseHandle(*((HANDLE*)lpParameter + 2));
	LABEL_6:
		*((_QWORD*)lpParameter + 2) = 0i64;
	}
	if (!*((_QWORD*)lpParameter + 2))
		return 2i64;
	if (!*((_QWORD*)lpParameter + 8))
		return 2i64;
	if (!*((_QWORD*)lpParameter + 10))
		return 2i64;
	result = 1i64;
	if (!*((_QWORD*)lpParameter + 11))
		return 2i64;
	return result;
}

