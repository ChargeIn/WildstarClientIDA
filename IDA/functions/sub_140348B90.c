#include "../winhttp.h"

//----- (0000000140348B90) ----------------------------------------------------
__int64 __fastcall sub_140348B90(__int64 a1)
{
	unsigned int CurrentThreadId; // eax
	__int64 v3; // rdx
	__int64 v4; // r8
	__int64 v5; // rcx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v3 = (unsigned int)qword_140C7AA98;
	v4 = CurrentThreadId;
	if ((_DWORD)qword_140C7AA98 == CurrentThreadId)
	{
		++qword_140C7AAA0;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AAA0, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA98, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA98) = CurrentThreadId;
	}
LABEL_8:
	*(_DWORD*)(a1 + 68) = 0;
	if (*(_DWORD*)(a1 + 64)
		&& !*(_DWORD*)(a1 + 72)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 80) + 24i64))(
			*(_QWORD*)(a1 + 80),
			v3,
			v4)
		&& *(_DWORD*)(a1 + 16) != -2147483638)
	{
		sub_1403487F0(a1);
		*(_DWORD*)(a1 + 72) = 1;
	}
	if ((unsigned __int64)qword_140C7AAA0 <= 1)
	{
		LODWORD(qword_140C7AA98) = 0;
		_InterlockedExchange64(&qword_140C7AAA0, 0i64);
		if (qword_140C7AAA8)
		{
			if (!qword_140C7AAB0)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AAB0, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AAB0);
		}
		return 0i64;
	}
	else
	{
		--qword_140C7AAA0;
		return 0i64;
	}
}
// 140348C17: variable 'v3' is possibly undefined
// 140348C17: variable 'v4' is possibly undefined
// 140C7AA98: using guessed type __int64 qword_140C7AA98;
// 140C7AAA0: using guessed type __int64 qword_140C7AAA0;
// 140C7AAA8: using guessed type __int64 qword_140C7AAA8;

