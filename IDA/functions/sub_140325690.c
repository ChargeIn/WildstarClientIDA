//----- (0000000140325690) ----------------------------------------------------
void __fastcall sub_140325690(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int* v3; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rbp
	__int64 v9; // rbp
	unsigned __int64 v10; // r14
	__int64 v11; // rsi
	__int64 v12; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rcx
	HANDLE EventW; // rcx
	__int64 v16; // rcx
	_QWORD* v17; // rcx
	__int64 v18; // rcx
	int v19; // [rsp+20h] [rbp-28h] BYREF
	__int64 v20; // [rsp+28h] [rbp-20h]

	v1 = *(_QWORD*)(a1 + 8);
	*(_QWORD*)a1 = off_140B64458;
	v3 = (unsigned int*)(v1 + 440);
	CurrentThreadId = GetCurrentThreadId();
	v5 = *v3;
	v6 = CurrentThreadId;
	if ((_DWORD)v5 == CurrentThreadId)
	{
		++* ((_QWORD*)v3 + 1);
	}
	else
	{
		v7 = 0i64;
		v5 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)v3 + 1, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)v3, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v3 = CurrentThreadId;
	}
LABEL_8:
	if (*(_QWORD*)(a1 + 96))
	{
		v8 = *(_QWORD*)(a1 + 8);
		v19 = *(_DWORD*)(a1 + 20);
		v9 = v8 + 480;
		v20 = *(_QWORD*)(a1 + 24);
		v10 = (*(__int64(__fastcall**)(int*, __int64, __int64))(v9 + 24))(&v19, v5, v6);
		v11 = *(_QWORD*)(v9 + 16) + 8 * (v10 % *(_QWORD*)(v9 + 8));
		if (*(_QWORD*)v11)
		{
			while (v10 != **(_QWORD**)v11
				|| !(*(unsigned int(__fastcall**)(int*, __int64))(v9 + 32))(&v19, *(_QWORD*)v11 + 16i64))
			{
				v11 = *(_QWORD*)v11 + 8i64;
				if (!*(_QWORD*)v11)
					goto LABEL_15;
			}
			v12 = *(_QWORD*)v11;
			*(_QWORD*)v11 = *(_QWORD*)(*(_QWORD*)v11 + 8i64);
			sub_14018B900(v12, 0);
			--* (_QWORD*)v9;
		}
	LABEL_15:
		v13 = *(_QWORD**)(a1 + 96);
		if (v13)
			*v13 = *(_QWORD*)(a1 + 104);
		v14 = *(_QWORD*)(a1 + 104);
		if (v14)
			*(_QWORD*)(v14 + 96) = *(_QWORD*)(a1 + 96);
		*(_QWORD*)(a1 + 96) = 0i64;
		*(_QWORD*)(a1 + 104) = 0i64;
	}
	if (*((_QWORD*)v3 + 1) <= 1ui64)
	{
		*v3 = 0;
		_InterlockedExchange64((volatile __int64*)v3 + 1, 0i64);
		if (*((_QWORD*)v3 + 2))
		{
			if (!*((_QWORD*)v3 + 3))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)v3 + 3, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*((HANDLE*)v3 + 3));
		}
	}
	else
	{
		--* ((_QWORD*)v3 + 1);
	}
	sub_14018B900(*(_QWORD*)(a1 + 24), 0);
	sub_14018B900(*(_QWORD*)(a1 + 32), 0);
	v16 = *(_QWORD*)(a1 + 56);
	if (v16)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 64), 0);
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	sub_14018B900(*(_QWORD*)(a1 + 80), 0);
	sub_140326D80((_QWORD*)(a1 + 112));
	sub_14018B900(*(_QWORD*)(a1 + 128), 0);
	*(_QWORD*)(a1 + 128) = 0i64;
	v17 = *(_QWORD**)(a1 + 96);
	if (v17)
		*v17 = *(_QWORD*)(a1 + 104);
	v18 = *(_QWORD*)(a1 + 104);
	if (v18)
		*(_QWORD*)(v18 + 96) = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
}
// 140325736: variable 'v5' is possibly undefined
// 140325736: variable 'v6' is possibly undefined
// 140B64458: using guessed type __int64 (__fastcall *off_140B64458[2])();

