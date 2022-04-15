#include "../winhttp.h"

//----- (00000001401D8D20) ----------------------------------------------------
__int64 __fastcall sub_1401D8D20(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rax
	__int64 v7; // rdi
	unsigned int* v8; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rcx
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
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)a1 = off_140B5FEB0;
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_DWORD*)(a1 + 168) = 0;
	*(_QWORD*)(a1 + 176) = a3;
	v7 = *(_QWORD*)(v6 + 16);
	v8 = (unsigned int*)(v7 + 4856);
	CurrentThreadId = GetCurrentThreadId();
	v10 = CurrentThreadId;
	if (*(_DWORD*)(v7 + 4856) == CurrentThreadId)
	{
		++* (_QWORD*)(v7 + 4864);
	}
	else
	{
		v11 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 4864), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v11 >= 0x400)
			{
				sub_14019FB60(v7 + 4856, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v8 = CurrentThreadId;
	}
LABEL_8:
	v12 = *(_QWORD*)(v7 + 4768);
	*(_QWORD*)(v7 + 4768) = v12 + 1;
	if (!v12)
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v7 + 4848) + 24i64))(*(_QWORD*)(v7 + 4848), v10);
	if (*(_QWORD*)(v7 + 4864) <= 1ui64)
	{
		*v8 = 0;
		_InterlockedExchange64((volatile __int64*)(v7 + 4864), 0i64);
		if (*(_QWORD*)(v7 + 4872))
		{
			if (!*(_QWORD*)(v7 + 4880))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 4880), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v7 + 4880));
		}
	}
	else
	{
		--* (_QWORD*)(v7 + 4864);
	}
	return a1;
}
// 1401D8E35: variable 'v10' is possibly undefined
// 140B5FEB0: using guessed type __int64 (__fastcall *off_140B5FEB0[13])();
// 140B600E0: using guessed type __int64 (__fastcall *off_140B600E0[8])();

