//----- (0000000140289510) ----------------------------------------------------
__int64 __fastcall sub_140289510(_QWORD* a1, _QWORD* a2)
{
	__int64 v2; // rbx
	int CurrentThreadId; // eax
	int v5; // ecx
	volatile signed __int64* v6; // rbx
	__int64 v7; // rcx
	int v8; // edi
	_QWORD* v9; // rcx
	__int64 v10; // rax
	HANDLE EventW; // rcx
	__int64 v13; // [rsp+30h] [rbp+8h]

	v2 = a1[2];
	a1[3] = *a2;
	a1[4] = a2[1];
	v13 = v2 + 24;
	a1[5] = a2[2];
	a1[6] = a2[3];
	a1[7] = a2[4];
	CurrentThreadId = GetCurrentThreadId();
	v5 = *(_DWORD*)(v2 + 24);
	v6 = (volatile signed __int64*)(v2 + 32);
	if (v5 == CurrentThreadId)
	{
		++* v6;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(v6, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(v13, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v13 = CurrentThreadId;
	}
LABEL_8:
	v8 = sub_140289670((__int64)a1, 2);
	if (v8 >= 0)
	{
		v9 = (_QWORD*)(a1[2] + 7176i64);
		if (!a1[14])
		{
			a1[14] = v9;
			a1[15] = *v9;
			*v9 = a1;
			v10 = a1[15];
			if (v10)
				*(_QWORD*)(v10 + 112) = a1 + 15;
		}
		v8 = 0;
	}
	if (*v6 <= 1ui64)
	{
		*(_DWORD*)v13 = 0;
		_InterlockedExchange64(v6, 0i64);
		if (*(_QWORD*)(v13 + 16))
		{
			if (!*(_QWORD*)(v13 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v13 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v13 + 24));
		}
	}
	else
	{
		--* v6;
	}
	return (unsigned int)v8;
}

