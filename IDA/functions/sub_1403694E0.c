//----- (00000001403694E0) ----------------------------------------------------
int __fastcall sub_1403694E0(_QWORD* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	unsigned __int64 i; // rbp
	__int64 v6; // rcx
	_QWORD* v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // r14
	__int64 v12; // r15
	__int64 v13; // rbp
	int j; // r14d
	unsigned __int64 k; // rbp
	__int64 v16; // rcx
	_QWORD* v17; // rdx
	__int64 v18; // rdx
	unsigned __int64 m; // rbp
	__int64 v20; // rcx
	_QWORD* v21; // rdx
	__int64 v22; // rdx
	unsigned __int64 n; // rbp
	__int64 v24; // rcx
	_QWORD* v25; // rdx
	__int64 v26; // rdx
	unsigned __int64 v27; // rax
	HANDLE EventW; // rcx

	v1 = (__int64)(a1 + 624);
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v1 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 8);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v1 = CurrentThreadId;
	}
LABEL_8:
	for (i = 0i64; i < a1[607]; ++i)
	{
		v6 = *(_QWORD*)(a1[606] + 8 * i);
		if (v6)
		{
			v7 = *(_QWORD**)(v6 + 200);
			if (v7)
				*v7 = *(_QWORD*)(v6 + 208);
			v8 = *(_QWORD*)(v6 + 208);
			if (v8)
				*(_QWORD*)(v8 + 200) = *(_QWORD*)(v6 + 200);
			*(_QWORD*)(v6 + 200) = 0i64;
			*(_QWORD*)(v6 + 208) = 0i64;
			sub_14018B900(v6, 0);
		}
	}
	a1[607] = 0i64;
	a1[618] = 0i64;
	v9 = a1[616];
	if (v9)
	{
		sub_14036F9F0(v9);
		sub_14036F9F0(a1[616] + 80i64);
		sub_14036F9F0(a1[616] + 160i64);
		sub_14036F9F0(a1[616] + 240i64);
	}
	v10 = a1[616];
	if (v10)
	{
		v11 = *(int*)(v10 - 16);
		v12 = v10 - 16;
		v13 = v10 + 80 * v11;
		for (j = v11 - 1; j >= 0; --j)
		{
			v13 -= 80i64;
			sub_14036F9B0(v13);
		}
		sub_14018B900(v12, 0);
	}
	a1[616] = 0i64;
	for (k = 0i64; k < a1[609]; ++k)
	{
		v16 = *(_QWORD*)(a1[608] + 8 * k);
		if (v16)
		{
			v17 = *(_QWORD**)(v16 + 200);
			if (v17)
				*v17 = *(_QWORD*)(v16 + 208);
			v18 = *(_QWORD*)(v16 + 208);
			if (v18)
				*(_QWORD*)(v18 + 200) = *(_QWORD*)(v16 + 200);
			*(_QWORD*)(v16 + 200) = 0i64;
			*(_QWORD*)(v16 + 208) = 0i64;
			sub_14018B900(v16, 0);
		}
	}
	a1[609] = 0i64;
	for (m = 0i64; m < a1[621]; ++m)
	{
		v20 = *(_QWORD*)(a1[620] + 8 * m);
		if (v20)
		{
			v21 = *(_QWORD**)(v20 + 200);
			if (v21)
				*v21 = *(_QWORD*)(v20 + 208);
			v22 = *(_QWORD*)(v20 + 208);
			if (v22)
				*(_QWORD*)(v22 + 200) = *(_QWORD*)(v20 + 200);
			*(_QWORD*)(v20 + 200) = 0i64;
			*(_QWORD*)(v20 + 208) = 0i64;
			sub_14018B900(v20, 0);
		}
	}
	a1[621] = 0i64;
	for (n = 0i64; n < a1[623]; ++n)
	{
		v24 = *(_QWORD*)(a1[622] + 8 * n);
		if (v24)
		{
			v25 = *(_QWORD**)(v24 + 200);
			if (v25)
				*v25 = *(_QWORD*)(v24 + 208);
			v26 = *(_QWORD*)(v24 + 208);
			if (v26)
				*(_QWORD*)(v26 + 200) = *(_QWORD*)(v24 + 200);
			*(_QWORD*)(v24 + 200) = 0i64;
			*(_QWORD*)(v24 + 208) = 0i64;
			sub_14018B900(v24, 0);
		}
	}
	a1[623] = 0i64;
	v27 = *(_QWORD*)(v1 + 8);
	if (v27 <= 1)
	{
		*(_DWORD*)v1 = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 8), 0i64);
		v27 = *(_QWORD*)(v1 + 16);
		if (v27)
		{
			if (!*(_QWORD*)(v1 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v27) = SetEvent(*(HANDLE*)(v1 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 8);
	}
	return v27;
}

