//----- (00000001402AC610) ----------------------------------------------------
__int64 __fastcall sub_1402AC610(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rax
	HANDLE EventW; // rcx

	*(_QWORD*)a1 = off_140B61B20;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 24) = 1414420037;
	*(_DWORD*)(a1 + 92) = 0;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_DWORD*)(a1 + 96) = 1414420037;
	*(_DWORD*)(a1 + 164) = 0;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	v3 = a2 + 24;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 232) = 0;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v3 == CurrentThreadId)
	{
		++* (_QWORD*)(v3 + 8);
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(v3, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v3 = CurrentThreadId;
	}
LABEL_8:
	v6 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 6920i64);
	if (!*(_QWORD*)(a1 + 240))
	{
		*(_QWORD*)(a1 + 240) = v6;
		*(_QWORD*)(a1 + 248) = *v6;
		*v6 = a1;
		v7 = *(_QWORD*)(a1 + 248);
		if (v7)
			*(_QWORD*)(v7 + 240) = a1 + 248;
	}
	if (*(_QWORD*)(v3 + 8) <= 1ui64)
	{
		*(_DWORD*)v3 = 0;
		_InterlockedExchange64((volatile __int64*)(v3 + 8), 0i64);
		if (*(_QWORD*)(v3 + 16))
		{
			if (!*(_QWORD*)(v3 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v3 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v3 + 8);
	}
	return a1;
}
// 140B61B20: using guessed type __int64 (__fastcall *off_140B61B20[9])();

