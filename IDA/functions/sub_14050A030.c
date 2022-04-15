#include "../winhttp.h"

//----- (000000014050A030) ----------------------------------------------------
__int64 __fastcall sub_14050A030(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	unsigned int v7; // r8d
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // r8
	__int64 result; // rax
	__m128i v13; // xmm0
	__int64 v14; // [rsp+38h] [rbp+10h]

	v2 = 0i64;
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
				goto LABEL_7;
		}
		v2 = *(_QWORD*)(v5 + 8i64 * v4);
	}
LABEL_7:
	v7 = sub_1400F26A0(v2 + 384, 1);
	if (qword_140C65898 == -28576)
		return 0i64;
	v8 = *(_QWORD*)(qword_140C65898 + 28584);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < v7)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v14 = v9, v7 < *(_DWORD*)(v9 + 32)))
		v14 = *(_QWORD*)(qword_140C65898 + 28584);
	if (v14 == v8)
		return 0i64;
	v11 = *(_QWORD*)(a1 + 16);
	result = 1i64;
	v13 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v14 + 40) + 4i64));
	*(_DWORD*)(v11 + 8) = 3;
	*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v13);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

