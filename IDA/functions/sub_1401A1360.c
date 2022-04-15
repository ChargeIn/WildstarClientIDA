#include "../winhttp.h"

//----- (00000001401A1360) ----------------------------------------------------
int sub_1401A1360()
{
	int CurrentThreadId; // edx
	__int64 v1; // rcx
	_QWORD* v2; // rax
	__int64 v3; // rcx
	int result; // eax
	HANDLE EventW; // rcx

	CurrentThreadId = GetCurrentThreadId();
	if ((_DWORD)qword_140C67400 == CurrentThreadId)
	{
		++qword_140C67408;
	}
	else
	{
		v1 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C67408, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v1 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C67400, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C67400) = CurrentThreadId;
	}
LABEL_8:
	v2 = dword_140C674A8;
	v3 = 8i64;
	do
	{
		*v2 = -1i64;
		v2[1] = -1i64;
		v2[2] = -1i64;
		v2 += 8;
		*(v2 - 5) = -1i64;
		*(v2 - 4) = -1i64;
		*(v2 - 3) = -1i64;
		*(v2 - 2) = -1i64;
		*(v2 - 1) = -1i64;
		--v3;
	} while (v3);
	*v2 = -1i64;
	*((_DWORD*)v2 + 2) = -1;
	dword_140C674A4 &= 0xFFFFFFFC;
	if (qword_140C676C8)
	{
		sub_1407E089C(qword_140C676C8);
		qword_140C676C8 = 0i64;
	}
	if (qword_140C776E8)
	{
		sub_14018B900(qword_140C776E8, 0);
		qword_140C776E8 = 0i64;
		qword_140C776F0 = 0i64;
		qword_140C77700 = 0i64;
		qword_140C776F8 = 0i64;
		dword_140C77708 = 5;
	}
	result = qword_140C67408;
	*(_QWORD*)&xmmword_140C77750 = -16 * (((__int64)xmmword_140C77750 - qword_140C77748) >> 4) + xmmword_140C77750;
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
// 140C674A4: using guessed type int dword_140C674A4;
// 140C674A8: using guessed type _DWORD dword_140C674A8[77];
// 140C676C8: using guessed type __int64 qword_140C676C8;
// 140C776E8: using guessed type __int64 qword_140C776E8;
// 140C776F0: using guessed type __int64 qword_140C776F0;
// 140C776F8: using guessed type __int64 qword_140C776F8;
// 140C77700: using guessed type __int64 qword_140C77700;
// 140C77708: using guessed type int dword_140C77708;
// 140C77748: using guessed type __int64 qword_140C77748;
// 140C77750: using guessed type __int128 xmmword_140C77750;

