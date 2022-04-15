//----- (00000001403129A0) ----------------------------------------------------
int __fastcall sub_1403129A0(__int64 a1, __int64 a2)
{
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	_QWORD* v6; // rdx
	__int64 v7; // rax
	unsigned __int64 v8; // rax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 104) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 112);
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 112), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(a1 + 104, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 104) = CurrentThreadId;
	}
LABEL_8:
	v6 = (_QWORD*)(a1 + 456);
	if (!*(_QWORD*)(a2 + 32))
	{
		*(_QWORD*)(a2 + 32) = v6;
		*(_QWORD*)(a2 + 40) = *v6;
		*v6 = a2;
		v7 = *(_QWORD*)(a2 + 40);
		if (v7)
			*(_QWORD*)(v7 + 32) = a2 + 40;
	}
	v8 = *(_QWORD*)(a1 + 112);
	if (v8 <= 1)
	{
		*(_DWORD*)(a1 + 104) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 112), 0i64);
		v8 = *(_QWORD*)(a1 + 120);
		if (v8)
		{
			if (!*(_QWORD*)(a1 + 128))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 128), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v8) = SetEvent(*(HANDLE*)(a1 + 128));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 112);
	}
	return v8;
}

