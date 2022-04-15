//----- (00000001402A9480) ----------------------------------------------------
__int64 __fastcall sub_1402A9480(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	volatile signed __int32* v5; // rcx
	unsigned int i; // edi
	_QWORD* v7; // rsi
	unsigned int v8; // ecx
	__int64 v9; // rdi
	__int64 v10; // rbp
	__int64 v11; // rsi
	__int64 v12; // rcx
	__int64 v13; // rcx
	int v15[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 104i64))(v2);
		v3 = *(_QWORD*)(a1 + 64);
		v15[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 32i64))(v3, v15);
		v4 = *(_QWORD*)(a1 + 64);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 64) = 0i64;
		}
	}
	if (*(_QWORD*)(a1 + 72))
	{
		v5 = (volatile signed __int32*)(*(_QWORD*)(a1 + 16) + 244i64);
		_InterlockedDecrement(v5);
		_InterlockedExchangeAdd(v5 + 1, -*(_DWORD*)(a1 + 44));
		_InterlockedIncrement(v5 + 4);
		_InterlockedExchangeAdd(v5 + 5, *(_DWORD*)(a1 + 44));
		for (i = 0; i < *(_DWORD*)(*(_QWORD*)(a1 + 48) + 8i64); ++i)
		{
			v7 = (_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64 * i);
			if (*v7)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 16i64))(*v7);
				*v7 = 0i64;
			}
		}
		sub_14018B900(*(_QWORD*)(a1 + 72), 0);
		*(_QWORD*)(a1 + 72) = 0i64;
	}
	if (*(_QWORD*)(a1 + 80))
	{
		v8 = 23 * *(_DWORD*)(*(_QWORD*)(a1 + 48) + 40i64);
		if (v8)
		{
			v9 = 0i64;
			v10 = v8;
			do
			{
				v11 = *(_QWORD*)(a1 + 80);
				v12 = *(_QWORD*)(v11 + v9);
				if (v12)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
					*(_QWORD*)(v11 + v9) = 0i64;
				}
				v9 += 8i64;
				--v10;
			} while (v10);
		}
		sub_14018B900(*(_QWORD*)(a1 + 80), 0);
		*(_QWORD*)(a1 + 80) = 0i64;
	}
	v13 = *(_QWORD*)(a1 + 56);
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		*(_QWORD*)(a1 + 56) = 0i64;
	}
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 44) = 0;
	*(_DWORD*)(a1 + 28) = 0;
	return 0i64;
}
// 1402A9480: using guessed type int var_18[6];

