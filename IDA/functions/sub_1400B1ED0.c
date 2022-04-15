//----- (00000001400B1ED0) ----------------------------------------------------
__int64 __fastcall sub_1400B1ED0(__int64 a1, __int64(__fastcall*** a2)(_QWORD))
{
	__int64 result; // rax
	__int64 v5; // rbx
	__int64(__fastcall * **v6)(_QWORD, __int64); // r15
	int CurrentThreadId; // edx
	__int64 v8; // rcx
	unsigned __int64 v9; // r8
	unsigned __int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rax
	unsigned __int64 v13; // r9
	HANDLE EventW; // rcx
	__int64 v15; // [rsp+A8h] [rbp+10h] BYREF
	unsigned __int64 v16; // [rsp+B0h] [rbp+18h]
	__int64 v17; // [rsp+B8h] [rbp+20h] BYREF

	if (!a2)
	{
		v15 = 0x141D0DC90i64;
		return sub_1401A3130(114, 1, &v15);
	}
	v5 = a1 + 320;
	v6 = 0i64;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v5 == CurrentThreadId)
	{
		++* (_QWORD*)(v5 + 8);
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v5, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v5 = CurrentThreadId;
	}
LABEL_10:
	v9 = *(_QWORD*)(a1 + 312);
	v10 = 0i64;
	if (!v9)
	{
	LABEL_16:
		v16 = v10;
		v17 = 0x141D0DC00i64;
		sub_1401A3130(114, 1, &v17);
		goto LABEL_17;
	}
	while (1)
	{
		v11 = v10 + ((v9 - v10) >> 1);
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 304) + 8 * v11);
		v13 = *(_QWORD*)(v12 + 8);
		if ((unsigned __int64)a2 < v13)
		{
			v9 = v10 + ((v9 - v10) >> 1);
			goto LABEL_15;
		}
		if ((unsigned __int64)a2 <= v13)
			break;
		v10 = v11 + 1;
	LABEL_15:
		if (v10 >= v9)
			goto LABEL_16;
	}
	v16 = v10 + ((v9 - v10) >> 1);
	v6 = (__int64(__fastcall***)(_QWORD, __int64))v12;
	sub_140007270(a1 + 304, v11);
LABEL_17:
	if (*(_QWORD*)(v5 + 8) <= 1ui64)
	{
		*(_DWORD*)v5 = 0;
		_InterlockedExchange64((volatile __int64*)(v5 + 8), 0i64);
		if (*(_QWORD*)(v5 + 16))
		{
			if (!*(_QWORD*)(v5 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v5 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v5 + 8);
	}
	result = (**a2)(a2);
	if (v6)
		return (**v6)(v6, 1i64);
	return result;
}

