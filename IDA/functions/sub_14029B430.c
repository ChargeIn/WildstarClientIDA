#include "../winhttp.h"

//----- (000000014029B430) ----------------------------------------------------
__int64 __fastcall sub_14029B430(__int64 a1, unsigned int* a2)
{
	unsigned int v5; // ebp
	int v6; // edx
	int v7; // eax
	int CurrentThreadId; // edx
	__int64 v9; // rcx
	HANDLE EventW; // rcx
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rax
	signed __int32 v13; // edx
	__int64 v14; // rcx
	int v15; // ebx
	volatile signed __int32* v16; // rsi
	signed __int32 v17; // edx
	__int64 v18; // rcx
	int v19; // ebx
	volatile signed __int32* v20; // rsi
	signed __int32 v21; // edx
	__int64 v22; // rcx
	int v23; // ebx
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+18h] BYREF

	if (*(_DWORD*)(a1 + 24))
		return 1i64;
	v5 = 0;
	if (!*(_DWORD*)(a1 + 12) && !*(_DWORD*)(a1 + 16))
		goto LABEL_63;
	while (1)
	{
		if (*(_DWORD*)(a1 + 16))
		{
			_mm_pause();
		}
		else
		{
			v6 = dword_140C657A8;
			v7 = dword_140C40650;
			if (*(_DWORD*)qword_140C63750 < dword_140C40650)
				v7 = *(_DWORD*)qword_140C63750;
			if ((unsigned int)dword_140C657A8 >= dword_140C40660[v7])
			{
				(*(void(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)qword_140C657A0 + 32i64))(qword_140C657A0, a2);
			}
			else if (v6 == _InterlockedCompareExchange(&dword_140C657A8, dword_140C657A8 + 1, dword_140C657A8))
			{
				CurrentThreadId = GetCurrentThreadId();
				if ((_DWORD)qword_140C79B50 == CurrentThreadId)
				{
					++qword_140C79B58;
				}
				else
				{
					v9 = 0i64;
					while (_InterlockedCompareExchange64(&qword_140C79B58, 1i64, 0i64))
					{
						_mm_pause();
						if ((unsigned __int64)++v9 >= 0x400)
						{
							sub_14019FB60((__int64)&qword_140C79B50, CurrentThreadId);
							goto LABEL_17;
						}
					}
					LODWORD(qword_140C79B50) = CurrentThreadId;
				}
			LABEL_17:
				if (*(_DWORD*)(a1 + 12))
				{
					*(_DWORD*)(a1 + 16) = 1;
					sub_14029CA70(a1);
					sub_14029CBF0(a1);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
					*(_DWORD*)(a1 + 16) = 0;
				}
				if ((unsigned __int64)qword_140C79B58 <= 1)
				{
					LODWORD(qword_140C79B50) = 0;
					_InterlockedExchange64(&qword_140C79B58, 0i64);
					if (qword_140C79B60)
					{
						if (!qword_140C79B68)
						{
							EventW = CreateEventW(0i64, 0, 0, 0i64);
							if (_InterlockedCompareExchange64(
								(volatile signed __int64*)&qword_140C79B68,
								(signed __int64)EventW,
								0i64))
							{
								CloseHandle(EventW);
							}
						}
						SetEvent(qword_140C79B68);
					}
				}
				else
				{
					--qword_140C79B58;
				}
			}
		}
		if (!*(_DWORD*)(a1 + 12) && !*(_DWORD*)(a1 + 16) || !*a2)
			break;
		if ((*a2 & 0x80000000) == 0)
		{
			QueryPerformanceCounter(&PerformanceCount);
			v11 = PerformanceCount.QuadPart - *((_QWORD*)a2 + 1) - ::PerformanceCount.QuadPart;
			v12 = qword_140C636B0 * *a2;
			if (v11 >= v12)
			{
				*a2 = 0;
				break;
			}
			if ((unsigned int)((v12 - v11) / qword_140C636B0) == -1)
				break;
		}
	}
	if (!*(_DWORD*)(a1 + 12) && !*(_DWORD*)(a1 + 16))
	{
	LABEL_63:
		if (!*(_QWORD*)(a1 + 120))
			goto LABEL_45;
		v13 = *(_DWORD*)(a1 + 112);
		if (!v13)
			goto LABEL_45;
		while (v13 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 112), v13 + 1, v13))
		{
			v13 = *(_DWORD*)(a1 + 112);
			if (!v13)
				goto LABEL_45;
		}
		v14 = *(_QWORD*)(a1 + 120);
		if (!v14
			|| (v15 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v14 + 32i64))(v14, a2),
				sub_14012F5F0(a1 + 112),
				v15))
		{
		LABEL_45:
			v16 = (volatile signed __int32*)(a1 + 128);
			if (!*(_QWORD*)(a1 + 136))
				goto LABEL_52;
			v17 = *v16;
			if (!*v16)
				goto LABEL_52;
			while (v17 != _InterlockedCompareExchange(v16, v17 + 1, v17))
			{
				v17 = *v16;
				if (!*v16)
					goto LABEL_52;
			}
			v18 = *(_QWORD*)(a1 + 136);
			if (!v18
				|| (v19 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v18 + 32i64))(v18, a2),
					sub_14012F5F0(a1 + 128),
					v19))
			{
			LABEL_52:
				v20 = (volatile signed __int32*)(a1 + 144);
				if (!*(_QWORD*)(a1 + 152))
					goto LABEL_59;
				v21 = *v20;
				if (!*v20)
					goto LABEL_59;
				while (v21 != _InterlockedCompareExchange(v20, v21 + 1, v21))
				{
					v21 = *v20;
					if (!*v20)
					{
						LOBYTE(v5) = *(_DWORD*)(a1 + 20) == 0;
						return v5;
					}
				}
				v22 = *(_QWORD*)(a1 + 152);
				if (!v22
					|| (v23 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v22 + 32i64))(v22, a2),
						sub_14012F5F0(a1 + 144),
						v23))
				{
				LABEL_59:
					LOBYTE(v5) = *(_DWORD*)(a1 + 20) == 0;
					return v5;
				}
			}
		}
	}
	return 0i64;
}
// 140C40650: using guessed type int dword_140C40650;
// 140C40660: using guessed type _DWORD dword_140C40660[16];
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C657A0: using guessed type __int64 qword_140C657A0;
// 140C657A8: using guessed type int dword_140C657A8;
// 140C79B50: using guessed type __int64 qword_140C79B50;
// 140C79B58: using guessed type __int64 qword_140C79B58;
// 140C79B60: using guessed type __int64 qword_140C79B60;

