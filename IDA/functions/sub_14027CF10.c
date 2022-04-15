//----- (000000014027CF10) ----------------------------------------------------
int __fastcall sub_14027CF10(__int64 a1)
{
	__int64 v2; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	HANDLE EventW; // rcx
	int v10; // [rsp+50h] [rbp+8h] BYREF
	int v11; // [rsp+58h] [rbp+10h] BYREF
	__int64 v12; // [rsp+60h] [rbp+18h] BYREF

	v2 = a1 + 6368;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v2 == CurrentThreadId)
	{
		++* (_QWORD*)(v2 + 8);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v2, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v2 = CurrentThreadId;
	}
LABEL_8:
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 120i64))(
		*(_QWORD*)(a1 + 6352),
		*(_QWORD*)(a1 + 8112),
		0i64);
	v5 = *(unsigned int*)(a1 + 8124);
	v6 = *(_QWORD*)(a1 + 6352);
	v12 = *(_QWORD*)(a1 + 8112);
	v11 = *(_DWORD*)(a1 + 4 * (v5 + 54i64 * *(int*)(a1 + 8120)) + 1188);
	v10 = *(_DWORD*)(a1 + 8128);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64*, int*, int*))(*(_QWORD*)v6 + 144i64))(
		v6,
		v5,
		1i64,
		&v12,
		&v11,
		&v10);
	v7 = *(_QWORD*)(v2 + 8);
	if (v7 <= 1)
	{
		*(_DWORD*)v2 = 0;
		_InterlockedExchange64((volatile __int64*)(v2 + 8), 0i64);
		v7 = *(_QWORD*)(v2 + 16);
		if (v7)
		{
			if (!*(_QWORD*)(v2 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v7) = SetEvent(*(HANDLE*)(v2 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v2 + 8);
	}
	return v7;
}

