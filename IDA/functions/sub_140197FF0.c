#include "../winhttp.h"

//----- (0000000140197FF0) ----------------------------------------------------
int __fastcall sub_140197FF0(__int64* a1)
{
	__int64 v1; // rbx
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	__int64* i; // rax
	__int64 v6; // rsi
	HANDLE EventW; // rcx
	int v8; // edx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	HANDLE v11; // rcx

	v1 = (__int64)(a1 + 6);
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)v1 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 8);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 8), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v1 = CurrentThreadId;
	}
LABEL_8:
	for (i = (__int64*)a1[5]; i != a1; i = (__int64*)a1[5])
	{
		v6 = *i;
		sub_1401984D0((__int64)i);
		++HIDWORD(qword_140C890CC);
		if (*(_QWORD*)(v1 + 8) <= 1ui64)
		{
			*(_DWORD*)v1 = 0;
			_InterlockedExchange64((volatile __int64*)(v1 + 8), 0i64);
			if (*(_QWORD*)(v1 + 16))
			{
				if (!*(_QWORD*)(v1 + 24))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v1 + 24));
			}
		}
		else
		{
			--* (_QWORD*)(v1 + 8);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		v8 = GetCurrentThreadId();
		if (*(_DWORD*)v1 == v8)
		{
			++* (_QWORD*)(v1 + 8);
		}
		else
		{
			v9 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 8), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v9 >= 0x400)
				{
					sub_14019FB60(v1, v8);
					goto LABEL_23;
				}
			}
			*(_DWORD*)v1 = v8;
		}
	LABEL_23:
		;
	}
	v10 = *(_QWORD*)(v1 + 8);
	if (v10 <= 1)
	{
		*(_DWORD*)v1 = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 8), 0i64);
		v10 = *(_QWORD*)(v1 + 16);
		if (v10)
		{
			if (!*(_QWORD*)(v1 + 24))
			{
				v11 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 24), (signed __int64)v11, 0i64))
					CloseHandle(v11);
			}
			LODWORD(v10) = SetEvent(*(HANDLE*)(v1 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 8);
	}
	return v10;
}
// 140C890CC: using guessed type __int64 qword_140C890CC;

