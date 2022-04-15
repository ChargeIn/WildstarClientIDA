//----- (0000000140389C40) ----------------------------------------------------
int __fastcall sub_140389C40(__int64* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	__int64 i; // rax
	__int64 v6; // rcx
	_QWORD* v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64* v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	_QWORD* v13; // rdx
	__int64 v14; // rdx
	unsigned __int64 v15; // rax
	HANDLE EventW; // rcx

	v1 = *a1;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 80) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 88);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 88), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 80, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 80) = CurrentThreadId;
	}
LABEL_8:
	for (i = a1[174]; i; i = a1[174])
	{
		if (*(_QWORD*)(*a1 + 6096) == i)
			*(_QWORD*)(*a1 + 6096) = *(_QWORD*)(i + 272);
		v6 = a1[174];
		v7 = *(_QWORD**)(v6 + 264);
		if (v7)
			*v7 = *(_QWORD*)(v6 + 272);
		v8 = *(_QWORD*)(v6 + 272);
		if (v8)
			*(_QWORD*)(v8 + 264) = *(_QWORD*)(v6 + 264);
		*(_QWORD*)(v6 + 264) = 0i64;
		*(_QWORD*)(v6 + 272) = 0i64;
		v9 = a1[174];
		v10 = (__int64*)(*a1 + 6120);
		if (!*(_QWORD*)(v9 + 264))
		{
			*(_QWORD*)(v9 + 264) = v10;
			*(_QWORD*)(v9 + 272) = *v10;
			*v10 = v9;
			v11 = *(_QWORD*)(v9 + 272);
			if (v11)
				*(_QWORD*)(v11 + 264) = v9 + 272;
		}
		sub_1400B6120(*a1 + 6128, a1[174]);
		v12 = a1[174];
		v13 = *(_QWORD**)(v12 + 280);
		if (v13)
			*v13 = *(_QWORD*)(v12 + 288);
		v14 = *(_QWORD*)(v12 + 288);
		if (v14)
			*(_QWORD*)(v14 + 280) = *(_QWORD*)(v12 + 280);
		*(_QWORD*)(v12 + 280) = 0i64;
		*(_QWORD*)(v12 + 288) = 0i64;
	}
	v15 = *(_QWORD*)(v1 + 88);
	if (v15 <= 1)
	{
		*(_DWORD*)(v1 + 80) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 88), 0i64);
		v15 = *(_QWORD*)(v1 + 96);
		if (v15)
		{
			if (!*(_QWORD*)(v1 + 104))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 104), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v15) = SetEvent(*(HANDLE*)(v1 + 104));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 88);
	}
	return v15;
}

