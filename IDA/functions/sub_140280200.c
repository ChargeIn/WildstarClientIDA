#include "../winhttp.h"

//----- (0000000140280200) ----------------------------------------------------
void __fastcall sub_140280200(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v6; // rbx
	int CurrentThreadId; // r10d
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // r8
	HANDLE EventW; // rcx

	if (*(_DWORD*)(a1 + 224))
	{
		v6 = a1 + 6368;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v6 == CurrentThreadId)
		{
			++* (_QWORD*)(v6 + 8);
		}
		else
		{
			v8 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v8 >= 0x400)
				{
					sub_14019FB60(v6, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v6 = CurrentThreadId;
		}
	LABEL_9:
		if (a2)
		{
			v9 = *(_QWORD*)(a2 + 32);
			v10 = a3;
		}
		else
		{
			v10 = 0i64;
			v9 = 0i64;
		}
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 6352) + 240i64))(
			*(_QWORD*)(a1 + 6352),
			v9,
			v10);
		if (*(_QWORD*)(v6 + 8) <= 1ui64)
		{
			*(_DWORD*)v6 = 0;
			_InterlockedExchange64((volatile __int64*)(v6 + 8), 0i64);
			if (*(_QWORD*)(v6 + 16))
			{
				if (!*(_QWORD*)(v6 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v6 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v6 + 8);
		}
	}
}

