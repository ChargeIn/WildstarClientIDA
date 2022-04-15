#include "../winhttp.h"

//----- (00000001401AD740) ----------------------------------------------------
__int64 __fastcall sub_1401AD740(__int64 a1, const wchar_t* a2)
{
	int CurrentThreadId; // r9d
	__int64 v5; // rcx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C77840 == CurrentThreadId)
	{
		++qword_140C77848;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C77848, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C77840, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C77840) = CurrentThreadId;
	}
LABEL_8:
	sub_1401AD860(a1, a2);
	*(_DWORD*)(a1 + 128) = 4;
	if ((unsigned __int64)qword_140C77848 <= 1)
	{
		LODWORD(qword_140C77840) = 0;
		_InterlockedExchange64(&qword_140C77848, 0i64);
		if (qword_140C77850)
		{
			if (!qword_140C77858)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C77858, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C77858);
		}
		return a1;
	}
	else
	{
		--qword_140C77848;
		return a1;
	}
}
// 140C77840: using guessed type __int64 qword_140C77840;
// 140C77848: using guessed type __int64 qword_140C77848;
// 140C77850: using guessed type __int64 qword_140C77850;

