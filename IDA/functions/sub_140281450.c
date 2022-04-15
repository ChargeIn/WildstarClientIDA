//----- (0000000140281450) ----------------------------------------------------
__int64 __fastcall sub_140281450(
	__int64 a1,
	int a2,
	unsigned int a3,
	unsigned int a4,
	int a5,
	int a6,
	int a7,
	unsigned int a8)
{
	__int64 v8; // r14
	__int64 result; // rax
	int* v13; // rbx
	int CurrentThreadId; // edx
	__int64 v15; // rcx
	HANDLE EventW; // rcx
	_DWORD* v17; // r9
	int v18; // ecx

	v8 = a2;
	result = (unsigned int)(dword_140AE57A8[a2] + dword_140AE5178[a2]);
	if (a4 >= (unsigned int)result && a8)
	{
		v13 = (int*)(a1 + 6368);
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(a1 + 6368) == CurrentThreadId)
		{
			++* (_QWORD*)(a1 + 6376);
		}
		else
		{
			v15 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6376), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v15 >= 0x400)
				{
					sub_14019FB60(a1 + 6368, CurrentThreadId);
					goto LABEL_10;
				}
			}
			*v13 = CurrentThreadId;
		}
	LABEL_10:
		sub_140279030(a1);
		sub_140279560(a1);
		sub_140279680(a1);
		sub_1402798D0(a1);
		if (*(_DWORD*)(a1 + 8632) != (_DWORD)v8)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 192i64))(
				*(_QWORD*)(a1 + 6352),
				(unsigned int)dword_140AE7DA8[v8]);
			*(_DWORD*)(a1 + 8632) = v8;
		}
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, _DWORD))(**(_QWORD**)(a1 + 6352) + 160i64))(
			*(_QWORD*)(a1 + 6352),
			a4,
			a8,
			a3,
			a7,
			0);
		if (*(_QWORD*)(a1 + 6376) <= 1ui64)
		{
			*v13 = 0;
			_InterlockedExchange64((volatile __int64*)(a1 + 6376), 0i64);
			if (*(_QWORD*)(a1 + 6384))
			{
				if (!*(_QWORD*)(a1 + 6392))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6392), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(a1 + 6392));
			}
		}
		else
		{
			--* (_QWORD*)(a1 + 6376);
		}
		v17 = (_DWORD*)(a1 + 8 * (v8 + 2 * v8 + 133));
		++* v17;
		v17[1] += a8 * ((a6 - dword_140AE5178[v8]) / (unsigned int)dword_140AE57A8[v8]);
		v17[2] += a8 * a4;
		v18 = dword_140AE4ED8[*(int*)(a1 + 8152)];
		v17[4] += a8 * a6;
		v17[3] += a8 * a4 * v18;
		result = 216i64 * *(int*)(a1 + 8120);
		v17[5] += a8 * (*(_DWORD*)(result + a1 + 1328) + a6 * *(_DWORD*)(result + a1 + 1256));
	}
	return result;
}
// 140AE4ED8: using guessed type int dword_140AE4ED8[19];
// 140AE5178: using guessed type int dword_140AE5178[];
// 140AE57A8: using guessed type int dword_140AE57A8[40];
// 140AE7DA8: using guessed type int dword_140AE7DA8[6];

