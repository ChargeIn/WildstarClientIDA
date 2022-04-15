#include "../winhttp.h"

//----- (0000000140338830) ----------------------------------------------------
__int64 __fastcall sub_140338830(__int64* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	__int64 v5; // rdi
	__int64 v6; // rdx
	HANDLE EventW; // rcx

	v1 = *a1;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v1 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 8);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v1 = CurrentThreadId;
	}
LABEL_8:
	v5 = 0i64;
	v6 = (a1[3] - a1[2]) / 48;
	if (v6)
		v5 = *(_QWORD*)(a1[3] - 32) - 8i64 + 8 * v6;
	if (*(_QWORD*)(v1 + 8) <= 1ui64)
	{
		*(_DWORD*)v1 = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 8), 0i64);
		if (*(_QWORD*)(v1 + 16))
		{
			if (!*(_QWORD*)(v1 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v1 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 8);
	}
	return v5;
}

