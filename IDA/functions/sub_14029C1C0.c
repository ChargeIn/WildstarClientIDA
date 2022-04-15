//----- (000000014029C1C0) ----------------------------------------------------
__int64 __fastcall sub_14029C1C0(__int64 a1)
{
	_DWORD* v2; // rbx
	unsigned int CurrentThreadId; // eax
	int v4; // edx
	__int64 v5; // r8
	volatile signed __int64* v6; // rbx
	__int64 v7; // rcx
	unsigned int v8; // esi
	__int64 v9; // rax
	__int64 v10; // r8
	HANDLE EventW; // rcx
	int v13[10]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+50h] [rbp+8h]

	v2 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v14 = (__int64)v2;
	CurrentThreadId = GetCurrentThreadId();
	v4 = *v2;
	v5 = CurrentThreadId;
	v6 = (volatile signed __int64*)(v2 + 2);
	if (v4 == CurrentThreadId)
	{
		++* v6;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(v6, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(v14, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v14 = CurrentThreadId;
	}
LABEL_8:
	v8 = -- * (_DWORD*)(a1 + 8);
	if (v8 == -1)
	{
		v9 = *(_QWORD*)a1;
		v13[0] = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, int*, __int64))(v9 + 24))(a1, v13, v5))
		{
			v10 = *(_QWORD*)(a1 + 16);
			++* (_DWORD*)(a1 + 8);
			sub_140198370(a1 + 96, a1, (_QWORD*)(v10 + 16));
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, 1i64);
		v8 = 0;
	}
	else if (!v8)
	{
		if (*(_QWORD*)(a1 + 48))
			sub_140198370(a1 + 96, a1, (_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64));
		else
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, 1i64);
	}
	if (*v6 <= 1ui64)
	{
		*(_DWORD*)v14 = 0;
		_InterlockedExchange64(v6, 0i64);
		if (*(_QWORD*)(v14 + 16))
		{
			if (!*(_QWORD*)(v14 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v14 + 24));
		}
	}
	else
	{
		--* v6;
	}
	return v8;
}
// 14029C258: variable 'v5' is possibly undefined
// 14029C1C0: using guessed type int var_28[10];

