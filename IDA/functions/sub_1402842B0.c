//----- (00000001402842B0) ----------------------------------------------------
__int64 __fastcall sub_1402842B0(__int64 a1, __int64* a2)
{
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	int* v7; // rax
	__int64 v8; // rax
	HANDLE EventW; // rcx

	if (!a2)
		return 2147942487i64;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 24) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 32);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(a1 + 24, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)(a1 + 24) = CurrentThreadId;
	}
LABEL_10:
	v7 = sub_14018B280(88i64, 0);
	if (v7)
		v8 = sub_1402BC050((__int64)v7, a1);
	else
		v8 = 0i64;
	*a2 = v8;
	if (*(_QWORD*)(a1 + 32) <= 1ui64)
	{
		*(_DWORD*)(a1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 32), 0i64);
		if (*(_QWORD*)(a1 + 40))
		{
			if (!*(_QWORD*)(a1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 32);
	}
	return 0i64;
}

