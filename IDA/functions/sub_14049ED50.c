#include "../winhttp.h"

//----- (000000014049ED50) ----------------------------------------------------
__int64 __fastcall sub_14049ED50(__int64 a1, __m128* a2, int a3, int a4, int a5)
{
	unsigned int v5; // esi
	__m128 v6; // xmm7
	unsigned int v9; // r14d
	__m128* v10; // rbx
	__m128 v11; // xmm2
	__m128 v12; // xmm1
	int v13; // edi

	v5 = 0;
	v6 = a2[286];
	v9 = 0;
	v10 = *(__m128**)(qword_140C65898 + 28464);
	if (v10)
	{
		while (1)
		{
			if ((*(unsigned int(__fastcall**)(__m128*))(v10->m128_u64[0] + 8))(v10) == a4)
			{
				v11 = _mm_sub_ps(v6, v10[286]);
				v12 = _mm_mul_ps(v11, v11);
				if ((float)((float)(v12.m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0])
					+ _mm_shuffle_ps(v12, v12, 170).m128_f32[0]) <= (float)((float)a5 * (float)a5))
					break;
			}
			v10 = (__m128*)v10[6].m128_u64[0];
			if (!v10)
				goto LABEL_7;
		}
		v9 = 1;
	}
LABEL_7:
	v13 = a3 - 1;
	if (!v13)
		return v9;
	if (v13 == 1)
		LOBYTE(v5) = v9 == 0;
	return v5;
}
// 140C65898: using guessed type __int64 qword_140C65898;

