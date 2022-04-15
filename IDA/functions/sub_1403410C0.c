#include "../winhttp.h"

//----- (00000001403410C0) ----------------------------------------------------
__int64 __fastcall sub_1403410C0(__int64 a1, int a2)
{
	int CurrentThreadId; // eax
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rbx
	__int64 v7; // rbx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v4 = (unsigned int)qword_140C7A0A0;
	if ((_DWORD)qword_140C7A0A0 == CurrentThreadId)
	{
		++qword_140C7A0A8;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A0A8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A0A0, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A0A0) = CurrentThreadId;
	}
LABEL_8:
	v6 = qword_140C7A090;
	if (qword_140C7A090 && a2 - *(_DWORD*)(qword_140C7A090 + 4) > 0)
	{
		sub_1403413D0(v4, qword_140C7A090);
		v7 = *(_QWORD*)(v6 + 8);
	}
	else
	{
		v7 = 0i64;
	}
	if ((unsigned __int64)qword_140C7A0A8 <= 1)
	{
		LODWORD(qword_140C7A0A0) = 0;
		_InterlockedExchange64(&qword_140C7A0A8, 0i64);
		if (qword_140C7A0B0)
		{
			if (!qword_140C7A0B8)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A0B8, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7A0B8);
		}
		return v7;
	}
	else
	{
		--qword_140C7A0A8;
		return v7;
	}
}
// 140341155: variable 'v4' is possibly undefined
// 140C7A090: using guessed type __int64 qword_140C7A090;
// 140C7A0A0: using guessed type __int64 qword_140C7A0A0;
// 140C7A0A8: using guessed type __int64 qword_140C7A0A8;
// 140C7A0B0: using guessed type __int64 qword_140C7A0B0;

