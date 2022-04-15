//----- (0000000140340E70) ----------------------------------------------------
__int64 __fastcall sub_140340E70(__int64 a1, int a2)
{
	int CurrentThreadId; // eax
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rbx
	__int64 v7; // rbx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v4 = (unsigned int)qword_140C7A210;
	if ((_DWORD)qword_140C7A210 == CurrentThreadId)
	{
		++qword_140C7A218;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A218, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A210, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A210) = CurrentThreadId;
	}
LABEL_8:
	v6 = qword_140C7A200;
	if (qword_140C7A200 && a2 - *(_DWORD*)(qword_140C7A200 + 4) > 0)
	{
		sub_140341370(v4, qword_140C7A200);
		v7 = *(_QWORD*)(v6 + 8);
	}
	else
	{
		v7 = 0i64;
	}
	if ((unsigned __int64)qword_140C7A218 <= 1)
	{
		LODWORD(qword_140C7A210) = 0;
		_InterlockedExchange64(&qword_140C7A218, 0i64);
		if (qword_140C7A220)
		{
			if (!qword_140C7A228)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A228, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7A228);
		}
		return v7;
	}
	else
	{
		--qword_140C7A218;
		return v7;
	}
}
// 140340F05: variable 'v4' is possibly undefined
// 140C7A200: using guessed type __int64 qword_140C7A200;
// 140C7A210: using guessed type __int64 qword_140C7A210;
// 140C7A218: using guessed type __int64 qword_140C7A218;
// 140C7A220: using guessed type __int64 qword_140C7A220;

