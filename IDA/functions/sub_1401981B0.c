#include "../winhttp.h"

//----- (00000001401981B0) ----------------------------------------------------
int __fastcall sub_1401981B0(__int64** a1)
{
	__int64 v1; // rdi
	int CurrentThreadId; // r8d
	__int64 v4; // rcx
	__int64* i; // rax
	__int64 v6; // r14
	__int64 v7; // rbx
	HANDLE EventW; // rcx
	int v9; // edx
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	HANDLE v12; // rcx

	v1 = qword_140C63740;
	CurrentThreadId = GetCurrentThreadId();
	if (*(_DWORD*)(v1 + 48) == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 56);
	}
	else
	{
		v4 = 0i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 56), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v4 >= 0x400)
			{
				sub_14019FB60(v1 + 48, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 48) = CurrentThreadId;
	}
LABEL_8:
	for (i = *a1; *a1; i = *a1)
	{
		v6 = *i;
		sub_1401984D0((__int64)i);
		++HIDWORD(qword_140C890CC);
		v7 = qword_140C63740;
		if (*(_QWORD*)(qword_140C63740 + 56) <= 1ui64)
		{
			*(_DWORD*)(qword_140C63740 + 48) = 0;
			_InterlockedExchange64((volatile __int64*)(v7 + 56), 0i64);
			if (*(_QWORD*)(v7 + 64))
			{
				if (!*(_QWORD*)(v7 + 72))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 72), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v7 + 72));
			}
		}
		else
		{
			--* (_QWORD*)(qword_140C63740 + 56);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		v9 = GetCurrentThreadId();
		if (*(_DWORD*)(v7 + 48) == v9)
		{
			++* (_QWORD*)(v7 + 56);
		}
		else
		{
			v10 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v7 + 56), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v10 >= 0x400)
				{
					sub_14019FB60(v7 + 48, v9);
					goto LABEL_23;
				}
			}
			*(_DWORD*)(v7 + 48) = v9;
		}
	LABEL_23:
		;
	}
	v11 = *(_QWORD*)(v1 + 56);
	if (v11 <= 1)
	{
		*(_DWORD*)(v1 + 48) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 56), 0i64);
		v11 = *(_QWORD*)(v1 + 64);
		if (v11)
		{
			if (!*(_QWORD*)(v1 + 72))
			{
				v12 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 72), (signed __int64)v12, 0i64))
					CloseHandle(v12);
			}
			LODWORD(v11) = SetEvent(*(HANDLE*)(v1 + 72));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 56);
	}
	return v11;
}
// 140C63740: using guessed type __int64 qword_140C63740;
// 140C890CC: using guessed type __int64 qword_140C890CC;

