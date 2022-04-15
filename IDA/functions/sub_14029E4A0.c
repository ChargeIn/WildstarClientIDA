//----- (000000014029E4A0) ----------------------------------------------------
int __fastcall sub_14029E4A0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int CurrentThreadId; // eax
	volatile signed __int32* v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	HANDLE EventW; // rcx
	unsigned __int64* v13; // rcx
	__int64 v14; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)a1 = off_140B61CA0;
	CurrentThreadId = GetCurrentThreadId();
	v4 = (volatile signed __int32*)*(unsigned int*)(v1 + 24);
	v5 = CurrentThreadId;
	if ((_DWORD)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 32);
	}
	else
	{
		v6 = 0i64;
		v4 = (volatile signed __int32*)1;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v1 + 24, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 24) = CurrentThreadId;
	}
LABEL_8:
	if (*(_QWORD*)(a1 + 72))
	{
		v4 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 28) + *(_QWORD*)(a1 + 16) + 340i64);
		_InterlockedDecrement(v4);
		_InterlockedExchangeAdd(v4 + 1, -*(_DWORD*)(a1 + 24));
		_InterlockedIncrement(v4 + 4);
		_InterlockedExchangeAdd(v4 + 5, *(_DWORD*)(a1 + 24));
		v7 = *(_QWORD**)(a1 + 72);
		if (v7)
			*v7 = *(_QWORD*)(a1 + 80);
		v8 = *(_QWORD*)(a1 + 80);
		if (v8)
			*(_QWORD*)(v8 + 72) = *(_QWORD*)(a1 + 72);
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_QWORD*)(a1 + 80) = 0i64;
	}
	if (*(int*)(a1 + 48) >= 1)
	{
		v9 = *(_QWORD*)(a1 + 32);
		if (v9)
		{
			(*(void(__fastcall**)(__int64, volatile signed __int32*, __int64))(*(_QWORD*)v9 + 16i64))(v9, v4, v5);
			*(_QWORD*)(a1 + 32) = 0i64;
		}
		v10 = *(_QWORD*)(a1 + 40);
		if (v10)
		{
			(*(void(__fastcall**)(__int64, volatile signed __int32*, __int64))(*(_QWORD*)v10 + 16i64))(v10, v4, v5);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_DWORD*)(a1 + 64) = 0;
	}
	*(_DWORD*)(a1 + 48) = 0;
	v11 = *(_QWORD*)(v1 + 32);
	if (v11 <= 1)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		v11 = *(_QWORD*)(v1 + 40);
		if (v11)
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v11) = SetEvent(*(HANDLE*)(v1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
	}
	v13 = *(unsigned __int64**)(a1 + 72);
	if (v13)
	{
		v11 = *(_QWORD*)(a1 + 80);
		*v13 = v11;
	}
	v14 = *(_QWORD*)(a1 + 80);
	if (v14)
	{
		v11 = *(_QWORD*)(a1 + 72);
		*(_QWORD*)(v14 + 72) = v11;
	}
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	return v11;
}
// 14029E57E: variable 'v4' is possibly undefined
// 14029E57E: variable 'v5' is possibly undefined
// 140B61CA0: using guessed type __int64 (__fastcall *off_140B61CA0[9])();

