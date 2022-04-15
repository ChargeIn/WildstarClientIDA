//----- (0000000140280C70) ----------------------------------------------------
int __fastcall sub_140280C70(__m128* a1, char a2, __m128* a3, __int64 a4, unsigned int a5)
{
	_DWORD* v6; // rcx
	int* v9; // rbx
	int CurrentThreadId; // edx
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	HANDLE EventW; // rcx
	__int64 v14; // rcx
	int* v15; // rbx
	int v16; // edx
	__int64 v17; // rcx
	int v18; // eax
	__int64 v19; // r15
	__int64* v20; // rsi
	__int64 v21; // rdi
	__int64 v22; // rax
	__int64 v23; // r8
	HANDLE v24; // rcx
	unsigned __int64 v25; // rax
	int v27[4]; // [rsp+30h] [rbp-58h] BYREF
	__m128* v28; // [rsp+40h] [rbp-48h] BYREF
	unsigned int v29; // [rsp+90h] [rbp+8h]

	v6 = (_DWORD*)a1[537].m128_u64[0];
	if (v6[34] == v6[38] && v6[35] == v6[39])
	{
		v9 = (int*)&a1[398];
		CurrentThreadId = GetCurrentThreadId();
		if (a1[398].m128_i32[0] == CurrentThreadId)
		{
			++a1[398].m128_u64[1];
		}
		else
		{
			v11 = 0i64;
			while (_InterlockedCompareExchange64(&a1[398].m128_i64[1], 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v11 >= 0x400)
				{
					sub_14019FB60((__int64)&a1[398], CurrentThreadId);
					goto LABEL_10;
				}
			}
			*v9 = CurrentThreadId;
		}
	LABEL_10:
		if ((a2 & 1) != 0)
			sub_1402AD790((__int64*)a1[537].m128_u64[0], (__int64)a3);
		if ((a2 & 6) != 0)
			sub_1402AE0A0((_QWORD*)a1[537].m128_u64[1], a2);
		v12 = a1[398].m128_u64[1];
		if (v12 <= 1)
		{
			*v9 = 0;
			_InterlockedExchange64(&a1[398].m128_i64[1], 0i64);
			v12 = a1[399].m128_u64[0];
			if (v12)
			{
				if (!a1[399].m128_u64[1])
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64(&a1[399].m128_i64[1], (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				LODWORD(v12) = SetEvent((HANDLE)a1[399].m128_u64[1]);
			}
		}
		else
		{
			--a1[398].m128_u64[1];
		}
	LABEL_54:
		++a1[66].m128_i32[1];
		return v12;
	}
	if (a1[514].m128_u64[1])
	{
	LABEL_24:
		v15 = (int*)&a1[398];
		v16 = GetCurrentThreadId();
		if (a1[398].m128_i32[0] == v16)
		{
			++a1[398].m128_u64[1];
		}
		else
		{
			v17 = 0i64;
			while (_InterlockedCompareExchange64(&a1[398].m128_i64[1], 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v17 >= 0x400)
				{
					sub_14019FB60((__int64)&a1[398], v16);
					goto LABEL_31;
				}
			}
			*v15 = v16;
		}
	LABEL_31:
		if ((a2 & 1) != 0)
			sub_1402AD8C0(a1[537].m128_i64[0]);
		if ((a2 & 6) != 0)
			sub_1402AE1B0((__int64*)a1[537].m128_u64[1]);
		v18 = 0;
		v19 = 0i64;
		if ((a2 & 1) != 0)
			v18 = 1;
		if ((a2 & 2) != 0)
			v19 = 1i64;
		v29 = v18;
		if ((a2 & 4) != 0)
			v19 = (unsigned int)v19 | 2;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1[397].m128_u64[0] + 344i64))(
			a1[397].m128_i64[0],
			a1[454].m128_i64[0]);
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1[397].m128_u64[0] + 288i64))(
			a1[397].m128_i64[0],
			a1[460].m128_i64[v19 + 1],
			a5);
		(*(void(__fastcall**)(__int64, __int64, void*, __int64))(*(_QWORD*)a1[397].m128_u64[0] + 280i64))(
			a1[397].m128_i64[0],
			a1[481].m128_i64[v29 + 1],
			&unk_140B611D0,
			0xFFFFFFFFi64);
		v20 = (__int64*)a1[397].m128_u64[0];
		v21 = *v20;
		v22 = sub_1402AA830((_QWORD*)a1[514].m128_u64[1], **(_DWORD**)(*(_QWORD*)(a1[514].m128_u64[1] + 48) + 32i64));
		(*(void(__fastcall**)(__int64*, __int64, _QWORD, _QWORD))(v21 + 72))(v20, v22, 0i64, 0i64);
		if (_mm_movemask_ps(_mm_cmpneq_ps(a1[532], *a3)) || a1[533].m128_i32[0] != a1[15].m128_i32[0])
		{
			if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, __m128**))(*(_QWORD*)a1[397].m128_u64[0]
				+ 112i64))(
					a1[397].m128_i64[0],
					a1[531].m128_i64[0],
					0i64,
					4i64,
					0,
					&v28) >= 0)
			{
				*v28 = *a3;
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1[397].m128_u64[0] + 120i64))(
					a1[397].m128_i64[0],
					a1[531].m128_i64[0],
					0i64);
			}
			a1[532] = *a3;
			a1[533].m128_i32[0] = a1[15].m128_i32[0];
		}
		if (a1[398].m128_u64[1] <= 1)
		{
			*v15 = 0;
			_InterlockedExchange64(&a1[398].m128_i64[1], 0i64);
			if (a1[399].m128_u64[0])
			{
				if (!a1[399].m128_u64[1])
				{
					v24 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64(&a1[399].m128_i64[1], (signed __int64)v24, 0i64))
						CloseHandle(v24);
				}
				SetEvent((HANDLE)a1[399].m128_u64[1]);
			}
		}
		else
		{
			--a1[398].m128_u64[1];
		}
		v25 = a1->m128_u64[0];
		a1[448].m128_i32[2] &= 0xFFFFFEF8;
		LODWORD(v12) = (*(__int64(__fastcall**)(__m128*, __int64, __int64, _QWORD, _QWORD, _QWORD))(v25 + 664))(
			a1,
			0xFFFFFFFFi64,
			v23,
			0i64,
			0i64,
			0i64);
		a1[448].m128_i32[2] |= 0x107u;
		goto LABEL_54;
	}
	LODWORD(v12) = (*(__int64(__fastcall**)(__m128*, const wchar_t*, __int64*))(a1->m128_u64[0] + 152))(
		a1,
		L"Shaders\\DefaultPS.sho",
		&a1[514].m128_i64[1]);
	if ((v12 & 0x80000000) == 0i64)
	{
		v14 = a1[514].m128_i64[1];
		v27[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v14 + 32i64))(v14, v27);
		goto LABEL_24;
	}
	return v12;
}
// 140281025: variable 'v23' is possibly undefined
// 140AE8E58: using guessed type wchar_t aShadersDefault_1[22];
// 140280C70: using guessed type int var_58[4];

