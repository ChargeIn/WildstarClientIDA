#include "../winhttp.h"

//----- (0000000140348A80) ----------------------------------------------------
__int64 __fastcall sub_140348A80(__int64 a1)
{
	int CurrentThreadId; // r8d
	__int64 v3; // rcx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA98 == CurrentThreadId)
	{
		++qword_140C7AAA0;
	}
	else
	{
		v3 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AAA0, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v3 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA98, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA98) = CurrentThreadId;
	}
LABEL_8:
	*(_DWORD*)(a1 + 68) = 1;
	*(_DWORD*)(a1 + 76) = 0;
	sub_140348750(a1);
	if ((unsigned __int64)qword_140C7AAA0 <= 1)
	{
		LODWORD(qword_140C7AA98) = 0;
		_InterlockedExchange64(&qword_140C7AAA0, 0i64);
		if (qword_140C7AAA8)
		{
			if (!qword_140C7AAB0)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AAB0, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AAB0);
		}
		return 0i64;
	}
	else
	{
		--qword_140C7AAA0;
		return 0i64;
	}
}
// 140C7AA98: using guessed type __int64 qword_140C7AA98;
// 140C7AAA0: using guessed type __int64 qword_140C7AAA0;
// 140C7AAA8: using guessed type __int64 qword_140C7AAA8;

