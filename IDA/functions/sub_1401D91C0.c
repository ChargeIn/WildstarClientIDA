#include "../winhttp.h"

//----- (00000001401D91C0) ----------------------------------------------------
_QWORD* __fastcall sub_1401D91C0(_QWORD* a1, __int64 a2, __int64 a3, void(__fastcall*** a4)(_QWORD), __int64 a5)
{
	__int64 v8; // rax
	__int64 v9; // rbp
	unsigned int* v10; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v12; // rdx
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	HANDLE EventW; // rcx

	sub_1401DA420((__int64)a1, a2, a5);
	a1[22] = a3;
	a1[23] = a4;
	*a1 = off_140B5FF20;
	(**a4)(a4);
	v8 = a1[2];
	a1[24] = 0i64;
	v9 = *(_QWORD*)(v8 + 16);
	v10 = (unsigned int*)(v9 + 4856);
	CurrentThreadId = GetCurrentThreadId();
	v12 = CurrentThreadId;
	if (*(_DWORD*)(v9 + 4856) == CurrentThreadId)
	{
		++* (_QWORD*)(v9 + 4864);
	}
	else
	{
		v13 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 4864), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v13 >= 0x400)
			{
				sub_14019FB60(v9 + 4856, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v10 = CurrentThreadId;
	}
LABEL_8:
	++* (_QWORD*)(v9 + 4776);
	v14 = (*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)a1[23] + 16i64))(a1[23], v12);
	v15 = *(_QWORD*)(v9 + 4768);
	*(_QWORD*)(v9 + 4784) += v14;
	*(_QWORD*)(v9 + 4768) = v15 + 1;
	if (!v15)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 4848) + 24i64))(*(_QWORD*)(v9 + 4848));
	if (*(_QWORD*)(v9 + 4864) <= 1ui64)
	{
		*v10 = 0;
		_InterlockedExchange64((volatile __int64*)(v9 + 4864), 0i64);
		if (*(_QWORD*)(v9 + 4872))
		{
			if (!*(_QWORD*)(v9 + 4880))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 4880), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v9 + 4880));
		}
	}
	else
	{
		--* (_QWORD*)(v9 + 4864);
	}
	return a1;
}
// 1401D9275: variable 'v12' is possibly undefined
// 140B5FF20: using guessed type __int64 (__fastcall *off_140B5FF20[13])();

