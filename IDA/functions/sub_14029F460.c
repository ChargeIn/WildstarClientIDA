#include "../winhttp.h"

//----- (000000014029F460) ----------------------------------------------------
__int64 __fastcall sub_14029F460(__int64 a1, int a2, int a3, int a4)
{
	__int64 v4; // rbx
	int CurrentThreadId; // eax
	int v7; // edx
	volatile signed __int64* v8; // rbx
	__int64 v9; // rcx
	int v10; // edi
	volatile signed __int32* v11; // rdx
	__int64* v12; // rdx
	__int64 v13; // rax
	HANDLE EventW; // rcx
	__int64 v16; // [rsp+30h] [rbp+8h]

	v4 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = a2;
	*(_DWORD*)(a1 + 28) = a3;
	*(_DWORD*)(a1 + 32) = a4;
	v16 = v4 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v7 = *(_DWORD*)(v4 + 24);
	v8 = (volatile signed __int64*)(v4 + 32);
	if (v7 == CurrentThreadId)
	{
		++* v8;
	}
	else
	{
		v9 = 0i64;
		while (_InterlockedCompareExchange64(v8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v9 >= 0x400)
			{
				sub_14019FB60(v16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v16 = CurrentThreadId;
	}
LABEL_8:
	v10 = sub_14029F5D0(a1, 2);
	if (v10 >= 0)
	{
		v11 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 32) + *(_QWORD*)(a1 + 16) + 532i64);
		_InterlockedIncrement(v11);
		_InterlockedExchangeAdd(v11 + 1, *(_DWORD*)(a1 + 24));
		_InterlockedIncrement(v11 + 2);
		_InterlockedExchangeAdd(v11 + 3, *(_DWORD*)(a1 + 24));
		v12 = (__int64*)(*(_QWORD*)(a1 + 16) + 6848i64);
		if (!*(_QWORD*)(a1 + 80))
		{
			*(_QWORD*)(a1 + 80) = v12;
			*(_QWORD*)(a1 + 88) = *v12;
			*v12 = a1;
			v13 = *(_QWORD*)(a1 + 88);
			if (v13)
				*(_QWORD*)(v13 + 80) = a1 + 88;
		}
		v10 = 0;
	}
	if (*v8 <= 1ui64)
	{
		*(_DWORD*)v16 = 0;
		_InterlockedExchange64(v8, 0i64);
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
		--* v8;
	}
	return (unsigned int)v10;
}

