//----- (000000014033AFE0) ----------------------------------------------------
__int64 __fastcall sub_14033AFE0(_QWORD* a1, int a2)
{
	__int64 v4; // rbx
	int CurrentThreadId; // r9d
	__int64 v6; // rcx
	__int64 v7; // rdi
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64* v11; // rdx
	int* v12; // rax
	__int64* v13; // rcx
	__int64 v14; // rax
	HANDLE EventW; // rcx

	v4 = (__int64)(a1 + 36);
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
				goto LABEL_8;
			}
		}
		*(_DWORD*)v4 = CurrentThreadId;
	}
LABEL_8:
	v7 = a1[63];
	if (v7)
	{
		v8 = *(_QWORD**)(v7 + 208);
		if (v8)
			*v8 = *(_QWORD*)(v7 + 216);
		v9 = v7 + 216;
		v10 = *(_QWORD*)(v7 + 216);
		if (v10)
			*(_QWORD*)(v10 + 208) = *(_QWORD*)(v7 + 208);
		*(_QWORD*)(v7 + 208) = 0i64;
		*(_QWORD*)v9 = 0i64;
		--a1[64];
		v11 = a1 + 62;
		if (!*(_QWORD*)(v7 + 208))
		{
			*(_QWORD*)(v7 + 208) = v11;
			*(_QWORD*)v9 = *v11;
			*v11 = v7;
			if (*(_QWORD*)v9)
				*(_QWORD*)(*(_QWORD*)v9 + 208i64) = v9;
		}
		sub_14033ACD0(v7, a2, (__int64)a1);
	}
	else
	{
		v12 = sub_14018B280(240i64, 0);
		if (v12)
			v7 = sub_14033AC40((__int64)v12, a2, (__int64)a1);
		else
			v7 = 0i64;
		v13 = a1 + 62;
		if (!*(_QWORD*)(v7 + 208))
		{
			*(_QWORD*)(v7 + 208) = v13;
			*(_QWORD*)(v7 + 216) = *v13;
			*v13 = v7;
			v14 = *(_QWORD*)(v7 + 216);
			if (v14)
				*(_QWORD*)(v14 + 208) = v7 + 216;
		}
		++a1[65];
	}
	if (*(_QWORD*)(v4 + 8) <= 1ui64)
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
	return v7;
}

