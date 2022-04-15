#include "../winhttp.h"

//----- (00000001402882B0) ----------------------------------------------------
void __fastcall sub_1402882B0(__int64 a1, _QWORD* a2)
{
	int CurrentThreadId; // edx
	__int64 v4; // rcx
	HANDLE EventW; // rcx

	if (a2)
	{
		CurrentThreadId = GetCurrentThreadId();
		if ((_DWORD)qword_140C79B18 == CurrentThreadId)
		{
			++qword_140C79B20;
		}
		else
		{
			v4 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C79B20, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v4 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C79B18, CurrentThreadId);
					goto LABEL_9;
				}
			}
			LODWORD(qword_140C79B18) = CurrentThreadId;
		}
	LABEL_9:
		*a2 = qword_140C79B38;
		qword_140C79B38 = (__int64)a2;
		if ((unsigned __int64)qword_140C79B20 <= 1)
		{
			LODWORD(qword_140C79B18) = 0;
			_InterlockedExchange64(&qword_140C79B20, 0i64);
			if (qword_140C79B28)
			{
				if (!qword_140C79B30)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C79B30, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C79B30);
			}
		}
		else
		{
			--qword_140C79B20;
		}
	}
}
// 140C79B18: using guessed type __int64 qword_140C79B18;
// 140C79B20: using guessed type __int64 qword_140C79B20;
// 140C79B28: using guessed type __int64 qword_140C79B28;
// 140C79B38: using guessed type __int64 qword_140C79B38;

