//----- (00000001401CE8E0) ----------------------------------------------------
__int64 __fastcall sub_1401CE8E0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	int CurrentThreadId; // edx
	__int64 v11; // rcx
	_WORD* v12; // r14
	__int64 v13; // rbp
	__int64 v14; // r13
	__int64 v15; // rsi
	__int64 v16; // rdi
	int* v17; // rdi
	__int64 v18; // rax
	__int64 v19; // rax
	HANDLE EventW; // rcx
	WCHAR v21[264]; // [rsp+30h] [rbp-258h] BYREF

	sub_1401B5020(*(__int64*)&qword_140C63788, v21, a3, *(const WCHAR**)a3);
	v6 = *(_QWORD*)(a2 + 208);
	if (!v6)
		return 2147500037i64;
	while ((unsigned int)sub_14018E3E0(
		(__int64)v21,
		(unsigned __int16*)(v6 + 536),
		(*(_QWORD*)(v6 + 1064) - v6 - 536) >> 1))
	{
		v6 = *(_QWORD*)(v6 + 1176);
		if (!v6)
			return 2147500037i64;
	}
	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)a3;
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a3 + 8);
	*(_QWORD*)(a1 + 40) = *(_QWORD*)(a3 + 24);
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a3 + 16);
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a3 + 32);
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a3 + 40);
	v8 = sub_14018E9C0((int*)&v21[(*(_QWORD*)(v6 + 1056) - v6 - 536) >> 1]);
	v9 = *(_QWORD*)(a1 + 8) + 168i64;
	*(_QWORD*)(a1 + 16) = v8;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v9 == CurrentThreadId)
	{
		++* (_QWORD*)(v9 + 8);
	}
	else
	{
		v11 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v11 >= 0x400)
			{
				sub_14019FB60(v9, CurrentThreadId);
				goto LABEL_12;
			}
		}
		*(_DWORD*)v9 = CurrentThreadId;
	}
LABEL_12:
	v12 = *(_WORD**)(a1 + 16);
	v13 = *(_QWORD*)(a1 + 8) + 136i64;
	v14 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 144i64);
	v15 = v14;
	v16 = *(_QWORD*)(v14 + 8);
	while (v16)
	{
		v15 = v16;
		if ((int)sub_1401CE5B0(v12, *(unsigned __int16**)(v16 + 32)) >= 0)
			v16 = *(_QWORD*)(v16 + 24);
		else
			v16 = *(_QWORD*)(v16 + 16);
	}
	if (v15 == v14 || (int)sub_1401CE5B0(v12, *(unsigned __int16**)(v15 + 32)) < 0)
	{
		v17 = sub_14018B280(48i64, 0);
		if (v17 != (int*)-32i64)
		{
			*((_QWORD*)v17 + 4) = v12;
			*((_QWORD*)v17 + 5) = a1;
		}
		*(_QWORD*)(v15 + 16) = v17;
		v19 = *(_QWORD*)(v13 + 8);
		if (v15 == v19)
		{
			*(_QWORD*)(v19 + 8) = v17;
			*(_QWORD*)(*(_QWORD*)(v13 + 8) + 24i64) = v17;
		}
		else if (v15 == *(_QWORD*)(v19 + 16))
		{
			*(_QWORD*)(v19 + 16) = v17;
		}
	}
	else
	{
		v17 = sub_14018B280(48i64, 0);
		if (v17 != (int*)-32i64)
		{
			*((_QWORD*)v17 + 4) = v12;
			*((_QWORD*)v17 + 5) = a1;
		}
		*(_QWORD*)(v15 + 24) = v17;
		v18 = *(_QWORD*)(v13 + 8);
		if (v15 == *(_QWORD*)(v18 + 24))
			*(_QWORD*)(v18 + 24) = v17;
	}
	*((_QWORD*)v17 + 1) = v15;
	*((_QWORD*)v17 + 2) = 0i64;
	*((_QWORD*)v17 + 3) = 0i64;
	sub_1400081C0((__int64)v17, (_QWORD*)(*(_QWORD*)(v13 + 8) + 8i64));
	++* (_QWORD*)(v13 + 16);
	*(_QWORD*)(a1 + 64) = v17;
	if (*(_QWORD*)(v9 + 8) <= 1ui64)
	{
		*(_DWORD*)v9 = 0;
		_InterlockedExchange64((volatile __int64*)(v9 + 8), 0i64);
		if (*(_QWORD*)(v9 + 16))
		{
			if (!*(_QWORD*)(v9 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v9 + 24));
		}
		return 0i64;
	}
	else
	{
		--* (_QWORD*)(v9 + 8);
		return 0i64;
	}
}
// 1401CEAB2: conditional instruction was optimized away because rdi.8==0
// 1401CE8E0: using guessed type WCHAR var_258[264];

