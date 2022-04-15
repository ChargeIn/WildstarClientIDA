//----- (0000000140289A00) ----------------------------------------------------
__int64 __fastcall sub_140289A00(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	int CurrentThreadId; // eax
	int v6; // edx
	volatile signed __int64* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // r8
	int v10; // esi
	__int64 v11; // rax
	__int64 v12; // rdx
	volatile signed __int32* v13; // rdx
	_QWORD* v14; // rcx
	__int64 v15; // rax
	HANDLE EventW; // rcx
	__int64 v18; // [rsp+50h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = a2;
	*(_DWORD*)(a1 + 28) = a3;
	v18 = v3 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v6 = *(_DWORD*)(v3 + 24);
	v7 = (volatile signed __int64*)(v3 + 32);
	if (v6 == CurrentThreadId)
	{
		++* v7;
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64(v7, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v18, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v18 = CurrentThreadId;
	}
LABEL_8:
	if (*(int*)(a1 + 32) >= 1
		|| (v9 = *(_QWORD*)(a1 + 16),
			v10 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _QWORD))(**(_QWORD**)(v9 + 6608)
				+ 208i64))(
					*(_QWORD*)(v9 + 6608),
					*(unsigned int*)(a1 + 24),
					*(unsigned int*)(*(_QWORD*)(v9 + 7048) + 4i64 * *(int*)(a1 + 28)),
					0i64,
					*(_DWORD*)(*(_QWORD*)(v9 + 7056) + 4i64 * *(int*)(a1 + 28)),
					a1 + 40,
					0i64),
			v10 >= 0))
	{
		v11 = *(int*)(a1 + 28);
		v12 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 32) = 2;
		v13 = (volatile signed __int32*)(48 * v11 + v12 + 340);
		_InterlockedIncrement(v13);
		_InterlockedExchangeAdd(v13 + 1, *(_DWORD*)(a1 + 24));
		_InterlockedIncrement(v13 + 2);
		_InterlockedExchangeAdd(v13 + 3, *(_DWORD*)(a1 + 24));
		v14 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 7184i64);
		if (!*(_QWORD*)(a1 + 56))
		{
			*(_QWORD*)(a1 + 56) = v14;
			*(_QWORD*)(a1 + 64) = *v14;
			*v14 = a1;
			v15 = *(_QWORD*)(a1 + 64);
			if (v15)
				*(_QWORD*)(v15 + 56) = a1 + 64;
		}
		v10 = 0;
	}
	if (*v7 <= 1ui64)
	{
		*(_DWORD*)v18 = 0;
		_InterlockedExchange64(v7, 0i64);
		if (*(_QWORD*)(v18 + 16))
		{
			if (!*(_QWORD*)(v18 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v18 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v18 + 24));
		}
		return (unsigned int)v10;
	}
	else
	{
		--* v7;
		return (unsigned int)v10;
	}
}

