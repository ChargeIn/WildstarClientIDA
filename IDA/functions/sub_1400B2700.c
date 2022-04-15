//----- (00000001400B2700) ----------------------------------------------------
int __fastcall sub_1400B2700(__int64 a1, __int64 a2, __int64 a3)
{
	int CurrentThreadId; // r9d
	__int64 v6; // rcx
	int* v7; // r14
	__int64 v8; // rdi
	int* v9; // rax
	int* v10; // r15
	int* v11; // rbp
	unsigned __int64 v12; // rax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 24);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(a1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 16) = CurrentThreadId;
	}
LABEL_8:
	v7 = sub_14018B280(2i64, 0);
	sub_1407DB590(v7, dword_1409D183C, 0i64);
	if (v7)
		*(_WORD*)v7 = 0;
	v8 = *(_QWORD*)(a1 + 56);
	v9 = sub_14018B280(72i64, 0);
	v10 = v9;
	v11 = v9 + 4;
	if (v9 != (int*)-16i64)
	{
		*v11 = 15;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 6) = 0i64;
		sub_14001C1B0((_QWORD*)v9 + 3, v7, (__int64)v7);
		*((_QWORD*)v11 + 5) = 0i64;
		*((_QWORD*)v11 + 6) = a3;
	}
	*(_QWORD*)v10 = v8;
	*((_QWORD*)v10 + 1) = *(_QWORD*)(v8 + 8);
	**(_QWORD**)(v8 + 8) = v10;
	*(_QWORD*)(v8 + 8) = v10;
	if (v7)
		sub_14018B900((__int64)v7, 0);
	*(_DWORD*)(a1 + 64) = 15;
	v12 = *(_QWORD*)(a1 + 24);
	if (v12 <= 1)
	{
		*(_DWORD*)(a1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 24), 0i64);
		v12 = *(_QWORD*)(a1 + 32);
		if (v12)
		{
			if (!*(_QWORD*)(a1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v12) = SetEvent(*(HANDLE*)(a1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 24);
	}
	return v12;
}
// 1409D183C: using guessed type int dword_1409D183C[12];

