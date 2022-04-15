#include "../winhttp.h"

//----- (0000000140349E90) ----------------------------------------------------
__int64 __fastcall sub_140349E90(__int64 a1, unsigned int* a2)
{
	unsigned int CurrentThreadId; // eax
	__int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // r9
	__int64 v8; // rcx
	HANDLE v10; // rcx
	void(__fastcall * **v11)(_QWORD, __int64, __int64, __int64); // rcx
	HANDLE EventW; // rcx
	__int64 v13; // rdx
	unsigned int v14; // eax
	__int64 v15; // rdx
	__int64 v16; // r8
	BOOL v17; // edi
	HANDLE v18; // rcx

	CurrentThreadId = GetCurrentThreadId();
	v6 = (unsigned int)qword_140C7AB80;
	v7 = CurrentThreadId;
	if ((_DWORD)qword_140C7AB80 == CurrentThreadId)
	{
		++qword_140C7AB88;
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64(&qword_140C7AB88, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60((__int64)&qword_140C7AB80, CurrentThreadId);
				goto LABEL_8;
			}
		}
		LODWORD(qword_140C7AB80) = CurrentThreadId;
	}
LABEL_8:
	if (*(_DWORD*)(a1 + 8) == -2147483638)
	{
		v11 = *(void(__fastcall****)(_QWORD, __int64, __int64, __int64))(a1 + 16);
		if (v11)
			(**v11)(v11, v5, v6, v7);
		else
			sub_1401A1070((__int64*)(a1 + 16), 0, 0, 0i64, 0);
		if ((unsigned __int64)qword_140C7AB88 <= 1)
		{
			LODWORD(qword_140C7AB80) = 0;
			_InterlockedExchange64(&qword_140C7AB88, 0i64);
			if (qword_140C7AB90)
			{
				if (!qword_140C7AB98)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB98, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C7AB98);
			}
		}
		else
		{
			--qword_140C7AB88;
		}
		if (*a2)
			v13 = (unsigned int)sub_14001C520(a2);
		else
			v13 = 0i64;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 32i64))(*(_QWORD*)(a1 + 16), v13);
		v14 = GetCurrentThreadId();
		v16 = v14;
		if ((_DWORD)qword_140C7AB80 == v14)
		{
			++qword_140C7AB88;
		}
		else
		{
			v15 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C7AB88, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v15 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C7AB80, v14);
					goto LABEL_37;
				}
			}
			LODWORD(qword_140C7AB80) = v14;
		}
	LABEL_37:
		if (!(*(unsigned int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 16) + 8i64))(
			*(_QWORD*)(a1 + 16),
			v15,
			v16))
			*(_QWORD*)(a1 + 16) = 0i64;
		v17 = *(_DWORD*)(a1 + 8) != -2147483638;
		if ((unsigned __int64)qword_140C7AB88 <= 1)
		{
			LODWORD(qword_140C7AB80) = 0;
			_InterlockedExchange64(&qword_140C7AB88, 0i64);
			if (qword_140C7AB90)
			{
				if (!qword_140C7AB98)
				{
					v18 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB98, (signed __int64)v18, 0i64))
						CloseHandle(v18);
				}
				SetEvent(qword_140C7AB98);
			}
		}
		else
		{
			--qword_140C7AB88;
		}
		return v17;
	}
	else if ((unsigned __int64)qword_140C7AB88 <= 1)
	{
		LODWORD(qword_140C7AB80) = 0;
		_InterlockedExchange64(&qword_140C7AB88, 0i64);
		if (qword_140C7AB90)
		{
			if (!qword_140C7AB98)
			{
				v10 = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C7AB98, (signed __int64)v10, 0i64))
					CloseHandle(v10);
			}
			SetEvent(qword_140C7AB98);
		}
		return 1i64;
	}
	else
	{
		--qword_140C7AB88;
		return 1i64;
	}
}
// 140349FB1: variable 'v5' is possibly undefined
// 140349FB1: variable 'v6' is possibly undefined
// 140349FB1: variable 'v7' is possibly undefined
// 14034A09A: variable 'v15' is possibly undefined
// 14034A09A: variable 'v16' is possibly undefined
// 140C7AB80: using guessed type __int64 qword_140C7AB80;
// 140C7AB88: using guessed type __int64 qword_140C7AB88;
// 140C7AB90: using guessed type __int64 qword_140C7AB90;

