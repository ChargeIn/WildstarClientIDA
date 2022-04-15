//----- (0000000140197B70) ----------------------------------------------------
int sub_140197B70()
{
	__int64 v0; // r15
	__int64 v1; // rdi
	__int64 v2; // rbx
	int CurrentThreadId; // edx
	__int64 v4; // rcx
	int* v5; // rax
	__int64 v6; // rdx
	PVOID* v7; // rax
	HANDLE EventW; // rcx
	int v9; // edx
	__int64 v10; // rcx
	int v11; // eax
	__int64 v12; // rcx
	int v13; // r12d
	DWORD v14; // r14d
	__int64 v15; // rsi
	HANDLE v16; // rcx
	int v17; // edx
	__int64 v18; // rcx
	int v19; // edx
	__int64 v20; // rcx
	__int64* i; // rsi
	DWORDLONG ullAvailPageFile; // rcx
	__int64 v23; // r14
	HANDLE v24; // rcx
	int v25; // edx
	__int64 v26; // rcx
	unsigned __int64 v27; // rax
	HANDLE v28; // rcx
	struct _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-78h] BYREF

	v0 = qword_140C63740;
	if ((dword_140C8E110 & 1) == 0)
	{
		dword_140C8E110 |= 1u;
		sub_1407DD89C(sub_14094D8E0);
	}
	v1 = qword_140C8E118;
	if (qword_140C8E118)
		goto LABEL_24;
	v2 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v2 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(v2 + 24);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v2 + 16, CurrentThreadId);
				goto LABEL_11;
			}
		}
		*(_DWORD*)(v2 + 16) = CurrentThreadId;
	}
LABEL_11:
	if (!qword_140C8E118)
	{
		v5 = sub_14018B280(128i64, 0);
		if (v5)
			v7 = sub_14019E5D0((PVOID*)v5, v6, 0);
		else
			v7 = 0i64;
		qword_140C8E118 = (__int64)v7;
	}
	if (*(_QWORD*)(v2 + 24) <= 1ui64)
	{
		*(_DWORD*)(v2 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v2 + 24), 0i64);
		if (*(_QWORD*)(v2 + 32))
		{
			if (!*(_QWORD*)(v2 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v2 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v2 + 24);
	}
	v1 = qword_140C8E118;
	if (qword_140C8E118)
		LABEL_24:
	sub_14019E8F0(v1);
	v9 = GetCurrentThreadId();
	if (*(_DWORD*)(v0 + 48) == v9)
	{
		++* (_QWORD*)(v0 + 56);
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 56), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v0 + 48, v9);
				goto LABEL_32;
			}
		}
		*(_DWORD*)(v0 + 48) = v9;
	}
LABEL_32:
	Buffer.dwLength = 64;
	GlobalMemoryStatusEx(&Buffer);
	v11 = sub_14018CDF0();
	v12 = *(_QWORD*)(v0 + 40);
	v13 = v11 + 10;
	v14 = v11 + 600 * Buffer.dwMemoryLoad - 60000;
	if (v12 != v0)
	{
		while ((int)(v14 - *(_DWORD*)(v12 + 8)) > 0)
		{
			v15 = *(_QWORD*)v12;
			sub_1401984D0(v12);
			++HIDWORD(qword_140C890CC);
			if (*(_QWORD*)(v0 + 56) <= 1ui64)
			{
				*(_DWORD*)(v0 + 48) = 0;
				_InterlockedExchange64((volatile __int64*)(v0 + 56), 0i64);
				if (*(_QWORD*)(v0 + 64))
				{
					if (!*(_QWORD*)(v0 + 72))
					{
						v16 = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 72), (signed __int64)v16, 0i64))
							CloseHandle(v16);
					}
					SetEvent(*(HANDLE*)(v0 + 72));
				}
			}
			else
			{
				--* (_QWORD*)(v0 + 56);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			if ((int)(sub_14018CDF0() - v13) >= 0)
			{
				v19 = GetCurrentThreadId();
				if (*(_DWORD*)(v0 + 48) == v19)
				{
					++* (_QWORD*)(v0 + 56);
				}
				else
				{
					v20 = 0i64;
					while (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 56), 1i64, 0i64))
					{
						_mm_pause();
						if ((unsigned __int64)++v20 >= 0x400)
						{
							sub_14019FB60(v0 + 48, v19);
							goto LABEL_58;
						}
					}
					*(_DWORD*)(v0 + 48) = v19;
				}
				break;
			}
			v17 = GetCurrentThreadId();
			if (*(_DWORD*)(v0 + 48) == v17)
			{
				++* (_QWORD*)(v0 + 56);
			}
			else
			{
				v18 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 56), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v18 >= 0x400)
					{
						sub_14019FB60(v0 + 48, v17);
						goto LABEL_49;
					}
				}
				*(_DWORD*)(v0 + 48) = v17;
			}
		LABEL_49:
			v12 = *(_QWORD*)(v0 + 40);
			if (v12 == v0)
				break;
		}
	}
LABEL_58:
	for (i = *(__int64**)(v0 + 40); i != (__int64*)v0; i = *(__int64**)(v0 + 40))
	{
		GlobalMemoryStatusEx(&Buffer);
		ullAvailPageFile = Buffer.ullAvailPageFile;
		if (Buffer.ullAvailVirtual < Buffer.ullAvailPageFile)
			ullAvailPageFile = Buffer.ullAvailVirtual;
		if (ullAvailPageFile >= 0x20000000)
			break;
		v23 = *i;
		sub_1401984D0((__int64)i);
		++HIDWORD(qword_140C890CC);
		if (*(_QWORD*)(v0 + 56) <= 1ui64)
		{
			*(_DWORD*)(v0 + 48) = 0;
			_InterlockedExchange64((volatile __int64*)(v0 + 56), 0i64);
			if (*(_QWORD*)(v0 + 64))
			{
				if (!*(_QWORD*)(v0 + 72))
				{
					v24 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 72), (signed __int64)v24, 0i64))
						CloseHandle(v24);
				}
				SetEvent(*(HANDLE*)(v0 + 72));
			}
		}
		else
		{
			--* (_QWORD*)(v0 + 56);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
		v25 = GetCurrentThreadId();
		if (*(_DWORD*)(v0 + 48) == v25)
		{
			++* (_QWORD*)(v0 + 56);
		}
		else
		{
			v26 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 56), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v26 >= 0x400)
				{
					sub_14019FB60(v0 + 48, v25);
					goto LABEL_76;
				}
			}
			*(_DWORD*)(v0 + 48) = v25;
		}
	LABEL_76:
		;
	}
	v27 = *(_QWORD*)(v0 + 56);
	if (v27 <= 1)
	{
		*(_DWORD*)(v0 + 48) = 0;
		_InterlockedExchange64((volatile __int64*)(v0 + 56), 0i64);
		v27 = *(_QWORD*)(v0 + 64);
		if (v27)
		{
			if (!*(_QWORD*)(v0 + 72))
			{
				v28 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v0 + 72), (signed __int64)v28, 0i64))
					CloseHandle(v28);
			}
			LODWORD(v27) = SetEvent(*(HANDLE*)(v0 + 72));
		}
	}
	else
	{
		--* (_QWORD*)(v0 + 56);
	}
	if (v1)
		LODWORD(v27) = sub_14019EA00(v1);
	return v27;
}
// 140197C3C: variable 'v6' is possibly undefined
// 140C63740: using guessed type __int64 qword_140C63740;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C890CC: using guessed type __int64 qword_140C890CC;
// 140C8E110: using guessed type int dword_140C8E110;
// 140C8E118: using guessed type __int64 qword_140C8E118;

