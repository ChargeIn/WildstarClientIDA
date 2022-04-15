#include "../winhttp.h"

//----- (00000001402C2650) ----------------------------------------------------
__m128 __fastcall sub_1402C2650(unsigned int* a1)
{
	unsigned int v1; // edx
	int v2; // ecx
	int v3; // eax
	int v4; // eax
	int v5; // ecx
	int v6; // eax
	int v7; // eax
	int v8; // ecx
	__m128 v10; // [rsp+0h] [rbp-28h]

	v1 = *a1;
	v2 = *a1 & 0x3F;
	v3 = (v1 >> 6) & 0x1F;
	if (v3 == 31)
	{
		v10.m128_i32[0] = (v2 | 0x3FC0) << 17;
	}
	else
	{
		if (!v3)
		{
			if (v2)
			{
				v3 = 1;
				do
				{
					LOBYTE(v2) = 2 * v2;
					--v3;
				} while ((v2 & 0x40) == 0);
				v2 &= 0x3Fu;
			}
			else
			{
				v3 = -112;
			}
		}
		v10.m128_i32[0] = (v2 << 17) | ((v3 + 112) << 23);
	}
	v4 = (v1 >> 17) & 0x1F;
	v5 = (v1 >> 11) & 0x3F;
	if (v4 == 31)
	{
		v6 = (v1 & 0x1F800 | 0x1FE0000) << 6;
	}
	else
	{
		if (!v4)
		{
			if (v5)
			{
				v4 = 1;
				do
				{
					LOBYTE(v5) = 2 * v5;
					--v4;
				} while ((v5 & 0x40) == 0);
				v5 &= 0x3Fu;
			}
			else
			{
				v4 = -112;
			}
		}
		v6 = (v5 << 17) | ((v4 + 112) << 23);
	}
	v10.m128_i32[1] = v6;
	v7 = v1 >> 27;
	v8 = (v1 >> 22) & 0x1F;
	if (v1 >> 27 == 31)
	{
		v10.m128_i32[2] = (v1 >> 5) & 0x3E0000 | 0x7F800000;
	}
	else
	{
		if (!v7)
		{
			if (v8)
			{
				v7 = 1;
				do
				{
					LOBYTE(v8) = 2 * v8;
					--v7;
				} while ((v8 & 0x20) == 0);
				v8 &= 0x1Fu;
			}
			else
			{
				v7 = -112;
			}
		}
		v10.m128_i32[2] = (v8 << 18) | ((v7 + 112) << 23);
	}
	return _mm_and_ps(v10, (__m128)xmmword_140B608C0);
}
// 1402C2766: variable 'v10' is possibly undefined
// 140B608C0: using guessed type __int128 xmmword_140B608C0;

