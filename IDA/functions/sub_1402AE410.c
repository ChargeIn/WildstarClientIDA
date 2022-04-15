#include "../winhttp.h"

//----- (00000001402AE410) ----------------------------------------------------
int __fastcall sub_1402AE410(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v6; // r8
	__int64 v7; // rcx
	_QWORD* i; // rax
	unsigned __int64 v9; // rax
	HANDLE EventW; // rcx

	v2 = a1[2];
	a1[5] = a2;
	v4 = v2 + 6784;
	CurrentThreadId = GetCurrentThreadId();
	v6 = CurrentThreadId;
	if (*(_DWORD*)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v4 + 8);
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60(v4, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v4 = CurrentThreadId;
	}
LABEL_8:
	if (!a1[8])
	{
		for (i = (_QWORD*)(a1[2] + 6824i64); *i; i = (_QWORD*)(*i + 72i64))
			;
		a1[8] = i;
		a1[9] = 0i64;
		*i = a1;
	}
	(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1[2] + 6816i64) + 16i64))(
		*(_QWORD*)(a1[2] + 6816i64),
		1i64,
		v6);
	v9 = *(_QWORD*)(v4 + 8);
	if (v9 <= 1)
	{
		*(_DWORD*)v4 = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
		v9 = *(_QWORD*)(v4 + 16);
		if (v9)
		{
			if (!*(_QWORD*)(v4 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v9) = SetEvent(*(HANDLE*)(v4 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 8);
	}
	return v9;
}
// 1402AE4B7: variable 'v6' is possibly undefined

