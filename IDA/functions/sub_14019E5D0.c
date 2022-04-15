//----- (000000014019E5D0) ----------------------------------------------------
PVOID* __fastcall sub_14019E5D0(PVOID* BackTrace, __int64 a2, int a3)
{
	_QWORD* v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rbx
	int CurrentThreadId; // edx
	__int64 v9; // rcx
	__int64 v10; // rcx
	PVOID* v11; // rdx
	_QWORD* v12; // rax
	HANDLE EventW; // rcx

	BackTrace[1] = 0i64;
	BackTrace[3] = 0i64;
	BackTrace[6] = 0i64;
	BackTrace[5] = 0i64;
	BackTrace[14] = 0i64;
	BackTrace[15] = 0i64;
	RtlCaptureStackBackTrace(1u, 1u, BackTrace, 0i64);
	v5 = BackTrace[1];
	BackTrace[1] = 0i64;
	if (v5)
		(*(void(__fastcall**)(_QWORD*))(*(v5 - 2) + 8i64))(v5 - 2);
	*((_DWORD*)BackTrace + 4) = a3;
	v6 = BackTrace[3];
	BackTrace[3] = 0i64;
	if (v6)
		(*(void(__fastcall**)(_QWORD*))(*(v6 - 2) + 8i64))(v6 - 2);
	*((_DWORD*)BackTrace + 8) = 0;
	*((_DWORD*)BackTrace + 14) = 0;
	BackTrace[9] = 0i64;
	BackTrace[10] = 0i64;
	BackTrace[11] = 0i64;
	BackTrace[12] = (PVOID)-1i64;
	BackTrace[13] = 0i64;
	sub_14004EED0((__int64*)BackTrace + 5, 0i64);
	v7 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v7 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v7 + 24);
	}
	else
	{
		v9 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v9 >= 0x400)
			{
				sub_14019FB60(v7 + 16, CurrentThreadId);
				goto LABEL_12;
			}
		}
		*(_DWORD*)(v7 + 16) = CurrentThreadId;
	}
LABEL_12:
	v10 = qword_140C63760;
	v11 = (PVOID*)(qword_140C63760 + 64);
	if (!BackTrace[14])
	{
		BackTrace[14] = v11;
		BackTrace[15] = *v11;
		*v11 = BackTrace;
		v12 = BackTrace[15];
		if (v12)
		{
			v12[14] = BackTrace + 15;
			v10 = qword_140C63760;
		}
	}
	++* (_DWORD*)(v10 + 52);
	if (*(_QWORD*)(v7 + 24) <= 1ui64)
	{
		*(_DWORD*)(v7 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v7 + 24), 0i64);
		if (*(_QWORD*)(v7 + 32))
		{
			if (!*(_QWORD*)(v7 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v7 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v7 + 24);
	}
	return BackTrace;
}
// 140C63760: using guessed type __int64 qword_140C63760;

