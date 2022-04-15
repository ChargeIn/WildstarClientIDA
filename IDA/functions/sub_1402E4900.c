//----- (00000001402E4900) ----------------------------------------------------
void __fastcall sub_1402E4900(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v5; // rdx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	HANDLE EventW; // rcx
	_QWORD* v12; // rbx
	__int64 v13; // rsi
	__int64 v14; // rcx
	unsigned int v15; // ebx
	__int64 v16; // rcx
	__int64 v17; // rcx
	unsigned int v18; // ebx
	__int64 v19; // rcx
	__int64 v20; // rcx
	unsigned int v21; // ebx
	__int64 v22; // rcx
	__int64 v23; // rcx
	_QWORD* v24; // rcx
	__int64 v25; // rcx
	_QWORD* v26; // rcx
	__int64 v27; // rcx
	_QWORD* v28; // rcx
	__int64 v29; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)a1 = off_140B634F0;
	if (v1)
	{
		v3 = v1 + 5312;
		CurrentThreadId = GetCurrentThreadId();
		v5 = CurrentThreadId;
		if (*(_DWORD*)v3 == CurrentThreadId)
		{
			++* (_QWORD*)(v3 + 8);
		}
		else
		{
			v6 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v6 >= 0x400)
				{
					sub_14019FB60(v3, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v3 = CurrentThreadId;
		}
	LABEL_9:
		v7 = *(_QWORD**)(a1 + 512);
		if (v7)
			*v7 = *(_QWORD*)(a1 + 520);
		v8 = *(_QWORD*)(a1 + 520);
		if (v8)
			*(_QWORD*)(v8 + 512) = *(_QWORD*)(a1 + 512);
		v9 = *(_QWORD*)(a1 + 16);
		v10 = *(unsigned int*)(a1 + 48);
		*(_QWORD*)(a1 + 512) = 0i64;
		*(_QWORD*)(a1 + 520) = 0i64;
		*(_QWORD*)(v9 + 8 * v10 + 1208) = 0i64;
		if (*(_QWORD*)(v3 + 8) <= 1ui64)
		{
			*(_DWORD*)v3 = 0;
			_InterlockedExchange64((volatile __int64*)(v3 + 8), 0i64);
			if (*(_QWORD*)(v3 + 16))
			{
				if (!*(_QWORD*)(v3 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v3 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v3 + 8);
		}
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(*(_QWORD*)(a1 + 16), v5);
	}
	v12 = (_QWORD*)(a1 + 152);
	v13 = 38i64;
	do
	{
		if (*v12)
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
		++v12;
		--v13;
	} while (v13);
	v14 = *(_QWORD*)(a1 + 456);
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		*(_QWORD*)(a1 + 456) = 0i64;
	}
	v15 = 0;
	if (*(_QWORD*)(a1 + 464))
	{
		v16 = 0i64;
		do
		{
			v17 = *(_QWORD*)(*(_QWORD*)(a1 + 472) + 8 * v16);
			if (v17)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			v16 = ++v15;
		} while ((unsigned __int64)v15 < *(_QWORD*)(a1 + 464));
	}
	sub_14018B900(*(_QWORD*)(a1 + 472), 0);
	v18 = 0;
	if (*(_QWORD*)(a1 + 496))
	{
		v19 = 0i64;
		do
		{
			v20 = *(_QWORD*)(*(_QWORD*)(a1 + 504) + 8 * v19);
			if (v20)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
			v19 = ++v18;
		} while ((unsigned __int64)v18 < *(_QWORD*)(a1 + 496));
	}
	sub_14018B900(*(_QWORD*)(a1 + 504), 0);
	v21 = 0;
	if (*(_QWORD*)(a1 + 480))
	{
		v22 = 0i64;
		do
		{
			v23 = *(_QWORD*)(*(_QWORD*)(a1 + 488) + 8 * v22);
			if (v23)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
			v22 = ++v21;
		} while ((unsigned __int64)v21 < *(_QWORD*)(a1 + 480));
	}
	sub_14018B900(*(_QWORD*)(a1 + 488), 0);
	v24 = *(_QWORD**)(a1 + 512);
	if (v24)
		*v24 = *(_QWORD*)(a1 + 520);
	v25 = *(_QWORD*)(a1 + 520);
	if (v25)
		*(_QWORD*)(v25 + 512) = *(_QWORD*)(a1 + 512);
	*(_QWORD*)(a1 + 512) = 0i64;
	*(_QWORD*)(a1 + 520) = 0i64;
	v26 = *(_QWORD**)(a1 + 128);
	if (v26)
		*v26 = *(_QWORD*)(a1 + 136);
	v27 = *(_QWORD*)(a1 + 136);
	if (v27)
		*(_QWORD*)(v27 + 32) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	v28 = *(_QWORD**)(a1 + 112);
	if (v28)
		*v28 = *(_QWORD*)(a1 + 120);
	v29 = *(_QWORD*)(a1 + 120);
	if (v29)
		*(_QWORD*)(v29 + 16) = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
}
// 1402E4A24: variable 'v5' is possibly undefined
// 140B634F0: using guessed type __int64 (__fastcall *off_140B634F0[25])();

