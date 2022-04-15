//----- (00000001402DDAC0) ----------------------------------------------------
__int64 __fastcall sub_1402DDAC0(int a1, int** a2)
{
	__int64 v3; // rbp
	__int64 v5; // rbx
	int CurrentThreadId; // edx
	__int64 v7; // rcx
	__int64 v8; // rdx
	int* v9; // rdi
	__int64 v10; // rcx
	void(__fastcall * *v11)(__int64); // rax
	HANDLE EventW; // rcx
	int v13; // ebx

	v3 = a1;
	if (!a2)
		return 2147942487i64;
	v5 = qword_140C657F8;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v5 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v5 + 24);
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(v5 + 16, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)(v5 + 16) = CurrentThreadId;
	}
LABEL_10:
	v8 = qword_140C657F8 + 8 * v3;
	v9 = *(int**)(v8 + 352);
	if (v9)
	{
		v10 = *(_QWORD*)(v8 + 352);
		*(_QWORD*)(v8 + 352) = *((_QWORD*)v9 + 5);
		v11 = *(void(__fastcall***)(__int64))v9;
		*((_QWORD*)v9 + 5) = 0i64;
		(*v11)(v10);
	}
	if (*(_QWORD*)(v5 + 24) <= 1ui64)
	{
		*(_DWORD*)(v5 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v5 + 24), 0i64);
		if (*(_QWORD*)(v5 + 32))
		{
			if (!*(_QWORD*)(v5 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v5 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v5 + 24);
	}
	if (!v9)
	{
		v9 = sub_14018B280(48i64, 1u);
		if (!v9)
			return 2147942414i64;
		v9[2] = 1;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		*(_QWORD*)v9 = off_140B62E18;
		*((_QWORD*)v9 + 5) = 0i64;
		v13 = sub_1402DD650((__int64)v9, v3);
		if (v13 < 0)
		{
			sub_1402DB1A0(v9);
			return (unsigned int)v13;
		}
	}
	*a2 = v9;
	return 0i64;
}
// 140B62E18: using guessed type __int64 (__fastcall *off_140B62E18[56])();
// 140C657F8: using guessed type __int64 qword_140C657F8;

