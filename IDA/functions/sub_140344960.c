#include "../winhttp.h"

//----- (0000000140344960) ----------------------------------------------------
__int64 __fastcall sub_140344960(__int64 a1, int* a2)
{
	int CurrentThreadId; // edx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	unsigned int v7; // ebx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7A210 == CurrentThreadId)
	{
		++qword_140C7A218;
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A218, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A210, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A210) = CurrentThreadId;
	}
LABEL_8:
	++* a2;
	if (a2 == (int*)qword_140C7A200)
		qword_140C7A200 = *((_QWORD*)a2 + 3);
	if (a2 == (int*)qword_140C7A208)
		qword_140C7A208 = *((_QWORD*)a2 + 2);
	v5 = *((_QWORD*)a2 + 3);
	if (v5)
		*(_QWORD*)(v5 + 16) = *((_QWORD*)a2 + 2);
	v6 = *((_QWORD*)a2 + 2);
	if (v6)
		*(_QWORD*)(v6 + 24) = *((_QWORD*)a2 + 3);
	*((_QWORD*)a2 + 3) = 0i64;
	*((_QWORD*)a2 + 2) = 0i64;
	v7 = *a2;
	if ((unsigned __int64)qword_140C7A218 <= 1)
	{
		LODWORD(qword_140C7A210) = 0;
		_InterlockedExchange64(&qword_140C7A218, 0i64);
		if (qword_140C7A220)
		{
			if (!qword_140C7A228)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A228, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7A228);
		}
		return v7;
	}
	else
	{
		--qword_140C7A218;
		return v7;
	}
}
// 140C7A200: using guessed type __int64 qword_140C7A200;
// 140C7A208: using guessed type __int64 qword_140C7A208;
// 140C7A210: using guessed type __int64 qword_140C7A210;
// 140C7A218: using guessed type __int64 qword_140C7A218;
// 140C7A220: using guessed type __int64 qword_140C7A220;

