#include "../winhttp.h"

//----- (0000000140346C20) ----------------------------------------------------
int __fastcall sub_140346C20(int a1, __int64 a2)
{
	_DWORD* StackBase; // rdi
	int v3; // r14d
	int CurrentThreadId; // r9d
	__int64 v7; // rdx
	__int64* v8; // rsi
	__int64 v9; // rbx
	__int64 v10; // r13
	int* v11; // rax
	int* v12; // r12
	int result; // eax
	HANDLE EventW; // rcx
	__int64 v15; // [rsp+28h] [rbp-40h]

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v3 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA50 == CurrentThreadId)
	{
		++qword_140C7AA58;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA58, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA50, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA50) = CurrentThreadId;
	}
LABEL_8:
	if (!*(_DWORD*)(a2 + 84))
	{
		_InterlockedIncrement((volatile signed __int32*)(a2 + 12));
		LODWORD(v15) = a1;
		v8 = &qword_140C7AA30[2 * qword_140C65870];
		v9 = v8[1];
		v10 = v9 + 1;
		v11 = sub_14018DB00(*v8, v9 + 1, 16i64);
		v9 *= 2i64;
		*(_QWORD*)&v11[2 * v9] = a2;
		*(_QWORD*)&v11[2 * v9 + 2] = v15;
		v12 = v11;
		if ((int*)*v8 != v11)
		{
			sub_1407DB590(v11, (int*)*v8, 16 * v8[1]);
			if (*v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v8 - 16) + 8i64))(*v8 - 16);
			*v8 = (__int64)v12;
		}
		v8[1] = v10;
		if (a1 < 0)
			*(_DWORD*)(a2 + 84) = 1;
	}
	result = qword_140C7AA58;
	if ((unsigned __int64)qword_140C7AA58 <= 1)
	{
		LODWORD(qword_140C7AA50) = 0;
		_InterlockedExchange64(&qword_140C7AA58, 0i64);
		result = qword_140C7AA60;
		if (qword_140C7AA60)
		{
			if (!qword_140C7AA68)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA68, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			result = SetEvent(qword_140C7AA68);
		}
		*(StackBase - 1) = v3;
	}
	else
	{
		--qword_140C7AA58;
		*(StackBase - 1) = v3;
	}
	return result;
}
// 140346D11: variable 'v15' is possibly undefined
// 140C65870: using guessed type __int64 qword_140C65870;
// 140C7AA30: using guessed type __int64 qword_140C7AA30[];
// 140C7AA50: using guessed type __int64 qword_140C7AA50;
// 140C7AA58: using guessed type __int64 qword_140C7AA58;
// 140C7AA60: using guessed type __int64 qword_140C7AA60;

