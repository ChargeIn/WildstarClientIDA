#include "../winhttp.h"

//----- (0000000140902580) ----------------------------------------------------
__int64 __fastcall sub_140902580(unsigned __int64 a1, double* a2, int* a3)
{
	int v4; // r11d
	unsigned __int64 v6; // r10
	int v7; // r9d
	int v8; // r11d
	__int64 v9; // r8
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // rdx
	__int64 v12; // rcx
	unsigned __int64 v13; // r8
	unsigned __int64 v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rax
	int v17; // r9d
	__int64 v18; // rdx
	__int64 v19; // rdx
	int v20; // esi
	unsigned __int64 v21; // rdx
	__int64* v22; // r10
	unsigned __int64 v23; // r8
	__int64* v24; // rax
	int v25; // r10d
	__int64 result; // rax
	__int64 v27[9]; // [rsp+18h] [rbp-80h] BYREF

	v27[3] = 0i64;
	v4 = ((a1 >> 52) & 0x7FF) - 1023;
	v6 = (a1 & 0xFFFFFE0000000i64 | 0x10000000000000i64) >> 29;
	v7 = v4 / 36;
	v8 = v4 % 36;
	v9 = v7 + 3;
	v10 = v6 * qword_140C1AC50[v9];
	v11 = (v10 >> 36) + v6 * qword_140C1AC50[v9 - 1];
	v12 = qword_140C1AC50[v9 - 2];
	v27[2] = v10 & 0xFFFFFFFFFi64;
	v13 = (v11 >> 36) + v6 * v12;
	v14 = v13 >> 36;
	v27[1] = v11 & 0xFFFFFFFFFi64;
	v15 = v13 & 0xFFFFFFFFFi64;
	v16 = v7;
	v17 = 1;
	v18 = qword_140C1AC50[v16];
	v27[0] = v15;
	v19 = ((v15 | ((v14 + v6 * v18) << 36)) >> (35 - (unsigned __int8)v8)) & 7;
	v20 = v19 & 1;
	if ((v19 & 1) != 0)
	{
		*a3 = ((unsigned __int8)((int)v19 >> 1) + 1) & 3;
		v21 = ~v15 & ((1i64 << (36 - (unsigned __int8)v8)) - 1);
		if (v21 < 0x10000)
		{
			v22 = v27;
			do
			{
				++v22;
				++v17;
				v21 = (v21 << 36) | ~*v22 & 0xFFFFFFFFFi64;
			} while (v21 < 0x10000);
		}
		v23 = ~v27[v17] & 0xFFFFFFFFFi64;
	}
	else
	{
		*a3 = (int)v19 >> 1;
		v21 = v15 & ((1i64 << (36 - (unsigned __int8)v8)) - 1);
		if (v21 < 0x10000)
		{
			v24 = v27;
			do
			{
				++v24;
				++v17;
				v21 = *v24 | (v21 << 36);
			} while (v21 < 0x10000);
		}
		v23 = v27[v17];
	}
	v25 = 0;
	while (v21 < 0x400000000000i64)
	{
		v25 += 6;
		v21 <<= 6;
	}
	while (v21 < 0x10000000000000i64)
	{
		++v25;
		v21 *= 2i64;
	}
	result = (v21 | (v23 >> (36 - (unsigned __int8)v25))) & 0xFFFFFFFFFFFFFi64 | ((v8 - 36 * v17 - v25 + 52 + 1023i64) << 52);
	if (v20)
		result |= 0x8000000000000000ui64;
	*a2 = *(double*)&result * 1.570796326794897;
	return result;
}
// 140C1AC50: using guessed type _QWORD qword_140C1AC50[14];

