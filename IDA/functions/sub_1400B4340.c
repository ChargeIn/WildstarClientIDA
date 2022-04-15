//----- (00000001400B4340) ----------------------------------------------------
__int64 __fastcall sub_1400B4340(__int64 a1, int a2)
{
	unsigned int* v2; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v5; // rdx
	__int64 v6; // r8
	volatile signed __int64* v7; // rbx
	__int64 v8; // rcx
	__int64 StsConn; // rax
	void(__fastcall * **v10)(_QWORD, _QWORD, _QWORD, _QWORD); // rcx
	unsigned int v11; // edi
	HANDLE EventW; // rcx
	__int64 v14; // [rsp+40h] [rbp+8h]
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+18h] BYREF

	v2 = (unsigned int*)(a1 + 16);
	*(_DWORD*)(a1 + 204) = a2;
	v14 = a1 + 16;
	CurrentThreadId = GetCurrentThreadId();
	v5 = *v2;
	v6 = CurrentThreadId;
	v7 = (volatile signed __int64*)(v14 + 8);
	if ((_DWORD)v5 == CurrentThreadId)
	{
		++* v7;
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64(v7, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v14, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v14 = CurrentThreadId;
	}
LABEL_8:
	if (CreateStsConn)
		StsConn = CreateStsConn(a1, v5, v6);
	else
		StsConn = 0i64;
	*(_QWORD*)(a1 + 272) = StsConn;
	if (StsConn)
	{
		QueryPerformanceCounter(&PerformanceCount);
		*(_QWORD*)(a1 + 392) = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	}
	v10 = *(void(__fastcall****)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 272);
	if (v10)
	{
		(**v10)(v10, *(unsigned int*)(a1 + 196), *(unsigned int*)(a1 + 200), *(unsigned int*)(a1 + 204));
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 272) + 136i64))(*(_QWORD*)(a1 + 272), a1 + 456);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 272) + 144i64))(*(_QWORD*)(a1 + 272), a1 + 464);
		(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 272) + 32i64))(
			*(_QWORD*)(a1 + 272),
			(__int64)(*(_QWORD*)(a1 + 176) - *(_QWORD*)(a1 + 168)) >> 4,
			*(_QWORD*)(a1 + 168));
		*(_DWORD*)(a1 + 192) = 1;
		v11 = 0;
	}
	else
	{
		v11 = -2147467259;
	}
	if (*v7 <= 1ui64)
	{
		*(_DWORD*)v14 = 0;
		_InterlockedExchange64(v7, 0i64);
		if (*(_QWORD*)(v14 + 16))
		{
			if (!*(_QWORD*)(v14 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v14 + 24));
		}
		return v11;
	}
	else
	{
		--* v7;
		return v11;
	}
}
// 140C3BEC8: invalid function type has been ignored
// 1400B43C5: variable 'v5' is possibly undefined
// 1400B43C5: variable 'v6' is possibly undefined
// 140C3BEC8: using guessed type __int64 (__fastcall *CreateStsConn)(_QWORD, _QWORD, _QWORD);

