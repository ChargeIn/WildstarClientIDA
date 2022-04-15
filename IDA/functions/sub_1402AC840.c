//----- (00000001402AC840) ----------------------------------------------------
int __fastcall sub_1402AC840(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	HANDLE EventW; // rcx
	__int64 v12; // rcx
	unsigned __int64* v13; // rcx
	__int64 v14; // rcx

	v1 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)a1 = &off_140B61FB8;
	CurrentThreadId = GetCurrentThreadId();
	v4 = *(unsigned int*)(v1 + 24);
	v5 = CurrentThreadId;
	if ((_DWORD)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 32);
	}
	else
	{
		v6 = 0i64;
		v4 = 1i64;
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
	if (*(int*)(a1 + 40) >= 1)
	{
		v7 = *(_QWORD*)(a1 + 112);
		if (v7)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 8i64))(v7, v4, v5);
			*(_QWORD*)(a1 + 112) = 0i64;
		}
	}
	v8 = *(_QWORD**)(a1 + 8);
	*(_DWORD*)(a1 + 40) = 0;
	if (v8)
		*v8 = *(_QWORD*)(a1 + 16);
	v9 = *(_QWORD*)(a1 + 16);
	if (v9)
		*(_QWORD*)(v9 + 8) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	v10 = *(_QWORD*)(v1 + 32);
	if (v10 <= 1)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		v10 = *(_QWORD*)(v1 + 40);
		if (v10)
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v10) = SetEvent(*(HANDLE*)(v1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
	}
	v12 = *(_QWORD*)(a1 + 112);
	if (v12)
		LODWORD(v10) = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 8i64))(v12, v4, v5);
	v13 = *(unsigned __int64**)(a1 + 8);
	if (v13)
	{
		v10 = *(_QWORD*)(a1 + 16);
		*v13 = v10;
	}
	v14 = *(_QWORD*)(a1 + 16);
	if (v14)
	{
		v10 = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(v14 + 8) = v10;
	}
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	return v10;
}
// 1402AC8BC: variable 'v4' is possibly undefined
// 1402AC8BC: variable 'v5' is possibly undefined
// 140B61FB8: using guessed type __int64 (__fastcall *off_140B61FB8)();

