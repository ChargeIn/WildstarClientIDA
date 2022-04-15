#include "../winhttp.h"

//----- (000000014003D8F0) ----------------------------------------------------
__int64* __fastcall sub_14003D8F0(__int64* a1, __int64 a2)
{
	int CurrentThreadId; // edx
	__int64 v6; // rcx

	*a1 = a2;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)a2 == CurrentThreadId)
	{
		++* (_QWORD*)(a2 + 8);
		return a1;
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a2 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(a2, CurrentThreadId);
				return a1;
			}
		}
		*(_DWORD*)a2 = CurrentThreadId;
		return a1;
	}
}

