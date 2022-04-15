//----- (000000014082E750) ----------------------------------------------------
__int64 __fastcall sub_14082E750(LPCRITICAL_SECTION lpCriticalSection)
{
	bool v2; // al
	bool v3; // di
	int v5[18]; // [rsp+20h] [rbp-48h] BYREF

	EnterCriticalSection(lpCriticalSection);
	v2 = *(HANDLE*)((char*)&lpCriticalSection[1].LockSemaphore + 4) == *(HANDLE*)((char*)&lpCriticalSection[1].SpinCount
		+ 4)
		&& !BYTE4(lpCriticalSection[2].DebugInfo);
	v3 = !v2;
	if (!v2)
	{
		v5[0] = 8;
		sub_14082C0F0(lpCriticalSection, v5, 8u);
		++HIDWORD(lpCriticalSection[4].SpinCount);
	}
	LeaveCriticalSection(lpCriticalSection);
	if (v3)
		sub_140856280((void**)&lpCriticalSection[5].LockCount);
	return 1i64;
}
// 14082E750: using guessed type int var_48[18];

