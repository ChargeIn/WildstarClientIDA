#include "../winhttp.h"

//----- (000000014028B5E0) ----------------------------------------------------
__int64 __fastcall sub_14028B5E0(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	int CurrentThreadId; // eax
	int v6; // edx
	volatile signed __int64* v7; // rbx
	__int64 v8; // rcx
	volatile signed __int32* v9; // rcx
	_QWORD* v10; // rdx
	__int64 v11; // rax
	HANDLE EventW; // rcx
	__int64 v14; // [rsp+30h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = a2;
	*(_DWORD*)(a1 + 28) = a3;
	*(_DWORD*)(a1 + 32) = 3;
	v14 = v3 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v6 = *(_DWORD*)(v3 + 24);
	v7 = (volatile signed __int64*)(v3 + 32);
	if (v6 == CurrentThreadId)
	{
		++* v7;
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64(v7, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v14, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v14 = CurrentThreadId;
	}
LABEL_8:
	if (*(int*)(a1 + 36) < 2)
		*(_DWORD*)(a1 + 44) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4i64 * *(int*)(a1 + 28) + 7128) - 1;
	v9 = *(volatile signed __int32**)(a1 + 16);
	*(_DWORD*)(a1 + 36) = 2;
	v9 += 169;
	_InterlockedIncrement(v9);
	_InterlockedExchangeAdd(v9 + 1, *(_DWORD*)(a1 + 24));
	_InterlockedIncrement(v9 + 2);
	_InterlockedExchangeAdd(v9 + 3, *(_DWORD*)(a1 + 24));
	v10 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 7208i64);
	if (!*(_QWORD*)(a1 + 56))
	{
		*(_QWORD*)(a1 + 56) = v10;
		*(_QWORD*)(a1 + 64) = *v10;
		*v10 = a1;
		v11 = *(_QWORD*)(a1 + 64);
		if (v11)
			*(_QWORD*)(v11 + 56) = a1 + 64;
	}
	if (*v7 <= 1ui64)
	{
		*(_DWORD*)v14 = 0;
		_InterlockedExchange64(v7, 0i64);
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
		return 0i64;
	}
	else
	{
		--* v7;
		return 0i64;
	}
}

