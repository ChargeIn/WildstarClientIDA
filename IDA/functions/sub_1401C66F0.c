//----- (00000001401C66F0) ----------------------------------------------------
int __fastcall sub_1401C66F0(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 v2; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	int v7; // edi
	__int64 v8; // rsi
	unsigned __int64 v9; // rax
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-58h] BYREF
	__int128 v13; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v14)(); // [rsp+40h] [rbp-38h] BYREF
	__int128 v15; // [rsp+48h] [rbp-30h]
	__int64 v16; // [rsp+80h] [rbp+8h] BYREF

	v2 = qword_140C63758;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v2 + 8) == CurrentThreadId)
	{
		++* (_QWORD*)(v2 + 16);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 16), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v2 + 8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v2 + 8) = CurrentThreadId;
	}
LABEL_8:
	if (*(int*)(a1 + 40) < 2)
	{
		if (a2)
		{
			(*(void(__fastcall**)(__int64, void(__fastcall***)(_QWORD)))(*(_QWORD*)a1 + 72i64))(a1, a2);
			(**a2)(a2);
		}
		v8 = *(_QWORD*)(a1 + 96);
		*(_QWORD*)(a1 + 96) = a2;
		if (v8)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 80i64))(a1, v8);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		}
	}
	else
	{
		*(_QWORD*)&v13 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v14 = TlsValue;
		v16 = 0x141D421E8i64;
		v15 = v13;
		v7 = sub_140196F30(&dword_140C8A260, 35, &v16, &v14);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
		if (v7)
			DebugBreak();
	}
	v9 = *(_QWORD*)(v2 + 16);
	if (v9 <= 1)
	{
		*(_DWORD*)(v2 + 8) = 0;
		_InterlockedExchange64((volatile __int64*)(v2 + 16), 0i64);
		v9 = *(_QWORD*)(v2 + 24);
		if (v9)
		{
			if (!*(_QWORD*)(v2 + 32))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 32), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v9) = SetEvent(*(HANDLE*)(v2 + 32));
		}
	}
	else
	{
		--* (_QWORD*)(v2 + 16);
	}
	return v9;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A260: using guessed type _DWORD dword_140C8A260;

