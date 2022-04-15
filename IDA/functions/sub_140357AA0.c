#include "../winhttp.h"

//----- (0000000140357AA0) ----------------------------------------------------
__int64 __fastcall sub_140357AA0(__int64 a1, __m128* a2)
{
	__int64* v2; // rsi
	__int64 v5; // rcx
	__m128 v6; // xmm0
	_QWORD* v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rbp
	__m128 v10; // xmm1
	int v11; // ecx
	int v12; // edi
	__m128 v13; // xmm2
	int v14; // ecx
	int v15; // r14d
	__m128 v16; // xmm1
	int v17; // ecx
	int v18; // edx
	int v19; // edx
	__m128 v20; // xmm1
	int v21; // ecx
	int v22; // ecx
	float v23; // xmm6_4
	int v24; // r9d
	__int64 v25; // rbx
	__m128* v26; // rax
	__m128 v27; // xmm2
	float v28; // xmm0_4
	__int64 v29; // rax
	int v31; // [rsp+20h] [rbp-68h]
	int v32; // [rsp+28h] [rbp-60h]
	int v33; // [rsp+2Ch] [rbp-5Ch]
	__m128 v34; // [rsp+30h] [rbp-58h]
	__m128 v35; // [rsp+40h] [rbp-48h]

	v2 = (__int64*)(a1 + 2328);
	v5 = *(_QWORD*)(a1 + 2328);
	v6 = _mm_shuffle_ps((__m128)a2[1].m128_u32[0], (__m128)a2[1].m128_u32[0], 0);
	v34 = _mm_sub_ps(*a2, v6);
	v35 = _mm_add_ps(v6, *a2);
	if (v5)
	{
		do
		{
			v7 = *(_QWORD**)(v5 + 1400);
			if (v7)
				*v7 = *(_QWORD*)(v5 + 1408);
			v8 = *(_QWORD*)(v5 + 1408);
			if (v8)
				*(_QWORD*)(v8 + 1400) = *(_QWORD*)(v5 + 1400);
			*(_QWORD*)(v5 + 1400) = 0i64;
			*(_QWORD*)(v5 + 1408) = 0i64;
			v5 = *v2;
		} while (*v2);
	}
	v10 = (__m128)v34.m128_u32[0];
	v9 = 0i64;
	v10.m128_f32[0] = (float)((float)(v34.m128_f32[0] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
	v11 = (int)v10.m128_f32[0];
	if ((int)v10.m128_f32[0] != 0x80000000 && (float)v11 != v10.m128_f32[0])
		v10.m128_f32[0] = (float)(v11 - (_mm_movemask_ps(_mm_unpacklo_ps(v10, v10)) & 1));
	v13 = (__m128)v34.m128_u32[2];
	v12 = (int)v10.m128_f32[0];
	v13.m128_f32[0] = (float)((float)(v34.m128_f32[2] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
	v14 = (int)v13.m128_f32[0];
	if ((int)v13.m128_f32[0] != 0x80000000 && (float)v14 != v13.m128_f32[0])
		v13.m128_f32[0] = (float)(v14 - (_mm_movemask_ps(_mm_unpacklo_ps(v13, v13)) & 1));
	v16 = (__m128)v35.m128_u32[0];
	v15 = (int)v13.m128_f32[0];
	v16.m128_f32[0] = (float)((float)(v35.m128_f32[0] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
	v17 = (int)v16.m128_f32[0];
	if ((int)v16.m128_f32[0] != 0x80000000 && (float)v17 != v16.m128_f32[0])
		v16.m128_f32[0] = (float)(v17 - (_mm_movemask_ps(_mm_unpacklo_ps(v16, v16)) & 1));
	v18 = (int)v16.m128_f32[0];
	v20 = (__m128)v35.m128_u32[2];
	v19 = v18 + 1;
	v20.m128_f32[0] = (float)((float)(v35.m128_f32[2] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
	v21 = (int)v20.m128_f32[0];
	if ((int)v20.m128_f32[0] != 0x80000000 && (float)v21 != v20.m128_f32[0])
		v20.m128_f32[0] = (float)(v21 - (_mm_movemask_ps(_mm_unpacklo_ps(v20, v20)) & 1));
	v22 = (int)v20.m128_f32[0] + 1;
	if (*(_DWORD*)(a1 + 2264) < v19)
		v19 = *(_DWORD*)(a1 + 2264);
	if (*(_DWORD*)(a1 + 2268) < v22)
		v22 = *(_DWORD*)(a1 + 2268);
	if (v12 < *(_DWORD*)(a1 + 2256))
		v12 = *(_DWORD*)(a1 + 2256);
	if (v15 < *(_DWORD*)(a1 + 2260))
		v15 = *(_DWORD*)(a1 + 2260);
	if (v12 >= v19 || v15 >= v22)
		return 0i64;
	v31 = v12;
	v32 = v19;
	v23 = a2[1].m128_f32[0] * a2[1].m128_f32[0];
	v33 = v22;
	do
	{
		if (v12 < v32)
		{
			do
			{
				v24 = *(_DWORD*)(a1 + 2204);
				v25 = *(_QWORD*)(*(_QWORD*)(a1 + 2272)
					+ 8i64
					* (v12 % v24
						+ v24
						* (v15 % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (v15 % *(_DWORD*)(a1 + 2208) < 0))
						+ v24 * (unsigned int)(v12 % v24 < 0)));
				if (v25)
				{
					v26 = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v25 + 16) + 40i64))(*(_QWORD*)(v25 + 16));
					v27 = _mm_sub_ps(_mm_max_ps(v26[2], _mm_min_ps(*a2, v26[3])), *a2);
					v28 = _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
					if ((float)((float)(v28 * v28) + (float)(v27.m128_f32[0] * v27.m128_f32[0])) <= v23)
					{
						if (!*(_QWORD*)(v25 + 1400))
						{
							*(_QWORD*)(v25 + 1400) = v2;
							*(_QWORD*)(v25 + 1408) = *v2;
							*v2 = v25;
							v29 = *(_QWORD*)(v25 + 1408);
							if (v29)
								*(_QWORD*)(v29 + 1400) = v25 + 1408;
						}
						++v9;
					}
				}
				++v12;
			} while (v12 < v32);
			v22 = v33;
			v12 = v31;
		}
		++v15;
	} while (v15 < v22);
	return v9;
}
// 140C43FB8: using guessed type int dword_140C43FB8;

