//----- (00000001401C68D0) ----------------------------------------------------
void __fastcall sub_1401C68D0(__int64 a1, __int64 a2)
{
	int v4; // ebx
	__int64 v5; // rbx
	int CurrentThreadId; // edx
	__int64 v7; // rcx
	HANDLE EventW; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v10; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v11)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+78h] [rbp+10h] BYREF

	if (a2)
	{
		v5 = qword_140C63758;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v5 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v5 + 16);
		}
		else
		{
			v7 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v7 >= 0x400)
				{
					sub_14019FB60(v5 + 8, CurrentThreadId);
					goto LABEL_11;
				}
			}
			*(_DWORD*)(v5 + 8) = CurrentThreadId;
		}
	LABEL_11:
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, a2);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 88i64))(a2);
		if (*(_QWORD*)(v5 + 16) <= 1ui64)
		{
			*(_DWORD*)(v5 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v5 + 16), 0i64);
			if (*(_QWORD*)(v5 + 24))
			{
				if (!*(_QWORD*)(v5 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v5 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v5 + 16);
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v10 = 0i64;
		*((_QWORD*)&v10 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = TlsValue;
		v13 = 0x141D421D8i64;
		v12 = v10;
		v4 = sub_140196F30(&dword_140C8A254, 35, &v13, &v11);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v10 + 1));
		if (v4)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A254: using guessed type _DWORD dword_140C8A254;

