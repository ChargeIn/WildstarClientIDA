#include "../winhttp.h"

//----- (0000000140198370) ----------------------------------------------------
int __fastcall sub_140198370(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v3; // rbx
	int CurrentThreadId; // r10d
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	_QWORD* v12; // rdx
	unsigned __int64 v13; // rax
	HANDLE EventW; // rcx

	v3 = qword_140C63740;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v3 + 48) == CurrentThreadId)
	{
		++* (_QWORD*)(v3 + 56);
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 56), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v3 + 48, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v3 + 48) = CurrentThreadId;
	}
LABEL_8:
	*(_QWORD*)a1 = a2;
	*(_DWORD*)(a1 + 8) = sub_14018CDF0();
	if (!*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)(a1 + 16) = a3;
		*(_QWORD*)(a1 + 24) = *a3;
		*a3 = a1;
		v9 = *(_QWORD*)(a1 + 24);
		if (v9)
			*(_QWORD*)(v9 + 16) = a1 + 24;
	}
	if (!*(_QWORD*)(a1 + 32))
	{
		v10 = qword_140C63740;
		v11 = *(_QWORD*)(qword_140C63740 + 32);
		*(_QWORD*)(a1 + 40) = qword_140C63740;
		*(_QWORD*)(a1 + 32) = v11;
		v12 = *(_QWORD**)(a1 + 32);
		if (v12)
			*v12 = a1;
		*(_QWORD*)(v10 + 32) = a1 + 40;
	}
	++dword_140C890C8;
	LODWORD(qword_140C890CC) = qword_140C890CC + 1;
	v13 = *(_QWORD*)(v3 + 56);
	if (v13 <= 1)
	{
		*(_DWORD*)(v3 + 48) = 0;
		_InterlockedExchange64((volatile __int64*)(v3 + 56), 0i64);
		v13 = *(_QWORD*)(v3 + 64);
		if (v13)
		{
			if (!*(_QWORD*)(v3 + 72))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v3 + 72), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v13) = SetEvent(*(HANDLE*)(v3 + 72));
		}
	}
	else
	{
		--* (_QWORD*)(v3 + 56);
	}
	return v13;
}
// 140C63740: using guessed type __int64 qword_140C63740;
// 140C890C8: using guessed type int dword_140C890C8;
// 140C890CC: using guessed type __int64 qword_140C890CC;

