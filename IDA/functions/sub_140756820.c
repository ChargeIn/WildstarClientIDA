#include "../winhttp.h"

//----- (0000000140756820) ----------------------------------------------------
__int64 __fastcall sub_140756820(_QWORD* a1)
{
	unsigned int v3; // eax
	__int64 v4; // rdx
	__int64 v5; // rbp
	unsigned int v6; // esi
	unsigned int*** i; // rdi
	__int64 v8; // rax
	__m128i v9; // xmm0

	if (qword_140C659B0)
	{
		v3 = sub_140056D60(a1, 1u);
		if (v3)
		{
			v5 = sub_1404A88A0(qword_140C659B0, v3);
			if (v5)
			{
				v6 = 1;
				sub_140058900((__int64)a1, v4, 0);
				for (i = *(unsigned int****)(v5 + 8); i != *(unsigned int****)(v5 + 16); ++i)
				{
					v8 = a1[2];
					v9 = _mm_cvtsi32_si128(v6);
					*(_DWORD*)(v8 + 8) = 3;
					++v6;
					*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
					a1[2] += 16i64;
					if ((unsigned int)sub_140755660((__int64)a1, *i))
					{
						sub_14005EA50(
							(__int64)a1,
							(__int64*)(a1[2] - 48i64),
							(int*)(a1[2] - 32i64),
							(unsigned int*)(a1[2] - 16i64));
						a1[2] -= 32i64;
					}
					else
					{
						a1[2] -= 16i64;
						--v6;
					}
				}
				return 1i64;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				return 1i64;
			}
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1407568C3: variable 'v4' is possibly undefined
// 140C659B0: using guessed type __int64 qword_140C659B0;

