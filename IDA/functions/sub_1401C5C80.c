//----- (00000001401C5C80) ----------------------------------------------------
__int64 __fastcall sub_1401C5C80(__int64 a1, int a2, unsigned int a3, void(__fastcall*** a4)(_QWORD))
{
	__int64 v6; // rax
	int* v7; // rax
	unsigned int i; // r8d
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v13; // rdx
	__int64 v14; // rcx
	int* v15; // rax
	HANDLE EventW; // rcx

	*(_QWORD*)a1 = off_140B5F830;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 12) = a2;
	*(_DWORD*)(a1 + 16) = a3;
	if (a3)
	{
		v6 = 8i64 * a3;
		if (!is_mul_ok(a3, 8ui64))
			v6 = -1i64;
		v7 = sub_14018B280(v6, 8u);
	}
	else
	{
		v7 = 0i64;
	}
	*(_QWORD*)(a1 + 24) = v7;
	for (i = 0; i < *(_DWORD*)(a1 + 16); *(_DWORD*)(*(_QWORD*)(a1 + 24) + v10 + 4) = -1608318975)
	{
		v9 = i++;
		v10 = 8 * v9;
		*(_DWORD*)(v10 + *(_QWORD*)(a1 + 24)) = 0;
	}
	sub_1401A1070((__int64*)(a1 + 32), 1, 0, 0i64, 0);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 96) = a4;
	if (a4)
	{
		(**a4)(a4);
		v11 = qword_140C63758;
		CurrentThreadId = GetCurrentThreadId();
		v13 = CurrentThreadId;
		if (*(_DWORD*)(v11 + 8) == CurrentThreadId)
		{
			++* (_QWORD*)(v11 + 16);
		}
		else
		{
			v14 = 0i64;
			while (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 16), 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v14 >= 0x400)
				{
					sub_14019FB60(v11 + 8, CurrentThreadId);
					goto LABEL_16;
				}
			}
			*(_DWORD*)(v11 + 8) = CurrentThreadId;
		}
	LABEL_16:
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 24i64))(*(_QWORD*)(a1 + 96), v13) != 4)
		{
			v15 = sub_14018B280(48i64, 0);
			if (v15)
				sub_1401D74C0(v15, *(_QWORD*)(a1 + 96), a1);
		}
		if (*(_QWORD*)(v11 + 16) <= 1ui64)
		{
			*(_DWORD*)(v11 + 8) = 0;
			_InterlockedExchange64((volatile __int64*)(v11 + 16), 0i64);
			if (*(_QWORD*)(v11 + 24))
			{
				if (!*(_QWORD*)(v11 + 32))
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 32), (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(*(HANDLE*)(v11 + 32));
			}
		}
		else
		{
			--* (_QWORD*)(v11 + 16);
		}
	}
	return a1;
}
// 1401C5DBD: variable 'v13' is possibly undefined
// 140B5F830: using guessed type __int64 (__fastcall *off_140B5F830[16])();
// 140C63758: using guessed type __int64 qword_140C63758;

