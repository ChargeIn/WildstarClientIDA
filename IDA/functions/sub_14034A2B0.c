//----- (000000014034A2B0) ----------------------------------------------------
int __fastcall sub_14034A2B0(__int64 a1)
{
	int CurrentThreadId; // r8d
	__int64 v3; // rcx
	int result; // eax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AB80 == CurrentThreadId)
	{
		++qword_140C7AB88;
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AB88, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AB80, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AB80) = CurrentThreadId;
	}
LABEL_8:
	*(_DWORD*)(a1 + 8) = -2147483638;
	result = qword_140C7AB88;
	if ((unsigned __int64)qword_140C7AB88 <= 1)
	{
		LODWORD(qword_140C7AB80) = 0;
		_InterlockedExchange64(&qword_140C7AB88, 0i64);
		result = qword_140C7AB90;
		if (qword_140C7AB90)
		{
			if (!qword_140C7AB98)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB98, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(qword_140C7AB98);
		}
	}
	else
	{
		--qword_140C7AB88;
	}
	return result;
}
// 140C7AB80: using guessed type __int64 qword_140C7AB80;
// 140C7AB88: using guessed type __int64 qword_140C7AB88;
// 140C7AB90: using guessed type __int64 qword_140C7AB90;

