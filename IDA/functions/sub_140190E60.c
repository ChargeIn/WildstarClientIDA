//----- (0000000140190E60) ----------------------------------------------------
int __fastcall sub_140190E60(_QWORD* a1)
{
	int CurrentThreadId; // edx
	__int64 v2; // rcx
	HANDLE CurrentProcess; // rax
	int result; // eax
	HANDLE EventW; // rcx

	*a1 = off_140B5E620;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67460 == CurrentThreadId)
	{
		++qword_140C67468;
	}
	else
	{
		v2 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67468, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v2 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67460, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67460) = CurrentThreadId;
	}
LABEL_8:
	if (SymCleanup)
	{
		CurrentProcess = GetCurrentProcess();
		SymCleanup(CurrentProcess);
	}
	result = qword_140C67468;
	qword_140C884A8 = 0i64;
	if ((unsigned __int64)qword_140C67468 <= 1)
	{
		LODWORD(qword_140C67460) = 0;
		_InterlockedExchange64(&qword_140C67468, 0i64);
		result = qword_140C67470;
		if (qword_140C67470)
		{
			if (!qword_140C67478)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64(&qword_140C67478, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent((HANDLE)qword_140C67478);
		}
	}
	else
	{
		--qword_140C67468;
	}
	return result;
}
// 140B5E620: using guessed type __int64 (__fastcall *off_140B5E620[4])();
// 140C67460: using guessed type __int64 qword_140C67460;
// 140C67468: using guessed type __int64 qword_140C67468;
// 140C67470: using guessed type __int64 qword_140C67470;
// 140C67478: using guessed type __int64 qword_140C67478;
// 140C884A8: using guessed type __int64 qword_140C884A8;

