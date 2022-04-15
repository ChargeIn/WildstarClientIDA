//----- (00000001400094F0) ----------------------------------------------------
__int64 __fastcall sub_1400094F0(__int64 a1)
{
	int v1; // eax
	DWORD CurrentThreadId; // eax
	__int64 v5; // rdx
	int v6; // eax
	int v7; // eax
	int v8; // edi
	int v9; // eax
	unsigned __int64 v10; // rax
	LONGLONG v11; // rsi
	unsigned __int64 v12; // r9
	unsigned __int64 v13; // rdi
	int v14; // ecx
	unsigned __int64 v15; // rax
	unsigned __int64 v16; // rax
	unsigned __int64 v17; // rcx
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rcx
	unsigned __int64 v20; // rax
	HANDLE EventW; // rcx
	LARGE_INTEGER v22; // [rsp+20h] [rbp-48h] BYREF
	LARGE_INTEGER v23; // [rsp+28h] [rbp-40h] BYREF
	unsigned int v24; // [rsp+30h] [rbp-38h] BYREF
	LONGLONG v25; // [rsp+38h] [rbp-30h]
	LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF
	LARGE_INTEGER v27; // [rsp+78h] [rbp+10h] BYREF
	LARGE_INTEGER v28; // [rsp+80h] [rbp+18h] BYREF
	LARGE_INTEGER v29; // [rsp+88h] [rbp+20h] BYREF

	v1 = *(_DWORD*)(a1 + 64);
	if ((v1 & 1) == 0 || (v1 & 4) == 0)
		return 2147500037i64;
	if ((v1 & 0x20) != 0)
		return 0i64;
	CurrentThreadId = GetCurrentThreadId();
	v5 = CurrentThreadId;
	if (*(_DWORD*)(a1 + 32) == CurrentThreadId)
	{
		++* (_QWORD*)(a1 + 40);
		goto LABEL_9;
	}
	if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 40), 1i64, 0i64))
		return 0i64;
	*(_DWORD*)(a1 + 32) = CurrentThreadId;
LABEL_9:
	v6 = *(_DWORD*)(a1 + 64);
	if ((v6 & 0x10) != 0)
	{
	LABEL_41:
		v8 = 0;
		goto LABEL_42;
	}
	v7 = v6 | 0x10;
	*(_DWORD*)(a1 + 64) = v7;
	if (!*(_QWORD*)(a1 + 8)
		|| ((v7 & 8) != 0 || (v8 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 64i64))(a1, v5), v8 >= 0))
		&& (!*(_QWORD*)(a1 + 8)
			|| (v9 = *(_DWORD*)(a1 + 64), (v9 & 0x80u) == 0)
			|| (v9 & 8) != 0
			|| (*(_DWORD*)(a1 + 64) = v9 & 0xFFFFFF7F,
				v8 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 72i64))(a1, v5),
				v8 >= 0)))
	{
		if ((*(_BYTE*)(a1 + 64) & 8) == 0)
		{
			QueryPerformanceCounter(&PerformanceCount);
			v10 = *(_QWORD*)(a1 + 184);
			v11 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
			v12 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - *(_QWORD*)(a1 + 200);
			if (v10 < v12)
				v12 = *(_QWORD*)(a1 + 184);
			if ((*(_DWORD*)(a1 + 64) & 0x100) != 0)
				v13 = v12 >> 1;
			else
				v13 = 0i64;
			if ((*(_BYTE*)(a1 + 112) & 4) == 0)
			{
				v14 = dword_140C3FEB0;
				if (*(_DWORD*)qword_140C63750 < dword_140C3FEB0)
					v14 = *(_DWORD*)qword_140C63750;
				v15 = v10 / (unsigned int)dword_140C3FEC0[v14];
				if (v12 < v15)
				{
					v16 = v15 - v12;
					if (v13 < v16)
						v13 = v16;
				}
			}
			QueryPerformanceCounter(&v27);
			v17 = v27.QuadPart - ::PerformanceCount.QuadPart - v11;
			if (v13 > v17)
			{
				v18 = (v13 - v17) / *(_QWORD*)(a1 + 176);
				if ((_DWORD)v18)
				{
					v24 = (v13 - v17) / *(_QWORD*)(a1 + 176);
					if ((int)v18 > 0)
					{
						QueryPerformanceCounter(&v28);
						v25 = v28.QuadPart - ::PerformanceCount.QuadPart;
					}
					if (qword_140C63758)
						sub_1401C81F0(v17, &v24);
				}
				QueryPerformanceCounter(&v29);
				v19 = v29.QuadPart - ::PerformanceCount.QuadPart - v11;
				if (v13 > v19)
				{
					v20 = (v13 - v19) / *(_QWORD*)(a1 + 176);
					if ((_DWORD)v20)
						Sleep(v20);
					QueryPerformanceCounter(&v22);
					if (v13 > v22.QuadPart - ::PerformanceCount.QuadPart - v11)
					{
						do
						{
							_mm_pause();
							QueryPerformanceCounter(&v23);
						} while (v13 > v23.QuadPart - ::PerformanceCount.QuadPart - v11);
					}
				}
			}
			*(_DWORD*)(a1 + 64) &= ~0x100u;
		}
		goto LABEL_41;
	}
LABEL_42:
	*(_DWORD*)(a1 + 64) &= ~0x10u;
	if (*(_QWORD*)(a1 + 40) <= 1ui64)
	{
		*(_DWORD*)(a1 + 32) = 0;
		_InterlockedExchange64((volatile __int64*)(a1 + 40), 0i64);
		if (*(_QWORD*)(a1 + 48))
		{
			if (!*(_QWORD*)(a1 + 56))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 56), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(a1 + 56));
		}
		return (unsigned int)v8;
	}
	else
	{
		--* (_QWORD*)(a1 + 40);
		return (unsigned int)v8;
	}
}
// 14000959A: variable 'v5' is possibly undefined
// 1400096A1: variable 'v17' is possibly undefined
// 140C3FEB0: using guessed type int dword_140C3FEB0;
// 140C3FEC0: using guessed type int dword_140C3FEC0[];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63758: using guessed type __int64 qword_140C63758;

