#include "../winhttp.h"

//----- (000000014028A2D0) ----------------------------------------------------
__int64 __fastcall sub_14028A2D0(__int64 a1, int a2)
{
	__int64 v2; // rbx
	int CurrentThreadId; // eax
	int v5; // edx
	volatile signed __int64* v6; // rbx
	__int64 v7; // rcx
	volatile signed __int32* v8; // rcx
	_QWORD* v9; // rdx
	__int64 v10; // rax
	HANDLE EventW; // rcx
	__int64 v13; // [rsp+30h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = a2;
	*(_DWORD*)(a1 + 28) = 3;
	v13 = v2 + 24;
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
	if (*(int*)(a1 + 32) < 2)
		*(_DWORD*)(a1 + 40) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 7080i64) - 1;
	v8 = *(volatile signed __int32**)(a1 + 16);
	*(_DWORD*)(a1 + 32) = 2;
	v8 += 121;
	_InterlockedIncrement(v8);
	_InterlockedExchangeAdd(v8 + 1, *(_DWORD*)(a1 + 24));
	_InterlockedIncrement(v8 + 2);
	_InterlockedExchangeAdd(v8 + 3, *(_DWORD*)(a1 + 24));
	v9 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 7192i64);
	if (!*(_QWORD*)(a1 + 48))
	{
		*(_QWORD*)(a1 + 48) = v9;
		*(_QWORD*)(a1 + 56) = *v9;
		*v9 = a1;
		v10 = *(_QWORD*)(a1 + 56);
		if (v10)
			*(_QWORD*)(v10 + 48) = a1 + 56;
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
		return 0i64;
	}
	else
	{
		--* v6;
		return 0i64;
	}
}

