#include "../winhttp.h"

//----- (0000000140337DE0) ----------------------------------------------------
void __fastcall sub_140337DE0(_QWORD* a1)
{
	_QWORD* v1; // rsi
	__int64 v3; // rbx
	int CurrentThreadId; // r8d
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	HANDLE EventW; // rcx

	v1 = (_QWORD*)a1[6];
	if (v1)
	{
		v3 = v1[2];
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v3 == CurrentThreadId)
		{
			++* (_QWORD*)(v3 + 8);
		}
		else
		{
			v5 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v5 >= 0x400)
				{
					sub_14019FB60(v3, CurrentThreadId);
					goto LABEL_9;
				}
			}
			*(_DWORD*)v3 = CurrentThreadId;
		}
	LABEL_9:
		if ((_QWORD*)*v1 == a1)
		{
			*v1 = a1[7];
			if ((_QWORD*)v1[1] == a1)
				v1[1] = 0i64;
		}
		else if ((_QWORD*)v1[1] == a1)
		{
			v1[1] = a1[8];
		}
		v6 = a1[7];
		if (v6)
			*(_QWORD*)(v6 + 64) = a1[8];
		v7 = a1[8];
		if (v7)
			*(_QWORD*)(v7 + 56) = a1[7];
		a1[8] = 0i64;
		a1[7] = 0i64;
		a1[6] = 0i64;
		if (*(_QWORD*)(v3 + 8) <= 1ui64)
		{
			*(_DWORD*)v3 = 0;
			_InterlockedExchange64((volatile __int64*)(v3 + 8), 0i64);
			if (*(_QWORD*)(v3 + 16))
			{
				if (!*(_QWORD*)(v3 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v3 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v3 + 8);
		}
	}
}

