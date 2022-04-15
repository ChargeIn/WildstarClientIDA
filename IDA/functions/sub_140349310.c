#include "../winhttp.h"

//----- (0000000140349310) ----------------------------------------------------
void __fastcall sub_140349310(__int64 a1, __int64 a2)
{
	unsigned int CurrentThreadId; // eax
	__int64 v5; // r8
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // rcx
	HANDLE EventW; // rcx

	if (a2)
	{
		CurrentThreadId = GetCurrentThreadId();
		v5 = (unsigned int)qword_140C7AB20;
		v6 = CurrentThreadId;
		if ((_DWORD)qword_140C7AB20 == CurrentThreadId)
		{
			++qword_140C7AB28;
		}
		else
		{
			v7 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C7AB28, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v7 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C7AB20, CurrentThreadId);
					goto LABEL_9;
				}
			}
			LODWORD(qword_140C7AB20) = CurrentThreadId;
		}
	LABEL_9:
		(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 16) + 128i64))(
			*(_QWORD*)(a1 + 16),
			a2,
			v5,
			v6);
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 112i64);
		if (!v8 || !*(_QWORD*)(v8 + 80))
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 72i64))(*(_QWORD*)(a1 + 24));
		if ((unsigned __int64)qword_140C7AB28 <= 1)
		{
			LODWORD(qword_140C7AB20) = 0;
			_InterlockedExchange64(&qword_140C7AB28, 0i64);
			if (qword_140C7AB30)
			{
				if (!qword_140C7AB38)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB38, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C7AB38);
			}
		}
		else
		{
			--qword_140C7AB28;
		}
	}
}
// 14034939D: variable 'v5' is possibly undefined
// 14034939D: variable 'v6' is possibly undefined
// 140C7AB20: using guessed type __int64 qword_140C7AB20;
// 140C7AB28: using guessed type __int64 qword_140C7AB28;
// 140C7AB30: using guessed type __int64 qword_140C7AB30;

