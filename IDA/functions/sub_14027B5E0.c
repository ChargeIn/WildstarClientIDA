//----- (000000014027B5E0) ----------------------------------------------------
__int64 __fastcall sub_14027B5E0(
	__int64 a1,
	int a2,
	int a3,
	int a4,
	int a5,
	int a6,
	int a7,
	int a8,
	int a9,
	int a10,
	__int64* a11)
{
	int* v17; // rbx
	int CurrentThreadId; // eax
	int v19; // ecx
	volatile signed __int64* v20; // rbx
	__int64 v21; // rcx
	int* v22; // rax
	__int64 v23; // rdi
	int v24; // ebp
	HANDLE EventW; // rcx
	__int64 v26; // [rsp+C0h] [rbp+58h]

	if (!a11)
		return 2147942487i64;
	v17 = (int*)(a1 + 24);
	v26 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v19 = *v17;
	v20 = (volatile signed __int64*)(v26 + 8);
	if (v19 == CurrentThreadId)
	{
		++* v20;
	}
	else
	{
		v21 = 0i64;
		while (_InterlockedCompareExchange64(v20, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v21 >= 0x400)
			{
				sub_14019FB60(v26, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v26 = CurrentThreadId;
	}
LABEL_10:
	v22 = sub_14018B280(296i64, 0);
	if (v22)
		v23 = sub_1402A3490((__int64)v22, a1);
	else
		v23 = 0i64;
	v24 = sub_1402A3890(v23, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	if (v24 >= 0)
	{
		*a11 = v23;
		v24 = 0;
	}
	else if (v23)
	{
		sub_1402A3570(v23);
		sub_14018B900(v23, 0);
	}
	if (*v20 <= 1ui64)
	{
		*(_DWORD*)v26 = 0;
		_InterlockedExchange64(v20, 0i64);
		if (*(_QWORD*)(v26 + 16))
		{
			if (!*(_QWORD*)(v26 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v26 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v26 + 24));
		}
	}
	else
	{
		--* v20;
	}
	return (unsigned int)v24;
}

