#include "../winhttp.h"

//----- (000000014030E410) ----------------------------------------------------
void __fastcall sub_14030E410(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	HANDLE EventW; // rcx

	v2 = *(_QWORD*)(a1 + 72);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 72) = 0i64;
	}
	if (*(_DWORD*)(a1 + 32))
	{
		v3 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 32) = 0;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v3 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v3 + 16);
		}
		else
		{
			v5 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v5 >= 0x400)
				{
					sub_14019FB60(v3 + 8, CurrentThreadId);
					goto LABEL_11;
				}
			}
			*(_DWORD*)(v3 + 8) = CurrentThreadId;
		}
	LABEL_11:
		sub_1400B6120(*(_QWORD*)(a1 + 16) + 56i64, a1 + 24);
		if (*(_QWORD*)(v3 + 16) <= 1ui64)
		{
			*(_DWORD*)(v3 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v3 + 16), 0i64);
			if (*(_QWORD*)(v3 + 24))
			{
				if (!*(_QWORD*)(v3 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v3 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v3 + 16);
		}
	}
}

