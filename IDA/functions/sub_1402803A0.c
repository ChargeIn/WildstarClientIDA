//----- (00000001402803A0) ----------------------------------------------------
void __fastcall sub_1402803A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* v9; // rbx
	int CurrentThreadId; // r11d
	__int64 v11; // rcx
	HANDLE EventW; // rcx

	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 296i64))(a1);
	v9 = (int*)(a1 + 6368);
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 6368) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 6376);
	}
	else
	{
		v11 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6376), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v11 >= 0x400)
			{
				sub_14019FB60(a1 + 6368, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v9 = CurrentThreadId;
	}
LABEL_8:
	sub_140279680(a1);
	if (*(_QWORD*)(a1 + 6376) <= 1ui64)
	{
		*v9 = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 6376), 0i64);
		if (*(_QWORD*)(a1 + 6384))
		{
			if (!*(_QWORD*)(a1 + 6392))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6392), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a1 + 6392));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 6376);
	}
	sub_1402AD050(*(_DWORD**)(a1 + 8592), 0, a2);
	sub_1402AD050(*(_DWORD**)(a1 + 8592), 1u, a3);
	sub_1402AD050(*(_DWORD**)(a1 + 8592), 2u, a4);
	sub_1402AD050(*(_DWORD**)(a1 + 8592), 3u, a5);
}

