#include "../winhttp.h"

//----- (0000000140340FB0) ----------------------------------------------------
__int64 sub_140340FB0()
{
	int CurrentThreadId; // eax
	__int64 v1; // rcx
	__int64 v2; // rbx
	__int64 v3; // rbx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v1 = (unsigned int)qword_140C7A210;
	if ((_DWORD)qword_140C7A210 == CurrentThreadId)
	{
		++qword_140C7A218;
	}
	else
	{
		v1 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A218, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v1 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A210, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A210) = CurrentThreadId;
	}
LABEL_8:
	v2 = qword_140C7A200;
	if (qword_140C7A200)
	{
		sub_140341370(v1, qword_140C7A200);
		v3 = *(_QWORD*)(v2 + 8);
	}
	else
	{
		v3 = 0i64;
	}
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
		return v3;
	}
	else
	{
		--qword_140C7A218;
		return v3;
	}
}
// 140341023: variable 'v1' is possibly undefined
// 140C7A200: using guessed type __int64 qword_140C7A200;
// 140C7A210: using guessed type __int64 qword_140C7A210;
// 140C7A218: using guessed type __int64 qword_140C7A218;
// 140C7A220: using guessed type __int64 qword_140C7A220;

