//----- (000000014033CB80) ----------------------------------------------------
__int64 __fastcall sub_14033CB80(__int64 a1, _QWORD* a2, int a3)
{
	int* v6; // rbx
	int v7; // r14d
	__int64 v8; // rdx
	int CurrentThreadId; // r10d
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	_QWORD* v12; // rcx
	__int64* v13; // rax
	__int64 v14; // rax
	HANDLE EventW; // rcx
	__int64 v17; // [rsp+40h] [rbp+8h]

	v6 = (int*)(a1 + 184);
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65808 + 64i64))(qword_140C65808);
	CurrentThreadId = GetCurrentThreadId();
	if (*v6 == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 192);
	}
	else
	{
		v10 = 0i64;
		v8 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 192), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(a1 + 184, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v6 = CurrentThreadId;
	}
LABEL_8:
	v11 = *(_QWORD**)(a1 + 272);
	LODWORD(v17) = v7;
	HIDWORD(v17) = a3 != 0;
	if (v11 == (_QWORD*)(*(_QWORD*)(a1 + 288) - 8i64))
	{
		if ((unsigned __int64)(*(_QWORD*)(a1 + 232) - ((__int64)(*(_QWORD*)(a1 + 296) - *(_QWORD*)(a1 + 224)) >> 3)) < 2)
			sub_140173030(a1 + 216, v8);
		*(_QWORD*)(*(_QWORD*)(a1 + 296) + 8i64) = sub_14018B280(496i64, 0);
		v12 = *(_QWORD**)(a1 + 272);
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
		*v6 = 0;
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
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 304) + 16i64))(*(_QWORD*)(a1 + 304));
	if (*a2)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
	return 0i64;
}
// 14033CC60: variable 'v8' is possibly undefined
// 140C65808: using guessed type __int64 qword_140C65808;

