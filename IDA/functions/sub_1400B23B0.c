#include "../winhttp.h"

//----- (00000001400B23B0) ----------------------------------------------------
int __fastcall sub_1400B23B0(__int64 a1, int a2)
{
	int CurrentThreadId; // r9d
	__int64 v5; // rcx
	int* v6; // r14
	__int64 v7; // rdi
	int* v8; // rax
	int* v9; // r15
	int* v10; // rbp
	unsigned __int64 v11; // rax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 24);
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60(a1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 16) = CurrentThreadId;
	}
LABEL_8:
	v6 = sub_14018B280(2i64, 0);
	sub_1407DB590(v6, dword_1409D17DC, 0i64);
	if (v6)
		*(_WORD*)v6 = 0;
	v7 = *(_QWORD*)(a1 + 56);
	v8 = sub_14018B280(72i64, 0);
	v9 = v8;
	v10 = v8 + 4;
	if (v8 != (int*)-16i64)
	{
		*v10 = a2;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		sub_14001C1B0((_QWORD*)v8 + 3, v6, (__int64)v6);
		*((_QWORD*)v10 + 5) = 0i64;
		*((_QWORD*)v10 + 6) = 0i64;
	}
	*(_QWORD*)v9 = v7;
	*((_QWORD*)v9 + 1) = *(_QWORD*)(v7 + 8);
	**(_QWORD**)(v7 + 8) = v9;
	*(_QWORD*)(v7 + 8) = v9;
	if (v6)
		sub_14018B900((__int64)v6, 0);
	*(_DWORD*)(a1 + 64) = a2;
	v11 = *(_QWORD*)(a1 + 24);
	if (v11 <= 1)
	{
		*(_DWORD*)(a1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 24), 0i64);
		v11 = *(_QWORD*)(a1 + 32);
		if (v11)
		{
			if (!*(_QWORD*)(a1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v11) = SetEvent(*(HANDLE*)(a1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 24);
	}
	return v11;
}
// 1409D17DC: using guessed type int dword_1409D17DC[16];

