//----- (000000014033C090) ----------------------------------------------------
__int64 __fastcall sub_14033C090(__int64 a1, __int64* a2)
{
	__int64 v2; // rdi
	int v5; // r8d
	int v6; // r8d
	int v7; // r8d
	int v8; // r8d
	SOCKET v9; // rcx
	__int64 v10; // rcx
	int Error; // eax
	__int64 v12; // r8
	const wchar_t* v13; // rcx
	int v14; // edx
	int v16; // eax
	unsigned int v17; // ebx
	__int64 v18; // r14
	int* v19; // rax
	_QWORD* v20; // rax
	int v21; // ebx
	int v22; // eax
	int v23; // r12d
	SOCKET v24; // rcx
	int v25; // eax
	int v26; // eax
	__int64 v27; // r13
	int v28; // ebx
	int v29; // eax
	int v30; // r12d
	unsigned int* v31; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v33; // rdx
	__int64 v34; // rcx
	void(__fastcall * *v35)(__int64, __int64); // rax
	__int64 v36; // rax
	HANDLE EventW; // rcx
	DWORD cbBytesReturned; // [rsp+50h] [rbp-88h] BYREF
	DWORD lpcbBytesReturned; // [rsp+54h] [rbp-84h] BYREF
	__int64(__fastcall * lpvOutBuffer)(_QWORD, int*, __int64); // [rsp+58h] [rbp-80h] BYREF
	__int64(__fastcall * vOutBuffer)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, DWORD*, __int64); // [rsp+60h] [rbp-78h] BYREF
	void(__fastcall * **v42)(_QWORD); // [rsp+68h] [rbp-70h] BYREF
	SOCKET v43; // [rsp+70h] [rbp-68h] BYREF
	char v44[16]; // [rsp+78h] [rbp-60h] BYREF
	int v45[4]; // [rsp+88h] [rbp-50h] BYREF

	v2 = *a2;
	v5 = *(_DWORD*)(*a2 + 280);
	if (!v5)
	{
		sub_14033B950((__int64)L"AddSocket", v2 + 144, L"attempted to add open socket");
		if (*a2)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
			return 2147500037i64;
		}
		return 2147500037i64;
	}
	v6 = v5 - 1;
	if (!v6)
	{
		sub_14033B950((__int64)L"AddSocket", v2 + 144, L"attempted to add closed socket");
		if (*a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
		return 2147500037i64;
	}
	v7 = v6 - 1;
	if (v7)
	{
		v8 = v7 - 1;
		if (v8)
		{
			if (v8 != 1)
			{
				sub_14033B950((__int64)L"AddSocket", v2 + 144, L"requested to add socket in unknown state");
			LABEL_10:
				if (*a2)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
				return 2147500037i64;
			}
			v9 = *(_QWORD*)(v2 + 272);
			vOutBuffer = 0i64;
			cbBytesReturned = 0;
			if (WSAIoctl(v9, 0xC8000006, &unk_140C387E0, 0x10u, &vOutBuffer, 8u, &cbBytesReturned, 0i64, 0i64) == -1)
			{
				Error = WSAGetLastError();
				v12 = v2 + 144;
				v13 = L"WSAIoctl[AcceptEx]";
				v14 = Error;
			LABEL_9:
				sub_14033B860((__int64)v13, v14, v12);
				goto LABEL_10;
			}
			v16 = sub_14033BB50(v10, &v43);
			v17 = v16;
			if (v16 < 0)
			{
				sub_14033B860((__int64)L"CreateSocket", v16, v2 + 144);
				if (*a2)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
					return v17;
				}
				return v17;
			}
			v18 = sub_14033AFE0((_QWORD*)v2, 1);
			v19 = sub_14018B280(536i64, 0);
			if (v19)
				v20 = sub_14033AE10(v19, v43);
			else
				v20 = 0i64;
			sub_14033ABE0(v18, (__int64)v20);
			v21 = vOutBuffer(
				*(_QWORD*)(v2 + 272),
				*(_QWORD*)(*(_QWORD*)(v18 + 192) + 272i64),
				*(_QWORD*)(v18 + 200),
				0i64,
				32,
				32,
				&cbBytesReturned,
				v18);
			v22 = WSAGetLastError();
			v23 = v22;
			if (!v21 && v22 != 997)
			{
				sub_14033B1D0(v2, v18);
				v12 = v2 + 16;
				v14 = v23;
				v13 = L"AcceptEx";
				goto LABEL_9;
			}
			sub_14033BA50((__int64)L"AcceptEx", 3, v2 + 16, L"InProgress");
		}
		else
		{
			v17 = sub_14033BF90(a1, (_QWORD*)v2);
			if ((v17 & 0x80000000) != 0)
			{
				if (*a2)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
				return v17;
			}
		}
	}
	else
	{
		v24 = *(_QWORD*)(v2 + 272);
		v45[0] = *(_DWORD*)(v2 + 144);
		v45[1] = *(_DWORD*)(v2 + 148);
		v45[2] = *(_DWORD*)(v2 + 152);
		v25 = *(_DWORD*)(v2 + 156);
		lpvOutBuffer = 0i64;
		v45[3] = v25;
		lpcbBytesReturned = 0;
		if (WSAIoctl(v24, 0xC8000006, &unk_140C387C0, 0x10u, &lpvOutBuffer, 8u, &lpcbBytesReturned, 0i64, 0i64) == -1)
		{
			v26 = WSAGetLastError();
			v12 = v2 + 144;
			v13 = L"WSAIoctl[ConnectEx]";
			v14 = v26;
			goto LABEL_9;
		}
		v27 = sub_14033AFE0((_QWORD*)v2, 0);
		v28 = lpvOutBuffer(*(_QWORD*)(v2 + 272), v45, 16i64);
		v29 = WSAGetLastError();
		v30 = v29;
		if (!v28 && v29 != 997)
		{
			sub_14033B1D0(v2, v27);
			v12 = v2 + 144;
			v14 = v30;
			v13 = L"ConnectEx";
			goto LABEL_9;
		}
		if (!*(_WORD*)(v2 + 222))
			sub_140334D90(v2 + 144);
		if (!*(_WORD*)(v2 + 94))
			sub_140334D90(v2 + 16);
		sub_14033BA50((__int64)L"ConnectEx", 3, 0i64, L"InProgress: %s <-> %s", v2 + 94, v2 + 222);
	}
	v31 = (unsigned int*)(a1 + 184);
	CurrentThreadId = GetCurrentThreadId();
	v33 = CurrentThreadId;
	if (*(_DWORD*)(a1 + 184) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 192);
	}
	else
	{
		v34 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 192), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v34 >= 0x400)
			{
				sub_14019FB60(a1 + 184, CurrentThreadId);
				goto LABEL_44;
			}
		}
		*v31 = CurrentThreadId;
	}
LABEL_44:
	v35 = *(void(__fastcall***)(__int64, __int64))v2;
	v42 = (void(__fastcall***)(_QWORD))v2;
	(*v35)(v2, v33);
	sub_14033E300(a1 + 96, (__int64)v44, &v42);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
	v36 = *(_QWORD*)(a1 + 112);
	if ((unsigned int)v36 > *(_DWORD*)(a1 + 340))
		*(_DWORD*)(a1 + 340) = v36;
	if (*(_QWORD*)(a1 + 192) <= 1ui64)
	{
		*v31 = 0;
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
	if (*a2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
	return 0i64;
}
// 14033C1E9: variable 'v10' is possibly undefined
// 14033C4BF: variable 'v33' is possibly undefined
// 140AF2E90: using guessed type wchar_t aAddsocket_1[10];
// 140AF2EA8: using guessed type wchar_t aAttemptedToAdd_0[29];
// 140AF2F88: using guessed type wchar_t aInprogress[11];
// 140AF30E0: using guessed type wchar_t aAcceptex[9];
// 140AF30F8: using guessed type wchar_t aAcceptex_0[9];
// 140AF3110: using guessed type wchar_t aRequestedToAdd[41];
// 140AF3168: using guessed type wchar_t aAddsocket[10];
// 140AF3348: using guessed type wchar_t aAddsocket_0[10];
// 140AF3360: using guessed type wchar_t aAttemptedToAdd[31];
// 140AF33A0: using guessed type wchar_t aConnectex[10];
// 140AF33B8: using guessed type wchar_t aWsaioctlConnec[20];
// 140AF33E0: using guessed type wchar_t aConnectex_0[10];
// 140AF33F8: using guessed type wchar_t aInprogressSS[22];
// 140AF3428: using guessed type wchar_t aCreatesocket[13];
// 140AF3448: using guessed type wchar_t aWsaioctlAccept[19];
// 14033C090: using guessed type char var_60[16];

