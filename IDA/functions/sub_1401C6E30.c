//----- (00000001401C6E30) ----------------------------------------------------
void __fastcall sub_1401C6E30(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	__int64* v7; // rdi
	__int64* v8; // rsi
	HANDLE EventW; // rcx

	if (a2)
	{
		v2 = qword_140C63758;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v2 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v2 + 16);
		}
		else
		{
			v6 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v6 >= 0x400)
				{
					sub_14019FB60(v2 + 8, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v2 + 8) = CurrentThreadId;
		}
	LABEL_9:
		if (*(int*)(a1 + 40) < 2)
		{
			v7 = *(__int64**)(a1 + 80);
			if (v7)
			{
				do
				{
					v8 = (__int64*)v7[2];
					if (*v7 == a2)
					{
						sub_1401D75A0(v7);
						sub_14018B900((__int64)v7, 0);
					}
					v7 = v8;
				} while (v8);
			}
		}
		if (*(_QWORD*)(v2 + 16) <= 1ui64)
		{
			*(_DWORD*)(v2 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v2 + 16), 0i64);
			if (*(_QWORD*)(v2 + 24))
			{
				if (!*(_QWORD*)(v2 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v2 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v2 + 16);
		}
	}
}
// 140C63758: using guessed type __int64 qword_140C63758;

