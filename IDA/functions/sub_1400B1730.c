//----- (00000001400B1730) ----------------------------------------------------
int __fastcall sub_1400B1730(__int64 a1)
{
	_DWORD* StackBase; // rdi
	int v3; // ebp
	int CurrentThreadId; // r8d
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	HANDLE EventW; // rcx
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v3 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 24);
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(a1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 16) = CurrentThreadId;
	}
LABEL_8:
	QueryPerformanceCounter(&PerformanceCount);
	*(_QWORD*)(a1 + 392) = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	sub_1400B23B0(a1, 3);
	*(_DWORD*)(a1 + 192) = 4;
	v6 = *(_QWORD*)(a1 + 24);
	if (v6 <= 1)
	{
		*(_DWORD*)(a1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 24), 0i64);
		v6 = *(_QWORD*)(a1 + 32);
		if (v6)
		{
			if (!*(_QWORD*)(a1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v6) = SetEvent(*(HANDLE*)(a1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 24);
	}
	*(StackBase - 1) = v3;
	return v6;
}

