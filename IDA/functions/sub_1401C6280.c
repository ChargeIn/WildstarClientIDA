#include "../winhttp.h"

//----- (00000001401C6280) ----------------------------------------------------
__int64 __fastcall sub_1401C6280(__int64 a1)
{
	__int64 v2; // rbx
	HANDLE EventW; // rcx
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rbx

	(**(void(__fastcall***)(__int64))a1)(a1);
	if (!*(_DWORD*)(a1 + 52) && (*(_QWORD*)(a1 + 64) || *(_QWORD*)(a1 + 72)))
	{
		v2 = qword_140C63758;
		if (*(_QWORD*)(qword_140C63758 + 16) <= 1ui64)
		{
			*(_DWORD*)(qword_140C63758 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v2 + 16), 0i64);
			if (*(_QWORD*)(v2 + 24))
			{
				if (!*(_QWORD*)(v2 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v2 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(qword_140C63758 + 16);
		}
		*(_DWORD*)(a1 + 56) = GetCurrentThreadId();
		(*(void(__fastcall**)(_QWORD))(a1 + 72))(*(_QWORD*)(a1 + 64));
		*(_DWORD*)(a1 + 56) = 0;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v2 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v2 + 16);
		}
		else
		{
			v5 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v5 >= 0x400)
				{
					sub_14019FB60(v2 + 8, CurrentThreadId);
					goto LABEL_18;
				}
			}
			*(_DWORD*)(v2 + 8) = CurrentThreadId;
		}
	}
LABEL_18:
	v6 = *(_QWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 40) = 4;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	v7 = *(_QWORD*)(a1 + 96);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	if (!*(_DWORD*)(a1 + 52))
	{
		*(_DWORD*)(a1 + 44) = 0;
		while (*(_QWORD*)(a1 + 88))
		{
			v8 = *(_QWORD*)(a1 + 88);
			if (v8)
			{
				sub_1401D75A0(*(__int64**)(a1 + 88));
				sub_14018B900(v8, 0);
			}
		}
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
}
// 140C63758: using guessed type __int64 qword_140C63758;

