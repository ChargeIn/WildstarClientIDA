#include "../winhttp.h"

//----- (00000001401DA7C0) ----------------------------------------------------
__int64 __fastcall sub_1401DA7C0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rdx
	__int64 v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbx
	HANDLE EventW; // rcx
	unsigned int CurrentThreadId; // eax
	__int64 v11; // rdx

	(**(void(__fastcall***)(__int64))a1)(a1);
	v2 = *(_QWORD**)(a1 + 152);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = 0i64;
	if (v2)
	{
		*v2 = *(_QWORD*)(a1 + 160);
		v5 = *(_QWORD*)(a1 + 160);
		v6 = *(_QWORD*)(a1 + 152);
		if (v5)
			*(_QWORD*)(v5 + 152) = v6;
		else
			*(_QWORD*)(v3 + 592) = v6;
		*(_QWORD*)(a1 + 152) = 0i64;
		*(_QWORD*)(a1 + 160) = 0i64;
	}
	v7 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 584i64);
	if (v7)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 72i64))(v7, 1i64);
	v8 = *(_QWORD*)(a1 + 16) + 664i64;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 16) + 672i64) <= 1ui64)
	{
		*(_DWORD*)v8 = 0;
		_InterlockedExchange64((volatile __int64*)(v8 + 8), 0i64);
		if (*(_QWORD*)(v8 + 16))
		{
			if (!*(_QWORD*)(v8 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v8 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(*(_QWORD*)(a1 + 16) + 672i64);
	}
	sub_14019E200(*(_QWORD*)(a1 + 32), 0i64, 0);
	if (*(_DWORD*)(a1 + 40))
		sub_140195960(a1 + 80, 0, a1 + 48, 2);
	CurrentThreadId = GetCurrentThreadId();
	v11 = CurrentThreadId;
	if (*(_DWORD*)v8 == CurrentThreadId)
	{
		++* (_QWORD*)(v8 + 8);
	}
	else
	{
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v8, CurrentThreadId);
				return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, v11);
			}
		}
		*(_DWORD*)v8 = CurrentThreadId;
	}
	return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, v11);
}
// 1401DA920: variable 'v11' is possibly undefined

