//----- (0000000140347D10) ----------------------------------------------------
__int64 __fastcall sub_140347D10(__int64* a1, __int64(__fastcall* a2)(__int64, __int64), __int64 a3)
{
	int CurrentThreadId; // r10d
	__int64 v7; // rcx
	__int64 v8; // rbx
	int i; // edi
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA70 == CurrentThreadId)
	{
		++qword_140C7AA78;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA70, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA70) = CurrentThreadId;
	}
LABEL_8:
	v8 = *a1;
	for (i = 0; v8; v8 = *(_QWORD*)(v8 + 136))
	{
		i = a2(v8, a3);
		if (i < 0)
			break;
	}
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
	}
	else
	{
		--qword_140C7AA78;
	}
	return (unsigned int)i;
}
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;

