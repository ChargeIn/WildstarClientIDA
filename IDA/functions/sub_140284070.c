//----- (0000000140284070) ----------------------------------------------------
__int64 __fastcall sub_140284070(__int64 a1, int* a2, int a3, float a4, int a5, __int64* a6)
{
	_DWORD* v11; // rbx
	unsigned int CurrentThreadId; // eax
	volatile signed __int64* v13; // rdi
	__int64 v14; // rdx
	__int64 v15; // rcx
	unsigned __int64 v16; // r14
	_QWORD* v17; // rbx
	int* v18; // rax
	__int64 v19; // rbx
	void(__fastcall * **v20)(_QWORD); // rcx
	int v21; // esi
	HANDLE EventW; // rcx
	int* v23; // [rsp+30h] [rbp-58h] BYREF
	int v24; // [rsp+38h] [rbp-50h]
	float v25; // [rsp+3Ch] [rbp-4Ch]
	int v26; // [rsp+40h] [rbp-48h]
	__int64 v28; // [rsp+B8h] [rbp+30h]

	if (!a6)
		return 2147942487i64;
	v11 = (_DWORD*)(a1 + 24);
	v28 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v13 = (volatile signed __int64*)(v28 + 8);
	v14 = CurrentThreadId;
	if (*v11 == CurrentThreadId)
	{
		++* v13;
	}
	else
	{
		v15 = 0i64;
		while (_InterlockedCompareExchange64(v13, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v15 >= 0x400)
			{
				sub_14019FB60(v28, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v28 = CurrentThreadId;
	}
LABEL_10:
	v25 = a4;
	v23 = a2;
	v24 = a3;
	v26 = a5;
	v16 = (*(__int64(__fastcall**)(int**, __int64))(a1 + 88))(&v23, v14);
	v17 = *(_QWORD**)(*(_QWORD*)(a1 + 80) + 8 * (v16 % *(_QWORD*)(a1 + 72)));
	if (!v17)
		goto LABEL_14;
	while (v16 != *v17 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(a1 + 96))(&v23, v17 + 2))
	{
		v17 = (_QWORD*)v17[1];
		if (!v17)
			goto LABEL_14;
	}
	if (v17 == (_QWORD*)-40i64)
	{
	LABEL_14:
		v18 = sub_14018B280(2488i64, 0);
		if (v18)
			v19 = sub_1402B8470((__int64)v18, a1);
		else
			v19 = 0i64;
		v21 = sub_1402B8820(v19, a2, a3, a4, a5);
		if (v21 < 0)
		{
			if (v19)
			{
				sub_1402B8530(v19);
				sub_14018B900(v19, 0);
			}
			goto LABEL_24;
		}
		*a6 = v19;
	}
	else
	{
		v20 = (void(__fastcall***)(_QWORD))v17[5];
		*a6 = (__int64)v20;
		(**v20)(v20);
	}
	v21 = 0;
LABEL_24:
	if (*v13 <= 1ui64)
	{
		*(_DWORD*)v28 = 0;
		_InterlockedExchange64(v13, 0i64);
		if (*(_QWORD*)(v28 + 16))
		{
			if (!*(_QWORD*)(v28 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v28 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v28 + 24));
		}
	}
	else
	{
		--* v13;
	}
	return (unsigned int)v21;
}
// 140284159: variable 'v14' is possibly undefined

