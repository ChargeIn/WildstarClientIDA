//----- (00000001401DA300) ----------------------------------------------------
__int64 __fastcall sub_1401DA300(__int64 a1, unsigned int a2)
{
	__int64 v4; // rsi
	unsigned int* v5; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // r9
	__int64 v10; // rcx
	HANDLE EventW; // rcx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 208i64))(*(_QWORD*)(a1 + 16));
	v4 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64);
	v5 = (unsigned int*)(v4 + 4856);
	CurrentThreadId = GetCurrentThreadId();
	v8 = *(unsigned int*)(v4 + 4856);
	v9 = CurrentThreadId;
	if ((_DWORD)v8 == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 4864);
	}
	else
	{
		v10 = 0i64;
		v7 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 4864), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v4 + 4856, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v5 = CurrentThreadId;
	}
LABEL_8:
	if ((*(_QWORD*)(v4 + 4768))-- == 1i64)
		(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(v4 + 4848) + 16i64))(
			*(_QWORD*)(v4 + 4848),
			v7,
			v8,
			v9);
	if (*(_QWORD*)(v4 + 4864) <= 1ui64)
	{
		*v5 = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 4864), 0i64);
		if (*(_QWORD*)(v4 + 4872))
		{
			if (!*(_QWORD*)(v4 + 4880))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 4880), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v4 + 4880));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 4864);
	}
	return sub_1401DA930((_QWORD*)a1, a2);
}
// 1401DA39B: variable 'v7' is possibly undefined
// 1401DA39B: variable 'v8' is possibly undefined
// 1401DA39B: variable 'v9' is possibly undefined

