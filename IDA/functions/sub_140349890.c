//----- (0000000140349890) ----------------------------------------------------
__int64 __fastcall sub_140349890(_QWORD* a1, _QWORD* a2)
{
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	__int64 v6; // rax
	HANDLE EventW; // rcx

	if (!*a1 || !a2)
		return 2147942487i64;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AB60 == CurrentThreadId)
	{
		++qword_140C7AB68;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AB68, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AB60, CurrentThreadId);
				goto LABEL_10;
			}
		}
		LODWORD(qword_140C7AB60) = CurrentThreadId;
	}
LABEL_10:
	if (!a1[2])
	{
		a1[2] = a2;
		a1[3] = *a2;
		*a2 = a1;
		v6 = a1[3];
		if (v6)
			*(_QWORD*)(v6 + 16) = a1 + 3;
	}
	if ((unsigned __int64)qword_140C7AB68 <= 1)
	{
		LODWORD(qword_140C7AB60) = 0;
		_InterlockedExchange64(&qword_140C7AB68, 0i64);
		if (qword_140C7AB70)
		{
			if (!qword_140C7AB78)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB78, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AB78);
		}
		return 0i64;
	}
	else
	{
		--qword_140C7AB68;
		return 0i64;
	}
}
// 140C7AB60: using guessed type __int64 qword_140C7AB60;
// 140C7AB68: using guessed type __int64 qword_140C7AB68;
// 140C7AB70: using guessed type __int64 qword_140C7AB70;

