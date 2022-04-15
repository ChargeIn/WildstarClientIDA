#include "../winhttp.h"

//----- (00000001402930E0) ----------------------------------------------------
__int64 __fastcall sub_1402930E0(__int64 a1)
{
	_DWORD* v2; // rbx
	int CurrentThreadId; // eax
	int v4; // edx
	volatile signed __int64* v5; // rbx
	__int64 v6; // rcx
	unsigned int v7; // esi
	HANDLE EventW; // rcx
	__int64 v10; // [rsp+30h] [rbp+8h]

	v2 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v10 = (__int64)v2;
	CurrentThreadId = GetCurrentThreadId();
	v4 = *v2;
	v5 = (volatile signed __int64*)(v2 + 2);
	if (v4 == CurrentThreadId)
	{
		++* v5;
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64(v5, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v10, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v10 = CurrentThreadId;
	}
LABEL_8:
	v7 = -- * (_DWORD*)(a1 + 8);
	if (v7 == -1)
	{
		sub_140291DB0(a1);
		sub_14018B900(a1, 0);
		v7 = 0;
	}
	else if (!v7)
	{
		if (*(_QWORD*)(a1 + 72))
		{
			sub_140198370(a1 + 312, a1, (_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64));
		}
		else
		{
			sub_140291DB0(a1);
			sub_14018B900(a1, 0);
		}
	}
	if (*v5 <= 1ui64)
	{
		*(_DWORD*)v10 = 0;
		_InterlockedExchange64(v5, 0i64);
		if (*(_QWORD*)(v10 + 16))
		{
			if (!*(_QWORD*)(v10 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v10 + 24));
		}
	}
	else
	{
		--* v5;
	}
	return v7;
}

