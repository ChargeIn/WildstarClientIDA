//----- (0000000140280950) ----------------------------------------------------
void __fastcall sub_140280950(__int64 a1)
{
	unsigned __int64 v1; // r8
	__int64 v3; // r15
	__int64 v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	bool v7; // zf
	unsigned __int64 v8; // rax
	HANDLE v9; // rcx
	HANDLE EventW; // rcx
	int v11; // ebp
	__int64 v12; // rcx
	int v13; // r12d
	unsigned __int64 i; // rsi
	int v15; // edx
	__int64 v16; // rcx
	unsigned __int64 v17; // rax
	HANDLE v18; // rcx
	HANDLE v19; // rcx
	unsigned int v20[4]; // [rsp+30h] [rbp-38h] BYREF
	char v21; // [rsp+70h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 8576);
	if (v1)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8568) + 8 * (*(unsigned int*)(a1 + 240) % v1));
		v4 = a1 + 6368;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v4 == CurrentThreadId)
		{
			++* (_QWORD*)(v4 + 8);
		}
		else
		{
			v6 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v6 >= 0x400)
				{
					sub_14019FB60(v4, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v4 = CurrentThreadId;
		}
	LABEL_9:
		v7 = (*(unsigned int(__fastcall**)(_QWORD, __int64, char*, __int64, int))(**(_QWORD**)(a1 + 6352) + 232i64))(
			*(_QWORD*)(a1 + 6352),
			v3,
			&v21,
			4i64,
			1) == 1;
		v8 = *(_QWORD*)(v4 + 8);
		if (v7)
		{
			if (v8 <= 1)
			{
				*(_DWORD*)v4 = 0;
				_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
				if (*(_QWORD*)(v4 + 16))
				{
					if (!*(_QWORD*)(v4 + 24))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v4 + 24));
				}
			}
			else
			{
				--* (_QWORD*)(v4 + 8);
			}
			v11 = 1;
			v13 = sub_14018CDF0() + 10000;
			while (2)
			{
				for (i = 0i64; i < 0x3E8; ++i)
				{
					if (v11)
					{
						v20[0] = 0;
						if (qword_140C63758)
							v11 = sub_1401C81F0(v12, v20);
						else
							v11 = 0;
					}
					v15 = GetCurrentThreadId();
					if (*(_DWORD*)v4 == v15)
					{
						++* (_QWORD*)(v4 + 8);
					}
					else
					{
						v16 = 0i64;
						while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
						{
							_mm_pause();
							if ((unsigned __int64)++v16 >= 0x400)
							{
								sub_14019FB60(v4, v15);
								goto LABEL_37;
							}
						}
						*(_DWORD*)v4 = v15;
					}
				LABEL_37:
					v7 = (*(unsigned int(__fastcall**)(_QWORD, __int64, char*, __int64, _DWORD))(**(_QWORD**)(a1 + 6352)
						+ 232i64))(
							*(_QWORD*)(a1 + 6352),
							v3,
							&v21,
							4i64,
							0) == 1;
					v17 = *(_QWORD*)(v4 + 8);
					if (!v7)
					{
						if (v17 <= 1)
						{
							*(_DWORD*)v4 = 0;
							_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
							if (*(_QWORD*)(v4 + 16))
							{
								if (!*(_QWORD*)(v4 + 24))
								{
									v19 = CreateEventW(0i64, 0, 0, 0i64);
									if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)v19, 0i64))
										CloseHandle(v19);
								}
								SetEvent(*(HANDLE*)(v4 + 24));
							}
						}
						else
						{
							--* (_QWORD*)(v4 + 8);
						}
						return;
					}
					if (v17 <= 1)
					{
						*(_DWORD*)v4 = 0;
						_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
						if (*(_QWORD*)(v4 + 16))
						{
							if (!*(_QWORD*)(v4 + 24))
							{
								v18 = CreateEventW(0i64, 0, 0, 0i64);
								if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)v18, 0i64))
									CloseHandle(v18);
							}
							SetEvent(*(HANDLE*)(v4 + 24));
						}
					}
					else
					{
						--* (_QWORD*)(v4 + 8);
					}
				}
				if ((int)(sub_14018CDF0() - v13) < 0)
					continue;
				break;
			}
		}
		else if (v8 <= 1)
		{
			*(_DWORD*)v4 = 0;
			_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
			if (*(_QWORD*)(v4 + 16))
			{
				if (!*(_QWORD*)(v4 + 24))
				{
					v9 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)v9, 0i64))
						CloseHandle(v9);
				}
				SetEvent(*(HANDLE*)(v4 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v4 + 8);
		}
	}
}
// 140280AFC: variable 'v12' is possibly undefined
// 140C63758: using guessed type __int64 qword_140C63758;
// 140280950: using guessed type unsigned int var_38[4];

