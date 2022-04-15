//----- (0000000140347620) ----------------------------------------------------
__int64 __fastcall sub_140347620(__int64 a1)
{
	int CurrentThreadId; // r8d
	unsigned int v3; // ebx
	__int64 v4; // rcx
	int v5; // eax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v3 = 1;
	if ((_DWORD)qword_140C7AA70 == CurrentThreadId)
	{
		++qword_140C7AA78;
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA70, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA70) = CurrentThreadId;
	}
LABEL_8:
	v5 = *(_DWORD*)(a1 + 88);
	if (v5 != -2147483638 && v5)
		v3 = 0;
	if ((unsigned __int64)qword_140C7AA78 <= 1)
	{
		LODWORD(qword_140C7AA70) = 0;
		_InterlockedExchange64(&qword_140C7AA78, 0i64);
		if (qword_140C7AA80)
		{
			if (!qword_140C7AA88)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AA88);
		}
		return v3;
	}
	else
	{
		--qword_140C7AA78;
		return v3;
	}
}
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;

