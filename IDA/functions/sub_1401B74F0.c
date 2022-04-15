//----- (00000001401B74F0) ----------------------------------------------------
__int64 __fastcall sub_1401B74F0(void** a1)
{
	void* v2; // rcx
	LPOVERLAPPED v3; // rax
	signed int v4; // edi
	signed int LastError; // eax
	_QWORD* Internal; // r14
	_QWORD* v7; // rsi
	int* v8; // rbx
	int CurrentThreadId; // edx
	__int64 v10; // rcx
	HANDLE EventW; // rcx
	unsigned __int64 CompletionKey; // [rsp+30h] [rbp-48h] BYREF
	DWORD NumberOfBytesTransferred; // [rsp+80h] [rbp+8h] BYREF
	unsigned int v15; // [rsp+90h] [rbp+18h] BYREF
	LPOVERLAPPED Overlapped; // [rsp+98h] [rbp+20h] BYREF

	while (1)
	{
		v2 = *a1;
		CompletionKey = 0i64;
		Overlapped = 0i64;
		if (GetQueuedCompletionStatus(v2, &NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0xFFFFFFFF))
		{
			v3 = Overlapped;
			v4 = Overlapped ? HIDWORD(Overlapped[1].hEvent) : 0;
		}
		else
		{
			LastError = GetLastError();
			v4 = LastError;
			if (LastError > 0)
				v4 = (unsigned __int16)LastError | 0x80070000;
			v3 = Overlapped;
		}
		if (!CompletionKey || !v3)
			return (unsigned int)v4;
		Internal = (_QWORD*)v3[1].Internal;
		v7 = (_QWORD*)Internal[2];
		(*(void(__fastcall**)(_QWORD*)) * v7)(v7);
		v8 = (int*)(v7 + 83);
		CurrentThreadId = GetCurrentThreadId();
		if (*((_DWORD*)v7 + 166) == CurrentThreadId)
		{
			++v7[84];
		}
		else
		{
			v10 = 0i64;
			while (_InterlockedCompareExchange64(v7 + 84, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v10 >= 0x400)
				{
					sub_14019FB60((__int64)(v7 + 83), CurrentThreadId);
					goto LABEL_17;
				}
			}
			*v8 = CurrentThreadId;
		}
	LABEL_17:
		if (v4 < 0
			|| (v4 = (*(__int64(__fastcall**)(_QWORD*, _QWORD, unsigned int*))(*v7 + 184i64))(
				v7,
				NumberOfBytesTransferred,
				&v15),
				v4 < 0))
		{
			(*(void(__fastcall**)(_QWORD*, _QWORD))(*Internal + 96i64))(Internal, (unsigned int)v4);
		}
		else
		{
			(*(void(__fastcall**)(_QWORD*, _QWORD))(*Internal + 88i64))(Internal, v15);
		}
		if (v7[84] <= 1ui64)
		{
			*v8 = 0;
			_InterlockedExchange64(v7 + 84, 0i64);
			if (v7[85])
			{
				if (!v7[86])
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64(v7 + 86, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent((HANDLE)v7[86]);
			}
			(*(void(__fastcall**)(_QWORD*))(*v7 + 8i64))(v7);
		}
		else
		{
			--v7[84];
			(*(void(__fastcall**)(_QWORD*))(*v7 + 8i64))(v7);
		}
	}
}

