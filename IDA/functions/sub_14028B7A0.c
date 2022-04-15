#include "../winhttp.h"

//----- (000000014028B7A0) ----------------------------------------------------
__int64 __fastcall sub_14028B7A0(__int64 a1, int a2)
{
	_DWORD* v4; // rbx
	int CurrentThreadId; // eax
	int v6; // ecx
	volatile signed __int64* v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rax
	bool v10; // cc
	HANDLE EventW; // rcx
	__int64 v13; // [rsp+30h] [rbp+8h]

	if (a2 != *(_DWORD*)(a1 + 24))
	{
		v4 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
		v13 = (__int64)v4;
		CurrentThreadId = GetCurrentThreadId();
		v6 = *v4;
		v7 = (volatile signed __int64*)(v4 + 2);
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
					sub_14019FB60(v13, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v13 = CurrentThreadId;
		}
	LABEL_9:
		v9 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 36) = 0;
		_InterlockedExchangeAdd((volatile signed __int32*)(v9 + 680), a2 - *(_DWORD*)(a1 + 24));
		v10 = *(_DWORD*)(a1 + 36) < 2;
		*(_DWORD*)(a1 + 24) = a2;
		if (v10)
			*(_DWORD*)(a1 + 44) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4i64 * *(int*)(a1 + 28) + 7128) - 1;
		*(_DWORD*)(a1 + 36) = 2;
		if (*v7 <= 1ui64)
		{
			*(_DWORD*)v13 = 0;
			_InterlockedExchange64(v7, 0i64);
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
			--* v7;
		}
	}
	return 0i64;
}

