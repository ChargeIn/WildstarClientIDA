//----- (000000014026DAA0) ----------------------------------------------------
__int64 __fastcall sub_14026DAA0(
	__int64 a1,
	int a2,
	int a3,
	int a4,
	int a5,
	int a6,
	int a7,
	int a8,
	int a9,
	__int64* a10)
{
	int* v16; // rbx
	int CurrentThreadId; // eax
	int v18; // ecx
	volatile signed __int64* v19; // rbx
	__int64 v20; // rcx
	int* v21; // rax
	__int64 v22; // rdi
	int v23; // ebp
	HANDLE EventW; // rcx
	__int64 v25; // [rsp+B8h] [rbp+50h]

	if (!a10)
		return 2147942487i64;
	v16 = (int*)(a1 + 24);
	v25 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v18 = *v16;
	v19 = (volatile signed __int64*)(v25 + 8);
	if (v18 == CurrentThreadId)
	{
		++* v19;
	}
	else
	{
		v20 = 0i64;
		while (_InterlockedCompareExchange64(v19, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v20 >= 0x400)
			{
				sub_14019FB60(v25, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v25 = CurrentThreadId;
	}
LABEL_10:
	v21 = sub_14018B280(272i64, 0);
	if (v21)
		v22 = sub_14028BF30((__int64)v21, a1);
	else
		v22 = 0i64;
	v23 = sub_14028C380(v22, a2, a3, a4, a5, a6, a7, a8, a9);
	if (v23 >= 0)
	{
		*a10 = v22;
		v23 = 0;
	}
	else if (v22)
	{
		sub_14028C000(v22);
		sub_14018B900(v22, 0);
	}
	if (*v19 <= 1ui64)
	{
		*(_DWORD*)v25 = 0;
		_InterlockedExchange64(v19, 0i64);
		if (*(_QWORD*)(v25 + 16))
		{
			if (!*(_QWORD*)(v25 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v25 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v25 + 24));
		}
	}
	else
	{
		--* v19;
	}
	return (unsigned int)v23;
}

