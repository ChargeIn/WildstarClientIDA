//----- (000000014033B360) ----------------------------------------------------
int __fastcall sub_14033B360(__int64 a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	__int64 v5; // r14
	__int64 v6; // r15
	__int64 i; // rax
	unsigned __int64 v8; // rax
	HANDLE EventW; // rcx
	__int64 v11; // [rsp+60h] [rbp+8h] BYREF

	v1 = a1 + 288;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v1 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 8);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v1 = CurrentThreadId;
	}
LABEL_8:
	if (*(_QWORD*)(a1 + 496))
	{
		v5 = *(_QWORD*)(a1 + 520);
		v6 = *(_QWORD*)(a1 + 512);
		if (!*(_WORD*)(a1 + 222))
			sub_140334D90(a1 + 144);
		v11 = 0x141E5EFC0i64;
		sub_1401A3130(99, 1, &v11, a1 + 222, v6, v5);
		for (i = *(_QWORD*)(a1 + 496); i; i = *(_QWORD*)(a1 + 496))
			sub_14033B1D0(a1, i);
	}
	v8 = *(_QWORD*)(v1 + 8);
	if (v8 <= 1)
	{
		*(_DWORD*)v1 = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 8), 0i64);
		v8 = *(_QWORD*)(v1 + 16);
		if (v8)
		{
			if (!*(_QWORD*)(v1 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v8) = SetEvent(*(HANDLE*)(v1 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 8);
	}
	return v8;
}

