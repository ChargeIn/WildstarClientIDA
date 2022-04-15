#include "../winhttp.h"

//----- (0000000140306300) ----------------------------------------------------
void __fastcall sub_140306300(__int64 a1, int a2)
{
	__int64 v2; // rbx
	int v3; // esi
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	__int64 v7; // rcx
	HANDLE EventW; // rcx

	v2 = *(_QWORD*)(a1 + 16);
	v3 = a2;
	if (a2 - *(_DWORD*)(v2 + 208) < 0)
		v3 = *(_DWORD*)(v2 + 208);
	if (!*(_QWORD*)(a1 + 384) || v3 - *(_DWORD*)(a1 + 376) < 0)
	{
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(v2 + 104) == CurrentThreadId)
		{
			++* (_QWORD*)(v2 + 112);
		}
		else
		{
			v6 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 112), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v6 >= 0x400)
				{
					sub_14019FB60(v2 + 104, CurrentThreadId);
					goto LABEL_12;
				}
			}
			*(_DWORD*)(v2 + 104) = CurrentThreadId;
		}
	LABEL_12:
		v7 = *(_QWORD*)(a1 + 16) + 520i64;
		*(_DWORD*)(a1 + 376) = v3;
		sub_140308800(v7, (__int64*)(a1 + 384), (int*)(a1 + 376));
		if (*(_QWORD*)(v2 + 112) <= 1ui64)
		{
			*(_DWORD*)(v2 + 104) = 0;
			_InterlockedExchange64((volatile __int64*)(v2 + 112), 0i64);
			if (*(_QWORD*)(v2 + 120))
			{
				if (!*(_QWORD*)(v2 + 128))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 128), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v2 + 128));
			}
		}
		else
		{
			--* (_QWORD*)(v2 + 112);
		}
	}
}

