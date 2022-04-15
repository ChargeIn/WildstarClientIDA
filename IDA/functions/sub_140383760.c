#include "../winhttp.h"

//----- (0000000140383760) ----------------------------------------------------
void __fastcall sub_140383760(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rbx
	int CurrentThreadId; // edx
	__int64 v6; // rcx
	__int64 v7; // rdx
	_QWORD* v8; // rcx
	__int64 v9; // rax
	HANDLE EventW; // rcx
	int v11[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = a1[108];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2);
		v3 = a1[108];
		v11[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v11);
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[108] + 8i64))(a1[108]);
		a1[108] = 0i64;
	}
	if (a1[110])
	{
		v4 = *a1 + 2512i64;
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)v4 == CurrentThreadId)
		{
			++* (_QWORD*)(v4 + 8);
		}
		else
		{
			v6 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v6 >= 0x400)
				{
					sub_14019FB60(v4, CurrentThreadId);
					goto LABEL_11;
				}
			}
			*(_DWORD*)v4 = CurrentThreadId;
		}
	LABEL_11:
		v7 = a1[110];
		v8 = (_QWORD*)(*a1 + 2552i64);
		if (!*(_QWORD*)(v7 + 1312))
		{
			*(_QWORD*)(v7 + 1312) = v8;
			*(_QWORD*)(v7 + 1320) = *v8;
			*v8 = v7;
			v9 = *(_QWORD*)(v7 + 1320);
			if (v9)
				*(_QWORD*)(v9 + 1312) = v7 + 1320;
		}
		a1[110] = 0i64;
		if (*(_QWORD*)(v4 + 8) <= 1ui64)
		{
			*(_DWORD*)v4 = 0;
			_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
			if (*(_QWORD*)(v4 + 16))
			{
				if (!*(_QWORD*)(v4 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v4 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v4 + 8);
		}
	}
}
// 140383760: using guessed type int var_18[6];

