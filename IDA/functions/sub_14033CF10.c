//----- (000000014033CF10) ----------------------------------------------------
__int64 __fastcall sub_14033CF10(__int64 a1, _QWORD* a2)
{
	unsigned int* v4; // rbx
	unsigned int v5; // edi
	unsigned int CurrentThreadId; // eax
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // r9
	__int64 v10; // rcx
	__int64* v11; // rcx
	__int64* v12; // rcx
	__int64* v13; // rax
	__int64 v14; // rax
	HANDLE EventW; // rcx
	__int64 v17; // [rsp+40h] [rbp+8h]

	v4 = (unsigned int*)(a1 + 184);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65808 + 64i64))(qword_140C65808);
	CurrentThreadId = GetCurrentThreadId();
	v8 = *v4;
	v9 = CurrentThreadId;
	if ((_DWORD)v8 == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 192);
	}
	else
	{
		v10 = 0i64;
		v7 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 192), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(a1 + 184, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v4 = CurrentThreadId;
	}
LABEL_8:
	v17 = v5 | 0x200000000i64;
	v11 = *(__int64**)(a1 + 272);
	if (v11 == (__int64*)(*(_QWORD*)(a1 + 288) - 8i64))
	{
		if ((unsigned __int64)(*(_QWORD*)(a1 + 232) - ((__int64)(*(_QWORD*)(a1 + 296) - *(_QWORD*)(a1 + 224)) >> 3)) < 2)
			sub_140173030(a1 + 216, v7);
		*(_QWORD*)(*(_QWORD*)(a1 + 296) + 8i64) = sub_14018B280(496i64, 0);
		v12 = *(__int64**)(a1 + 272);
		if (v12)
			*v12 = v17;
		v13 = (__int64*)(*(_QWORD*)(a1 + 296) + 8i64);
		*(_QWORD*)(a1 + 296) = v13;
		v14 = *v13;
		*(_QWORD*)(a1 + 280) = v14;
		*(_QWORD*)(a1 + 288) = v14 + 496;
		*(_QWORD*)(a1 + 272) = *(_QWORD*)(a1 + 280);
	}
	else
	{
		if (v11)
			*v11 = v17;
		*(_QWORD*)(a1 + 272) += 8i64;
	}
	if (*(_QWORD*)(a1 + 192) <= 1ui64)
	{
		*v4 = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 192), 0i64);
		if (*(_QWORD*)(a1 + 200))
		{
			if (!*(_QWORD*)(a1 + 208))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 208), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a1 + 208));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 192);
	}
	(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 304) + 16i64))(
		*(_QWORD*)(a1 + 304),
		v7,
		v8,
		v9);
	if (*a2)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
	return 0i64;
}
// 14033CFDC: variable 'v7' is possibly undefined
// 14033D08A: variable 'v8' is possibly undefined
// 14033D08A: variable 'v9' is possibly undefined
// 140C65808: using guessed type __int64 qword_140C65808;

