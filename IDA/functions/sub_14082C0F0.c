//----- (000000014082C0F0) ----------------------------------------------------
__int64 __fastcall sub_14082C0F0(LPCRITICAL_SECTION lpCriticalSection, int* a2, unsigned int a3)
{
	__int64 result; // rax

	*(_WORD*)a2 = a3;
	result = sub_140829A50((__int64)&lpCriticalSection[1], a2, a3);
	if ((_DWORD)result == 52)
	{
		while (a3 <= (unsigned int)sub_140829790())
		{
			ResetEvent(lpCriticalSection[5].LockSemaphore);
			LOBYTE(lpCriticalSection[2].LockCount) = 1;
			LeaveCriticalSection(lpCriticalSection);
			sub_140856280((void**)&lpCriticalSection[5].LockCount);
			WaitForSingleObject(lpCriticalSection[5].LockSemaphore, 0xFFFFFFFF);
			EnterCriticalSection(lpCriticalSection);
			result = sub_140829A50((__int64)&lpCriticalSection[1], a2, a3);
			if ((_DWORD)result != 52)
				return result;
		}
		return 81i64;
	}
	return result;
}

