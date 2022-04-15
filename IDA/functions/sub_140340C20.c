#include "../winhttp.h"

//----- (0000000140340C20) ----------------------------------------------------
__int64 __fastcall sub_140340C20(__int64 a1, int a2)
{
	int CurrentThreadId; // eax
	__int64 v4; // rcx
	__int64 v5; // rdx
	__int64 v6; // rbx
	__int64 v7; // rbx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v4 = (unsigned int)qword_140C7A0D8;
	if ((_DWORD)qword_140C7A0D8 == CurrentThreadId)
	{
		++qword_140C7A0E0;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A0E0, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A0D8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A0D8) = CurrentThreadId;
	}
LABEL_8:
	v6 = qword_140C7A0C8;
	if (qword_140C7A0C8 && a2 - *(_DWORD*)(qword_140C7A0C8 + 4) > 0)
	{
		sub_140341310(v4, qword_140C7A0C8);
		v7 = *(_QWORD*)(v6 + 8);
	}
	else
	{
		v7 = 0i64;
	}
	if ((unsigned __int64)qword_140C7A0E0 <= 1)
	{
		LODWORD(qword_140C7A0D8) = 0;
		_InterlockedExchange64(&qword_140C7A0E0, 0i64);
		if (qword_140C7A0E8)
		{
			if (!qword_140C7A0F0)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A0F0, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7A0F0);
		}
		return v7;
	}
	else
	{
		--qword_140C7A0E0;
		return v7;
	}
}
// 140340CB5: variable 'v4' is possibly undefined
// 140C7A0C8: using guessed type __int64 qword_140C7A0C8;
// 140C7A0D8: using guessed type __int64 qword_140C7A0D8;
// 140C7A0E0: using guessed type __int64 qword_140C7A0E0;
// 140C7A0E8: using guessed type __int64 qword_140C7A0E8;

