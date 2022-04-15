#include "../winhttp.h"

//----- (000000014029E900) ----------------------------------------------------
__int64 __fastcall sub_14029E900(__int64 a1, int a2)
{
	_DWORD* v5; // rbx
	unsigned int CurrentThreadId; // eax
	int v7; // ecx
	__int64 v8; // rdx
	volatile signed __int64* v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rax
	int v14; // eax
	unsigned int v15; // edi
	HANDLE EventW; // rcx
	__int64 v17; // [rsp+20h] [rbp-28h]

	if (a2 == *(_DWORD*)(a1 + 24))
		return 0i64;
	v5 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v17 = (__int64)v5;
	CurrentThreadId = GetCurrentThreadId();
	v7 = *v5;
	v8 = CurrentThreadId;
	v9 = (volatile signed __int64*)(v5 + 2);
	if (v7 == CurrentThreadId)
	{
		++* v9;
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64(v9, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v17, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v17 = CurrentThreadId;
	}
LABEL_10:
	if (*(int*)(a1 + 48) >= 1)
	{
		v11 = *(_QWORD*)(a1 + 32);
		if (v11)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 16i64))(v11, v8);
			*(_QWORD*)(a1 + 32) = 0i64;
		}
		v12 = *(_QWORD*)(a1 + 40);
		if (v12)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 16i64))(v12, v8);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_DWORD*)(a1 + 64) = 0;
	}
	v13 = *(int*)(a1 + 28);
	*(_DWORD*)(a1 + 48) = 0;
	_InterlockedExchangeAdd((volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 48 * v13 + 344), a2 - *(_DWORD*)(a1 + 24));
	*(_DWORD*)(a1 + 24) = a2;
	v14 = sub_14029E7A0(a1, 2);
	v15 = 0;
	if (v14 < 0)
		v15 = v14;
	if (*v9 <= 1ui64)
	{
		*(_DWORD*)v17 = 0;
		_InterlockedExchange64(v9, 0i64);
		if (*(_QWORD*)(v17 + 16))
		{
			if (!*(_QWORD*)(v17 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v17 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v17 + 24));
		}
	}
	else
	{
		--* v9;
	}
	return v15;
}
// 14029E99C: variable 'v8' is possibly undefined

