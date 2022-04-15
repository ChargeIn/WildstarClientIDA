#include "../winhttp.h"

//----- (0000000140348CD0) ----------------------------------------------------
int sub_140348CD0()
{
	int CurrentThreadId; // edx
	__int64 v1; // rcx
	__int64 i; // rbx
	int result; // eax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA98 == CurrentThreadId)
	{
		++qword_140C7AAA0;
	}
	else
	{
		v1 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AAA0, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v1 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA98, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA98) = CurrentThreadId;
	}
LABEL_8:
	for (i = qword_140C7AA90; i; i = *(_QWORD*)(i + 176))
	{
		sub_140348750(i);
		if (*(_DWORD*)(i + 64)
			&& !*(_DWORD*)(i + 72)
			&& !*(_DWORD*)(i + 68)
			&& (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(i + 80) + 24i64))(*(_QWORD*)(i + 80))
			&& *(_DWORD*)(i + 16) != -2147483638)
		{
			sub_1403487F0(i);
			*(_DWORD*)(i + 72) = 1;
		}
	}
	result = qword_140C7AAA0;
	if ((unsigned __int64)qword_140C7AAA0 <= 1)
	{
		LODWORD(qword_140C7AA98) = 0;
		_InterlockedExchange64(&qword_140C7AAA0, 0i64);
		result = qword_140C7AAA8;
		if (qword_140C7AAA8)
		{
			if (!qword_140C7AAB0)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AAB0, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(qword_140C7AAB0);
		}
	}
	else
	{
		--qword_140C7AAA0;
	}
	return result;
}
// 140C7AA90: using guessed type __int64 qword_140C7AA90;
// 140C7AA98: using guessed type __int64 qword_140C7AA98;
// 140C7AAA0: using guessed type __int64 qword_140C7AAA0;
// 140C7AAA8: using guessed type __int64 qword_140C7AAA8;

