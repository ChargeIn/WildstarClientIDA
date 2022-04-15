#include "../winhttp.h"

//----- (0000000140281160) ----------------------------------------------------
int __fastcall sub_140281160(__int64 a1, char a2)
{
	__int64 v4; // rbx
	int CurrentThreadId; // r9d
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	HANDLE EventW; // rcx

	v4 = a1 + 6368;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 8);
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v4, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v4 = CurrentThreadId;
	}
LABEL_8:
	if ((a2 & 1) != 0)
		sub_1402ADA40(*(__int64**)(a1 + 8592));
	if ((a2 & 2) != 0)
		sub_1402AE2F0(*(__int64**)(a1 + 8600));
	v7 = *(_QWORD*)(v4 + 8);
	if (v7 <= 1)
	{
		*(_DWORD*)v4 = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
		v7 = *(_QWORD*)(v4 + 16);
		if (v7)
		{
			if (!*(_QWORD*)(v4 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v7) = SetEvent(*(HANDLE*)(v4 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 8);
	}
	return v7;
}

