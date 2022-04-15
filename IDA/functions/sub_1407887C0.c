#include "../winhttp.h"

//----- (00000001407887C0) ----------------------------------------------------
__int64 __fastcall sub_1407887C0(__int64 a1)
{
	__int64 result; // rax
	__m128* v3; // rcx
	__m128 v4; // xmm6
	float* v5; // rbx
	__int64 v6; // rdi
	unsigned int v7; // eax
	__m128 v8; // xmm1
	__m128 v9; // xmm2
	float v10; // xmm2_4
	int v11; // [rsp+48h] [rbp+10h] BYREF

	result = qword_140C65898;
	if (qword_140C65898)
	{
		v3 = *(__m128**)(qword_140C65898 + 120);
		if (v3)
		{
			result = *(_QWORD*)(a1 + 40);
			v4 = v3[286];
			*(_DWORD*)(a1 + 48) = 2139095039;
			v5 = *(float**)result;
			if (*(_QWORD*)result != result)
			{
				do
				{
					v6 = *((_QWORD*)v5 + 3);
					result = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v6 + 8));
					if ((_DWORD)result)
					{
						if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v6 + 8)) == 2)
						{
							v7 = sub_14054F710(v6);
						}
						else if (qword_140C65898)
						{
							v7 = sub_140553BD0(v6, &v11);
						}
						else
						{
							v7 = 0;
						}
						result = sub_14024B980(v7);
						if (result)
						{
							v8 = _mm_sub_ps(
								v4,
								_mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128) * (unsigned int*)(result + 12), (__m128) * (unsigned int*)(result + 20)),
									_mm_unpacklo_ps((__m128) * (unsigned int*)(result + 16), (__m128)0i64)));
							v9 = _mm_mul_ps(v8, v8);
							v10 = fsqrt(
								(float)(v9.m128_f32[0] + _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
								+ _mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
							v5[8] = v10;
							if (v10 < *(float*)(a1 + 48))
								*(float*)(a1 + 48) = v10;
						}
					}
					v5 = *(float**)v5;
				} while (v5 != *(float**)(a1 + 40));
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

