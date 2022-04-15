#include "../winhttp.h"

//----- (00000001402A0970) ----------------------------------------------------
__int64 __fastcall sub_1402A0970(__int64 a1, int a2)
{
	__m128i* v4; // r8
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx
	int v8; // eax
	int v9; // eax
	__int64 v10; // r9
	__int64 v11; // r10
	int v12; // esi
	unsigned int i; // r8d
	__int64 v14; // rcx
	volatile signed __int32* v15; // rdx
	volatile signed __int32* v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	unsigned int v21; // edx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25; // [rsp+40h] [rbp-58h] BYREF
	int v26[5]; // [rsp+48h] [rbp-50h] BYREF
	__int64 v27; // [rsp+5Ch] [rbp-3Ch]
	int v28; // [rsp+64h] [rbp-34h]
	int v29; // [rsp+68h] [rbp-30h]
	int v30; // [rsp+6Ch] [rbp-2Ch]
	int v31; // [rsp+70h] [rbp-28h]

	if (*(int*)(a1 + 88) >= 1)
	{
		if (a2 < 1)
		{
			if (*(_QWORD*)(a1 + 112))
			{
				v16 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
				_InterlockedDecrement(v16);
				_InterlockedExchangeAdd(v16 + 1, -*(_DWORD*)(a1 + 216));
				_InterlockedIncrement(v16 + 4);
				_InterlockedExchangeAdd(v16 + 5, *(_DWORD*)(a1 + 216));
			}
			sub_1402A3110((__int64*)(a1 + 128));
			sub_1402A3390((_QWORD*)(a1 + 144));
			sub_140275940((__int64*)(a1 + 160));
			v17 = *(_QWORD*)(a1 + 176);
			if (v17)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
				*(_QWORD*)(a1 + 176) = 0i64;
			}
			v18 = *(_QWORD*)(a1 + 112);
			if (v18)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
				*(_QWORD*)(a1 + 112) = 0i64;
			}
			v19 = *(_QWORD*)(a1 + 120);
			if (v19)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
				*(_QWORD*)(a1 + 120) = 0i64;
			}
			v20 = *(_QWORD*)(a1 + 96);
			if (v20)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
				*(_QWORD*)(a1 + 96) = 0i64;
			}
			v21 = 0;
			*(_DWORD*)(a1 + 92) = -2147483638;
			*(_DWORD*)(a1 + 184) = 0;
			*(_QWORD*)(a1 + 208) = 0i64;
			if (*(_QWORD*)(a1 + 200))
			{
				v22 = 0i64;
				do
				{
					v23 = 3 * v22;
					v24 = *(_QWORD*)(a1 + 192);
					*(_DWORD*)(v24 + 8 * v23) = 0;
					*(_QWORD*)(v24 + 8 * v23 + 8) = 0i64;
					++v21;
					*(_QWORD*)(v24 + 8 * v23 + 16) = 0i64;
					v22 = v21;
				} while ((unsigned __int64)v21 < *(_QWORD*)(a1 + 200));
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
				0,
				v4,
				*(_DWORD*)(a1 + 40),
				*(_DWORD*)(a1 + 52),
				*(_DWORD*)(a1 + 60),
				*(_DWORD*)(a1 + 80),
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
				v26[0] = *(_DWORD*)(a1 + 28);
				v26[1] = *(_DWORD*)(a1 + 32);
				v8 = *(_DWORD*)(a1 + 44);
				v26[3] = 1;
				v26[2] = v8;
				v9 = dword_140AE8120[v6];
				v27 = 1i64;
				v26[4] = v9;
				v28 = dword_140AE7EB0[v7];
				v29 = sub_14027A160(v6, v7);
				v30 = *(_DWORD*)(v10 + v11 + 11435744);
				v31 = (*(_DWORD*)(a1 + 60) >> 7) & 1;
				v12 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
					+ 40i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
						v26,
						0i64,
						a1 + 112);
				if (v12 < 0)
				{
					v25 = 0x141DE58E0i64;
					sub_1401A3130(14, 2, &v25, (unsigned int)v12);
					*(_DWORD*)(a1 + 92) = v12;
					return (unsigned int)v12;
				}
				if ((unsigned int)(*(_DWORD*)(a1 + 52) - 4) <= 1)
					sub_140279FA0(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 112));
			}
			if (*(_QWORD*)(a1 + 224))
			{
				for (i = 0;
					i < *(_DWORD*)(a1 + 44);
					*(_DWORD*)(*(_QWORD*)(a1 + 224) + 4 * v14) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1)
				{
					v14 = i++;
				}
			}
			v15 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
			_InterlockedIncrement(v15);
			_InterlockedExchangeAdd(v15 + 1, *(_DWORD*)(a1 + 216));
			_InterlockedIncrement(v15 + 2);
			_InterlockedExchangeAdd(v15 + 3, *(_DWORD*)(a1 + 216));
			*(_DWORD*)(a1 + 92) = 0;
		}
	}
	*(_DWORD*)(a1 + 88) = a2;
	return 0i64;
}
// 1402A0B54: conditional instruction was optimized away because eax.4<1
// 1402A0A62: variable 'v10' is possibly undefined
// 1402A0A62: variable 'v11' is possibly undefined
// 140AE7EB0: using guessed type int dword_140AE7EB0[];
// 140AE8120: using guessed type int dword_140AE8120[28];

