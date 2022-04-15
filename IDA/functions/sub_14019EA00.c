//----- (000000014019EA00) ----------------------------------------------------
int __fastcall sub_14019EA00(__int64 a1)
{
	unsigned __int64 v2; // rax
	__int64 v3; // rbx
	unsigned __int64 v4; // rbp
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	int v7; // eax
	int v8; // eax
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // rax
	HANDLE EventW; // rcx
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 56) || (LODWORD(v2) = qword_140C63760, *(_DWORD*)(qword_140C63760 + 48)))
	{
		QueryPerformanceCounter(&PerformanceCount);
		v3 = qword_140C63760;
		v4 = PerformanceCount.QuadPart - *(_QWORD*)(a1 + 64) - ::PerformanceCount.QuadPart;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v3 + 16) == CurrentThreadId)
		{
			++* (_QWORD*)(v3 + 24);
		}
		else
		{
			v6 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 24), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v6 >= 0x400)
				{
					sub_14019FB60(v3 + 16, CurrentThreadId);
					goto LABEL_10;
				}
			}
			*(_DWORD*)(v3 + 16) = CurrentThreadId;
		}
	LABEL_10:
		v7 = *(_DWORD*)(a1 + 56);
		if (v7)
		{
			v8 = v7 - 1;
			*(_DWORD*)(a1 + 56) = v8;
			if (!v8)
			{
				v9 = *(_QWORD*)(a1 + 96);
				*(_QWORD*)(a1 + 72) += v4;
				if (v4 < v9)
					v9 = v4;
				*(_QWORD*)(a1 + 96) = v9;
				v10 = *(_QWORD*)(a1 + 104);
				if (v10 < v4)
					v10 = v4;
				*(_QWORD*)(a1 + 104) = v10;
			}
		}
		v2 = *(_QWORD*)(v3 + 24);
		if (v2 <= 1)
		{
			*(_DWORD*)(v3 + 16) = 0;
			_InterlockedExchange64((volatile __int64*)(v3 + 24), 0i64);
			v2 = *(_QWORD*)(v3 + 32);
			if (v2)
			{
				if (!*(_QWORD*)(v3 + 40))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 40), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				LODWORD(v2) = SetEvent(*(HANDLE*)(v3 + 40));
			}
		}
		else
		{
			--* (_QWORD*)(v3 + 24);
		}
	}
	return v2;
}
// 140C63760: using guessed type __int64 qword_140C63760;

