//----- (00000001401D8F60) ----------------------------------------------------
__int64 __fastcall sub_1401D8F60(__int64 a1)
{
	signed int v2; // eax
	_DWORD* v3; // rcx
	signed int v4; // r14d
	__int64 v5; // rbp
	unsigned int* v6; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v8; // rdx
	__int64 v9; // rcx
	HANDLE EventW; // rcx

	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 152i64))(
		*(_QWORD*)(a1 + 16),
		*(_QWORD*)(a1 + 176));
	v3 = *(_DWORD**)(a1 + 16);
	v4 = v2;
	if (v3[2] == 1)
		(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v3 + 208i64))(v3);
	v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	v6 = (unsigned int*)(v5 + 4856);
	CurrentThreadId = GetCurrentThreadId();
	v8 = CurrentThreadId;
	if (*(_DWORD*)(v5 + 4856) == CurrentThreadId)
	{
		++* (_QWORD*)(v5 + 4864);
	}
	else
	{
		v9 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 4864), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v9 >= 0x400)
			{
				sub_14019FB60(v5 + 4856, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*v6 = CurrentThreadId;
	}
LABEL_10:
	if ((*(_QWORD*)(v5 + 4768))-- == 1i64)
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v5 + 4848) + 16i64))(*(_QWORD*)(v5 + 4848), v8);
	if (*(_QWORD*)(v5 + 4864) <= 1ui64)
	{
		*v6 = 0;
		_InterlockedExchange64((volatile __int64*)(v5 + 4864), 0i64);
		if (*(_QWORD*)(v5 + 4872))
		{
			if (!*(_QWORD*)(v5 + 4880))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 4880), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v5 + 4880));
		}
	}
	else
	{
		--* (_QWORD*)(v5 + 4864);
	}
	if (v4 < 0)
		return sub_1401DA930((_QWORD*)a1, v4);
	else
		return sub_1401DA7C0(a1);
}
// 1401D900C: variable 'v8' is possibly undefined

