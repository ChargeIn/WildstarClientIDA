#include "../winhttp.h"

//----- (00000001402C2780) ----------------------------------------------------
__int64 __fastcall sub_1402C2780(_DWORD* a1, const __m128i* a2)
{
	__int64 v3; // r8
	__int64 v4; // r10
	int v5; // edx
	unsigned int v6; // eax
	unsigned int v7; // edx
	unsigned int v8; // edx
	unsigned int v9; // eax
	unsigned int v10; // edx
	unsigned int v11; // ecx
	unsigned int v12; // r8d
	unsigned int v13; // edx
	__int64 result; // rax
	int v15; // [rsp+0h] [rbp-38h]
	int v16; // [rsp+4h] [rbp-34h]
	unsigned __int64 v17; // [rsp+10h] [rbp-28h]
	int v18; // [rsp+18h] [rbp-20h]

	v3 = 0i64;
	v4 = 2i64;
	v17 = _mm_load_si128(a2).m128i_u64[0];
	v18 = a2->m128i_i32[2];
	do
	{
		v5 = *(_DWORD*)((char*)&v17 + v3);
		v6 = v5 & 0x7FFFFFFF;
		v7 = v5 & 0x80000000;
		if ((v6 & 0x7F800000) != 2139095040)
		{
			if (v7)
			{
				*(int*)((char*)&v15 + v3) = 0;
				goto LABEL_16;
			}
			if (v6 > 0x477E0000)
			{
				*(int*)((char*)&v15 + v3) = 1983;
				goto LABEL_16;
			}
			if (v6 >= 0x38800000)
				v9 = v6 - 939524096;
			else
				v9 = (v6 & 0x7FFFFF | 0x800000) >> (113 - (v6 >> 23));
			v8 = ((((v9 >> 17) & 1) + v9 + 0xFFFF) >> 17) & 0x7FF;
			goto LABEL_15;
		}
		*(int*)((char*)&v15 + v3) = 1984;
		if ((v6 & 0x7FFFFF) != 0)
		{
			v8 = v6 & 0x3F | (v6 > 0xB) | ((v6 | (v6 >> 11)) >> 6) & 0x3F | 0x7C0;
		LABEL_15:
			*(int*)((char*)&v15 + v3) = v8;
			goto LABEL_16;
		}
		if (v7)
			*(int*)((char*)&v15 + v3) = 0;
	LABEL_16:
		v3 += 4i64;
		--v4;
	} while (v4);
	v10 = v18 & 0x7FFFFFFF;
	v11 = v18 & 0x80000000;
	if ((v18 & 0x7F800000) == 2139095040)
	{
		v12 = 992;
		if ((v18 & 0x7FFFFF) != 0)
		{
			v12 = v18 & 0x1F | ((v18 & 0x7FFFFFFFu) > 0xD) | ((v18 & 0x7FFFFFFF | ((v18 & 0x7FFFFFFFu) >> 15)) >> 3) & 0x1F | 0x3E0;
			goto LABEL_29;
		}
		if (!v11)
			goto LABEL_29;
	LABEL_21:
		v12 = 0;
		goto LABEL_29;
	}
	if (v11)
		goto LABEL_21;
	if (v10 <= 0x477C0000)
	{
		if (v10 >= 0x38800000)
			v13 = v10 - 939524096;
		else
			v13 = (v18 & 0x7FFFFF | 0x800000u) >> (113 - (v10 >> 23));
		v12 = ((((v13 >> 18) & 1) + v13 + 0x1FFFF) >> 18) & 0x3FF;
	}
	else
	{
		v12 = 991;
	}
LABEL_29:
	result = v15 & 0x7FF;
	*a1 = result | (((v12 << 11) | v16 & 0x7FF) << 11);
	return result;
}

