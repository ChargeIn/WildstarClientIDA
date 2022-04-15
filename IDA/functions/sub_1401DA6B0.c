//----- (00000001401DA6B0) ----------------------------------------------------
int __fastcall sub_1401DA6B0(__int64 a1)
{
	unsigned int* v2; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	HANDLE EventW; // rcx

	v2 = (unsigned int*)(*(_QWORD*)(a1 + 16) + 664i64);
	CurrentThreadId = GetCurrentThreadId();
	v4 = *v2;
	v5 = CurrentThreadId;
	if ((_DWORD)v4 == CurrentThreadId)
	{
		++* ((_QWORD*)v2 + 1);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)v2 + 1, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60((__int64)v2, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v2 = CurrentThreadId;
	}
LABEL_8:
	if (!*(_DWORD*)(a1 + 168))
	{
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 32) + 24i64))(
			*(_QWORD*)(a1 + 32),
			v4,
			v5) == 3)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
		if (*(_DWORD*)(a1 + 40))
		{
			*(_DWORD*)(a1 + 40) = 0;
			sub_140195D70(a1 + 80);
		}
		*(_DWORD*)(a1 + 168) = 1;
	}
	v7 = *((_QWORD*)v2 + 1);
	if (v7 <= 1)
	{
		*v2 = 0;
		_InterlockedExchange64((volatile __int64*)v2 + 1, 0i64);
		v7 = *((_QWORD*)v2 + 2);
		if (v7)
		{
			if (!*((_QWORD*)v2 + 3))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)v2 + 3, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v7) = SetEvent(*((HANDLE*)v2 + 3));
		}
	}
	else
	{
		--* ((_QWORD*)v2 + 1);
	}
	return v7;
}
// 1401DA727: variable 'v4' is possibly undefined
// 1401DA727: variable 'v5' is possibly undefined

