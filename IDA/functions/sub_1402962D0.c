//----- (00000001402962D0) ----------------------------------------------------
__int64 __fastcall sub_1402962D0(__int64 a1, __int64 a2)
{
	__int64 v5; // rbx
	__int64 v6; // rdi
	unsigned int CurrentThreadId; // eax
	__int64 v8; // rdx
	unsigned int v9; // esi
	__int64 v10; // rcx
	void(__fastcall * **v11)(_QWORD, __int64); // rcx
	HANDLE EventW; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rbx
	HANDLE v16; // rcx
	__int64 v17; // [rsp+40h] [rbp+8h] BYREF

	if (!*(_QWORD*)(a1 + 64))
		return 1i64;
	v5 = *(_QWORD*)(a1 + 16);
	v6 = 0i64;
	CurrentThreadId = GetCurrentThreadId();
	v8 = CurrentThreadId;
	v9 = 1;
	if (*(_DWORD*)(v5 + 24) == CurrentThreadId)
	{
		++* (_QWORD*)(v5 + 32);
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v5 + 24, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)(v5 + 24) = CurrentThreadId;
	}
LABEL_10:
	v11 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 64);
	if (v11)
	{
		(**v11)(v11, v8);
		v6 = *(_QWORD*)(a1 + 64);
	}
	if (*(_QWORD*)(v5 + 32) <= 1ui64)
	{
		*(_DWORD*)(v5 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v5 + 32), 0i64);
		if (*(_QWORD*)(v5 + 40))
		{
			if (!*(_QWORD*)(v5 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v5 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v5 + 32);
	}
	if (v6)
	{
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 32i64))(v6, a2))
		{
			sub_14003D8F0(&v17, *(_QWORD*)(a1 + 16) + 24i64);
			v13 = *(_QWORD*)(a1 + 64);
			if (v13)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
				*(_QWORD*)(a1 + 64) = 0i64;
			}
			v14 = v17;
			if (*(_QWORD*)(v17 + 8) <= 1ui64)
			{
				*(_DWORD*)v17 = 0;
				_InterlockedExchange64((volatile __int64*)(v14 + 8), 0i64);
				if (*(_QWORD*)(v17 + 16))
				{
					v15 = v17;
					if (!*(_QWORD*)(v17 + 24))
					{
						v16 = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v15 + 24), (signed __int64)v16, 0i64))
							CloseHandle(v16);
					}
					SetEvent(*(HANDLE*)(v15 + 24));
				}
			}
			else
			{
				--* (_QWORD*)(v17 + 8);
			}
		}
		else
		{
			v9 = 0;
		}
	}
	if (v6)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 8i64))(v6, v8);
	return v9;
}
// 140296362: variable 'v8' is possibly undefined

