#include "../winhttp.h"

//----- (0000000140312AB0) ----------------------------------------------------
int __fastcall sub_140312AB0(__int64 a1, __int64 a2)
{
	int CurrentThreadId; // edx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	unsigned __int64 v9; // r8
	unsigned __int64 v10; // rcx
	__int64 v11; // rdx
	unsigned __int64 v12; // rax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 104) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 112);
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 112), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(a1 + 104, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 104) = CurrentThreadId;
	}
LABEL_8:
	v6 = *(_QWORD**)(a2 + 32);
	if (v6)
		*v6 = *(_QWORD*)(a2 + 40);
	v7 = *(_QWORD*)(a2 + 40);
	if (v7)
		*(_QWORD*)(v7 + 32) = *(_QWORD*)(a2 + 32);
	*(_QWORD*)(a2 + 32) = 0i64;
	*(_QWORD*)(a2 + 40) = 0i64;
	v8 = *(unsigned int*)(a1 + 480);
	v9 = *(_QWORD*)(a1 + 472);
	v10 = v8;
	if (v8 < v9)
	{
		v11 = *(_QWORD*)(a1 + 464);
		while (a2 != *(_QWORD*)(v11 + 8 * v10))
		{
			v8 = (unsigned int)(v8 + 1);
			v10 = (unsigned int)v8;
			if ((unsigned int)v8 >= v9)
				goto LABEL_18;
		}
		*(_QWORD*)(v11 + 8 * v8) = 0i64;
	}
LABEL_18:
	v12 = *(_QWORD*)(a1 + 112);
	if (v12 <= 1)
	{
		*(_DWORD*)(a1 + 104) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 112), 0i64);
		v12 = *(_QWORD*)(a1 + 120);
		if (v12)
		{
			if (!*(_QWORD*)(a1 + 128))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 128), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v12) = SetEvent(*(HANDLE*)(a1 + 128));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 112);
	}
	return v12;
}

