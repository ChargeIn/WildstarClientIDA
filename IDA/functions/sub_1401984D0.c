#include "../winhttp.h"

//----- (00000001401984D0) ----------------------------------------------------
int __fastcall sub_1401984D0(__int64 a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	HANDLE EventW; // rcx

	v1 = qword_140C63740;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 48) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 56);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 56), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 48, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 48) = CurrentThreadId;
	}
LABEL_8:
	if (*(_QWORD*)(a1 + 32))
	{
		v5 = *(_QWORD**)(a1 + 16);
		*(_QWORD*)a1 = 0i64;
		*(_DWORD*)(a1 + 8) = 0;
		if (v5)
			*v5 = *(_QWORD*)(a1 + 24);
		v6 = *(_QWORD*)(a1 + 24);
		if (v6)
			*(_QWORD*)(v6 + 16) = *(_QWORD*)(a1 + 16);
		v7 = *(_QWORD**)(a1 + 32);
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_QWORD*)(a1 + 24) = 0i64;
		if (v7)
			*v7 = *(_QWORD*)(a1 + 40);
		v8 = *(_QWORD*)(a1 + 40);
		if (v8)
			*(_QWORD*)(v8 + 32) = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 40) = 0i64;
		--dword_140C890C8;
		++dword_140C890E0;
	}
	v9 = *(_QWORD*)(v1 + 56);
	if (v9 <= 1)
	{
		*(_DWORD*)(v1 + 48) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 56), 0i64);
		v9 = *(_QWORD*)(v1 + 64);
		if (v9)
		{
			if (!*(_QWORD*)(v1 + 72))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 72), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v9) = SetEvent(*(HANDLE*)(v1 + 72));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 56);
	}
	return v9;
}
// 140C63740: using guessed type __int64 qword_140C63740;
// 140C890C8: using guessed type int dword_140C890C8;
// 140C890E0: using guessed type int dword_140C890E0;

