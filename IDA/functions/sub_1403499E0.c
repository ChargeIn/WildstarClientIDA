//----- (00000001403499E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403499E0(__int64 a1)
{
	int CurrentThreadId; // r8d
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	BOOL v5; // edi
	__int64 v6; // rax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AB60 == CurrentThreadId)
	{
		++qword_140C7AB68;
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AB68, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AB60, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AB60) = CurrentThreadId;
	}
LABEL_8:
	v4 = *(_QWORD**)(a1 + 16);
	v5 = v4 != 0i64;
	if (v4)
		*v4 = *(_QWORD*)(a1 + 24);
	v6 = *(_QWORD*)(a1 + 24);
	if (v6)
		*(_QWORD*)(v6 + 16) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
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
		return v5;
	}
	else
	{
		--qword_140C7AB68;
		return v4 != 0i64;
	}
}
// 140C7AB60: using guessed type __int64 qword_140C7AB60;
// 140C7AB68: using guessed type __int64 qword_140C7AB68;
// 140C7AB70: using guessed type __int64 qword_140C7AB70;

