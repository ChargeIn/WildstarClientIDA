//----- (00000001401C6F60) ----------------------------------------------------
int __fastcall sub_1401C6F60(__int64 a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	HANDLE EventW; // rcx

	v1 = qword_140C63758;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 8) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 16);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 16), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 8) = CurrentThreadId;
	}
LABEL_8:
	if (!*(_DWORD*)(a1 + 40))
	{
		*(_DWORD*)(a1 + 40) = 1;
		if (!*(_QWORD*)(a1 + 80))
			sub_1401C60B0(a1);
	}
	v5 = *(_QWORD*)(v1 + 16);
	if (v5 <= 1)
	{
		*(_DWORD*)(v1 + 8) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 16), 0i64);
		v5 = *(_QWORD*)(v1 + 24);
		if (v5)
		{
			if (!*(_QWORD*)(v1 + 32))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v5) = SetEvent(*(HANDLE*)(v1 + 32));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 16);
	}
	return v5;
}
// 140C63758: using guessed type __int64 qword_140C63758;

