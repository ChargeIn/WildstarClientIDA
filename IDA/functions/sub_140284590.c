//----- (0000000140284590) ----------------------------------------------------
__int64 __fastcall sub_140284590(__int64 a1, void(__fastcall*** a2)(_QWORD), int* a3, __int64 a4, _QWORD* a5)
{
	int* v11; // rbx
	int CurrentThreadId; // eax
	int v13; // ecx
	volatile signed __int64* v14; // rbx
	__int64 v15; // rcx
	int* v16; // rax
	_QWORD* v17; // rdi
	int v18; // ebp
	HANDLE EventW; // rcx
	__int64 v20; // [rsp+70h] [rbp+28h]

	if (!a5)
		return 2147942487i64;
	v11 = (int*)(a1 + 24);
	v20 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v13 = *v11;
	v14 = (volatile signed __int64*)(v20 + 8);
	if (v13 == CurrentThreadId)
	{
		++* v14;
	}
	else
	{
		v15 = 0i64;
		while (_InterlockedCompareExchange64(v14, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v15 >= 0x400)
			{
				sub_14019FB60(v20, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v20 = CurrentThreadId;
	}
LABEL_10:
	v16 = sub_14018B280(88i64, 0);
	if (v16)
		v17 = (_QWORD*)sub_1402BC050((__int64)v16, a1);
	else
		v17 = 0i64;
	v18 = sub_1402BC140((__int64)v17, a2, a3, a4, 0);
	if (v18 >= 0)
	{
		*a5 = v17;
		v18 = 0;
	}
	else if (v17)
	{
		sub_1402BC0C0(v17);
		sub_14018B900((__int64)v17, 0);
	}
	if (*v14 <= 1ui64)
	{
		*(_DWORD*)v20 = 0;
		_InterlockedExchange64(v14, 0i64);
		if (*(_QWORD*)(v20 + 16))
		{
			if (!*(_QWORD*)(v20 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v20 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v20 + 24));
		}
	}
	else
	{
		--* v14;
	}
	return (unsigned int)v18;
}

