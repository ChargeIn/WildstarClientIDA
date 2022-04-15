#include "../winhttp.h"

//----- (00000001402A6900) ----------------------------------------------------
__int64 __fastcall sub_1402A6900(__int64 a1, int a2)
{
	__m128i* v4; // r8
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx
	int v8; // eax
	int v9; // eax
	__int64 v10; // r9
	__int64 v11; // r10
	int v12; // ebx
	unsigned int j; // r9d
	int v14; // ecx
	unsigned int v15; // eax
	volatile signed __int32* v16; // rdx
	volatile signed __int32* v17; // rdx
	__int64 v18; // r15
	_QWORD* v19; // rsi
	__int64* v20; // r14
	__int64 v21; // r12
	unsigned __int64 i; // rbx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	_QWORD* v28; // r8
	unsigned int v29; // edx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // [rsp+40h] [rbp-68h] BYREF
	int v34[5]; // [rsp+48h] [rbp-60h] BYREF
	__int64 v35; // [rsp+5Ch] [rbp-4Ch]
	int v36; // [rsp+64h] [rbp-44h]
	int v37; // [rsp+68h] [rbp-40h]
	int v38; // [rsp+6Ch] [rbp-3Ch]
	unsigned int v39; // [rsp+70h] [rbp-38h]

	if (*(int*)(a1 + 88) >= 1)
	{
		if (a2 < 1)
		{
			if (*(_QWORD*)(a1 + 112))
			{
				v17 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
				_InterlockedDecrement(v17);
				_InterlockedExchangeAdd(v17 + 1, -*(_DWORD*)(a1 + 496));
				_InterlockedIncrement(v17 + 4);
				_InterlockedExchangeAdd(v17 + 5, *(_DWORD*)(a1 + 496));
			}
			v18 = 6i64;
			v19 = (_QWORD*)(a1 + 224);
			v20 = (__int64*)(a1 + 128);
			v21 = 6i64;
			do
			{
				sub_140275940(v20);
				for (i = 0i64; i < v19[1]; ++i)
				{
					v23 = *(_QWORD*)(*v19 + 8 * i);
					if (v23)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
				}
				v19[1] = 0i64;
				v19 += 2;
				v20 += 2;
				--v21;
			} while (v21);
			sub_1402A3110((__int64*)(a1 + 320));
			v24 = *(_QWORD*)(a1 + 336);
			if (v24)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
				*(_QWORD*)(a1 + 336) = 0i64;
			}
			v25 = *(_QWORD*)(a1 + 112);
			if (v25)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 16i64))(v25);
				*(_QWORD*)(a1 + 112) = 0i64;
			}
			v26 = *(_QWORD*)(a1 + 120);
			if (v26)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26);
				*(_QWORD*)(a1 + 120) = 0i64;
			}
			v27 = *(_QWORD*)(a1 + 96);
			if (v27)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
				*(_QWORD*)(a1 + 96) = 0i64;
			}
			*(_DWORD*)(a1 + 92) = -2147483638;
			*(_DWORD*)(a1 + 344) = 0;
			*(_QWORD*)(a1 + 448) = 0i64;
			*(_QWORD*)(a1 + 456) = 0i64;
			*(_QWORD*)(a1 + 464) = 0i64;
			*(_QWORD*)(a1 + 472) = 0i64;
			*(_QWORD*)(a1 + 480) = 0i64;
			v28 = (_QWORD*)(a1 + 360);
			*(_QWORD*)(a1 + 488) = 0i64;
			do
			{
				v29 = 0;
				if (*v28)
				{
					v30 = 0i64;
					do
					{
						v31 = 3 * v30;
						v32 = *(v28 - 1);
						*(_DWORD*)(v32 + 8 * v31) = 0;
						*(_QWORD*)(v32 + 8 * v31 + 8) = 0i64;
						++v29;
						*(_QWORD*)(v32 + 8 * v31 + 16) = 0i64;
						v30 = v29;
					} while ((unsigned __int64)v29 < *v28);
				}
				v28 += 2;
				--v18;
			} while (v18);
		}
	}
	else if (a2 >= 1)
	{
		v4 = *(__m128i**)(a1 + 72);
		if (v4)
		{
			result = sub_140279ED0(
				*(_QWORD*)(a1 + 16),
				2,
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
				v34[0] = *(_DWORD*)(a1 + 28);
				v34[1] = *(_DWORD*)(a1 + 32);
				v34[2] = *(_DWORD*)(a1 + 44);
				v8 = dword_140AE8120[v6];
				v34[3] = 6;
				v34[4] = v8;
				v9 = dword_140AE7EB0[v7];
				v35 = 1i64;
				v36 = v9;
				v37 = sub_14027A160(v6, v7);
				v38 = *(_DWORD*)(v10 + v11 + 11435744);
				v39 = (*(_DWORD*)(a1 + 60) & 0x80 | 0x200u) >> 7;
				v12 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
					+ 40i64))(
						*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
						v34,
						0i64,
						a1 + 112);
				if (v12 < 0)
				{
					v33 = 0x141DE5D88i64;
					sub_1401A3130(14, 2, &v33, (unsigned int)v12);
					*(_DWORD*)(a1 + 92) = v12;
					return (unsigned int)v12;
				}
				if ((unsigned int)(*(_DWORD*)(a1 + 52) - 4) <= 1)
					sub_140279FA0(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 112));
			}
			if (*(_QWORD*)(a1 + 504))
			{
				for (j = 0;
					j < *(_DWORD*)(a1 + 44);
					*(_DWORD*)(*(_QWORD*)(a1 + 504) + 4i64 * (v15 + v14)) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1)
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 504) + 4i64 * j) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1;
					*(_DWORD*)(*(_QWORD*)(a1 + 504) + 4i64 * (j + *(_DWORD*)(a1 + 44))) = *(_DWORD*)(*(_QWORD*)(a1 + 16)
						+ 240i64)
						- 1;
					*(_DWORD*)(*(_QWORD*)(a1 + 504) + 4i64 * (j + 2 * *(_DWORD*)(a1 + 44))) = *(_DWORD*)(*(_QWORD*)(a1 + 16)
						+ 240i64)
						- 1;
					*(_DWORD*)(*(_QWORD*)(a1 + 504) + 4i64 * (j + 2 * *(_DWORD*)(a1 + 44) + *(_DWORD*)(a1 + 44))) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 240i64) - 1;
					*(_DWORD*)(*(_QWORD*)(a1 + 504) + 4i64 * (j + 4 * *(_DWORD*)(a1 + 44))) = *(_DWORD*)(*(_QWORD*)(a1 + 16)
						+ 240i64)
						- 1;
					v14 = *(_DWORD*)(a1 + 44);
					v15 = j + 4 * v14;
					++j;
				}
			}
			v16 = (volatile signed __int32*)(48i64 * *(int*)(a1 + 52) + *(_QWORD*)(a1 + 16) + 724i64);
			_InterlockedIncrement(v16);
			_InterlockedExchangeAdd(v16 + 1, *(_DWORD*)(a1 + 496));
			_InterlockedIncrement(v16 + 2);
			_InterlockedExchangeAdd(v16 + 3, *(_DWORD*)(a1 + 496));
			*(_DWORD*)(a1 + 92) = 0;
		}
	}
	*(_DWORD*)(a1 + 88) = a2;
	return 0i64;
}
// 1402A6B92: conditional instruction was optimized away because eax.4<1
// 1402A69F2: variable 'v10' is possibly undefined
// 1402A69F2: variable 'v11' is possibly undefined
// 140AE7EB0: using guessed type int dword_140AE7EB0[];
// 140AE8120: using guessed type int dword_140AE8120[28];

