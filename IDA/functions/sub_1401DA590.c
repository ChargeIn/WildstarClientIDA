#include "../winhttp.h"

//----- (00000001401DA590) ----------------------------------------------------
int __fastcall sub_1401DA590(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rax
	unsigned __int64 v10; // rax
	HANDLE EventW; // rcx

	v2 = a1[2];
	a1[4] = a2;
	v4 = v2 + 664;
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
	v8 = a1[2];
	v9 = *(_QWORD*)(v8 + 592);
	a1[20] = 0i64;
	a1[19] = v9;
	**(_QWORD**)(v8 + 592) = a1;
	*(_QWORD*)(v8 + 592) = a1 + 20;
	if (a1 == *(_QWORD**)(a1[2] + 584i64))
		(*(void(__fastcall**)(_QWORD*, _QWORD, __int64))(*a1 + 72i64))(a1, 0i64, v6);
	v10 = *(_QWORD*)(v4 + 8);
	if (v10 <= 1)
	{
		*(_DWORD*)v4 = 0;
		_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
		v10 = *(_QWORD*)(v4 + 16);
		if (v10)
		{
			if (!*(_QWORD*)(v4 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v10) = SetEvent(*(HANDLE*)(v4 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v4 + 8);
	}
	return v10;
}
// 1401DA63A: variable 'v6' is possibly undefined

