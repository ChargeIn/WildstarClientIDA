#include "../winhttp.h"

//----- (000000014003B050) ----------------------------------------------------
int sub_14003B050()
{
	int CurrentThreadId; // edx
	__int64 v1; // rcx
	__int64* v2; // rcx
	__int64 v3; // rdx
	__int64* v4; // rax
	__int64(__fastcall * **v5)(_QWORD); // rdi
	__int64 v6; // rsi
	__int64 v7; // rbp
	int* v8; // rcx
	HANDLE EventW; // rcx
	int result; // eax
	HANDLE v11; // rcx

	while (1)
	{
		CurrentThreadId = GetCurrentThreadId();
		if ((_DWORD)qword_140C66788 == CurrentThreadId)
		{
			++qword_140C66790;
		}
		else
		{
			v1 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C66790, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v1 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C66788, CurrentThreadId);
					goto LABEL_8;
				}
			}
			LODWORD(qword_140C66788) = CurrentThreadId;
		}
	LABEL_8:
		v2 = *(__int64**)qword_140C667B0;
		if (*(_QWORD*)qword_140C667B0 == qword_140C667B0)
			break;
		v3 = *v2;
		v4 = (__int64*)v2[1];
		v5 = (__int64(__fastcall***)(_QWORD))v2[2];
		v6 = v2[3];
		v7 = v2[4];
		*v4 = *v2;
		*(_QWORD*)(v3 + 8) = v4;
		sub_14018B900((__int64)v2, 0);
		if ((unsigned __int64)qword_140C66790 <= 1)
		{
			LODWORD(qword_140C66788) = 0;
			_InterlockedExchange64(&qword_140C66790, 0i64);
			v8 = (int*)qword_140C66798;
			if (qword_140C66798)
			{
				if (!hEvent)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&hEvent, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(hEvent);
			}
		}
		else
		{
			--qword_140C66790;
		}
		sub_14003B220(v8, (__int64)v5, v6);
		sub_1400B1ED0(v7, v5);
	}
	result = qword_140C66790;
	if ((unsigned __int64)qword_140C66790 <= 1)
	{
		LODWORD(qword_140C66788) = 0;
		_InterlockedExchange64(&qword_140C66790, 0i64);
		result = qword_140C66798;
		if (qword_140C66798)
		{
			if (!hEvent)
			{
				v11 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hEvent, (signed __int64)v11, 0i64))
					CloseHandle(v11);
			}
			return SetEvent(hEvent);
		}
	}
	else
	{
		--qword_140C66790;
	}
	return result;
}
// 14003B170: variable 'v8' is possibly undefined
// 140C66788: using guessed type __int64 qword_140C66788;
// 140C66790: using guessed type __int64 qword_140C66790;
// 140C66798: using guessed type __int64 qword_140C66798;
// 140C667B0: using guessed type __int64 qword_140C667B0;

