//----- (000000014028FCD0) ----------------------------------------------------
__int64 __fastcall sub_14028FCD0(__int64 a1, int a2)
{
	__int64 v2; // r10
	__int64 v4; // rcx
	int v6; // r11d
	int v7; // eax
	int v8; // edx
	__m128i* v9; // r8
	__int64 result; // rax
	int v11; // r8d
	volatile signed __int32* v12; // rdx
	volatile signed __int32* v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	unsigned int v16; // edx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rax

	v2 = *(int*)(a1 + 52);
	v4 = *(_QWORD*)(a1 + 16);
	v6 = *(_DWORD*)(4 * v2 + *(_QWORD*)(v4 + 7040));
	if (v6 || (v7 = 2, *(_QWORD*)(v4 + 6616)))
		v7 = 1;
	v8 = *(_DWORD*)(a1 + 88);
	if (v8 >= v7)
		goto LABEL_19;
	if (a2 < v7)
	{
		if (v8 < v7)
			goto LABEL_29;
	LABEL_19:
		if (a2 < v7)
		{
			if (*(_QWORD*)(a1 + 104))
			{
				v13 = (volatile signed __int32*)(48 * v2 + v4 + 724);
				_InterlockedDecrement(v13);
				_InterlockedExchangeAdd(v13 + 1, -*(_DWORD*)(a1 + 128));
				_InterlockedIncrement(v13 + 4);
				_InterlockedExchangeAdd(v13 + 5, *(_DWORD*)(a1 + 128));
			}
			v14 = *(_QWORD*)(a1 + 112);
			if (v14)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
				*(_QWORD*)(a1 + 112) = 0i64;
			}
			v15 = *(_QWORD*)(a1 + 104);
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
				*(_QWORD*)(a1 + 104) = 0i64;
			}
			v16 = 0;
			*(_DWORD*)(a1 + 92) = -2147483638;
			*(_DWORD*)(a1 + 96) = 0;
			*(_QWORD*)(a1 + 160) = 0i64;
			if (*(_QWORD*)(a1 + 152))
			{
				v17 = 0i64;
				do
				{
					v18 = 3 * v17;
					v19 = *(_QWORD*)(a1 + 144);
					*(_DWORD*)(v19 + 8 * v18) = 0;
					*(_QWORD*)(v19 + 8 * v18 + 8) = 0i64;
					++v16;
					*(_QWORD*)(v19 + 8 * v18 + 16) = 0i64;
					v17 = v16;
				} while ((unsigned __int64)v16 < *(_QWORD*)(a1 + 152));
			}
		}
		goto LABEL_29;
	}
	v9 = *(__m128i**)(a1 + 72);
	if (v9)
	{
		result = sub_14026C360(v4, 1, v9, *(_DWORD*)(a1 + 40), v2, *(_DWORD*)(a1 + 60), 0, (__int64*)(a1 + 112));
		if ((int)result < 0)
		{
		LABEL_8:
			*(_DWORD*)(a1 + 92) = result;
			return result;
		}
	}
	else
	{
		v11 = *(_DWORD*)(4 * v2 + *(_QWORD*)(v4 + 7032));
		if ((v11 & 1) == 0 || !dword_140AE64C0[*(int*)(a1 + 48)])
		{
			if (*(char*)(a1 + 60) < 0)
				v11 |= 0x400u;
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, int, int, int, __int64, _QWORD))(**(_QWORD**)(v4 + 6608) + 192i64))(
				*(_QWORD*)(v4 + 6608),
				*(unsigned int*)(a1 + 28),
				*(unsigned int*)(a1 + 32),
				*(unsigned int*)(a1 + 36),
				*(_DWORD*)(a1 + 44),
				v11,
				dword_140AE7B30[*(int*)(a1 + 48)],
				v6,
				a1 + 104,
				0i64);
			if ((int)result < 0)
				goto LABEL_8;
			if (*(_DWORD*)(a1 + 52) == 4)
				sub_14026BF20(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 104));
			v12 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
			_InterlockedIncrement(v12);
			_InterlockedExchangeAdd(v12 + 1, *(_DWORD*)(a1 + 128));
			_InterlockedIncrement(v12 + 2);
			_InterlockedExchangeAdd(v12 + 3, *(_DWORD*)(a1 + 128));
		}
		*(_DWORD*)(a1 + 92) = 0;
	}
LABEL_29:
	*(_DWORD*)(a1 + 88) = a2;
	return 0i64;
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140AE7B30: using guessed type int dword_140AE7B30[28];

