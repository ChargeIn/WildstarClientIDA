//----- (0000000140281260) ----------------------------------------------------
__int64 __fastcall sub_140281260(__int64 a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
	__int64 v5; // r14
	__int64 result; // rax
	int* v10; // rbx
	int CurrentThreadId; // edx
	__int64 v12; // rcx
	HANDLE EventW; // rcx
	_DWORD* v14; // r8

	v5 = a2;
	result = (unsigned int)(dword_140AE57A8[a2] + dword_140AE5178[a2]);
	if (a4 >= (unsigned int)result && a5)
	{
		v10 = (int*)(a1 + 6368);
		CurrentThreadId = GetCurrentThreadId();
		if (*(_DWORD*)(a1 + 6368) == CurrentThreadId)
		{
			++* (_QWORD*)(a1 + 6376);
		}
		else
		{
			v12 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(a1 + 6376), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v12 >= 0x400)
				{
					sub_14019FB60(a1 + 6368, CurrentThreadId);
					goto LABEL_10;
				}
			}
			*v10 = CurrentThreadId;
		}
	LABEL_10:
		sub_140279030(a1);
		sub_140279560(a1);
		sub_140279680(a1);
		sub_1402798D0(a1);
		if (*(_DWORD*)(a1 + 8632) != (_DWORD)v5)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6352) + 192i64))(
				*(_QWORD*)(a1 + 6352),
				(unsigned int)dword_140AE7DA8[v5]);
			*(_DWORD*)(a1 + 8632) = v5;
		}
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**(_QWORD**)(a1 + 6352) + 168i64))(
			*(_QWORD*)(a1 + 6352),
			a4,
			a5,
			a3,
			0);
		if (*(_QWORD*)(a1 + 6376) <= 1ui64)
		{
			*v10 = 0;
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
		v14 = (_DWORD*)(a1 + 8 * (v5 + 2 * v5 + 133));
		++* v14;
		v14[1] += a5 * ((a4 - dword_140AE5178[v5]) / dword_140AE57A8[v5]);
		v14[4] += a5 * a4;
		result = 216i64 * *(int*)(a1 + 8120);
		v14[5] += a5 * (*(_DWORD*)(result + a1 + 1328) + a4 * *(_DWORD*)(result + a1 + 1256));
	}
	return result;
}
// 140AE5178: using guessed type int dword_140AE5178[];
// 140AE57A8: using guessed type int dword_140AE57A8[40];
// 140AE7DA8: using guessed type int dword_140AE7DA8[6];

