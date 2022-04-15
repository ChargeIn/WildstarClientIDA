//----- (00000001401C6420) ----------------------------------------------------
__int64 __fastcall sub_1401C6420(__int64 a1, unsigned int* a2)
{
	_DWORD* Value; // rbx
	unsigned int v6; // edx
	__int64 v7; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64* v11; // rdi
	__int64 v12; // rdi
	HANDLE EventW; // rcx
	int v14; // ebx
	int v15; // eax
	int v16; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-68h] BYREF
	__int128 v18; // [rsp+28h] [rbp-60h]
	__int64(__fastcall * *v19)(); // [rsp+40h] [rbp-48h] BYREF
	__int128 v20; // [rsp+48h] [rbp-40h]
	__int64 v21; // [rsp+90h] [rbp+8h] BYREF
	__int64 v22; // [rsp+A0h] [rbp+18h] BYREF

	if (*(_DWORD*)(a1 + 40) == 4 || *(_DWORD*)(a1 + 56) && *(_DWORD*)(a1 + 56) == GetCurrentThreadId())
		return 1i64;
	if (!*a2 || !(unsigned int)sub_14001C520(a2))
		return 0i64;
	Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4));
	if (Value)
	{
		sub_14003D8F0(&v21, qword_140C63758 + 8);
		v6 = 2;
		if (*Value)
			v6 = 1;
		sub_1401C6050(a1, v6);
		sub_14003D880(&v21);
	}
	if (*(int*)(a1 + 40) >= 2)
		return (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)a1 + 160i64))(a1, a2);
	while (1)
	{
		v7 = qword_140C63758;
		CurrentThreadId = GetCurrentThreadId();
		v9 = CurrentThreadId;
		if (*(_DWORD*)(v7 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v7 + 16);
		}
		else
		{
			v10 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v10 >= 0x400)
				{
					sub_14019FB60(v7 + 8, CurrentThreadId);
					goto LABEL_19;
				}
			}
			*(_DWORD*)(v7 + 8) = CurrentThreadId;
		}
	LABEL_19:
		v11 = *(__int64**)(a1 + 80);
		if (v11)
		{
			v12 = *v11;
			(**(void(__fastcall***)(__int64, __int64))v12)(v12, v9);
		}
		else
		{
			v12 = 0i64;
		}
		if (*(_QWORD*)(v7 + 16) <= 1ui64)
		{
			*(_DWORD*)(v7 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v7 + 16), 0i64);
			if (*(_QWORD*)(v7 + 24))
			{
				if (!*(_QWORD*)(v7 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v7 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v7 + 16);
		}
		if (!v12)
			break;
		v14 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v12 + 32i64))(v12, a2);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		if (!v14)
			return 0i64;
	}
	v15 = *(_DWORD*)(a1 + 40);
	if (v15 < 2)
	{
		*(_QWORD*)&v18 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v19 = TlsValue;
		v22 = 0x141D421B8i64;
		v20 = v18;
		v16 = sub_140196F30(&dword_140C8A25C, 35, &v22, &v19);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v16)
			DebugBreak();
		return 0i64;
	}
	if (v15 == 4)
		return 1i64;
	else
		return (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)a1 + 160i64))(a1, a2);
}
// 1401C653A: variable 'v9' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A25C: using guessed type _DWORD dword_140C8A25C;

