//----- (0000000140196910) ----------------------------------------------------
int __fastcall sub_140196910(__int64* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	__int64 v5; // rsi
	unsigned __int64 v6; // rax
	HANDLE EventW; // rcx

	v1 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 24);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 16) = CurrentThreadId;
	}
LABEL_8:
	v5 = *a1;
	if (*a1)
	{
		sub_14019E780((_QWORD*)*a1);
		sub_14018B900(v5, 0);
		*a1 = 0i64;
	}
	v6 = *(_QWORD*)(v1 + 24);
	if (v6 <= 1)
	{
		*(_DWORD*)(v1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 24), 0i64);
		v6 = *(_QWORD*)(v1 + 32);
		if (v6)
		{
			if (!*(_QWORD*)(v1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v6) = SetEvent(*(HANDLE*)(v1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 24);
	}
	return v6;
}
// 140C63760: using guessed type __int64 qword_140C63760;

