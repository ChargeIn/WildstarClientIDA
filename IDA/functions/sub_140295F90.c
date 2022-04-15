//----- (0000000140295F90) ----------------------------------------------------
int __fastcall sub_140295F90(__int64 a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	HANDLE EventW; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 24) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 32);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 24, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 24) = CurrentThreadId;
	}
LABEL_8:
	if (*(int*)(a1 + 40) < 1 || (int)sub_140295B40(a1) >= 0)
	{
		*(_DWORD*)(a1 + 40) = 0;
		if ((int)sub_140295AA0(a1) >= 0)
			*(_DWORD*)(a1 + 40) = 2;
	}
	v5 = *(_QWORD*)(v1 + 32);
	if (v5 <= 1)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		v5 = *(_QWORD*)(v1 + 40);
		if (v5)
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v5) = SetEvent(*(HANDLE*)(v1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
	}
	return v5;
}

