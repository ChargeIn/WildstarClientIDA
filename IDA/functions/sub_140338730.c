//----- (0000000140338730) ----------------------------------------------------
void __fastcall sub_140338730(__int64* a1, _QWORD* a2)
{
	__int64 v2; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	HANDLE EventW; // rcx

	if (a2)
	{
		v2 = *a1;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v2 == CurrentThreadId)
		{
			++* (_QWORD*)(v2 + 8);
		}
		else
		{
			v6 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v6 >= 0x400)
				{
					sub_14019FB60(v2, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v2 = CurrentThreadId;
		}
	LABEL_9:
		sub_140337F20(a1 + 5, a2);
		a2[4] = a2[2];
		if (*(_QWORD*)(v2 + 8) <= 1ui64)
		{
			*(_DWORD*)v2 = 0;
			_InterlockedExchange64((volatile __int64*)(v2 + 8), 0i64);
			if (*(_QWORD*)(v2 + 16))
			{
				if (!*(_QWORD*)(v2 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v2 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v2 + 8);
		}
	}
}

