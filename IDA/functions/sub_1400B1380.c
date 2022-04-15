#include "../winhttp.h"

//----- (00000001400B1380) ----------------------------------------------------
int __fastcall sub_1400B1380(__int64 a1, __int64 a2, __int64 a3)
{
	_DWORD* StackBase; // rsi
	int v5; // r15d
	int CurrentThreadId; // r10d
	__int64 v9; // rcx
	int* v10; // rdx
	__int64 v11; // rdi
	__int64 v12; // r8
	int* v13; // rdx
	LONGLONG v15; // rax
	__int64 v16; // rax
	float v17; // xmm0_4
	float LowPart; // xmm1_4
	_QWORD* v19; // rax
	unsigned __int64 v20; // rax
	HANDLE EventW; // rcx
	int v23; // [rsp+28h] [rbp-50h]
	__int64 v24; // [rsp+30h] [rbp-48h] BYREF
	__int64 v25; // [rsp+38h] [rbp-40h]
	LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+8h] BYREF

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v5 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(a1 + 16) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 24);
	}
	else
	{
		v9 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v9 >= 0x400)
			{
				sub_14019FB60(a1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 16) = CurrentThreadId;
	}
LABEL_8:
	v10 = *(int**)a2;
	v11 = -1i64;
	v12 = -1i64;
	do
		++v12;
	while (*((_BYTE*)v10 + v12));
	sub_14001B1A0(a1 + 80, v10, (int*)((char*)v10 + v12));
	*(_WORD*)(a1 + 112) = *(_WORD*)(a2 + 8);
	v13 = *(int**)a3;
	while (*((_BYTE*)v13 + ++v11) != 0)
		;
	sub_14001B1A0(a1 + 120, v13, (int*)((char*)v13 + v11));
	*(_WORD*)(a1 + 152) = *(_WORD*)(a3 + 8);
	*(_DWORD*)(a1 + 192) = 3;
	QueryPerformanceCounter(&PerformanceCount);
	v15 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	*(_QWORD*)(a1 + 400) = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	v16 = v15 - *(_QWORD*)(a1 + 392);
	v17 = (float)(int)v16;
	if (v16 < 0)
		v17 = v17 + 1.8446744e19;
	LowPart = (float)(int)Frequency.LowPart;
	if (Frequency.QuadPart < 0)
		LowPart = LowPart + 1.8446744e19;
	++* (_DWORD*)(a1 + 408);
	*(float*)(a1 + 412) = (float)(v17 / LowPart) + *(float*)(a1 + 412);
	v23 = *(unsigned __int16*)(a1 + 112);
	v19 = sub_14018EFA0(
		&v24,
		(__int64)L"%S:%u->%S:%u",
		*(_QWORD*)(a1 + 128),
		*(unsigned __int16*)(a1 + 152),
		*(_QWORD*)(a1 + 88),
		v23);
	sub_1400B28B0(a1, 1, (int*)v19[1]);
	if (v25)
		sub_14018B900(v25, 0);
	v20 = *(_QWORD*)(a1 + 24);
	if (v20 <= 1)
	{
		*(_DWORD*)(a1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 24), 0i64);
		v20 = *(_QWORD*)(a1 + 32);
		if (v20)
		{
			if (!*(_QWORD*)(a1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v20) = SetEvent(*(HANDLE*)(a1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 24);
	}
	*(StackBase - 1) = v5;
	return v20;
}
// 140A13148: using guessed type wchar_t aSUSU[13];

