//----- (00000001400B15B0) ----------------------------------------------------
int __fastcall sub_1400B15B0(__int64 a1)
{
	_DWORD* StackBase; // rdi
	int v3; // r14d
	int CurrentThreadId; // r8d
	__int64 v5; // rcx
	LONGLONG v6; // rax
	__int64 v7; // rax
	float v8; // xmm0_4
	float LowPart; // xmm1_4
	unsigned __int64 v10; // rax
	HANDLE EventW; // rcx
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF
	LARGE_INTEGER v14; // [rsp+60h] [rbp+18h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v3 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 24);
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(a1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 16) = CurrentThreadId;
	}
LABEL_8:
	QueryPerformanceCounter(&PerformanceCount);
	v6 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	*(_QWORD*)(a1 + 400) = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	v7 = v6 - *(_QWORD*)(a1 + 392);
	v8 = (float)(int)v7;
	if (v7 < 0)
		v8 = v8 + 1.8446744e19;
	LowPart = (float)(int)Frequency.LowPart;
	if (Frequency.QuadPart < 0)
		LowPart = LowPart + 1.8446744e19;
	++* (_DWORD*)(a1 + 416);
	*(float*)(a1 + 420) = (float)(v8 / LowPart) + *(float*)(a1 + 420);
	QueryPerformanceCounter(&v14);
	*(_QWORD*)(a1 + 392) = v14.QuadPart - ::PerformanceCount.QuadPart;
	sub_1400B23B0(a1, 2);
	*(_DWORD*)(a1 + 192) = 2;
	v10 = *(_QWORD*)(a1 + 24);
	if (v10 <= 1)
	{
		*(_DWORD*)(a1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 24), 0i64);
		v10 = *(_QWORD*)(a1 + 32);
		if (v10)
		{
			if (!*(_QWORD*)(a1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v10) = SetEvent(*(HANDLE*)(a1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 24);
	}
	*(StackBase - 1) = v3;
	return v10;
}

