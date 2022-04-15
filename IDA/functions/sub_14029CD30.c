//----- (000000014029CD30) ----------------------------------------------------
void __fastcall sub_14029CD30(__int64 a1)
{
	int CurrentThreadId; // ecx
	__int64 v3; // rdx
	HANDLE EventW; // rcx

	if (*(_DWORD*)(a1 + 20))
	{
		CurrentThreadId = GetCurrentThreadId();
		if ((_DWORD)qword_140C79B50 == CurrentThreadId)
		{
			++qword_140C79B58;
		}
		else
		{
			v3 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C79B58, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v3 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C79B50, CurrentThreadId);
					goto LABEL_9;
				}
			}
			LODWORD(qword_140C79B50) = CurrentThreadId;
		}
	LABEL_9:
		if (*(_DWORD*)(a1 + 20))
		{
			if (qword_140C657A0 == a1)
			{
				if (qword_140C657C0 == a1)
				{
					qword_140C657C0 = 0i64;
					qword_140C657A0 = 0i64;
				}
				else
				{
					qword_140C657A0 = *(_QWORD*)(a1 + 40);
					*(_QWORD*)(qword_140C657A0 + 32) = 0i64;
				}
			}
			else if (qword_140C657C0 == a1)
			{
				*(_QWORD*)(*(_QWORD*)(a1 + 32) + 40i64) = 0i64;
				qword_140C657C0 = *(_QWORD*)(a1 + 32);
			}
			else
			{
				*(_QWORD*)(*(_QWORD*)(a1 + 32) + 40i64) = *(_QWORD*)(a1 + 40);
				*(_QWORD*)(*(_QWORD*)(a1 + 40) + 32i64) = *(_QWORD*)(a1 + 32);
			}
			*(_QWORD*)(a1 + 32) = 0i64;
			*(_QWORD*)(a1 + 40) = 0i64;
			*(_DWORD*)(a1 + 20) = 0;
			_InterlockedDecrement(&dword_140C657A8);
		}
		if ((unsigned __int64)qword_140C79B58 <= 1)
		{
			LODWORD(qword_140C79B50) = 0;
			_InterlockedExchange64(&qword_140C79B58, 0i64);
			if (qword_140C79B60)
			{
				if (!qword_140C79B68)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C79B68, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C79B68);
			}
		}
		else
		{
			--qword_140C79B58;
		}
	}
}
// 140C657A0: using guessed type __int64 qword_140C657A0;
// 140C657A8: using guessed type int dword_140C657A8;
// 140C657C0: using guessed type __int64 qword_140C657C0;
// 140C79B50: using guessed type __int64 qword_140C79B50;
// 140C79B58: using guessed type __int64 qword_140C79B58;
// 140C79B60: using guessed type __int64 qword_140C79B60;

