//----- (000000014028B060) ----------------------------------------------------
__int64 __fastcall sub_14028B060(__int64 a1, int a2)
{
	_DWORD* v5; // rbx
	unsigned int CurrentThreadId; // eax
	int v7; // ecx
	__int64 v8; // rdx
	volatile signed __int64* v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rax
	int v13; // eax
	unsigned int v14; // edi
	HANDLE EventW; // rcx
	__int64 v16; // [rsp+30h] [rbp+8h]

	if (a2 == *(_DWORD*)(a1 + 24))
		return 0i64;
	v5 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v16 = (__int64)v5;
	CurrentThreadId = GetCurrentThreadId();
	v7 = *v5;
	v8 = CurrentThreadId;
	v9 = (volatile signed __int64*)(v5 + 2);
	if (v7 == CurrentThreadId)
	{
		++* v9;
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64(v9, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v16, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v16 = CurrentThreadId;
	}
LABEL_10:
	if (*(int*)(a1 + 36) >= 1)
	{
		v11 = *(_QWORD*)(a1 + 40);
		if (v11)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 16i64))(v11, v8);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_DWORD*)(a1 + 48) = 0;
	}
	v12 = *(int*)(a1 + 32);
	*(_DWORD*)(a1 + 36) = 0;
	_InterlockedExchangeAdd((volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 48 * v12 + 536), a2 - *(_DWORD*)(a1 + 24));
	*(_DWORD*)(a1 + 24) = a2;
	v13 = sub_14028AF50(a1, 2);
	v14 = 0;
	if (v13 < 0)
		v14 = v13;
	if (*v9 <= 1ui64)
	{
		*(_DWORD*)v16 = 0;
		_InterlockedExchange64(v9, 0i64);
		if (*(_QWORD*)(v16 + 16))
		{
			if (!*(_QWORD*)(v16 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v16 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v16 + 24));
		}
	}
	else
	{
		--* v9;
	}
	return v14;
}
// 14028B0FC: variable 'v8' is possibly undefined

