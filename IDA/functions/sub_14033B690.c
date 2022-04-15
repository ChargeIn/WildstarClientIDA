//----- (000000014033B690) ----------------------------------------------------
int __fastcall sub_14033B690(__int64 a1, int a2, __int64 a3)
{
	unsigned int* v6; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r9
	__int64 v11; // rcx
	__int64 v12; // rcx
	unsigned int v13; // ecx
	unsigned __int64 v14; // rax
	HANDLE EventW; // rcx
	int v17; // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]

	v6 = (unsigned int*)(a1 + 184);
	CurrentThreadId = GetCurrentThreadId();
	v9 = *v6;
	v10 = CurrentThreadId;
	if ((_DWORD)v9 == CurrentThreadId)
	{
		++* ((_QWORD*)v6 + 1);
	}
	else
	{
		v11 = 0i64;
		v8 = 1i64;
		while (_InterlockedCompareExchange64((volatile signed __int64*)v6 + 1, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v11 >= 0x400)
			{
				sub_14019FB60((__int64)v6, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*v6 = CurrentThreadId;
	}
LABEL_8:
	if (a3)
		(**(void(__fastcall***)(__int64, __int64, __int64, __int64))a3)(a3, v8, v9, v10);
	if (a3)
		(**(void(__fastcall***)(__int64, __int64, __int64, __int64))a3)(a3, v8, v9, v10);
	v17 = a2;
	v18 = a3;
	if (a3)
	{
		(**(void(__fastcall***)(__int64, __int64, __int64, __int64, int, __int64))a3)(a3, v8, v9, v10, v17, v18);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a3 + 8i64))(a3);
	}
	v12 = *(_QWORD*)(a1 + 64);
	if (v12 == *(_QWORD*)(a1 + 80) - 16i64)
	{
		sub_14033E1D0((_QWORD*)(a1 + 8), &v17);
	}
	else
	{
		if (v12)
		{
			*(_DWORD*)v12 = a2;
			*(_QWORD*)(v12 + 8) = a3;
			if (a3)
				(**(void(__fastcall***)(__int64, __int64, __int64, __int64))a3)(a3, v8, v9, v10);
		}
		*(_QWORD*)(a1 + 64) += 16i64;
	}
	if (a3)
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a3 + 8i64))(a3, v8, v9, v10);
	v13 = ((__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 32)) >> 4)
		+ ((__int64)(*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 72)) >> 4)
		+ 31 * (((__int64)(*(_QWORD*)(a1 + 88) - *(_QWORD*)(a1 + 56)) >> 3) - 1);
	if (v13 > *(_DWORD*)(a1 + 344))
		*(_DWORD*)(a1 + 344) = v13;
	(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 152) + 16i64))(
		*(_QWORD*)(a1 + 152),
		v8,
		v9,
		v10);
	if (a3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a3 + 8i64))(a3);
	v14 = *((_QWORD*)v6 + 1);
	if (v14 <= 1)
	{
		*v6 = 0;
		_InterlockedExchange64((volatile __int64*)v6 + 1, 0i64);
		v14 = *((_QWORD*)v6 + 2);
		if (v14)
		{
			if (!*((_QWORD*)v6 + 3))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)v6 + 3, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v14) = SetEvent(*((HANDLE*)v6 + 3));
		}
	}
	else
	{
		--* ((_QWORD*)v6 + 1);
	}
	return v14;
}
// 14033B713: variable 'v8' is possibly undefined
// 14033B713: variable 'v9' is possibly undefined
// 14033B713: variable 'v10' is possibly undefined

