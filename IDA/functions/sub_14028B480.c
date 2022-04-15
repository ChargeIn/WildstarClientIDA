//----- (000000014028B480) ----------------------------------------------------
int __fastcall sub_14028B480(__int64 a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	volatile signed __int32* v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	HANDLE EventW; // rcx
	unsigned __int64* v10; // rcx
	__int64 v11; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)a1 = off_140B61830;
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
	if (*(_QWORD*)(a1 + 56))
	{
		v5 = (volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 676i64);
		_InterlockedDecrement(v5);
		_InterlockedExchangeAdd(v5 + 1, -*(_DWORD*)(a1 + 24));
		_InterlockedIncrement(v5 + 4);
		_InterlockedExchangeAdd(v5 + 5, *(_DWORD*)(a1 + 24));
		v6 = *(_QWORD**)(a1 + 56);
		if (v6)
			*v6 = *(_QWORD*)(a1 + 64);
		v7 = *(_QWORD*)(a1 + 64);
		if (v7)
			*(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 56);
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	*(_DWORD*)(a1 + 36) = 0;
	v8 = *(_QWORD*)(v1 + 32);
	if (v8 <= 1)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		v8 = *(_QWORD*)(v1 + 40);
		if (v8)
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v8) = SetEvent(*(HANDLE*)(v1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
	}
	v10 = *(unsigned __int64**)(a1 + 56);
	if (v10)
	{
		v8 = *(_QWORD*)(a1 + 64);
		*v10 = v8;
	}
	v11 = *(_QWORD*)(a1 + 64);
	if (v11)
	{
		v8 = *(_QWORD*)(a1 + 56);
		*(_QWORD*)(v11 + 56) = v8;
	}
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	return v8;
}
// 140B61830: using guessed type __int64 (__fastcall *off_140B61830[9])();

