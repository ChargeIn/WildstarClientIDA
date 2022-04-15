#include "../winhttp.h"

//----- (0000000140349B20) ----------------------------------------------------
int __fastcall sub_140349B20(__int64* a1, unsigned int a2)
{
	unsigned int CurrentThreadId; // eax
	__int64 v5; // r8
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 v8; // rbx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	HANDLE EventW; // rcx
	int v12; // edx
	__int64 v13; // rcx
	int result; // eax
	HANDLE v15; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v5 = (unsigned int)qword_140C7AB60;
	v6 = CurrentThreadId;
	if ((_DWORD)qword_140C7AB60 == CurrentThreadId)
	{
		++qword_140C7AB68;
	}
	else
	{
		v7 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AB68, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v7 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AB60, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AB60) = CurrentThreadId;
	}
LABEL_8:
	while (*a1)
	{
		v8 = *a1;
		v9 = *(_QWORD**)(*a1 + 16);
		if (v9)
			*v9 = *(_QWORD*)(v8 + 24);
		v10 = *(_QWORD*)(v8 + 24);
		if (v10)
			*(_QWORD*)(v10 + 16) = *(_QWORD*)(v8 + 16);
		*(_QWORD*)(v8 + 16) = 0i64;
		*(_QWORD*)(v8 + 24) = 0i64;
		if ((unsigned __int64)qword_140C7AB68 <= 1)
		{
			LODWORD(qword_140C7AB60) = 0;
			_InterlockedExchange64(&qword_140C7AB68, 0i64);
			if (qword_140C7AB70)
			{
				if (!qword_140C7AB78)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB78, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C7AB78);
			}
		}
		else
		{
			--qword_140C7AB68;
		}
		(*(void(__fastcall**)(_QWORD, _QWORD, __int64, __int64))v8)(a2, *(_QWORD*)(v8 + 8), v5, v6);
		v12 = GetCurrentThreadId();
		if ((_DWORD)qword_140C7AB60 == v12)
		{
			++qword_140C7AB68;
		}
		else
		{
			v13 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C7AB68, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v13 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C7AB60, v12);
					goto LABEL_27;
				}
			}
			LODWORD(qword_140C7AB60) = v12;
		}
	LABEL_27:
		;
	}
	result = qword_140C7AB68;
	if ((unsigned __int64)qword_140C7AB68 <= 1)
	{
		LODWORD(qword_140C7AB60) = 0;
		_InterlockedExchange64(&qword_140C7AB68, 0i64);
		result = qword_140C7AB70;
		if (qword_140C7AB70)
		{
			if (!qword_140C7AB78)
			{
				v15 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB78, (signed __int64)v15, 0i64))
					CloseHandle(v15);
			}
			return SetEvent(qword_140C7AB78);
		}
	}
	else
	{
		--qword_140C7AB68;
	}
	return result;
}
// 140349C44: variable 'v5' is possibly undefined
// 140349C44: variable 'v6' is possibly undefined
// 140C7AB60: using guessed type __int64 qword_140C7AB60;
// 140C7AB68: using guessed type __int64 qword_140C7AB68;
// 140C7AB70: using guessed type __int64 qword_140C7AB70;

