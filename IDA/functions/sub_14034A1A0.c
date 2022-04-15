#include "../winhttp.h"

//----- (000000014034A1A0) ----------------------------------------------------
int __fastcall sub_14034A1A0(__int64 a1, unsigned int a2)
{
	unsigned int CurrentThreadId; // eax
	__int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // r9
	__int64 v8; // rcx
	__int64 v9; // rcx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v6 = (unsigned int)qword_140C7AB80;
	v7 = CurrentThreadId;
	if ((_DWORD)qword_140C7AB80 == CurrentThreadId)
	{
		++qword_140C7AB88;
	}
	else
	{
		v8 = 0i64;
		v5 = 1i64;
		while (_InterlockedCompareExchange64(&qword_140C7AB88, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AB80, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AB80) = CurrentThreadId;
	}
LABEL_8:
	v9 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 8) = a2;
	if (v9)
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v9 + 16i64))(v9, v5, v6, v7);
	if ((unsigned __int64)qword_140C7AB88 <= 1)
	{
		LODWORD(qword_140C7AB80) = 0;
		_InterlockedExchange64(&qword_140C7AB88, 0i64);
		if (qword_140C7AB90)
		{
			if (!qword_140C7AB98)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB98, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AB98);
		}
	}
	else
	{
		--qword_140C7AB88;
	}
	return sub_140349B20((__int64*)(a1 + 24), a2);
}
// 14034A222: variable 'v5' is possibly undefined
// 14034A222: variable 'v6' is possibly undefined
// 14034A222: variable 'v7' is possibly undefined
// 140C7AB80: using guessed type __int64 qword_140C7AB80;
// 140C7AB88: using guessed type __int64 qword_140C7AB88;
// 140C7AB90: using guessed type __int64 qword_140C7AB90;

