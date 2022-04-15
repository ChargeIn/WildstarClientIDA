#include "../winhttp.h"

//----- (0000000140195F70) ----------------------------------------------------
__int64 __fastcall sub_140195F70(__int64 a1)
{
	int CurrentThreadId; // edx
	volatile signed __int64* v4; // rbx
	__int64 v5; // rcx
	int v6; // esi
	HANDLE EventW; // rcx
	__int64 v8; // [rsp+38h] [rbp+10h]

	if (!qword_140C63728)
		return 0i64;
	v8 = qword_140C63728 + 8;
	CurrentThreadId = GetCurrentThreadId();
	v4 = (volatile signed __int64*)(v8 + 8);
	if (*(_DWORD*)v8 == CurrentThreadId)
	{
		++* v4;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(v4, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(v8, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v8 = CurrentThreadId;
	}
LABEL_10:
	v6 = *(_DWORD*)(a1 + 4) - *(_DWORD*)(qword_140C63728 + 232);
	if (v6 < 0)
		v6 = 0;
	if (*v4 <= 1ui64)
	{
		*(_DWORD*)v8 = 0;
		_InterlockedExchange64(v4, 0i64);
		if (*(_QWORD*)(v8 + 16))
		{
			if (!*(_QWORD*)(v8 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v8 + 24));
		}
		return (unsigned int)v6;
	}
	else
	{
		--* v4;
		return (unsigned int)v6;
	}
}
// 140C63728: using guessed type __int64 qword_140C63728;

