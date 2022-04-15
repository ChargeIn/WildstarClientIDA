#include "../winhttp.h"

//----- (000000014029C760) ----------------------------------------------------
int __fastcall sub_14029C760(_QWORD* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	HANDLE EventW; // rcx
	unsigned __int64* v9; // rcx
	__int64 v10; // rcx

	v1 = a1[4];
	*a1 = off_140B61C18;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 24) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 32);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 24, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 24) = CurrentThreadId;
	}
LABEL_8:
	v5 = (_QWORD*)a1[1];
	if (v5)
		*v5 = a1[2];
	v6 = a1[2];
	if (v6)
		*(_QWORD*)(v6 + 8) = a1[1];
	a1[1] = 0i64;
	a1[2] = 0i64;
	v7 = *(_QWORD*)(v1 + 32);
	if (v7 <= 1)
	{
		*(_DWORD*)(v1 + 24) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 32), 0i64);
		v7 = *(_QWORD*)(v1 + 40);
		if (v7)
		{
			if (!*(_QWORD*)(v1 + 48))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 48), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v7) = SetEvent(*(HANDLE*)(v1 + 48));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 32);
	}
	v9 = (unsigned __int64*)a1[1];
	if (v9)
	{
		v7 = a1[2];
		*v9 = v7;
	}
	v10 = a1[2];
	if (v10)
	{
		v7 = a1[1];
		*(_QWORD*)(v10 + 8) = v7;
	}
	a1[2] = 0i64;
	a1[1] = 0i64;
	return v7;
}
// 140B61C18: using guessed type __int64 (__fastcall *off_140B61C18[9])();

