#include "../winhttp.h"

//----- (000000014027BAB0) ----------------------------------------------------
__int64 __fastcall sub_14027BAB0(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, __int64* a9)
{
	int* v15; // rbx
	int CurrentThreadId; // eax
	int v17; // ecx
	volatile signed __int64* v18; // rbx
	__int64 v19; // rcx
	int* v20; // rax
	__int64 v21; // rdi
	int v22; // ebp
	HANDLE EventW; // rcx
	__int64 v24; // [rsp+A0h] [rbp+48h]

	if (!a9)
		return 2147942487i64;
	v15 = (int*)(a1 + 24);
	v24 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v17 = *v15;
	v18 = (volatile signed __int64*)(v24 + 8);
	if (v17 == CurrentThreadId)
	{
		++* v18;
	}
	else
	{
		v19 = 0i64;
		while (_InterlockedCompareExchange64(v18, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v19 >= 0x400)
			{
				sub_14019FB60(v24, CurrentThreadId);
				goto LABEL_10;
			}
		}
		*(_DWORD*)v24 = CurrentThreadId;
	}
LABEL_10:
	v20 = sub_14018B280(584i64, 0);
	if (v20)
		v21 = sub_1402A5FB0((__int64)v20, a1);
	else
		v21 = 0i64;
	v22 = sub_1402A6550(v21, a2, a3, a4, a5, a6, a7, a8);
	if (v22 >= 0)
	{
		*a9 = v21;
		v22 = 0;
	}
	else if (v21)
	{
		sub_1402A61A0(v21);
		sub_14018B900(v21, 0);
	}
	if (*v18 <= 1ui64)
	{
		*(_DWORD*)v24 = 0;
		_InterlockedExchange64(v18, 0i64);
		if (*(_QWORD*)(v24 + 16))
		{
			if (!*(_QWORD*)(v24 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v24 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v24 + 24));
		}
	}
	else
	{
		--* v18;
	}
	return (unsigned int)v22;
}

