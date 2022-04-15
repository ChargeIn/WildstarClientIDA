//----- (00000001402B1AE0) ----------------------------------------------------
__int64 __fastcall sub_1402B1AE0(__int64 a1, unsigned int* a2)
{
	unsigned int v5; // ebp
	int v6; // edx
	int v7; // eax
	int CurrentThreadId; // edx
	__int64 v9; // rcx
	HANDLE EventW; // rcx
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rax
	volatile signed __int32* v13; // rsi
	signed __int32 v14; // edx
	__int64 v15; // rcx
	int v16; // ebx
	volatile signed __int32* v17; // rsi
	signed __int32 v18; // edx
	__int64 v19; // rcx
	int v20; // ebx
	volatile signed __int32* v21; // rsi
	signed __int32 v22; // edx
	__int64 v23; // rcx
	int v24; // ebx
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+18h] BYREF

	if (*(_DWORD*)(a1 + 24))
		return 1i64;
	v5 = 0;
	if (!*(_DWORD*)(a1 + 12) && !*(_DWORD*)(a1 + 16))
		goto LABEL_62;
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
			if ((unsigned int)dword_140C657A8 < dword_140C40660[v7]
				&& v6 == _InterlockedCompareExchange(&dword_140C657A8, dword_140C657A8 + 1, dword_140C657A8))
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
	LABEL_62:
		v13 = (volatile signed __int32*)(a1 + 360);
		if (!*(_QWORD*)(a1 + 368))
			goto LABEL_44;
		v14 = *v13;
		if (!*v13)
			goto LABEL_44;
		while (v14 != _InterlockedCompareExchange(v13, v14 + 1, v14))
		{
			v14 = *v13;
			if (!*v13)
				goto LABEL_44;
		}
		v15 = *(_QWORD*)(a1 + 368);
		if (!v15
			|| (v16 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v15 + 32i64))(v15, a2),
				sub_14012F5F0(a1 + 360),
				v16))
		{
		LABEL_44:
			v17 = (volatile signed __int32*)(a1 + 376);
			if (!*(_QWORD*)(a1 + 384))
				goto LABEL_51;
			v18 = *v17;
			if (!*v17)
				goto LABEL_51;
			while (v18 != _InterlockedCompareExchange(v17, v18 + 1, v18))
			{
				v18 = *v17;
				if (!*v17)
					goto LABEL_51;
			}
			v19 = *(_QWORD*)(a1 + 384);
			if (!v19
				|| (v20 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v19 + 32i64))(v19, a2),
					sub_14012F5F0(a1 + 376),
					v20))
			{
			LABEL_51:
				v21 = (volatile signed __int32*)(a1 + 392);
				if (!*(_QWORD*)(a1 + 400))
					goto LABEL_58;
				v22 = *v21;
				if (!*v21)
					goto LABEL_58;
				while (v22 != _InterlockedCompareExchange(v21, v22 + 1, v22))
				{
					v22 = *v21;
					if (!*v21)
					{
						LOBYTE(v5) = *(_DWORD*)(a1 + 20) == 0;
						return v5;
					}
				}
				v23 = *(_QWORD*)(a1 + 400);
				if (!v23
					|| (v24 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v23 + 32i64))(v23, a2),
						sub_14012F5F0(a1 + 392),
						v24))
				{
				LABEL_58:
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
// 140C657A8: using guessed type int dword_140C657A8;
// 140C79B50: using guessed type __int64 qword_140C79B50;
// 140C79B58: using guessed type __int64 qword_140C79B58;
// 140C79B60: using guessed type __int64 qword_140C79B60;

