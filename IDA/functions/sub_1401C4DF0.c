//----- (00000001401C4DF0) ----------------------------------------------------
__int64 sub_1401C4DF0()
{
	int CurrentThreadId; // edx
	__int64 v1; // rcx
	HANDLE v3; // rcx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C796D0 == CurrentThreadId)
	{
		++qword_140C796D8;
	}
	else
	{
		v1 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C796D8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v1 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C796D0, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C796D0) = CurrentThreadId;
	}
LABEL_8:
	if ((unsigned __int64)qword_140C796C0 < 0x20)
	{
		TlsSetValue(dword_140C785BC, (char*)&unk_140C785C0 + 136 * qword_140C796C0);
		++qword_140C796C0;
		if ((unsigned __int64)qword_140C796D8 <= 1)
		{
			LODWORD(qword_140C796D0) = 0;
			_InterlockedExchange64(&qword_140C796D8, 0i64);
			if (qword_140C796E0)
			{
				if (!qword_140C796E8)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C796E8, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C796E8);
			}
		}
		else
		{
			--qword_140C796D8;
		}
		*(_QWORD*)TlsGetValue(dword_140C785BC) = 0i64;
		return 1i64;
	}
	else
	{
		if (IsDebuggerPresent())
			DebugBreak();
		if ((unsigned __int64)qword_140C796D8 <= 1)
		{
			LODWORD(qword_140C796D0) = 0;
			_InterlockedExchange64(&qword_140C796D8, 0i64);
			if (qword_140C796E0)
			{
				if (!qword_140C796E8)
				{
					v3 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C796E8, (signed __int64)v3, 0i64))
						CloseHandle(v3);
				}
				SetEvent(qword_140C796E8);
			}
			return 0i64;
		}
		else
		{
			--qword_140C796D8;
			return 0i64;
		}
	}
}
// 140C796C0: using guessed type __int64 qword_140C796C0;
// 140C796D0: using guessed type __int64 qword_140C796D0;
// 140C796D8: using guessed type __int64 qword_140C796D8;
// 140C796E0: using guessed type __int64 qword_140C796E0;

