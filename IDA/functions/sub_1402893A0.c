//----- (00000001402893A0) ----------------------------------------------------
int __fastcall sub_1402893A0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	HANDLE EventW; // rcx
	unsigned __int64* v14; // rcx
	__int64 v15; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)a1 = off_140B61760;
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
	v7 = *(_QWORD**)(a1 + 112);
	if (v7)
	{
		*v7 = *(_QWORD*)(a1 + 120);
		v8 = *(_QWORD*)(a1 + 120);
		if (v8)
			*(_QWORD*)(v8 + 112) = *(_QWORD*)(a1 + 112);
		*(_QWORD*)(a1 + 112) = 0i64;
		*(_QWORD*)(a1 + 120) = 0i64;
	}
	if (*(int*)(a1 + 64) >= 1)
	{
		v9 = *(_QWORD*)(a1 + 80);
		if (v9)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 16i64))(v9, v4, v5);
			*(_QWORD*)(a1 + 80) = 0i64;
		}
		v10 = *(_QWORD*)(a1 + 96);
		if (v10)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 16i64))(v10, v4, v5);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
		v11 = *(_QWORD*)(a1 + 72);
		if (v11)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v11 + 16i64))(v11, v4, v5);
			*(_QWORD*)(a1 + 72) = 0i64;
		}
	}
	*(_DWORD*)(a1 + 64) = 0;
	v12 = *(_QWORD*)(v1 + 32);
	if (v12 <= 1)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		v12 = *(_QWORD*)(v1 + 40);
		if (v12)
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v12) = SetEvent(*(HANDLE*)(v1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
	}
	v14 = *(unsigned __int64**)(a1 + 112);
	if (v14)
	{
		v12 = *(_QWORD*)(a1 + 120);
		*v14 = v12;
	}
	v15 = *(_QWORD*)(a1 + 120);
	if (v15)
	{
		v12 = *(_QWORD*)(a1 + 112);
		*(_QWORD*)(v15 + 112) = v12;
	}
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	return v12;
}
// 140289445: variable 'v4' is possibly undefined
// 140289445: variable 'v5' is possibly undefined
// 140B61760: using guessed type __int64 (__fastcall *off_140B61760[5])();

