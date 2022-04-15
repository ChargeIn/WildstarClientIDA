//----- (000000014029D680) ----------------------------------------------------
__int64 __fastcall sub_14029D680(_QWORD* a1)
{
	unsigned int CurrentThreadId; // eax
	__int64 v3; // rdx
	__int64 v4; // r8
	volatile signed __int64* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	int v8; // esi
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	HANDLE EventW; // rcx
	volatile signed __int64* v16; // [rsp+80h] [rbp+8h]
	__int64 v17; // [rsp+88h] [rbp+10h] BYREF
	__int64 v18; // [rsp+90h] [rbp+18h] BYREF
	__int64 v19; // [rsp+98h] [rbp+20h] BYREF

	v16 = (volatile signed __int64*)(a1[2] + 24i64);
	CurrentThreadId = GetCurrentThreadId();
	v3 = *(unsigned int*)v16;
	v4 = CurrentThreadId;
	v5 = v16 + 1;
	if ((_DWORD)v3 == CurrentThreadId)
	{
		++* v5;
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64(v5, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60((__int64)v16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v16 = CurrentThreadId;
	}
LABEL_8:
	if (!a1[11])
		goto LABEL_27;
	v7 = a1[2];
	if (!*(_QWORD*)(v7 + 8584) || (v8 = sub_140278900(v7), v8 >= 0))
	{
		v9 = a1[13];
		if (v9)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 16i64))(v9, v3, v4);
			a1[13] = 0i64;
		}
		v10 = a1[14];
		if (v10)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 16i64))(v10, v3, v4);
			a1[14] = 0i64;
		}
		v11 = a1[16];
		if (v11)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v11 + 16i64))(v11, v3, v4);
			a1[16] = 0i64;
		}
		v12 = a1[17];
		if (v12)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 16i64))(v12, v3, v4);
			a1[17] = 0i64;
		}
		v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)a1[11] + 104i64))(a1[11], 0i64);
		if (v8 < 0)
		{
			v17 = 0x141DE4F38i64;
			sub_1401A3130(14, 2, &v17, (unsigned int)v8);
			goto LABEL_28;
		}
		v8 = sub_14029DEC0((__int64)a1);
		if (v8 < 0)
		{
			v18 = 0x141DE4B78i64;
			sub_1401A3130(14, 2, &v18, (unsigned int)v8);
			goto LABEL_28;
		}
		v13 = a1[2];
		if (*(_QWORD*)(v13 + 8584))
		{
			v8 = sub_1402786A0(v13);
			if (v8 < 0)
				goto LABEL_28;
		}
		else
		{
			v19 = 0x141DE4A18i64;
			sub_1401A3130(14, 2, &v19);
		}
	LABEL_27:
		v8 = 0;
	}
LABEL_28:
	if (*v5 <= 1ui64)
	{
		*(_DWORD*)v16 = 0;
		_InterlockedExchange64(v5, 0i64);
		if (*((_QWORD*)v16 + 2))
		{
			if (!*((_QWORD*)v16 + 3))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64(v16 + 3, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*((HANDLE*)v16 + 3));
		}
		return (unsigned int)v8;
	}
	else
	{
		--* v5;
		return (unsigned int)v8;
	}
}
// 14029D73B: variable 'v3' is possibly undefined
// 14029D73B: variable 'v4' is possibly undefined

