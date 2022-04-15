//----- (00000001402AC3F0) ----------------------------------------------------
void __fastcall sub_1402AC3F0(__int64 a1)
{
	__int64 v2; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v4; // r8
	__int64 v5; // rcx
	HANDLE EventW; // rcx

	if (*(_QWORD*)(a1 + 32))
	{
		v2 = *(_QWORD*)(a1 + 16) + 6368i64;
		CurrentThreadId = GetCurrentThreadId();
		v4 = CurrentThreadId;
		if (*(_DWORD*)v2 == CurrentThreadId)
		{
			++* (_QWORD*)(v2 + 8);
		}
		else
		{
			v5 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v5 >= 0x400)
				{
					sub_14019FB60(v2, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v2 = CurrentThreadId;
		}
	LABEL_9:
		(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 216i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
			*(_QWORD*)(a1 + 32),
			v4);
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
	}
}
// 1402AC47A: variable 'v4' is possibly undefined

