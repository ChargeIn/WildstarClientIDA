//----- (00000001402AE540) ----------------------------------------------------
int __fastcall sub_1402AE540(_QWORD* a1)
{
	__int64 v2; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	_QWORD* v6; // rdx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	unsigned __int64 v9; // rax
	HANDLE EventW; // rcx

	v2 = a1[2] + 6784i64;
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
				goto LABEL_8;
			}
		}
		*(_DWORD*)v2 = CurrentThreadId;
	}
LABEL_8:
	v5 = (_QWORD*)a1[8];
	if (v5)
	{
		v6 = a1 + 9;
		*v5 = a1[9];
		v7 = a1[9];
		if (v7)
			*(_QWORD*)(v7 + 64) = a1[8];
		v8 = (_QWORD*)a1[2];
		*v6 = 0i64;
		v8 += 853;
		a1[8] = v8;
		*v6 = *v8;
		*v8 = a1;
		if (*v6)
			*(_QWORD*)(*v6 + 64i64) = v6;
	}
	v9 = *(_QWORD*)(v2 + 8);
	if (v9 <= 1)
	{
		*(_DWORD*)v2 = 0;
		_InterlockedExchange64((volatile __int64*)(v2 + 8), 0i64);
		v9 = *(_QWORD*)(v2 + 16);
		if (v9)
		{
			if (!*(_QWORD*)(v2 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v9) = SetEvent(*(HANDLE*)(v2 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v2 + 8);
	}
	return v9;
}

