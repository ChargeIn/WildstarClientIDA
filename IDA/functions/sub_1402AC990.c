#include "../winhttp.h"

//----- (00000001402AC990) ----------------------------------------------------
__int64 __fastcall sub_1402AC990(_QWORD* a1)
{
	_DWORD* v2; // rbx
	int CurrentThreadId; // eax
	int v4; // edx
	volatile signed __int64* v5; // rbx
	__int64 v6; // rcx
	int v7; // edi
	_QWORD* v8; // rcx
	__int64 v9; // rax
	HANDLE EventW; // rcx
	__int64 v12; // [rsp+30h] [rbp+8h]

	v2 = (_DWORD*)(a1[4] + 24i64);
	v12 = (__int64)v2;
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
				sub_14019FB60(v12, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v12 = CurrentThreadId;
	}
LABEL_8:
	v7 = sub_1402ACB10((__int64)a1, 2);
	if (v7 >= 0)
	{
		v8 = (_QWORD*)(a1[4] + 6928i64);
		if (!a1[1])
		{
			a1[1] = v8;
			a1[2] = *v8;
			*v8 = a1;
			v9 = a1[2];
			if (v9)
				*(_QWORD*)(v9 + 8) = a1 + 2;
		}
		v7 = 0;
	}
	if (*v5 <= 1ui64)
	{
		*(_DWORD*)v12 = 0;
		_InterlockedExchange64(v5, 0i64);
		if (*(_QWORD*)(v12 + 16))
		{
			if (!*(_QWORD*)(v12 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v12 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v12 + 24));
		}
	}
	else
	{
		--* v5;
	}
	return (unsigned int)v7;
}

