#include "../winhttp.h"

//----- (00000001401C60B0) ----------------------------------------------------
__int64 __fastcall sub_1401C60B0(__int64 a1)
{
	int v1; // eax
	unsigned int v3; // edx
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // eax
	__int64 v8; // rbx
	HANDLE EventW; // rcx
	int CurrentThreadId; // edx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rbx

	v1 = *(_DWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 20) = v1;
	*(_DWORD*)(a1 + 40) = 2;
	if (*(_DWORD*)(a1 + 48))
	{
		v3 = 0;
		if (v1)
		{
			do
			{
				v4 = v3++;
				v5 = 8 * v4;
				*(_DWORD*)(v5 + *(_QWORD*)(a1 + 24)) = 1;
				*(_DWORD*)(*(_QWORD*)(a1 + 24) + v5 + 4) = -1608318974;
			} while (v3 < *(_DWORD*)(a1 + 16));
		}
		*(_DWORD*)(a1 + 20) = 0;
	}
	v6 = *(_DWORD*)(a1 + 20);
	if (v6)
	{
		_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 8), v6);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 128i64))(a1);
	}
	else
	{
		(**(void(__fastcall***)(__int64))a1)(a1);
		if (!*(_DWORD*)(a1 + 52) && (*(_QWORD*)(a1 + 64) || *(_QWORD*)(a1 + 72)))
		{
			v8 = qword_140C63758;
			if (*(_QWORD*)(qword_140C63758 + 16) <= 1ui64)
			{
				*(_DWORD*)(qword_140C63758 + 8) = 0;
				_InterlockedExchange64((volatile __int64*)(v8 + 16), 0i64);
				if (*(_QWORD*)(v8 + 24))
				{
					if (!*(_QWORD*)(v8 + 32))
					{
						EventW = CreateEventW(0i64, 0, 0, 0i64);
						if (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 32), (signed __int64)EventW, 0i64))
							CloseHandle(EventW);
					}
					SetEvent(*(HANDLE*)(v8 + 32));
				}
			}
			else
			{
				--* (_QWORD*)(qword_140C63758 + 16);
			}
			*(_DWORD*)(a1 + 56) = GetCurrentThreadId();
			(*(void(__fastcall**)(_QWORD))(a1 + 72))(*(_QWORD*)(a1 + 64));
			*(_DWORD*)(a1 + 56) = 0;
			CurrentThreadId = GetCurrentThreadId();
			if (*(_DWORD*)(v8 + 8) == CurrentThreadId)
			{
				++* (_QWORD*)(v8 + 16);
			}
			else
			{
				v11 = 0i64;
				while (_InterlockedCompareExchange64((volatile signed __int64*)(v8 + 16), 1i64, 0i64))
				{
					_mm_pause();
					if ((unsigned __int64)++v11 >= 0x400)
					{
						sub_14019FB60(v8 + 8, CurrentThreadId);
						goto LABEL_24;
					}
				}
				*(_DWORD*)(v8 + 8) = CurrentThreadId;
			}
		}
	LABEL_24:
		v12 = *(_QWORD*)(a1 + 32);
		*(_DWORD*)(a1 + 40) = 4;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
		v13 = *(_QWORD*)(a1 + 96);
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
		if (!*(_DWORD*)(a1 + 52))
		{
			*(_DWORD*)(a1 + 44) = 0;
			while (*(_QWORD*)(a1 + 88))
			{
				v14 = *(_QWORD*)(a1 + 88);
				if (v14)
				{
					sub_1401D75A0(*(_QWORD*)(a1 + 88));
					sub_14018B900(v14, 0);
				}
			}
		}
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
	}
}
// 1401D75A0: using guessed type __int64 __fastcall sub_1401D75A0(_QWORD);
// 140C63758: using guessed type __int64 qword_140C63758;

