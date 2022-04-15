//----- (00000001400B1C20) ----------------------------------------------------
int __fastcall sub_1400B1C20(_QWORD* a1, __int64(__fastcall*** a2)(_QWORD))
{
	__int64 v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	unsigned __int64 v7; // r8
	unsigned __int64 v8; // rdx
	__int64 v9; // r14
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // r9
	void(__fastcall * *v12)(__int64(__fastcall***)(_QWORD)); // rax
	unsigned __int64 v13; // rax
	__int64 v14; // r14
	unsigned __int64 v15; // rax
	HANDLE v16; // rcx
	__int64 v17; // rcx
	HANDLE EventW; // rcx
	__int64 v20[10]; // [rsp+20h] [rbp-98h] BYREF
	__int128 v21; // [rsp+70h] [rbp-48h]
	__int64 v22; // [rsp+84h] [rbp-34h]
	__int64 v23; // [rsp+C0h] [rbp+8h] BYREF
	unsigned __int64 v24; // [rsp+C8h] [rbp+10h]
	__int64 v25; // [rsp+D0h] [rbp+18h] BYREF

	v20[4] = (__int64)off_140B55828;
	v20[7] = 0i64;
	v20[9] = 0i64;
	v21 = 0i64;
	v22 = 0i64;
	v20[5] = (__int64)a2;
	v4 = (__int64)(a1 + 39);
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 8);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v4, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v4 = CurrentThreadId;
	}
LABEL_8:
	v7 = a1[38];
	v8 = 0i64;
	if (!v7)
	{
	LABEL_15:
		v12 = (void(__fastcall**)(__int64(__fastcall***)(_QWORD))) * a2;
		v24 = v8;
		(*v12)(a2);
		v25 = 0x141D0D920i64;
		sub_1401A3130(114, 0, &v25);
		v13 = *(_QWORD*)(v4 + 8);
		if (v13 <= 1)
		{
			*(_DWORD*)v4 = 0;
			_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
			v13 = *(_QWORD*)(v4 + 16);
			if (v13)
			{
				if (!*(_QWORD*)(v4 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				LODWORD(v13) = SetEvent(*(HANDLE*)(v4 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v4 + 8);
		}
		return v13;
	}
	v9 = a1[37];
	while (1)
	{
		v10 = v8 + ((v7 - v8) >> 1);
		v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8 * v10) + 8i64);
		if ((unsigned __int64)a2 < v11)
		{
			v7 = v8 + ((v7 - v8) >> 1);
			goto LABEL_14;
		}
		if ((unsigned __int64)a2 <= v11)
			break;
		v8 = v10 + 1;
	LABEL_14:
		if (v8 >= v7)
			goto LABEL_15;
	}
	v14 = *(_QWORD*)(v9 + 8 * v10);
	v15 = *(_QWORD*)(v4 + 8);
	v24 = v8 + ((v7 - v8) >> 1);
	if (v15 <= 1)
	{
		*(_DWORD*)v4 = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
		if (*(_QWORD*)(v4 + 16))
		{
			if (!*(_QWORD*)(v4 + 24))
			{
				v16 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)v16, 0i64))
					CloseHandle(v16);
			}
			SetEvent(*(HANDLE*)(v4 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 8);
	}
	if (!a1[35] && !a1[36] && !*(_DWORD*)(v14 + 72))
	{
		sub_1400B1ED0((__int64)(a1 - 1), a2);
		v23 = 0x141D0D8A0i64;
		sub_1401A3130(114, 0, &v23);
	}
	LODWORD(v13) = (*a2)[2](a2);
	if ((_DWORD)v13 == 42
		&& (LODWORD(v13) = sub_1400B1B90(v14), (_DWORD)v13)
		&& (LODWORD(v13) = sub_1400B19C0(a1 - 1, v14, 1), (v13 & 0x80000000) == 0i64))
	{
		LODWORD(v13) = (**a2)(a2);
	}
	else if (*(_DWORD*)(v14 + 72))
	{
		LODWORD(v13) = (*(__int64(__fastcall**)(_QWORD*, __int64(__fastcall***)(_QWORD), __int64))(*(a1 - 1) + 40i64))(
			a1 - 1,
			a2,
			v14);
	}
	else
	{
		v17 = a1[35];
		if (v17 || a1[36])
		{
			v20[0] = (__int64)a2;
			v20[2] = (__int64)(a1 - 1);
			v20[1] = v14;
			LODWORD(v13) = ((__int64(__fastcall*)(__int64, __int64*))a1[36])(v17, v20);
		}
	}
	return v13;
}
// 140B55828: using guessed type __int64 (__fastcall *off_140B55828[10])();

