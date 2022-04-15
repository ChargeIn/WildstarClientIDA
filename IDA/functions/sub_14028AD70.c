#include "../winhttp.h"

//----- (000000014028AD70) ----------------------------------------------------
__int64 __fastcall sub_14028AD70(__int64 a1, int a2, int a3, int a4)
{
	__int64 v4; // rbx
	int CurrentThreadId; // eax
	int v7; // ecx
	volatile signed __int64* v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // r8
	int v11; // esi
	__int64 v12; // rax
	__int64 v13; // rdx
	volatile signed __int32* v14; // rdx
	_QWORD* v15; // rcx
	__int64 v16; // rax
	HANDLE EventW; // rcx
	__int64 v19; // [rsp+50h] [rbp+8h]

	v4 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = a2;
	*(_DWORD*)(a1 + 28) = a3;
	v19 = v4 + 24;
	*(_DWORD*)(a1 + 32) = a4;
	CurrentThreadId = GetCurrentThreadId();
	v7 = *(_DWORD*)(v4 + 24);
	v8 = (volatile signed __int64*)(v4 + 32);
	if (v7 == CurrentThreadId)
	{
		++* v8;
	}
	else
	{
		v9 = 0i64;
		while (_InterlockedCompareExchange64(v8, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v9 >= 0x400)
			{
				sub_14019FB60(v19, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v19 = CurrentThreadId;
	}
LABEL_8:
	if (*(int*)(a1 + 36) >= 1
		|| (v10 = *(_QWORD*)(a1 + 16),
			v11 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _QWORD))(**(_QWORD**)(v10 + 6608)
				+ 216i64))(
					*(_QWORD*)(v10 + 6608),
					*(unsigned int*)(a1 + 24),
					*(unsigned int*)(*(_QWORD*)(v10 + 7048) + 4i64 * *(int*)(a1 + 32)),
					*((unsigned int*)&unk_140AE79F8 + *(int*)(a1 + 28)),
					*(_DWORD*)(*(_QWORD*)(v10 + 7056) + 4i64 * *(int*)(a1 + 32)),
					a1 + 40,
					0i64),
			v11 >= 0))
	{
		v12 = *(int*)(a1 + 32);
		v13 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 36) = 2;
		v14 = (volatile signed __int32*)(48 * v12 + v13 + 532);
		_InterlockedIncrement(v14);
		_InterlockedExchangeAdd(v14 + 1, *(_DWORD*)(a1 + 24));
		_InterlockedIncrement(v14 + 2);
		_InterlockedExchangeAdd(v14 + 3, *(_DWORD*)(a1 + 24));
		v15 = (_QWORD*)(*(_QWORD*)(a1 + 16) + 7200i64);
		if (!*(_QWORD*)(a1 + 56))
		{
			*(_QWORD*)(a1 + 56) = v15;
			*(_QWORD*)(a1 + 64) = *v15;
			*v15 = a1;
			v16 = *(_QWORD*)(a1 + 64);
			if (v16)
				*(_QWORD*)(v16 + 56) = a1 + 64;
		}
		v11 = 0;
	}
	if (*v8 <= 1ui64)
	{
		*(_DWORD*)v19 = 0;
		_InterlockedExchange64(v8, 0i64);
		if (*(_QWORD*)(v19 + 16))
		{
			if (!*(_QWORD*)(v19 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v19 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v19 + 24));
		}
		return (unsigned int)v11;
	}
	else
	{
		--* v8;
		return (unsigned int)v11;
	}
}

