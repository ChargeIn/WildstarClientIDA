//----- (00000001402A3CE0) ----------------------------------------------------
__int64 __fastcall sub_1402A3CE0(__int64 a1, int a2)
{
	__m128i* v4; // r8
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // r9
	__int64 v9; // r10
	int v10; // edi
	unsigned int i; // r9d
	unsigned int j; // r8d
	__int64 v13; // rcx
	volatile signed __int32* v14; // rdx
	volatile signed __int32* v15; // rdx
	unsigned __int64 v16; // rsi
	__int64 v17; // r14
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	unsigned int v22; // edx
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64 v26; // [rsp+40h] [rbp-58h] BYREF
	int v27[10]; // [rsp+48h] [rbp-50h] BYREF

	if (*(int*)(a1 + 88) >= 1)
	{
		if (a2 < 1)
		{
			if (*(_QWORD*)(a1 + 112))
			{
				v15 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
				_InterlockedDecrement(v15);
				_InterlockedExchangeAdd(v15 + 1, -*(_DWORD*)(a1 + 216));
				_InterlockedIncrement(v15 + 4);
				_InterlockedExchangeAdd(v15 + 5, *(_DWORD*)(a1 + 216));
			}
			v16 = 0i64;
			if (*(_QWORD*)(a1 + 160))
			{
				v17 = 0i64;
				do
				{
					sub_140275940((__int64*)(v17 + *(_QWORD*)(a1 + 152)));
					++v16;
					v17 += 16i64;
				} while (v16 < *(_QWORD*)(a1 + 160));
			}
			sub_1402A5F00((_QWORD*)(a1 + 152));
			sub_1402A3110((__int64*)(a1 + 128));
			v18 = *(_QWORD*)(a1 + 144);
			if (v18)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
				*(_QWORD*)(a1 + 144) = 0i64;
			}
			v19 = *(_QWORD*)(a1 + 112);
			if (v19)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
				*(_QWORD*)(a1 + 112) = 0i64;
			}
			v20 = *(_QWORD*)(a1 + 120);
			if (v20)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
				*(_QWORD*)(a1 + 120) = 0i64;
			}
			v21 = *(_QWORD*)(a1 + 96);
			if (v21)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
				*(_QWORD*)(a1 + 96) = 0i64;
			}
			v22 = 0;
			*(_DWORD*)(a1 + 92) = -2147483638;
			*(_DWORD*)(a1 + 184) = 0;
			*(_QWORD*)(a1 + 208) = 0i64;
			if (*(_QWORD*)(a1 + 200))
			{
				v23 = 0i64;
				do
				{
					v24 = 3 * v23;
					v25 = *(_QWORD*)(a1 + 192);
					*(_DWORD*)(v25 + 8 * v24) = 0;
					*(_QWORD*)(v25 + 8 * v24 + 8) = 0i64;
					++v22;
					*(_QWORD*)(v25 + 8 * v24 + 16) = 0i64;
					v23 = v22;
				} while ((unsigned __int64)v22 < *(_QWORD*)(a1 + 200));
			}
		}
	}
	else if (a2 >= 1)
	{
		v4 = *(__m128i**)(a1 + 72);
		if (v4)
		{
			result = sub_140279ED0(
				*(_QWORD*)(a1 + 16),
				1,
				v4,
				*(_DWORD*)(a1 + 40),
				*(_DWORD*)(a1 + 52),
				*(_DWORD*)(a1 + 60),
				0,
				(__int64*)(a1 + 96));
			if ((int)result < 0)
			{
				*(_DWORD*)(a1 + 92) = result;
				return result;
			}
		}
		else
		{
			v6 = *(int*)(a1 + 48);
			if ((_DWORD)v6 != 24)
			{
				v7 = *(int*)(a1 + 52);
				v27[0] = *(_DWORD*)(a1 + 28);
				v27[1] = *(_DWORD*)(a1 + 32);
				v27[2] = *(_DWORD*)(a1 + 36);
				v27[3] = *(_DWORD*)(a1 + 44);
				v27[4] = dword_140AE8120[v6];
				v27[5] = dword_140AE7EB0[v7];
				v27[6] = sub_14027A160(v6, v7);
				v27[7] = *(_DWORD*)(v8 + v9 + 11435744);
				v27[8] = (*(_DWORD*)(a1 + 60) >> 7) & 1;
				v10 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
					+ 48i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
						v27,
						0i64,
						a1 + 112);
				if (v10 < 0)
				{
					v26 = 0x141DE5C88i64;
					sub_1401A3130(14, 2, &v26, (unsigned int)v10);
					*(_DWORD*)(a1 + 92) = v10;
					return (unsigned int)v10;
				}
				if ((unsigned int)(*(_DWORD*)(a1 + 52) - 4) <= 1)
					sub_140279FA0(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 112));
			}
			if (*(_QWORD*)(a1 + 176))
			{
				for (i = 0; i < *(_DWORD*)(a1 + 44); ++i)
				{
					for (j = 0;
						j < *(_DWORD*)(a1 + 36);
						*(_DWORD*)(*(_QWORD*)(a1 + 168) + 4 * v13) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1)
					{
						v13 = i + j * *(_DWORD*)(a1 + 44);
						++j;
					}
				}
			}
			v14 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
			_InterlockedIncrement(v14);
			_InterlockedExchangeAdd(v14 + 1, *(_DWORD*)(a1 + 216));
			_InterlockedIncrement(v14 + 2);
			_InterlockedExchangeAdd(v14 + 3, *(_DWORD*)(a1 + 216));
			*(_DWORD*)(a1 + 92) = 0;
		}
	}
	*(_DWORD*)(a1 + 88) = a2;
	return 0i64;
}
// 1402A3ED4: conditional instruction was optimized away because eax.4<1
// 1402A3DC0: variable 'v8' is possibly undefined
// 1402A3DC0: variable 'v9' is possibly undefined
// 140AE7EB0: using guessed type int dword_140AE7EB0[];
// 140AE8120: using guessed type int dword_140AE8120[28];

