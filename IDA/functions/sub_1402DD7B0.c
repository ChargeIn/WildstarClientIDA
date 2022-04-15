//----- (00000001402DD7B0) ----------------------------------------------------
__int64 __fastcall sub_1402DD7B0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	__int64 v6; // rdx
	HANDLE EventW; // rcx

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (!(_DWORD)result)
	{
		if (*(_QWORD*)(a1 + 32))
		{
			sub_1402DB1A0((_QWORD*)a1);
			return 0i64;
		}
		else
		{
			v3 = qword_140C657F8;
			CurrentThreadId = GetCurrentThreadId();
			if (*(_DWORD*)(v3 + 16) == CurrentThreadId)
			{
				++* (_QWORD*)(v3 + 24);
			}
			else
			{
				v5 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 24), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v5 >= 0x400)
					{
						sub_14019FB60(v3 + 16, CurrentThreadId);
						goto LABEL_11;
					}
				}
				*(_DWORD*)(v3 + 16) = CurrentThreadId;
			}
		LABEL_11:
			v6 = qword_140C657F8 + 8i64 * *(int*)(a1 + 12);
			*(_QWORD*)(a1 + 40) = *(_QWORD*)(v6 + 352);
			*(_QWORD*)(v6 + 352) = a1;
			if (*(_QWORD*)(v3 + 24) <= 1ui64)
			{
				*(_DWORD*)(v3 + 16) = 0;
				_InterlockedExchange64((volatile __int64*)(v3 + 24), 0i64);
				if (*(_QWORD*)(v3 + 32))
				{
					if (!*(_QWORD*)(v3 + 40))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 40), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v3 + 40));
				}
				return 0i64;
			}
			else
			{
				--* (_QWORD*)(v3 + 24);
				return 0i64;
			}
		}
	}
	return result;
}
// 140C657F8: using guessed type __int64 qword_140C657F8;

