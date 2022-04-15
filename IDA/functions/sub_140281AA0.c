//----- (0000000140281AA0) ----------------------------------------------------
void __fastcall sub_140281AA0(__int64 a1)
{
	unsigned __int64 v2; // rcx
	__int64 v3; // rbp
	int* v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	HANDLE EventW; // rcx

	v2 = *(_QWORD*)(a1 + 8576);
	if (v2)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8568) + 8 * (*(unsigned int*)(a1 + 240) % v2));
		v4 = (int*)(a1 + 6368);
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(a1 + 6368) == CurrentThreadId)
		{
			++* (_QWORD*)(a1 + 6376);
		}
		else
		{
			v6 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6376), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v6 >= 0x400)
				{
					sub_14019FB60(a1 + 6368, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*v4 = CurrentThreadId;
		}
	LABEL_9:
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6352) + 224i64))(*(_QWORD*)(a1 + 6352), v3);
		if (*(_QWORD*)(a1 + 6376) <= 1ui64)
		{
			*v4 = 0;
			_InterlockedExchange64((volatile __int64*)(a1 + 6376), 0i64);
			if (*(_QWORD*)(a1 + 6384))
			{
				if (!*(_QWORD*)(a1 + 6392))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6392), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(a1 + 6392));
			}
		}
		else
		{
			--* (_QWORD*)(a1 + 6376);
		}
	}
	++* (_DWORD*)(a1 + 240);
}

