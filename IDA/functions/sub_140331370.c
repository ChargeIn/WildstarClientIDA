//----- (0000000140331370) ----------------------------------------------------
_QWORD* __fastcall sub_140331370(__int64 a1, _QWORD* a2, unsigned __int16 a3)
{
	unsigned int CurrentThreadId; // eax
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rcx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v7 = CurrentThreadId;
	if (*(_DWORD*)(a1 + 8) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 16);
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 16), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(a1 + 8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 8) = CurrentThreadId;
	}
LABEL_8:
	if ((unsigned __int64)a3 < *(_QWORD*)(a1 + 176) && (v9 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * a3)) != 0)
	{
		v10 = *(void(__fastcall****)(_QWORD, __int64))(v9 + 24);
		*a2 = v10;
		if (v10)
			(**v10)(v10, v7);
	}
	else
	{
		*a2 = 0i64;
	}
	if (*(_QWORD*)(a1 + 16) <= 1ui64)
	{
		*(_DWORD*)(a1 + 8) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 16), 0i64);
		if (*(_QWORD*)(a1 + 24))
		{
			if (!*(_QWORD*)(a1 + 32))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 32), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a1 + 32));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 16);
	}
	return a2;
}
// 140331407: variable 'v7' is possibly undefined

