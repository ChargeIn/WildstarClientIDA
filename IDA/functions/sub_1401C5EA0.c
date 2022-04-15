#include "../winhttp.h"

//----- (00000001401C5EA0) ----------------------------------------------------
void __fastcall sub_1401C5EA0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rdi
	__int64 v8; // rdi
	__int64 v9; // rcx
	HANDLE EventW; // rcx
	__int64 v11; // rcx

	v1 = qword_140C63758;
	*(_QWORD*)a1 = off_140B5F830;
	CurrentThreadId = GetCurrentThreadId();
	v4 = *(unsigned int*)(v1 + 8);
	v5 = CurrentThreadId;
	if ((_DWORD)v4 == CurrentThreadId)
	{
		++* (_QWORD*)(v1 + 16);
	}
	else
	{
		v6 = 0i64;
		v4 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 16), 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v6 >= 0x400)
			{
				sub_14019FB60(v1 + 8, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)(v1 + 8) = CurrentThreadId;
	}
LABEL_8:
	*(_DWORD*)(a1 + 40) = 4;
	while (*(_QWORD*)(a1 + 80))
	{
		v7 = *(_QWORD*)(a1 + 80);
		if (v7)
		{
			sub_1401D75A0(*(__int64**)(a1 + 80));
			sub_14018B900(v7, 0);
		}
	}
	while (*(_QWORD*)(a1 + 88))
	{
		v8 = *(_QWORD*)(a1 + 88);
		if (v8)
		{
			sub_1401D75A0(*(__int64**)(a1 + 88));
			sub_14018B900(v8, 0);
		}
	}
	v9 = *(_QWORD*)(a1 + 96);
	if (v9)
	{
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 8i64))(v9, v4, v5);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	if (*(_QWORD*)(v1 + 16) <= 1ui64)
	{
		*(_DWORD*)(v1 + 8) = 0;
		_InterlockedExchange64((volatile __int64*)(v1 + 16), 0i64);
		if (*(_QWORD*)(v1 + 24))
		{
			if (!*(_QWORD*)(v1 + 32))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v1 + 32), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v1 + 32));
		}
	}
	else
	{
		--* (_QWORD*)(v1 + 16);
	}
	sub_14018B900(*(_QWORD*)(a1 + 24), 0);
	if (*(_QWORD*)(a1 + 88))
		sub_1401A4A00((const void***)(a1 + 88));
	if (*(_QWORD*)(a1 + 80))
		sub_1401A4A00((const void***)(a1 + 80));
	v11 = *(_QWORD*)(a1 + 32);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
}
// 1401C5F89: variable 'v4' is possibly undefined
// 1401C5F89: variable 'v5' is possibly undefined
// 140B5F830: using guessed type __int64 (__fastcall *off_140B5F830[16])();
// 140C63758: using guessed type __int64 qword_140C63758;

