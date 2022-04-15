#include "../winhttp.h"

//----- (00000001401D9D90) ----------------------------------------------------
__int64 __fastcall sub_1401D9D90(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rbp
	unsigned int* v7; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	HANDLE EventW; // rcx

	*(_QWORD*)a1 = off_140B600E0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_DWORD*)(a1 + 80) = 1414420037;
	*(_DWORD*)(a1 + 148) = 3;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 8) = 1;
	(**(void(__fastcall***)(__int64))a2)(a2);
	v4 = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = v4;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)a1 = off_140B60000;
	v5 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_DWORD*)(a1 + 168) = 0;
	v6 = *(_QWORD*)(v5 + 16);
	v7 = (unsigned int*)(v6 + 4856);
	CurrentThreadId = GetCurrentThreadId();
	v9 = CurrentThreadId;
	if (*(_DWORD*)(v6 + 4856) == CurrentThreadId)
	{
		++* (_QWORD*)(v6 + 4864);
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 4864), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v6 + 4856, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v7 = CurrentThreadId;
	}
LABEL_8:
	v11 = *(_QWORD*)(v6 + 4768);
	*(_QWORD*)(v6 + 4768) = v11 + 1;
	if (!v11)
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v6 + 4848) + 24i64))(*(_QWORD*)(v6 + 4848), v9);
	if (*(_QWORD*)(v6 + 4864) <= 1ui64)
	{
		*v7 = 0;
		_InterlockedExchange64((volatile __int64*)(v6 + 4864), 0i64);
		if (*(_QWORD*)(v6 + 4872))
		{
			if (!*(_QWORD*)(v6 + 4880))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 4880), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v6 + 4880));
		}
	}
	else
	{
		--* (_QWORD*)(v6 + 4864);
	}
	return a1;
}
// 1401D9E96: variable 'v9' is possibly undefined
// 140B60000: using guessed type __int64 (__fastcall *off_140B60000[13])();
// 140B600E0: using guessed type __int64 (__fastcall *off_140B600E0[8])();

