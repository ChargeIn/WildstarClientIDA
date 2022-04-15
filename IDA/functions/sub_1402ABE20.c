//----- (00000001402ABE20) ----------------------------------------------------
__int64 __fastcall sub_1402ABE20(__int64 a1, int* a2, int a3)
{
	__int64 v7; // rbx
	int v8; // edi
	int CurrentThreadId; // edx
	__int64 v10; // rcx
	int v11; // esi
	HANDLE EventW; // rcx
	int v13; // ebp
	__int64 v14; // rbx
	int v15; // edx
	__int64 v16; // rcx
	HANDLE v17; // rcx
	int v18; // [rsp+60h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 40))
		return 2147500037i64;
	v7 = *(_QWORD*)(a1 + 16) + 6368i64;
	v8 = 0;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v7 == CurrentThreadId)
	{
		++* (_QWORD*)(v7 + 8);
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v7, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v7 = CurrentThreadId;
	}
LABEL_10:
	v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, int*, __int64, int))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6352i64)
		+ 232i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
			*(_QWORD*)(a1 + 32),
			&v18,
			8i64,
			1);
	if (*(_QWORD*)(v7 + 8) <= 1ui64)
	{
		*(_DWORD*)v7 = 0;
		_InterlockedExchange64((volatile __int64*)(v7 + 8), 0i64);
		if (*(_QWORD*)(v7 + 16))
		{
			if (!*(_QWORD*)(v7 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v7 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v7 + 8);
	}
	if (a3)
	{
		if (v11 == 1)
		{
			v13 = sub_14018CDF0() + 10000;
			do
			{
				v14 = *(_QWORD*)(a1 + 16) + 6368i64;
				v15 = GetCurrentThreadId();
				if (*(_DWORD*)v14 == v15)
				{
					++* (_QWORD*)(v14 + 8);
				}
				else
				{
					v16 = 0i64;
					while (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 8), 1i64, 0i64))
					{
						_mm_pause();
						if ((unsigned __int64)++v16 >= 0x400)
						{
							sub_14019FB60(v14, v15);
							goto LABEL_27;
						}
					}
					*(_DWORD*)v14 = v15;
				}
			LABEL_27:
				v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, int*, __int64, _DWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16)
					+ 6352i64)
					+ 232i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6352i64),
						*(_QWORD*)(a1 + 32),
						&v18,
						8i64,
						0);
				if (*(_QWORD*)(v14 + 8) <= 1ui64)
				{
					*(_DWORD*)v14 = 0;
					_InterlockedExchange64((volatile __int64*)(v14 + 8), 0i64);
					if (*(_QWORD*)(v14 + 16))
					{
						if (!*(_QWORD*)(v14 + 24))
						{
							v17 = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 24), (signed __int64)v17, 0i64))
								CloseHandle(v17);
						}
						SetEvent(*(HANDLE*)(v14 + 24));
					}
				}
				else
				{
					--* (_QWORD*)(v14 + 8);
				}
			} while (v11 == 1 && (int)(sub_14018CDF0() - v13) < 0);
		}
	}
	else if (v11 == 1)
	{
		return 1i64;
	}
	if (a2)
	{
		if (!v11)
			v8 = v18;
		*a2 = v8;
	}
	return 0i64;
}

