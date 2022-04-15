#include "../winhttp.h"

//----- (0000000140342660) ----------------------------------------------------
__int64 __fastcall sub_140342660(__int64 a1, __int64 a2, int a3)
{
	int CurrentThreadId; // r10d
	__int64 v7; // rcx
	__int64 result; // rax
	unsigned int v9; // ebx
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C7A070 == CurrentThreadId)
	{
		++qword_140C7A078;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7A078, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7A070, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7A070) = CurrentThreadId;
	}
LABEL_8:
	sub_140341E90(a1);
	*(_DWORD*)(*(_QWORD*)(a1 + 32) + 72i64) = a3;
	sub_140341E90(a2);
	result = sub_140341920(*(_QWORD*)(a1 + 32), *(_QWORD*)(a2 + 32));
	v9 = result;
	if ((unsigned __int64)qword_140C7A078 <= 1)
	{
		LODWORD(qword_140C7A070) = 0;
		_InterlockedExchange64(&qword_140C7A078, 0i64);
		if (qword_140C7A080)
		{
			if (!qword_140C7A088)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7A088, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(qword_140C7A088);
		}
		return v9;
	}
	else
	{
		--qword_140C7A078;
	}
	return result;
}
// 140C7A070: using guessed type __int64 qword_140C7A070;
// 140C7A078: using guessed type __int64 qword_140C7A078;
// 140C7A080: using guessed type __int64 qword_140C7A080;

