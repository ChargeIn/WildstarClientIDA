#include "../winhttp.h"

//----- (0000000140344090) ----------------------------------------------------
__int64 __fastcall sub_140344090(__int64 a1, __int64 a2, __int64 a3)
{
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rax
	unsigned int v10; // ebx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7A0D8 == CurrentThreadId)
	{
		++qword_140C7A0E0;
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A0E0, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A0D8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A0D8) = CurrentThreadId;
	}
LABEL_8:
	if (*(_DWORD*)a2)
	{
		v7 = *(_DWORD*)a2 - 1;
		*(_DWORD*)a2 = v7;
		if (!v7)
		{
			*(_QWORD*)(a2 + 8) = a3;
			*(_DWORD*)(a2 + 4) = sub_14018CDF0();
			v8 = qword_140C7A0C8;
			if (!qword_140C7A0C8)
				v8 = a2;
			qword_140C7A0C8 = v8;
			v9 = qword_140C7A0D0;
			*(_QWORD*)(a2 + 24) = 0i64;
			*(_QWORD*)(a2 + 16) = v9;
			if (qword_140C7A0D0)
				*(_QWORD*)(qword_140C7A0D0 + 24) = a2;
			qword_140C7A0D0 = a2;
		}
	}
	v10 = *(_DWORD*)a2;
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
		return v10;
	}
	else
	{
		--qword_140C7A0E0;
		return v10;
	}
}
// 140C7A0C8: using guessed type __int64 qword_140C7A0C8;
// 140C7A0D0: using guessed type __int64 qword_140C7A0D0;
// 140C7A0D8: using guessed type __int64 qword_140C7A0D8;
// 140C7A0E0: using guessed type __int64 qword_140C7A0E0;
// 140C7A0E8: using guessed type __int64 qword_140C7A0E8;

