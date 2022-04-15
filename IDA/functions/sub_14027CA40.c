//----- (000000014027CA40) ----------------------------------------------------
__int64 __fastcall sub_14027CA40(__int64 a1, __int64 a2)
{
	unsigned int CurrentThreadId; // eax
	unsigned __int16* v5; // rdx
	__int64 v6; // rcx
	_QWORD* i; // rdi
	_QWORD* j; // rdi
	_QWORD* k; // rdi
	_QWORD* m; // rdi
	_QWORD* n; // rdi
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v5 = (unsigned __int16*)CurrentThreadId;
	if (*(_DWORD*)(a1 + 24) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 32);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(a1 + 24, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 24) = CurrentThreadId;
	}
LABEL_8:
	for (i = *(_QWORD**)(a1 + 6856); i; i = (_QWORD*)i[37])
	{
		v5 = *(unsigned __int16**)((*(__int64(__fastcall**)(_QWORD*, unsigned __int16*))(*i + 24i64))(i, v5) + 48);
		if (v5 && !(unsigned int)sub_14018E2C0(a2, v5))
			sub_1402A10F0((__int64)i);
	}
	for (j = *(_QWORD**)(a1 + 6864); j; j = (_QWORD*)j[36])
	{
		v5 = *(unsigned __int16**)((*(__int64(__fastcall**)(_QWORD*, unsigned __int16*))(*j + 24i64))(j, v5) + 48);
		if (v5 && !(unsigned int)sub_14018E2C0(a2, v5))
			sub_1402A43A0((__int64)j);
	}
	for (k = *(_QWORD**)(a1 + 6872); k; k = (_QWORD*)k[72])
	{
		v5 = *(unsigned __int16**)((*(__int64(__fastcall**)(_QWORD*, unsigned __int16*))(*k + 24i64))(k, v5) + 48);
		if (v5 && !(unsigned int)sub_14018E2C0(a2, v5))
			sub_1402A70C0((__int64)k);
	}
	for (m = *(_QWORD**)(a1 + 6880); m; m = (_QWORD*)m[20])
	{
		v5 = *(unsigned __int16**)((*(__int64(__fastcall**)(_QWORD*, unsigned __int16*))(*m + 24i64))(m, v5) + 8);
		if (v5 && !(unsigned int)sub_14018E2C0(a2, v5))
			sub_1402A9970((__int64)m);
	}
	for (n = *(_QWORD**)(a1 + 6888); n; n = (_QWORD*)n[19])
	{
		v5 = *(unsigned __int16**)((*(__int64(__fastcall**)(_QWORD*, unsigned __int16*))(*n + 24i64))(n, v5) + 8);
		if (v5 && !(unsigned int)sub_14018E2C0(a2, v5))
			sub_1402AA730((__int64)n);
	}
	if (*(_QWORD*)(a1 + 32) <= 1ui64)
	{
		*(_DWORD*)(a1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 32), 0i64);
		if (*(_QWORD*)(a1 + 40))
		{
			if (!*(_QWORD*)(a1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 32);
	}
	return 0i64;
}
// 14027CABB: variable 'v5' is possibly undefined

