//----- (000000014029CF70) ----------------------------------------------------
int __fastcall sub_14029CF70(_QWORD* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	HANDLE EventW; // rcx
	unsigned __int64* v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx

	v1 = a1[2];
	*a1 = off_140B61C70;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 24) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 32);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 24, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 24) = CurrentThreadId;
	}
LABEL_8:
	v5 = (_QWORD*)a1[20];
	if (v5)
	{
		*v5 = a1[21];
		v6 = a1[21];
		if (v6)
			*(_QWORD*)(v6 + 160) = a1[20];
		a1[20] = 0i64;
		a1[21] = 0i64;
	}
	sub_14029D910((__int64)a1, 0);
	v7 = *(_QWORD*)(v1 + 32);
	if (v7 <= 1)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		v7 = *(_QWORD*)(v1 + 40);
		if (v7)
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v7) = SetEvent(*(HANDLE*)(v1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
	}
	v9 = (unsigned __int64*)a1[20];
	if (v9)
	{
		v7 = a1[21];
		*v9 = v7;
	}
	v10 = a1[21];
	if (v10)
	{
		v7 = a1[20];
		*(_QWORD*)(v10 + 160) = v7;
	}
	a1[20] = 0i64;
	a1[21] = 0i64;
	v11 = a1[17];
	if (v11)
		LODWORD(v7) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
	v12 = a1[16];
	if (v12)
		LODWORD(v7) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	v13 = a1[14];
	if (v13)
		LODWORD(v7) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
	v14 = a1[13];
	if (v14)
		LODWORD(v7) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
	v15 = a1[12];
	if (v15)
		LODWORD(v7) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
	v16 = a1[11];
	if (v16)
		LODWORD(v7) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
	return v7;
}
// 140B61C70: using guessed type __int64 (__fastcall *off_140B61C70[5])();

