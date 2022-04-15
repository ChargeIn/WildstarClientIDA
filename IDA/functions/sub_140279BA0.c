//----- (0000000140279BA0) ----------------------------------------------------
__int64 __fastcall sub_140279BA0(__int64 a1)
{
	__int64 v2; // rbx
	int CurrentThreadId; // edx
	__int64 v4; // rcx
	__int64 v5; // rdi
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	HANDLE EventW; // rcx
	unsigned int v9; // eax
	HANDLE v10; // rcx

	v2 = a1 + 6784;
	while (1)
	{
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6816) + 24i64))(*(_QWORD*)(a1 + 6816), 0xFFFFFFFFi64);
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v2 == CurrentThreadId)
		{
			++* (_QWORD*)(v2 + 8);
		}
		else
		{
			v4 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v4 >= 0x400)
				{
					sub_14019FB60(v2, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v2 = CurrentThreadId;
		}
	LABEL_9:
		v5 = *(_QWORD*)(a1 + 6824);
		if (!v5)
			break;
		v6 = *(_QWORD**)(v5 + 64);
		if (v6)
			*v6 = *(_QWORD*)(v5 + 72);
		v7 = *(_QWORD*)(v5 + 72);
		if (v7)
			*(_QWORD*)(v7 + 64) = *(_QWORD*)(v5 + 64);
		*(_QWORD*)(v5 + 64) = 0i64;
		*(_QWORD*)(v5 + 72) = 0i64;
		if (*(_QWORD*)(v2 + 8) <= 1ui64)
		{
			*(_DWORD*)v2 = 0;
			_InterlockedExchange64((volatile __int64*)(v2 + 8), 0i64);
			if (*(_QWORD*)(v2 + 16))
			{
				if (!*(_QWORD*)(v2 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v2 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v2 + 8);
		}
		if (*(_DWORD*)(v5 + 56))
		{
			sub_14019E200(*(_QWORD*)(v5 + 40), 2686648322i64, 0);
		}
		else
		{
			v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(v5 + 32))(*(_QWORD*)(v5 + 24), *(_QWORD*)(v5 + 48));
			sub_14019E200(*(_QWORD*)(v5 + 40), v9, 0);
		}
	}
	if (*(_QWORD*)(v2 + 8) <= 1ui64)
	{
		*(_DWORD*)v2 = 0;
		_InterlockedExchange64((volatile __int64*)(v2 + 8), 0i64);
		if (*(_QWORD*)(v2 + 16))
		{
			if (!*(_QWORD*)(v2 + 24))
			{
				v10 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 24), (signed __int64)v10, 0i64))
					CloseHandle(v10);
			}
			SetEvent(*(HANDLE*)(v2 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v2 + 8);
	}
	return 0i64;
}

