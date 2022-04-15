#include "../winhttp.h"

//----- (0000000140297CF0) ----------------------------------------------------
__int64 __fastcall sub_140297CF0(__int64 a1)
{
	int CurrentThreadId; // r8d
	volatile signed __int64* v3; // rbx
	__int64 v4; // rcx
	int v5; // esi
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rax
	HANDLE EventW; // rcx
	__int64 v11; // [rsp+30h] [rbp+8h]

	v11 = *(_QWORD*)(a1 + 16) + 24i64;
	CurrentThreadId = GetCurrentThreadId();
	v3 = (volatile signed __int64*)(v11 + 8);
	if (*(_DWORD*)v11 == CurrentThreadId)
	{
		++* v3;
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64(v3, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v11, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v11 = CurrentThreadId;
	}
LABEL_8:
	if (*(int*)(a1 + 24) < 2)
	{
		v5 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6608i64) + 944i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6608i64),
			9i64,
			a1 + 32);
		if (v5 < 0)
			goto LABEL_15;
		*(_DWORD*)(a1 + 40) = 0;
	}
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = 2;
	v7 = (_QWORD*)(v6 + 7264);
	if (!*(_QWORD*)(a1 + 48))
	{
		*(_QWORD*)(a1 + 48) = v7;
		*(_QWORD*)(a1 + 56) = *v7;
		*v7 = a1;
		v8 = *(_QWORD*)(a1 + 56);
		if (v8)
			*(_QWORD*)(v8 + 48) = a1 + 56;
	}
	v5 = 0;
LABEL_15:
	if (*v3 <= 1ui64)
	{
		*(_DWORD*)v11 = 0;
		_InterlockedExchange64(v3, 0i64);
		if (*(_QWORD*)(v11 + 16))
		{
			if (!*(_QWORD*)(v11 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v11 + 24));
		}
		return (unsigned int)v5;
	}
	else
	{
		--* v3;
		return (unsigned int)v5;
	}
}

