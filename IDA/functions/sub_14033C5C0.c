#include "../winhttp.h"

//----- (000000014033C5C0) ----------------------------------------------------
__int64 __fastcall sub_14033C5C0(__int64 a1, __int64* a2)
{
	__int64 v4; // rbx
	int CurrentThreadId; // r9d
	__int64 v6; // rcx
	__int64 v7; // r8
	_QWORD* v8; // rax
	__int64 v9; // rcx
	__int64* v10; // rdi
	__int64 v11; // rdi
	__int64 v12; // rsi
	HANDLE v13; // rcx
	HANDLE EventW; // rcx
	__int64 v16; // [rsp+70h] [rbp+8h] BYREF
	__int64 v17; // [rsp+78h] [rbp+10h] BYREF
	struct _FILETIME SystemTimeAsFileTime; // [rsp+80h] [rbp+18h] BYREF
	__int64 v19; // [rsp+88h] [rbp+20h] BYREF

	v4 = a1 + 184;
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
				goto LABEL_8;
			}
		}
		*(_DWORD*)v4 = CurrentThreadId;
	}
LABEL_8:
	sub_14033ECE0(*a2);
	v7 = *(_QWORD*)(a1 + 104);
	v8 = *(_QWORD**)(v7 + 8);
	v9 = v7;
	while (v8)
	{
		if (v8[4] < (unsigned __int64)*a2)
		{
			v8 = (_QWORD*)v8[3];
		}
		else
		{
			v9 = (__int64)v8;
			v8 = (_QWORD*)v8[2];
		}
	}
	if (v9 == v7 || (unsigned __int64)*a2 < *(_QWORD*)(v9 + 32))
	{
		v17 = *(_QWORD*)(a1 + 104);
		v10 = &v17;
	}
	else
	{
		v16 = v9;
		v10 = &v16;
	}
	v11 = *v10;
	if (v7 == v11)
	{
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
		if (*a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
		return 2147500037i64;
	}
	else
	{
		v12 = *(_QWORD*)(v11 + 32);
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		*(_QWORD*)(v12 + 528) = *(_QWORD*)&SystemTimeAsFileTime + 300000000i64;
		sub_14033A780(a1 + 128, (void(__fastcall****)(_QWORD))(v11 + 32));
		v19 = v11;
		sub_14033E400(a1 + 96, &v19);
		if (*(_QWORD*)(v4 + 8) <= 1ui64)
		{
			*(_DWORD*)v4 = 0;
			_InterlockedExchange64((volatile __int64*)(v4 + 8), 0i64);
			if (*(_QWORD*)(v4 + 16))
			{
				if (!*(_QWORD*)(v4 + 24))
				{
					v13 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v4 + 24), (signed __int64)v13, 0i64))
						CloseHandle(v13);
				}
				SetEvent(*(HANDLE*)(v4 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v4 + 8);
		}
		if (*a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)*a2 + 8i64))(*a2);
		return 0i64;
	}
}

