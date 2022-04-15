#include "../winhttp.h"

//----- (00000001401DA930) ----------------------------------------------------
__int64 __fastcall sub_1401DA930(_QWORD* a1, unsigned int a2)
{
	_QWORD* v4; // rcx
	__int64 v5; // r8
	__int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rbx
	HANDLE EventW; // rcx
	unsigned int CurrentThreadId; // eax
	__int64 v13; // rdx

	(*(void(__fastcall**)(_QWORD*)) * a1)(a1);
	v4 = (_QWORD*)a1[19];
	v5 = a1[2];
	v6 = 0i64;
	if (v4)
	{
		*v4 = a1[20];
		v7 = a1[20];
		v8 = a1[19];
		if (v7)
			*(_QWORD*)(v7 + 152) = v8;
		else
			*(_QWORD*)(v5 + 592) = v8;
		a1[19] = 0i64;
		a1[20] = 0i64;
	}
	v9 = *(_QWORD*)(a1[2] + 584i64);
	if (v9)
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 72i64))(v9, 1i64, v5);
	v10 = a1[2] + 664i64;
	if (*(_QWORD*)(a1[2] + 672i64) <= 1ui64)
	{
		*(_DWORD*)v10 = 0;
		_InterlockedExchange64((volatile __int64*)(v10 + 8), 0i64);
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
		--* (_QWORD*)(a1[2] + 672i64);
	}
	sub_14019E200(a1[4], a2, 0);
	CurrentThreadId = GetCurrentThreadId();
	v13 = CurrentThreadId;
	if (*(_DWORD*)v10 == CurrentThreadId)
	{
		++* (_QWORD*)(v10 + 8);
	}
	else
	{
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v10 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v10, CurrentThreadId);
				return (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 8i64))(a1, v13);
			}
		}
		*(_DWORD*)v10 = CurrentThreadId;
	}
	return (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 8i64))(a1, v13);
}
// 1401DAA88: variable 'v13' is possibly undefined

