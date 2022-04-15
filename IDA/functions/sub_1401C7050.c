//----- (00000001401C7050) ----------------------------------------------------
int __fastcall sub_1401C7050(__int64 a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	int v5; // edi
	unsigned __int64 v6; // rax
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v10; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v11)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+70h] [rbp+8h] BYREF

	v1 = qword_140C63758;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 8) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 16);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 16), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 8) = CurrentThreadId;
	}
LABEL_8:
	if (*(int*)(a1 + 40) >= 2)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v10 = 0i64;
		*((_QWORD*)&v10 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = TlsValue;
		v13 = 0x141D42180i64;
		v12 = v10;
		v5 = sub_140196F30(&dword_140C8A248, 35, &v13, &v11);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v10 + 1));
		if (v5)
			DebugBreak();
	}
	else
	{
		*(_DWORD*)(a1 + 40) = 0;
	}
	v6 = *(_QWORD*)(v1 + 16);
	if (v6 <= 1)
	{
		*(_DWORD*)(v1 + 8) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 16), 0i64);
		v6 = *(_QWORD*)(v1 + 24);
		if (v6)
		{
			if (!*(_QWORD*)(v1 + 32))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v6) = SetEvent(*(HANDLE*)(v1 + 32));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 16);
	}
	return v6;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A248: using guessed type _DWORD dword_140C8A248;

