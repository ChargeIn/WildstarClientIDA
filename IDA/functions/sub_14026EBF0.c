//----- (000000014026EBF0) ----------------------------------------------------
__int64 __fastcall sub_14026EBF0(__int64 a1, __int64* a2)
{
	_DWORD* v5; // rbx
	volatile signed __int64* v6; // rdi
	int CurrentThreadId; // edx
	__int64 v8; // rcx
	int* v9; // rax
	__int64 v10; // rbx
	int v11; // eax
	int v12; // ebp
	HANDLE EventW; // rcx
	__int64 v14; // [rsp+48h] [rbp+10h]

	if (!a2)
		return 2147942487i64;
	v5 = (_DWORD*)(a1 + 24);
	v14 = a1 + 24;
	v6 = (volatile signed __int64*)(a1 + 32);
	CurrentThreadId = GetCurrentThreadId();
	if (*v5 == CurrentThreadId)
	{
		++* v6;
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64(v6, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v14, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v14 = CurrentThreadId;
	}
LABEL_10:
	v9 = sub_14018B280(136i64, 0);
	v10 = (__int64)v9;
	if (v9)
	{
		*(_QWORD*)v9 = off_140B61AA0;
		*((_QWORD*)v9 + 10) = 0i64;
		*((_QWORD*)v9 + 11) = 0i64;
		*((_QWORD*)v9 + 12) = 0i64;
		*((_QWORD*)v9 + 13) = 0i64;
		*((_QWORD*)v9 + 8) = 0i64;
		v9[18] = 0;
		*((_QWORD*)v9 + 15) = 0i64;
		*((_QWORD*)v9 + 16) = 0i64;
		v9[2] = 1;
		*((_QWORD*)v9 + 2) = a1;
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 6) = 0i64;
		v9[14] = 4096;
		v11 = *(_DWORD*)(a1 + 240);
		*(_DWORD*)(v10 + 112) = -2147483638;
		*(_DWORD*)(v10 + 60) = v11 - 1;
	}
	else
	{
		v10 = 0i64;
	}
	v12 = sub_140297100(v10);
	if (v12 >= 0)
	{
		*a2 = v10;
		v12 = 0;
	}
	else if (v10)
	{
		sub_140296FA0(v10);
		sub_14018B900(v10, 0);
	}
	if (*v6 <= 1ui64)
	{
		*(_DWORD*)v14 = 0;
		_InterlockedExchange64(v6, 0i64);
		if (*(_QWORD*)(v14 + 16))
		{
			if (!*(_QWORD*)(v14 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v14 + 24));
		}
	}
	else
	{
		--* v6;
	}
	return (unsigned int)v12;
}
// 140B61AA0: using guessed type __int64 (__fastcall *off_140B61AA0[25])();

