//----- (00000001401AD8F0) ----------------------------------------------------
int __fastcall sub_1401AD8F0(__int64 a1, float a2)
{
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	unsigned __int16 v5; // ax
	int result; // eax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C77840 == CurrentThreadId)
	{
		++qword_140C77848;
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C77848, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C77840, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C77840) = CurrentThreadId;
	}
LABEL_8:
	v5 = *(_WORD*)(a1 + 138);
	if (++ * (_WORD*)(a1 + 136) >= v5)
		*(_WORD*)(a1 + 136) = 0;
	if (v5 < 0x10u)
		*(_WORD*)(a1 + 138) = v5 + 1;
	*(_DWORD*)(a1 + 132) = sub_14018CDF0();
	*(float*)(a1 + 8i64 * *(unsigned __int16*)(a1 + 136)) = a2;
	result = qword_140C77848;
	if ((unsigned __int64)qword_140C77848 <= 1)
	{
		LODWORD(qword_140C77840) = 0;
		_InterlockedExchange64(&qword_140C77848, 0i64);
		result = qword_140C77850;
		if (qword_140C77850)
		{
			if (!qword_140C77858)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C77858, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(qword_140C77858);
		}
	}
	else
	{
		--qword_140C77848;
	}
	return result;
}
// 140C77840: using guessed type __int64 qword_140C77840;
// 140C77848: using guessed type __int64 qword_140C77848;
// 140C77850: using guessed type __int64 qword_140C77850;

