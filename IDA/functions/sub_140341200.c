//----- (0000000140341200) ----------------------------------------------------
__int64 sub_140341200()
{
	int CurrentThreadId; // eax
	__int64 v1; // rcx
	__int64 v2; // rbx
	__int64 v3; // rbx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v1 = (unsigned int)qword_140C7A0A0;
	if ((_DWORD)qword_140C7A0A0 == CurrentThreadId)
	{
		++qword_140C7A0A8;
	}
	else
	{
		v1 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A0A8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v1 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A0A0, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A0A0) = CurrentThreadId;
	}
LABEL_8:
	v2 = qword_140C7A090;
	if (qword_140C7A090)
	{
		sub_1403413D0(v1, qword_140C7A090);
		v3 = *(_QWORD*)(v2 + 8);
	}
	else
	{
		v3 = 0i64;
	}
	if ((unsigned __int64)qword_140C7A0A8 <= 1)
	{
		LODWORD(qword_140C7A0A0) = 0;
		_InterlockedExchange64(&qword_140C7A0A8, 0i64);
		if (qword_140C7A0B0)
		{
			if (!qword_140C7A0B8)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A0B8, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7A0B8);
		}
		return v3;
	}
	else
	{
		--qword_140C7A0A8;
		return v3;
	}
}
// 140341273: variable 'v1' is possibly undefined
// 140C7A090: using guessed type __int64 qword_140C7A090;
// 140C7A0A0: using guessed type __int64 qword_140C7A0A0;
// 140C7A0A8: using guessed type __int64 qword_140C7A0A8;
// 140C7A0B0: using guessed type __int64 qword_140C7A0B0;

