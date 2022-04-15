//----- (000000014019E8F0) ----------------------------------------------------
void __fastcall sub_14019E8F0(__int64 a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	int v5; // ecx
	LONGLONG v6; // rax
	HANDLE EventW; // rcx
	LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

	v1 = qword_140C63760;
	if (*(_DWORD*)(qword_140C63760 + 48))
	{
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v1 + 16) == CurrentThreadId)
		{
			++* (_QWORD*)(v1 + 24);
		}
		else
		{
			v4 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v4 >= 0x400)
				{
					sub_14019FB60(v1 + 16, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)(v1 + 16) = CurrentThreadId;
		}
	LABEL_9:
		v5 = *(_DWORD*)(a1 + 56);
		*(_DWORD*)(a1 + 56) = v5 + 1;
		if (!v5)
		{
			QueryPerformanceCounter(&PerformanceCount);
			v6 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
			++* (_QWORD*)(a1 + 88);
			*(_QWORD*)(a1 + 64) = v6;
		}
		if (*(_QWORD*)(v1 + 24) <= 1ui64)
		{
			*(_DWORD*)(v1 + 16) = 0;
			_InterlockedExchange64((volatile __int64*)(v1 + 24), 0i64);
			if (*(_QWORD*)(v1 + 32))
			{
				if (!*(_QWORD*)(v1 + 40))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 40), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v1 + 40));
			}
		}
		else
		{
			--* (_QWORD*)(v1 + 24);
		}
	}
}
// 140C63760: using guessed type __int64 qword_140C63760;

