//----- (00000001403495C0) ----------------------------------------------------
__int64 __fastcall sub_1403495C0(__int64 a1)
{
	int CurrentThreadId; // r8d
	__int64 v3; // rcx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AB40 == CurrentThreadId)
	{
		++qword_140C7AB48;
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AB48, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AB40, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AB40) = CurrentThreadId;
	}
LABEL_8:
	if (!*(_DWORD*)(a1 + 24))
	{
		sub_1403491E0(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 8));
		*(_DWORD*)(a1 + 24) = 1;
	}
	if ((unsigned __int64)qword_140C7AB48 <= 1)
	{
		LODWORD(qword_140C7AB40) = 0;
		_InterlockedExchange64(&qword_140C7AB48, 0i64);
		if (qword_140C7AB50)
		{
			if (!qword_140C7AB58)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB58, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AB58);
		}
		return 0i64;
	}
	else
	{
		--qword_140C7AB48;
		return 0i64;
	}
}
// 140C7AB40: using guessed type __int64 qword_140C7AB40;
// 140C7AB48: using guessed type __int64 qword_140C7AB48;
// 140C7AB50: using guessed type __int64 qword_140C7AB50;

