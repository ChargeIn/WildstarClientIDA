//----- (000000014003AF10) ----------------------------------------------------
__int64 __fastcall sub_14003AF10(__int64 a1, _QWORD* a2)
{
	_DWORD* StackBase; // rsi
	int v4; // r14d
	__int64 v6; // rbx
	int CurrentThreadId; // r9d
	__int64 v8; // rcx
	__int64 v9; // rdi
	int* v10; // rdx
	HANDLE EventW; // rcx

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v4 = *(StackBase - 1);
	v6 = a1 + 56;
	*(StackBase - 1) = 1;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v6 == CurrentThreadId)
	{
		++* (_QWORD*)(v6 + 8);
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v6, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v6 = CurrentThreadId;
	}
LABEL_8:
	v9 = *(_QWORD*)(a1 + 96);
	v10 = sub_14018B280(40i64, 0);
	if (v10 != (int*)-16i64)
	{
		*((_QWORD*)v10 + 2) = *a2;
		*((_QWORD*)v10 + 3) = a2[1];
		*((_QWORD*)v10 + 4) = a2[2];
	}
	*(_QWORD*)v10 = v9;
	*((_QWORD*)v10 + 1) = *(_QWORD*)(v9 + 8);
	**(_QWORD**)(v9 + 8) = v10;
	*(_QWORD*)(v9 + 8) = v10;
	if (*(_QWORD*)(v6 + 8) <= 1ui64)
	{
		*(_DWORD*)v6 = 0;
		_InterlockedExchange64((volatile __int64*)(v6 + 8), 0i64);
		if (*(_QWORD*)(v6 + 16))
		{
			if (!*(_QWORD*)(v6 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v6 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v6 + 8);
	}
	*(StackBase - 1) = v4;
	return 0i64;
}

