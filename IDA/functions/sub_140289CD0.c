#include "../winhttp.h"

//----- (0000000140289CD0) ----------------------------------------------------
__int64 __fastcall sub_140289CD0(__int64 a1, unsigned int a2)
{
	_DWORD* v5; // rbx
	unsigned int CurrentThreadId; // eax
	int v7; // ecx
	__int64 v8; // rdx
	volatile signed __int64* v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rax
	bool v13; // cc
	__int64 v14; // rdx
	int v15; // ebp
	HANDLE EventW; // rcx
	__int64 v17; // [rsp+50h] [rbp+8h]

	if (a2 == *(_DWORD*)(a1 + 24))
		return 0i64;
	v5 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v17 = (__int64)v5;
	CurrentThreadId = GetCurrentThreadId();
	v7 = *v5;
	v8 = CurrentThreadId;
	v9 = (volatile signed __int64*)(v5 + 2);
	if (v7 == CurrentThreadId)
	{
		++* v9;
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64(v9, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(v17, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v17 = CurrentThreadId;
	}
LABEL_10:
	if (*(int*)(a1 + 32) >= 1)
	{
		v11 = *(_QWORD*)(a1 + 40);
		if (v11)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 16i64))(v11, v8);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_DWORD*)(a1 + 48) = 0;
	}
	v12 = *(int*)(a1 + 28);
	*(_DWORD*)(a1 + 32) = 0;
	_InterlockedExchangeAdd((volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 48 * v12 + 344), a2 - *(_DWORD*)(a1 + 24));
	v13 = *(_DWORD*)(a1 + 32) < 1;
	*(_DWORD*)(a1 + 24) = a2;
	if (!v13
		|| (v14 = *(_QWORD*)(a1 + 16),
			v15 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _QWORD))(**(_QWORD**)(v14 + 6608)
				+ 208i64))(
					*(_QWORD*)(v14 + 6608),
					a2,
					*(unsigned int*)(*(_QWORD*)(v14 + 7048) + 4i64 * *(int*)(a1 + 28)),
					0i64,
					*(_DWORD*)(*(_QWORD*)(v14 + 7056) + 4i64 * *(int*)(a1 + 28)),
					a1 + 40,
					0i64),
			v15 >= 0))
	{
		*(_DWORD*)(a1 + 32) = 2;
		v15 = 0;
	}
	if (*v9 <= 1ui64)
	{
		*(_DWORD*)v17 = 0;
		_InterlockedExchange64(v9, 0i64);
		if (*(_QWORD*)(v17 + 16))
		{
			if (!*(_QWORD*)(v17 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v17 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v17 + 24));
		}
	}
	else
	{
		--* v9;
	}
	return (unsigned int)v15;
}
// 140289D6C: variable 'v8' is possibly undefined

