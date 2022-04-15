#include "../winhttp.h"

//----- (000000014050A130) ----------------------------------------------------
__int64 __fastcall sub_14050A130(__int64 a1)
{
	signed int v1; // ebx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	unsigned int v9; // edx
	__int64 v10; // rax
	__int64 v11; // r8
	__int64 v12; // rcx
	__int64 v13; // rax
	unsigned int v14; // edx
	int v15; // eax
	__int64 v16; // rdx
	__int64 result; // rax
	__m128i v18; // xmm0
	__int64 v19; // [rsp+38h] [rbp+10h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = v8;
	if (qword_140C65898 == -28576)
		return 0i64;
	if (v8)
	{
		v11 = *(_QWORD*)(qword_140C65898 + 28584);
		v12 = v11;
		v13 = *(_QWORD*)(v11 + 8);
		while (v13)
		{
			if (*(_DWORD*)(v13 + 32) < v9)
			{
				v13 = *(_QWORD*)(v13 + 24);
			}
			else
			{
				v12 = v13;
				v13 = *(_QWORD*)(v13 + 16);
			}
		}
		if (v12 == v11 || (v19 = v12, v9 < *(_DWORD*)(v12 + 32)))
			v19 = *(_QWORD*)(qword_140C65898 + 28584);
		v10 = v19;
	}
	else
	{
		v10 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 28584) + 16i64);
	}
	if (v10 == *(_QWORD*)(qword_140C65898 + 28584))
		return 0i64;
	v14 = 0;
	v15 = *(_DWORD*)(*(_QWORD*)(v10 + 40) + 8i64);
	while (!_bittest(&v15, v14))
	{
		if (++v14 >= 5)
			goto LABEL_25;
	}
	v1 = v14;
LABEL_25:
	v16 = *(_QWORD*)(a1 + 16);
	result = 1i64;
	v18 = _mm_cvtsi32_si128(dword_140B6A860[v1]);
	*(_DWORD*)(v16 + 8) = 3;
	*(_QWORD*)v16 = *(_OWORD*)&_mm_cvtepi32_pd(v18);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 14050A223: conditional instruction was optimized away because edx.4<5u
// 140B6A860: using guessed type _DWORD dword_140B6A860[6];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

