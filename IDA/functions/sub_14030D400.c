//----- (000000014030D400) ----------------------------------------------------
int __fastcall sub_14030D400(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	HANDLE EventW; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rcx
	_QWORD* v15; // rcx
	__int64 v16; // rcx
	_QWORD* v17; // rcx
	__int64 v18; // rcx
	int v20[6]; // [rsp+20h] [rbp-18h] BYREF

	*(_QWORD*)a1 = off_140B640B8;
	v2 = *(_QWORD*)(a1 + 72);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 72) = 0i64;
	}
	if (*(_DWORD*)(a1 + 32))
	{
		v3 = *(_QWORD*)(a1 + 16);
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v3 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v3 + 16);
		}
		else
		{
			v5 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v5 >= 0x400)
				{
					sub_14019FB60(v3 + 8, CurrentThreadId);
					goto LABEL_11;
				}
			}
			*(_DWORD*)(v3 + 8) = CurrentThreadId;
		}
	LABEL_11:
		sub_1400B6120(*(_QWORD*)(a1 + 16) + 56i64, a1 + 24);
		if (*(_QWORD*)(v3 + 16) <= 1ui64)
		{
			*(_DWORD*)(v3 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v3 + 16), 0i64);
			if (*(_QWORD*)(v3 + 24))
			{
				if (!*(_QWORD*)(v3 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v3 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v3 + 16);
		}
	}
	v7 = *(_QWORD*)(a1 + 40);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 104i64))(v7);
		v8 = *(_QWORD*)(a1 + 40);
		v20[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v8 + 32i64))(v8, v20);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 8i64))(*(_QWORD*)(a1 + 40));
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 24), 0);
	sub_14018B900(*(_QWORD*)(a1 + 144), 0);
	sub_14018B900(*(_QWORD*)(a1 + 152), 0);
	v9 = *(_QWORD*)(a1 + 160);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 160) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 176), 0);
	sub_14018B900(*(_QWORD*)(a1 + 192), 0);
	sub_14018B900(*(_QWORD*)(a1 + 208), 0);
	v10 = *(_QWORD*)(a1 + 48);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	sub_140019490((_QWORD*)(a1 + 480));
	sub_14018B900(*(_QWORD*)(a1 + 496), 0);
	*(_QWORD*)(a1 + 496) = 0i64;
	if (*(_QWORD*)(a1 + 472))
		sub_1401A4A00((const void***)(a1 + 472));
	v11 = *(_QWORD*)(a1 + 464);
	if (v11)
		LODWORD(v11) = CloseHandle(*(HANDLE*)(a1 + 464));
	v12 = *(_QWORD*)(a1 + 184);
	if (v12)
		LODWORD(v11) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	v13 = *(_QWORD**)(a1 + 128);
	if (v13)
	{
		v11 = *(_QWORD*)(a1 + 136);
		*v13 = v11;
	}
	v14 = *(_QWORD*)(a1 + 136);
	if (v14)
	{
		v11 = *(_QWORD*)(a1 + 128);
		*(_QWORD*)(v14 + 128) = v11;
	}
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	v15 = *(_QWORD**)(a1 + 112);
	if (v15)
	{
		v11 = *(_QWORD*)(a1 + 120);
		*v15 = v11;
	}
	v16 = *(_QWORD*)(a1 + 120);
	if (v16)
	{
		v11 = *(_QWORD*)(a1 + 112);
		*(_QWORD*)(v16 + 32) = v11;
	}
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v17 = *(_QWORD**)(a1 + 96);
	if (v17)
	{
		v11 = *(_QWORD*)(a1 + 104);
		*v17 = v11;
	}
	v18 = *(_QWORD*)(a1 + 104);
	if (v18)
	{
		v11 = *(_QWORD*)(a1 + 96);
		*(_QWORD*)(v18 + 16) = v11;
	}
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	return v11;
}
// 140B640B8: using guessed type __int64 (__fastcall *off_140B640B8[2])();
// 14030D400: using guessed type int var_18[6];

