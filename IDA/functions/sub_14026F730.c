//----- (000000014026F730) ----------------------------------------------------
__int64 __fastcall sub_14026F730(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r15
	int* v7; // rbx
	int CurrentThreadId; // eax
	int v9; // ecx
	volatile signed __int64* v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rdi
	HANDLE EventW; // rcx
	__int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v16; // [rsp+78h] [rbp+20h]

	v3 = a3;
	if (!a2)
		return 0i64;
	if (a2 > *(_DWORD*)(a1 + 4i64 * a3 + 7112))
		return 0i64;
	v7 = (int*)(a1 + 24);
	v16 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v9 = *v7;
	v10 = (volatile signed __int64*)(v16 + 8);
	if (v9 == CurrentThreadId)
	{
		++* v10;
	}
	else
	{
		v11 = 0i64;
		while (_InterlockedCompareExchange64(v10, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v11 >= 0x400)
			{
				sub_14019FB60(v16, CurrentThreadId);
				goto LABEL_12;
			}
		}
		*(_DWORD*)v16 = CurrentThreadId;
	}
LABEL_12:
	v12 = *(unsigned int*)(a1 + 4 * v3 + 7120);
	if ((unsigned int)v12 + a2 <= *(_DWORD*)(a1 + 4 * v3 + 7112))
	{
		if ((*(int(__fastcall**)(_QWORD, __int64, _QWORD, __int64*, int))(**(_QWORD**)(a1 + 8 * v3 + 7096) + 88i64))(
			*(_QWORD*)(a1 + 8 * v3 + 7096),
			v12,
			a2,
			v15,
			4096) >= 0)
			goto LABEL_14;
	LABEL_18:
		v13 = 0i64;
		goto LABEL_15;
	}
	++* (_DWORD*)(a1 + 4 * v3 + 7128);
	*(_DWORD*)(a1 + 4 * v3 + 7120) = 0;
	if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64*, int))(**(_QWORD**)(a1 + 8 * v3 + 7096) + 88i64))(
		*(_QWORD*)(a1 + 8 * v3 + 7096),
		0i64,
		a2,
		v15,
		0x2000) < 0)
		goto LABEL_18;
LABEL_14:
	*(_DWORD*)(a1 + 7136) = *(_DWORD*)(a1 + 4 * v3 + 7120) / (unsigned int)dword_140AE4ED8[v3];
	*(_DWORD*)(a1 + 4 * v3 + 7120) += a2;
	*(_DWORD*)(a1 + 7140) = v3;
	_InterlockedIncrement((volatile signed __int32*)(a1 + 708));
	_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 712), a2);
	_InterlockedIncrement((volatile signed __int32*)(a1 + 716));
	_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 720), a2);
	v13 = v15[0];
LABEL_15:
	if (*v10 <= 1ui64)
	{
		*(_DWORD*)v16 = 0;
		_InterlockedExchange64(v10, 0i64);
		if (*(_QWORD*)(v16 + 16))
		{
			if (!*(_QWORD*)(v16 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v16 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v16 + 24));
		}
	}
	else
	{
		--* v10;
	}
	return v13;
}
// 140AE4ED8: using guessed type int dword_140AE4ED8[19];

