#include "../winhttp.h"

//----- (000000014027D3D0) ----------------------------------------------------
int __fastcall sub_14027D3D0(__int64 a1)
{
	__int64 v2; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	HANDLE EventW; // rcx

	v2 = a1 + 6368;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v2 == CurrentThreadId)
	{
		++* (_QWORD*)(v2 + 8);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v2, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v2 = CurrentThreadId;
	}
LABEL_8:
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 120i64))(
		*(_QWORD*)(a1 + 6352),
		*(_QWORD*)(a1 + 8144),
		0i64);
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 152i64))(
		*(_QWORD*)(a1 + 6352),
		*(_QWORD*)(a1 + 8144),
		dword_140AE8000[*(int*)(a1 + 8152)],
		*(unsigned int*)(a1 + 8156));
	v5 = *(_QWORD*)(v2 + 8);
	if (v5 <= 1)
	{
		*(_DWORD*)v2 = 0;
		_InterlockedExchange64((volatile __int64*)(v2 + 8), 0i64);
		v5 = *(_QWORD*)(v2 + 16);
		if (v5)
		{
			if (!*(_QWORD*)(v2 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v2 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v5) = SetEvent(*(HANDLE*)(v2 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v2 + 8);
	}
	return v5;
}
// 140AE8000: using guessed type unsigned int dword_140AE8000[4];

