#include "../winhttp.h"

//----- (0000000140288EE0) ----------------------------------------------------
__int64 __fastcall sub_140288EE0(__int64 a1)
{
	_DWORD* v2; // rbx
	unsigned int CurrentThreadId; // eax
	int v4; // edx
	__int64 v5; // r8
	volatile signed __int64* v6; // rbx
	__int64 v7; // rcx
	bool v8; // zf
	unsigned int v9; // edi
	HANDLE EventW; // rcx
	__int64 v12; // [rsp+40h] [rbp+8h]

	v2 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v12 = (__int64)v2;
	CurrentThreadId = GetCurrentThreadId();
	v4 = *v2;
	v5 = CurrentThreadId;
	v6 = (volatile signed __int64*)(v2 + 2);
	if (v4 == CurrentThreadId)
	{
		++* v6;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(v6, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(v12, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v12 = CurrentThreadId;
	}
LABEL_8:
	v8 = (*(_DWORD*)(a1 + 8))-- == 1;
	v9 = *(_DWORD*)(a1 + 8);
	if (v8)
	{
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 16i64))(a1, 1i64, v5);
		v9 = 0;
	}
	if (*v6 <= 1ui64)
	{
		*(_DWORD*)v12 = 0;
		_InterlockedExchange64(v6, 0i64);
		if (*(_QWORD*)(v12 + 16))
		{
			if (!*(_QWORD*)(v12 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v12 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v12 + 24));
		}
	}
	else
	{
		--* v6;
	}
	return v9;
}
// 140288F6F: variable 'v5' is possibly undefined

