#include "../winhttp.h"

//----- (00000001401A4200) ----------------------------------------------------
int __fastcall sub_1401A4200(__int64 a1, __int64* a2)
{
	__int64 v2; // rdi
	int CurrentThreadId; // r8d
	__int64 v5; // rcx
	unsigned __int64 v6; // r8
	int* v7; // rcx
	unsigned __int64 v8; // r8
	__int64 v9; // rax
	int result; // eax
	HANDLE EventW; // rcx

	v2 = qword_140C886B8;
	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v5 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v5 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	sub_140052360(a2, *(_QWORD*)(v2 + 256));
	v6 = *(_QWORD*)(v2 + 256);
	v7 = (int*)*a2;
	if (v6 >= 0x3C)
	{
		sub_1407DB590(v7, (int*)(v2 + 4 * (*(_QWORD*)(v2 + 248) + 2i64)), 4 * (v6 - *(_QWORD*)(v2 + 248)));
		v9 = *(_QWORD*)(v2 + 248);
		v8 = 4 * v9;
		v7 = (int*)(*a2 + 4 * (*(_QWORD*)(v2 + 256) - v9));
	}
	else
	{
		v8 = 4 * v6;
	}
	sub_1407DB590(v7, (int*)(v2 + 8), v8);
	result = qword_140C67408;
	if ((unsigned __int64)qword_140C67408 <= 1)
	{
		LODWORD(qword_140C67400) = 0;
		_InterlockedExchange64(&qword_140C67408, 0i64);
		result = qword_140C67410;
		if (qword_140C67410)
		{
			if (!hObject)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(hObject);
		}
	}
	else
	{
		--qword_140C67408;
	}
	return result;
}
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;
// 140C886B8: using guessed type __int64 qword_140C886B8;

