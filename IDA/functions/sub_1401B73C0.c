//----- (00000001401B73C0) ----------------------------------------------------
_QWORD* __fastcall sub_1401B73C0(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbp
	__int64 v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	HANDLE EventW; // rcx

	v2 = *(_QWORD**)&qword_140C63788;
	v4 = *(_QWORD*)&qword_140C63788 + 4856i64;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 8);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v4, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v4 = CurrentThreadId;
	}
LABEL_8:
	*a2 = v2[597];
	a2[1] = v2[598];
	a2[2] = v2[599];
	a2[3] = v2[600];
	a2[4] = v2[601];
	a2[5] = v2[602];
	a2[6] = v2[603];
	a2[7] = v2[604];
	if (*(_QWORD*)(v4 + 8) <= 1ui64)
	{
		*(_DWORD*)v4 = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
		if (*(_QWORD*)(v4 + 16))
		{
			if (!*(_QWORD*)(v4 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v4 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 8);
	}
	return a2;
}

