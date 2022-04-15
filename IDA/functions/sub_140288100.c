#include "../winhttp.h"

//----- (0000000140288100) ----------------------------------------------------
int* __fastcall sub_140288100(__int64 a1, __int64 a2, _DWORD* a3)
{
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	__int64 v6; // rdi
	HANDLE EventW; // rcx
	HANDLE v9; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C79B18 == CurrentThreadId)
	{
		++qword_140C79B20;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C79B20, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C79B18, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C79B18) = CurrentThreadId;
	}
LABEL_8:
	v6 = qword_140C79B38;
	if (qword_140C79B38)
	{
		qword_140C79B38 = *(_QWORD*)qword_140C79B38;
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
			return (int*)v6;
		}
		else
		{
			--qword_140C79B20;
			return (int*)v6;
		}
	}
	else
	{
		if ((unsigned __int64)qword_140C79B20 <= 1)
		{
			LODWORD(qword_140C79B18) = 0;
			_InterlockedExchange64(&qword_140C79B20, 0i64);
			if (qword_140C79B28)
			{
				if (!qword_140C79B30)
				{
					v9 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C79B30, (signed __int64)v9, 0i64))
						CloseHandle(v9);
				}
				SetEvent(qword_140C79B30);
			}
		}
		else
		{
			--qword_140C79B20;
		}
		return sub_14018B280(352i64, *a3);
	}
}
// 140C79B18: using guessed type __int64 qword_140C79B18;
// 140C79B20: using guessed type __int64 qword_140C79B20;
// 140C79B28: using guessed type __int64 qword_140C79B28;
// 140C79B38: using guessed type __int64 qword_140C79B38;

