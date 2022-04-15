#include "../winhttp.h"

//----- (00000001402D7820) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402D7820(__int64 a1, __m128* a2)
{
	unsigned int v4; // r8d
	int v5; // eax
	__m128 v6; // xmm0
	__m128 v7; // xmm3
	__m128 v8; // xmm1
	__int64 v9; // rax
	unsigned __int64 result; // rax
	__m128 v11; // [rsp+20h] [rbp-58h]
	__m128 v12; // [rsp+30h] [rbp-48h] BYREF
	__m128 v13; // [rsp+40h] [rbp-38h]
	int v14; // [rsp+50h] [rbp-28h]

	while (1)
	{
		if (!a2->m128_i8[0])
		{
			v4 = *(_DWORD*)(*(_QWORD*)(a1 + 672) + 4 * (((__int64)a2 - a1) / 112));
			v5 = a2[3].m128_i32[0] ^ a2[6].m128_i32[0];
			if (_bittest(&v5, v4))
			{
				v6 = _mm_sub_ps(a2[1], a2[4]);
				v11 = _mm_div_ps(a2[(v4 >> 2) + 4], _mm_sub_ps(a2[(v4 >> 2) + 4], a2[(v4 >> 2) + 1]));
				v7 = (__m128)v11.m128_u32[v4 & 3];
				v12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v6), a2[4]);
				v8 = _mm_shuffle_ps(v12, v12, 255);
				v13 = _mm_sub_ps(_mm_shuffle_ps(v8, v8, 0), v12);
				v9 = *(_QWORD*)(a1 + 680);
				v14 = _mm_movemask_ps(_mm_cmplt_ps(v12, (__m128)0i64)) | (16 * _mm_movemask_ps(_mm_cmplt_ps(v13, (__m128)0i64)));
				if ((unsigned __int64)a2 >= a1 + 112 * v9 - 112)
					(*(void(__fastcall**)(__m128*, _QWORD))(a1 + 688))(&v12, *(_QWORD*)(a1 + 696));
				else
					sub_1402D7630(a1, a2 + 7, &v12);
			}
		}
		a2->m128_i8[0] = 1;
		result = a1 + 112i64 * *(_QWORD*)(a1 + 680) - 112;
		if ((unsigned __int64)a2 >= result)
			break;
		a2 += 7;
	}
	return result;
}

