//----- (000000014027D050) ----------------------------------------------------
__int64 __fastcall sub_14027D050(__int64 a1, unsigned int a2, int a3)
{
	_DWORD* v7; // rbx
	volatile signed __int64* v8; // rsi
	int CurrentThreadId; // edx
	__int64 v10; // rcx
	int* v11; // rbx
	int v12; // edx
	__int64 v13; // rcx
	int v14; // r12d
	void* v15; // xmm1_8
	__int64 v16; // rdi
	HANDLE v17; // rcx
	HANDLE EventW; // rcx
	int v19; // eax
	HANDLE v20; // rcx
	__int64 v21; // [rsp+30h] [rbp-19h] BYREF
	__int128 TlsValue; // [rsp+40h] [rbp-9h] BYREF
	__int128 v23; // [rsp+50h] [rbp+7h]
	__int128 v24; // [rsp+60h] [rbp+17h]
	__int128 v25; // [rsp+70h] [rbp+27h]
	__int64 v26; // [rsp+C8h] [rbp+7Fh]

	if (!a2 || a2 > *(_DWORD*)(a1 + 8164))
		return 0i64;
	v7 = (_DWORD*)(a1 + 24);
	v26 = a1 + 24;
	v8 = (volatile signed __int64*)(a1 + 32);
	CurrentThreadId = GetCurrentThreadId();
	if (*v7 == CurrentThreadId)
	{
		++* v8;
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64(v8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v26, CurrentThreadId);
				goto LABEL_11;
			}
		}
		*(_DWORD*)v26 = CurrentThreadId;
	}
LABEL_11:
	if (a2 + *(_DWORD*)(a1 + 8160) > *(_DWORD*)(a1 + 8164) || *(_DWORD*)(a1 + 8168) != *(_DWORD*)(a1 + 240))
		*(_DWORD*)(a1 + 8160) = 0;
	v11 = (int*)(a1 + 6368);
	v12 = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 6368) == v12)
	{
		++* (_QWORD*)(a1 + 6376);
	}
	else
	{
		v13 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6376), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v13 >= 0x400)
			{
				sub_14019FB60(a1 + 6368, v12);
				goto LABEL_21;
			}
		}
		*v11 = v12;
	}
LABEL_21:
	v14 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64*))(**(_QWORD**)(a1 + 6352) + 112i64))(
		*(_QWORD*)(a1 + 6352),
		*(_QWORD*)(a1 + 8144),
		0i64,
		(unsigned int)(*(_DWORD*)(a1 + 8160) != 0) + 4,
		0,
		&v21);
	if (v14 >= 0)
	{
		if (*(_QWORD*)(a1 + 6376) <= 1ui64)
		{
			*v11 = 0;
			_InterlockedExchange64((volatile __int64*)(a1 + 6376), 0i64);
			if (*(_QWORD*)(a1 + 6384))
			{
				if (!*(_QWORD*)(a1 + 6392))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6392), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(a1 + 6392));
			}
		}
		else
		{
			--* (_QWORD*)(a1 + 6376);
		}
		v19 = *(_DWORD*)(a1 + 8160);
		*(_DWORD*)(a1 + 8152) = a3;
		*(_DWORD*)(a1 + 8156) = v19;
		*(_DWORD*)(a1 + 8168) = *(_DWORD*)(a1 + 240);
		*(_DWORD*)(a1 + 8160) = (v19 + a2 + 3) & 0xFFFFFFFC;
		_InterlockedIncrement((volatile signed __int32*)(a1 + 708));
		_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 712), a2);
		_InterlockedIncrement((volatile signed __int32*)(a1 + 716));
		_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 720), a2);
		v16 = v21 + *(unsigned int*)(a1 + 8156);
	}
	else
	{
		*(_QWORD*)&TlsValue = &off_140B5E648;
		*((_QWORD*)&TlsValue + 1) = L"Result";
		*(_QWORD*)&v23 = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		*(_QWORD*)&TlsValue = &off_140B5E640;
		DWORD2(v23) = v14;
		v15 = (void*)v23;
		v24 = TlsValue;
		v25 = v23;
		sub_1400035B0();
		*(_QWORD*)&TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v15);
		if (*(_QWORD*)(a1 + 6376) <= 1ui64)
		{
			*v11 = 0;
			_InterlockedExchange64((volatile __int64*)(a1 + 6376), 0i64);
			if (*(_QWORD*)(a1 + 6384))
			{
				if (!*(_QWORD*)(a1 + 6392))
				{
					v17 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6392), (signed __int64)v17, 0i64))
						CloseHandle(v17);
				}
				SetEvent(*(HANDLE*)(a1 + 6392));
			}
			v16 = 0i64;
		}
		else
		{
			--* (_QWORD*)(a1 + 6376);
			v16 = 0i64;
		}
	}
	if (*v8 <= 1ui64)
	{
		*(_DWORD*)v26 = 0;
		_InterlockedExchange64(v8, 0i64);
		if (*(_QWORD*)(v26 + 16))
		{
			if (!*(_QWORD*)(v26 + 24))
			{
				v20 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v26 + 24), (signed __int64)v20, 0i64))
					CloseHandle(v20);
			}
			SetEvent(*(HANDLE*)(v26 + 24));
		}
	}
	else
	{
		--* v8;
	}
	return v16;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

