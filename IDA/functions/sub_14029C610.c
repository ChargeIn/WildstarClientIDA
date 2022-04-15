#include "../winhttp.h"

//----- (000000014029C610) ----------------------------------------------------
__int64 __fastcall sub_14029C610(_QWORD* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rax
	HANDLE EventW; // rcx

	v1 = a1[2];
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 24) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 32);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 24, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 24) = CurrentThreadId;
	}
LABEL_8:
	v5 = (_QWORD*)(a1[2] + 7272i64);
	if (!a1[3])
	{
		a1[3] = v5;
		a1[4] = *v5;
		*v5 = a1;
		v6 = a1[4];
		if (v6)
			*(_QWORD*)(v6 + 24) = a1 + 4;
	}
	if (*(_QWORD*)(v1 + 32) <= 1ui64)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		if (*(_QWORD*)(v1 + 40))
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v1 + 48));
		}
		return 0i64;
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
		return 0i64;
	}
}

