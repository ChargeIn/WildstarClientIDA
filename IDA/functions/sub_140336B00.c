#include "../winhttp.h"

//----- (0000000140336B00) ----------------------------------------------------
__int64 __fastcall sub_140336B00(__int64 a1)
{
	__int64* v1; // rbx
	int CurrentThreadId; // edx
	volatile signed __int64* v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	unsigned int v7; // edi
	__int64 v8; // rax
	HANDLE EventW; // rcx
	__int64 v11; // [rsp+30h] [rbp+8h]

	v1 = *(__int64**)(a1 + 40);
	if (!v1 || !*(_QWORD*)(a1 + 48))
		return 2147942438i64;
	v11 = *v1;
	CurrentThreadId = GetCurrentThreadId();
	v4 = (volatile signed __int64*)(v11 + 8);
	if (*(_DWORD*)v11 == CurrentThreadId)
	{
		++* v4;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(v4, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(v11, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v11 = CurrentThreadId;
	}
LABEL_10:
	if (*(_QWORD*)(a1 + 16))
		sub_140338730(*(__int64**)(a1 + 40), **(_QWORD***)(a1 + 48));
	v6 = **(_QWORD**)(a1 + 48);
	if (v6)
	{
		*(_QWORD*)(a1 + 16) = v6;
		v8 = *(_QWORD*)(v6 + 16);
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 24) = v8;
		v7 = 0;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = 0i64;
		v7 = -2147024858;
	}
	if (*v4 <= 1ui64)
	{
		*(_DWORD*)v11 = 0;
		_InterlockedExchange64(v4, 0i64);
		if (*(_QWORD*)(v11 + 16))
		{
			if (!*(_QWORD*)(v11 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v11 + 24));
		}
		return v7;
	}
	else
	{
		--* v4;
		return v7;
	}
}

