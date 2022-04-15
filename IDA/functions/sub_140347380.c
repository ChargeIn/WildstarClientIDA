#include "../winhttp.h"

//----- (0000000140347380) ----------------------------------------------------
__int64 __fastcall sub_140347380(__int64 a1, _DWORD* a2, unsigned int a3)
{
	int CurrentThreadId; // r8d
	__int64 v8; // rdx
	__int64 v9; // rdx
	unsigned int v10; // edi
	HANDLE EventW; // rcx

	if (!a2)
		return 2147942487i64;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7AA70 == CurrentThreadId)
	{
		++qword_140C7AA78;
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AA78, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AA70, CurrentThreadId);
				goto LABEL_10;
			}
		}
		LODWORD(qword_140C7AA70) = CurrentThreadId;
	}
LABEL_10:
	v9 = *(unsigned int*)(a1 + 16);
	if ((_DWORD)v9)
	{
		v10 = (*(__int64(__fastcall**)(__int64, __int64, _DWORD*, _QWORD))(*(_QWORD*)qword_140C65858 + 248i64))(
			qword_140C65858,
			v9,
			a2,
			a3);
	}
	else
	{
		*a2 = 0;
		v10 = 0;
	}
	if ((unsigned __int64)qword_140C7AA78 <= 1)
	{
		LODWORD(qword_140C7AA70) = 0;
		_InterlockedExchange64(&qword_140C7AA78, 0i64);
		if (qword_140C7AA80)
		{
			if (!qword_140C7AA88)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AA88, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7AA88);
		}
		return v10;
	}
	else
	{
		--qword_140C7AA78;
		return v10;
	}
}
// 140C65858: using guessed type __int64 qword_140C65858;
// 140C7AA70: using guessed type __int64 qword_140C7AA70;
// 140C7AA78: using guessed type __int64 qword_140C7AA78;
// 140C7AA80: using guessed type __int64 qword_140C7AA80;

