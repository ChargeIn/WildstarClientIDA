//----- (0000000140298290) ----------------------------------------------------
void __fastcall sub_140298290(_QWORD* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	int v4; // esi
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	HANDLE EventW; // rcx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rbx
	_QWORD* v12; // rcx

	v1 = a1[2];
	*a1 = off_140B61B20;
	CurrentThreadId = GetCurrentThreadId();
	v4 = 1;
	if (*(_DWORD*)(v1 + 24) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 32);
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(v1 + 24, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 24) = CurrentThreadId;
	}
LABEL_8:
	v6 = (_QWORD*)a1[30];
	if (v6)
		*v6 = a1[31];
	v7 = a1[31];
	if (v7)
		*(_QWORD*)(v7 + 240) = a1[30];
	a1[30] = 0i64;
	a1[31] = 0i64;
	if (*(_QWORD*)(v1 + 32) <= 1ui64)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		if (*(_QWORD*)(v1 + 40))
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
	}
	v9 = (_QWORD*)a1[30];
	if (v9)
		*v9 = a1[31];
	v10 = a1[31];
	if (v10)
		*(_QWORD*)(v10 + 240) = a1[30];
	a1[30] = 0i64;
	a1[31] = 0i64;
	v11 = a1 + 23;
	do
	{
		v11 -= 9;
		sub_140195D70((__int64)(v11 - 2));
		*((_DWORD*)v11 - 4) = 0;
		if (*v11)
			*(_QWORD*)*v11 = v11[1];
		v12 = (_QWORD*)v11[1];
		if (v12)
			*v12 = *v11;
		--v4;
		*v11 = 0i64;
		v11[1] = 0i64;
	} while (v4 >= 0);
}
// 140B61B20: using guessed type __int64 (__fastcall *off_140B61B20[9])();

