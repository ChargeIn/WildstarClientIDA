#include "../winhttp.h"

//----- (00000001400B1860) ----------------------------------------------------
int __fastcall sub_1400B1860(__int64 a1, __int64 a2)
{
	_DWORD* StackBase; // rsi
	int v4; // r14d
	unsigned int CurrentThreadId; // eax
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // r9
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rax
	_QWORD* v13; // rax
	unsigned __int64 v14; // rax
	HANDLE EventW; // rcx
	__int64 v17; // [rsp+20h] [rbp-38h] BYREF
	__int64 v18; // [rsp+28h] [rbp-30h]

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v4 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	CurrentThreadId = GetCurrentThreadId();
	v8 = *(unsigned int*)(a1 + 16);
	v9 = CurrentThreadId;
	if ((_DWORD)v8 == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 24);
	}
	else
	{
		v10 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 24), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v10 >= 0x400)
			{
				sub_14019FB60(a1 + 16, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(a1 + 16) = CurrentThreadId;
	}
LABEL_8:
	v11 = (**(__int64(__fastcall***)(__int64, __int64, __int64, __int64))a2)(a2, v7, v8, v9);
	v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	++* (_QWORD*)(a1 + 368);
	++* (_DWORD*)(a1 + 360);
	v13 = sub_14018EFA0(&v17, (__int64)L"CNpStsConnectionManager::OnUnmatchedMessage(%S:%S)", v11, v12);
	sub_1400B28B0(a1, 4, (int*)v13[1]);
	if (v18)
		sub_14018B900(v18, 0);
	v14 = *(_QWORD*)(a1 + 24);
	if (v14 <= 1)
	{
		*(_DWORD*)(a1 + 16) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 24), 0i64);
		v14 = *(_QWORD*)(a1 + 32);
		if (v14)
		{
			if (!*(_QWORD*)(a1 + 40))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 40), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v14) = SetEvent(*(HANDLE*)(a1 + 40));
		}
	}
	else
	{
		--* (_QWORD*)(a1 + 24);
	}
	*(StackBase - 1) = v4;
	return v14;
}
// 1400B18E7: variable 'v7' is possibly undefined
// 1400B18E7: variable 'v8' is possibly undefined
// 1400B18E7: variable 'v9' is possibly undefined
// 140A130E0: using guessed type wchar_t aCnpstsconnecti[51];

