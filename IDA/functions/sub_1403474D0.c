#include "../winhttp.h"

//----- (00000001403474D0) ----------------------------------------------------
int __fastcall sub_1403474D0(__int64 a1, unsigned int a2, unsigned int a3)
{
	int CurrentThreadId; // r10d
	__int64 v7; // rcx
	__int64 v8; // rdx
	int result; // eax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA70 == CurrentThreadId)
	{
		++qword_140C7AA78;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA70, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AA70) = CurrentThreadId;
	}
LABEL_8:
	if (sub_1403499E0(a1 + 96))
	{
		*(_DWORD*)(a1 + 88) = 0;
		_InterlockedIncrement(&dword_140C7A0F8);
		sub_140346C20(0x80000000, a1);
	}
	v8 = *(unsigned int*)(a1 + 16);
	if ((_DWORD)v8)
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65858 + 216i64))(
			qword_140C65858,
			v8,
			a2,
			a3);
	result = qword_140C7AA78;
	if ((unsigned __int64)qword_140C7AA78 <= 1)
	{
		LODWORD(qword_140C7AA70) = 0;
		_InterlockedExchange64(&qword_140C7AA78, 0i64);
		result = qword_140C7AA80;
		if (qword_140C7AA80)
		{
			if (!qword_140C7AA88)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(qword_140C7AA88);
		}
	}
	else
	{
		--qword_140C7AA78;
	}
	return result;
}
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C7A0F8: using guessed type int dword_140C7A0F8;
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;

