//----- (000000014033CD40) ----------------------------------------------------
__int64 __fastcall sub_14033CD40(_QWORD* a1, __int64 a2)
{
	unsigned int* v2; // rbx
	unsigned int CurrentThreadId; // eax
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // r9
	volatile signed __int64* v9; // rbx
	unsigned int v10; // edi
	__int64 v11; // rcx
	_DWORD* v12; // rax
	__int64 v13; // rdi
	void(__fastcall * **v14)(_QWORD, __int64, __int64, __int64); // rcx
	__int64 v15; // rcx
	HANDLE EventW; // rcx
	__int64 v18[4]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v19[4]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v20; // [rsp+80h] [rbp+8h]

	v2 = (unsigned int*)(a1 + 23);
	v20 = (__int64)(a1 + 23);
	CurrentThreadId = GetCurrentThreadId();
	v7 = *v2;
	v8 = CurrentThreadId;
	v9 = (volatile signed __int64*)(v20 + 8);
	v10 = 1;
	if ((_DWORD)v7 == CurrentThreadId)
	{
		++* v9;
	}
	else
	{
		v11 = 0i64;
		while (_InterlockedCompareExchange64(v9, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v11 >= 0x400)
			{
				sub_14019FB60(v20, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v20 = CurrentThreadId;
	}
LABEL_8:
	v12 = (_DWORD*)a1[4];
	if ((_DWORD*)a1[8] != v12)
	{
		v13 = a1[4];
		*(_DWORD*)a2 = *v12;
		v14 = *(void(__fastcall****)(_QWORD, __int64, __int64, __int64))(v13 + 8);
		if (*(void(__fastcall****)(_QWORD, __int64, __int64, __int64))(a2 + 8) != v14)
		{
			if (v14)
				(**v14)(v14, v6, v7, v8);
			v15 = *(_QWORD*)(a2 + 8);
			if (v15)
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v15 + 8i64))(v15, v6, v7, v8);
			*(_QWORD*)(a2 + 8) = *(_QWORD*)(v13 + 8);
		}
		v18[0] = a1[4];
		v18[1] = a1[5];
		v18[2] = a1[6];
		v18[3] = a1[7];
		sub_14033DD20(a1 + 1, v19, v18);
		v10 = 0;
	}
	if (*v9 <= 1ui64)
	{
		*(_DWORD*)v20 = 0;
		_InterlockedExchange64(v9, 0i64);
		if (*(_QWORD*)(v20 + 16))
		{
			if (!*(_QWORD*)(v20 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v20 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v20 + 24));
		}
	}
	else
	{
		--* v9;
	}
	return v10;
}
// 14033CDED: variable 'v6' is possibly undefined
// 14033CDED: variable 'v7' is possibly undefined
// 14033CDED: variable 'v8' is possibly undefined
// 14033CD40: using guessed type __int64 var_38[4];

