//----- (000000014029F150) ----------------------------------------------------
void __fastcall sub_14029F150(__int64 a1)
{
	__int64 v2; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rcx
	HANDLE EventW; // rcx
	__int64 v8; // rcx

	if (*(_QWORD*)(a1 + 40))
	{
		v2 = *(_QWORD*)(a1 + 16) + 6368i64;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v2 == CurrentThreadId)
		{
			++* (_QWORD*)(v2 + 8);
		}
		else
		{
			v4 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v4 >= 0x400)
				{
					sub_14019FB60(v2, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v2 = CurrentThreadId;
		}
	LABEL_9:
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64) + 120i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
			*(_QWORD*)(a1 + 40),
			0i64);
		if (!dword_140AE7E90[*(int*)(a1 + 28)] && (*(_BYTE*)(a1 + 60) & 2) != 0)
		{
			v5 = *(_QWORD*)(a1 + 32);
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64);
			if (*(_DWORD*)(a1 + 56) == *(_DWORD*)(a1 + 24))
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v6 + 376i64))(v6, v5, *(_QWORD*)(a1 + 40));
			else
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _DWORD, _QWORD))(*(_QWORD*)v6 + 368i64))(
					v6,
					v5,
					0i64,
					*(unsigned int*)(a1 + 52),
					0,
					0,
					*(_QWORD*)(a1 + 40),
					0,
					0i64);
		}
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
		v8 = *(_QWORD*)(a1 + 40);
		if (v8)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
	}
}
// 140AE7E90: using guessed type _DWORD dword_140AE7E90[4];

