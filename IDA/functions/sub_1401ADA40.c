#include "../winhttp.h"

//----- (00000001401ADA40) ----------------------------------------------------
int __fastcall sub_1401ADA40(__int64 a1, int a2)
{
	int CurrentThreadId; // r9d
	__int64 v5; // rcx
	unsigned __int16 v6; // ax
	int result; // eax
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
	v6 = *(_WORD*)(a1 + 138);
	if (++ * (_WORD*)(a1 + 136) >= v6)
		*(_WORD*)(a1 + 136) = 0;
	if (v6 < 0x10u)
		*(_WORD*)(a1 + 138) = v6 + 1;
	*(_DWORD*)(a1 + 132) = sub_14018CDF0();
	*(_DWORD*)(a1 + 8i64 * *(unsigned __int16*)(a1 + 136)) = a2;
	result = qword_140C77848;
	if ((unsigned __int64)qword_140C77848 <= 1)
	{
		LODWORD(qword_140C77840) = 0;
		_InterlockedExchange64(&qword_140C77848, 0i64);
		result = qword_140C77850;
		if (qword_140C77850)
		{
			if (!qword_140C77858)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C77858, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(qword_140C77858);
		}
	}
	else
	{
		--qword_140C77848;
	}
	return result;
}
// 140C77840: using guessed type __int64 qword_140C77840;
// 140C77848: using guessed type __int64 qword_140C77848;
// 140C77850: using guessed type __int64 qword_140C77850;

