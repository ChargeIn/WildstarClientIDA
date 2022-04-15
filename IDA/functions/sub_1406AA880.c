#include "../winhttp.h"

//----- (00000001406AA880) ----------------------------------------------------
__int64 __fastcall sub_1406AA880(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	unsigned __int64 v4; // r8
	unsigned int v5; // ecx
	__int64 v6; // r9
	__int64 v7; // rax
	unsigned int v8; // eax
	__int64 result; // rax
	__m128i v10; // xmm0
	__int64 v11; // rcx
	__int64 v12; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = 0i64;
		v4 = *(_QWORD*)(qword_140C63650 + 768);
		v5 = 0;
		if (v4)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v7 = ++v5;
				if (v5 >= v4)
					goto LABEL_9;
			}
			v3 = *(_QWORD*)(v6 + 8i64 * v5);
		}
	LABEL_9:
		v8 = sub_1400F26A0(v3 + 384, 2);
		result = sub_1402041E0(v8);
		if (result)
		{
			v10 = _mm_cvtsi32_si128(*(_DWORD*)(result + 4));
			v11 = a1[2];
			result = 1i64;
			*(_DWORD*)(v11 + 8) = 3;
			*(_QWORD*)v11 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
			a1[2] += 16i64;
		}
	}
	else
	{
		v12 = a1[2];
		*(_QWORD*)v12 = 0i64;
		*(_DWORD*)(v12 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

