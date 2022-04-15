//----- (00000001400B28B0) ----------------------------------------------------
int __fastcall sub_1400B28B0(__int64 a1, int a2, int* a3)
{
	int CurrentThreadId; // r8d
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdi
	int* v10; // rax
	int* v11; // r15
	int* v12; // r14
	__int64 v13; // r8
	int* v14; // rdx
	unsigned __int64 v15; // rax
	HANDLE EventW; // rcx
	__int64 v18; // [rsp+28h] [rbp-60h] BYREF
	int* v19; // [rsp+30h] [rbp-58h]
	__int64 v20; // [rsp+38h] [rbp-50h]
	__int64 v21; // [rsp+40h] [rbp-48h]
	__int64 v22; // [rsp+48h] [rbp-40h]
	__int64 v23; // [rsp+50h] [rbp-38h]

	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 24);
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(a1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 16) = CurrentThreadId;
	}
LABEL_8:
	v8 = 0i64;
	v19 = 0i64;
	v20 = 0i64;
	v21 = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v8;
		while (*((_WORD*)a3 + v8));
	}
	sub_14001C1B0(&v18, a3, (__int64)a3 + 2 * v8);
	v9 = *(_QWORD*)(a1 + 56);
	v22 = 0i64;
	v23 = 0i64;
	v10 = sub_14018B280(72i64, 0);
	v11 = v10 + 4;
	v12 = v10;
	if (v10 != (int*)-16i64)
	{
		v13 = v20;
		v14 = v19;
		*v11 = a2;
		*((_QWORD*)v10 + 4) = 0i64;
		*((_QWORD*)v10 + 5) = 0i64;
		*((_QWORD*)v10 + 6) = 0i64;
		sub_14001C1B0((_QWORD*)v10 + 3, v14, v13);
		*((_QWORD*)v11 + 5) = 0i64;
		*((_QWORD*)v11 + 6) = 0i64;
	}
	*(_QWORD*)v12 = v9;
	*((_QWORD*)v12 + 1) = *(_QWORD*)(v9 + 8);
	**(_QWORD**)(v9 + 8) = v12;
	*(_QWORD*)(v9 + 8) = v12;
	if (v19)
		sub_14018B900((__int64)v19, 0);
	*(_DWORD*)(a1 + 64) = a2;
	v15 = *(_QWORD*)(a1 + 24);
	if (v15 <= 1)
	{
		*(_DWORD*)(a1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 24), 0i64);
		v15 = *(_QWORD*)(a1 + 32);
		if (v15)
		{
			if (!*(_QWORD*)(a1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v15) = SetEvent(*(HANDLE*)(a1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 24);
	}
	return v15;
}

