#include "../winhttp.h"

//----- (00000001402AC1B0) ----------------------------------------------------
__int64 __fastcall sub_1402AC1B0(__int64 a1)
{
	_DWORD* v2; // rbx
	int CurrentThreadId; // eax
	int v4; // edx
	volatile signed __int64* v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	int v8; // esi
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rax
	HANDLE EventW; // rcx
	__int64 v14; // [rsp+40h] [rbp+8h]
	int v15; // [rsp+48h] [rbp+10h] BYREF
	int v16; // [rsp+4Ch] [rbp+14h]

	v2 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	v14 = (__int64)v2;
	CurrentThreadId = GetCurrentThreadId();
	v4 = *v2;
	v5 = (volatile signed __int64*)(v2 + 2);
	if (v4 == CurrentThreadId)
	{
		++* v5;
	}
	else
	{
		v6 = 0i64;
		while (_InterlockedCompareExchange64(v5, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v14, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v14 = CurrentThreadId;
	}
LABEL_8:
	if (*(int*)(a1 + 24) >= 2
		|| (v7 = *(_QWORD*)(a1 + 16), !*(_DWORD*)(v7 + 224))
		|| (v15 = 5,
			v16 = 1,
			v8 = (*(__int64(__fastcall**)(_QWORD, int*, __int64))(**(_QWORD**)(v7 + 6336) + 200i64))(
				*(_QWORD*)(v7 + 6336),
				&v15,
				a1 + 32),
			v8 >= 0))
	{
		v9 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 24) = 2;
		v10 = (_QWORD*)(v9 + 6912);
		if (!*(_QWORD*)(a1 + 40))
		{
			*(_QWORD*)(a1 + 40) = v10;
			*(_QWORD*)(a1 + 48) = *v10;
			*v10 = a1;
			v11 = *(_QWORD*)(a1 + 48);
			if (v11)
				*(_QWORD*)(v11 + 40) = a1 + 48;
		}
		v8 = 0;
	}
	if (*v5 <= 1ui64)
	{
		*(_DWORD*)v14 = 0;
		_InterlockedExchange64(v5, 0i64);
		if (*(_QWORD*)(v14 + 16))
		{
			if (!*(_QWORD*)(v14 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v14 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v14 + 24));
		}
		return (unsigned int)v8;
	}
	else
	{
		--* v5;
		return (unsigned int)v8;
	}
}

