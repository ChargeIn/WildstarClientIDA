//----- (000000014029D130) ----------------------------------------------------
__int64 __fastcall sub_14029D130(_QWORD* a1, __int64* a2)
{
	__int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // r10
	int v5; // eax
	__int64 v7; // rbx
	int v8; // eax
	int v9; // eax
	int CurrentThreadId; // eax
	int v11; // ecx
	volatile signed __int64* v12; // rbx
	__int64 v13; // rcx
	int v14; // edi
	_QWORD* v15; // rcx
	__int64 v16; // rax
	HANDLE EventW; // rcx
	__int64 v19; // [rsp+20h] [rbp-38h]
	__int64 v20; // [rsp+28h] [rbp-30h]
	__int64 v21; // [rsp+60h] [rbp+8h]

	v2 = a2[2];
	v3 = a2[3];
	v4 = a2[4];
	v19 = *a2;
	v20 = a2[1];
	v5 = *a2;
	v7 = a1[2];
	if (!v5)
		v5 = 1;
	LODWORD(v19) = v5;
	v8 = HIDWORD(*a2);
	if (!HIDWORD(v19))
		v8 = 1;
	HIDWORD(v19) = v8;
	v9 = a2[1];
	if ((unsigned int)v20 <= 1)
		v9 = 25;
	LODWORD(v20) = v9;
	v21 = v7 + 24;
	a1[3] = v19;
	a1[4] = v20;
	a1[5] = v2;
	a1[6] = v3;
	a1[7] = v4;
	CurrentThreadId = GetCurrentThreadId();
	v11 = *(_DWORD*)(v7 + 24);
	v12 = (volatile signed __int64*)(v7 + 32);
	if (v11 == CurrentThreadId)
	{
		++* v12;
	}
	else
	{
		v13 = 0i64;
		while (_InterlockedCompareExchange64(v12, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v13 >= 0x400)
			{
				sub_14019FB60(v21, CurrentThreadId);
				goto LABEL_14;
			}
		}
		*(_DWORD*)v21 = CurrentThreadId;
	}
LABEL_14:
	v14 = sub_14029D910((__int64)a1, 2);
	if (v14 >= 0)
	{
		v15 = (_QWORD*)(a1[2] + 6832i64);
		if (!a1[20])
		{
			a1[20] = v15;
			a1[21] = *v15;
			*v15 = a1;
			v16 = a1[21];
			if (v16)
				*(_QWORD*)(v16 + 160) = a1 + 21;
		}
		v14 = 0;
	}
	if (*v12 <= 1ui64)
	{
		*(_DWORD*)v21 = 0;
		_InterlockedExchange64(v12, 0i64);
		if (*(_QWORD*)(v21 + 16))
		{
			if (!*(_QWORD*)(v21 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v21 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v21 + 24));
		}
	}
	else
	{
		--* v12;
	}
	return (unsigned int)v14;
}

