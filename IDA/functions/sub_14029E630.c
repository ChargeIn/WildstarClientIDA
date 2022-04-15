#include "../winhttp.h"

//----- (000000014029E630) ----------------------------------------------------
__int64 __fastcall sub_14029E630(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	int CurrentThreadId; // eax
	int v6; // edx
	volatile signed __int64* v7; // rbx
	__int64 v8; // rcx
	int v9; // edi
	volatile signed __int32* v10; // rdx
	__int64* v11; // rdx
	__int64 v12; // rax
	HANDLE EventW; // rcx
	__int64 v15; // [rsp+30h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = a2;
	*(_DWORD*)(a1 + 28) = a3;
	v15 = v3 + 24;
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
				sub_14019FB60(v15, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v15 = CurrentThreadId;
	}
LABEL_8:
	v9 = sub_14029E7A0(a1, 2);
	if (v9 >= 0)
	{
		v10 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 28) + *(_QWORD*)(a1 + 16) + 340i64);
		_InterlockedIncrement(v10);
		_InterlockedExchangeAdd(v10 + 1, *(_DWORD*)(a1 + 24));
		_InterlockedIncrement(v10 + 2);
		_InterlockedExchangeAdd(v10 + 3, *(_DWORD*)(a1 + 24));
		v11 = (__int64*)(*(_QWORD*)(a1 + 16) + 6840i64);
		if (!*(_QWORD*)(a1 + 72))
		{
			*(_QWORD*)(a1 + 72) = v11;
			*(_QWORD*)(a1 + 80) = *v11;
			*v11 = a1;
			v12 = *(_QWORD*)(a1 + 80);
			if (v12)
				*(_QWORD*)(v12 + 72) = a1 + 80;
		}
		v9 = 0;
	}
	if (*v7 <= 1ui64)
	{
		*(_DWORD*)v15 = 0;
		_InterlockedExchange64(v7, 0i64);
		if (*(_QWORD*)(v15 + 16))
		{
			if (!*(_QWORD*)(v15 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v15 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v15 + 24));
		}
	}
	else
	{
		--* v7;
	}
	return (unsigned int)v9;
}

