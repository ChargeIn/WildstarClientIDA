//----- (000000014019E780) ----------------------------------------------------
int __fastcall sub_14019E780(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	HANDLE EventW; // rcx
	unsigned __int64* v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	v1 = qword_140C63760;
	CurrentThreadId = GetCurrentThreadId();
	v4 = *(unsigned int*)(v1 + 16);
	v5 = CurrentThreadId;
	if ((_DWORD)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 24);
	}
	else
	{
		v6 = 0i64;
		v4 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 16) = CurrentThreadId;
	}
LABEL_8:
	--* (_DWORD*)(qword_140C63760 + 52);
	v7 = (_QWORD*)a1[14];
	if (v7)
		*v7 = a1[15];
	v8 = a1[15];
	if (v8)
		*(_QWORD*)(v8 + 112) = a1[14];
	a1[14] = 0i64;
	a1[15] = 0i64;
	v9 = *(_QWORD*)(v1 + 24);
	if (v9 <= 1)
	{
		*(_DWORD*)(v1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 24), 0i64);
		v9 = *(_QWORD*)(v1 + 32);
		if (v9)
		{
			if (!*(_QWORD*)(v1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v9) = SetEvent(*(HANDLE*)(v1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 24);
	}
	v11 = (unsigned __int64*)a1[14];
	if (v11)
	{
		v9 = a1[15];
		*v11 = v9;
	}
	v12 = a1[15];
	if (v12)
	{
		v9 = a1[14];
		*(_QWORD*)(v12 + 112) = v9;
	}
	a1[14] = 0i64;
	a1[15] = 0i64;
	v13 = a1[5];
	if (v13)
		LODWORD(v9) = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)(v13 - 16) + 8i64))(
			v13 - 16,
			v4,
			v5);
	v14 = a1[3];
	if (v14)
		LODWORD(v9) = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)(v14 - 16) + 8i64))(
			v14 - 16,
			v4,
			v5);
	v15 = a1[1];
	if (v15)
		LODWORD(v9) = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)(v15 - 16) + 8i64))(
			v15 - 16,
			v4,
			v5);
	return v9;
}
// 14019E8B0: variable 'v4' is possibly undefined
// 14019E8B0: variable 'v5' is possibly undefined
// 140C63760: using guessed type __int64 qword_140C63760;

