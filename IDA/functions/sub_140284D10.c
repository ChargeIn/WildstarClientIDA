//----- (0000000140284D10) ----------------------------------------------------
__int64 __fastcall sub_140284D10(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned __int64 a5,
	__int64 a6,
	unsigned __int64* a7)
{
	unsigned __int64 v7; // r14
	_QWORD* v11; // rbx
	unsigned int v12; // esi
	__int64 v13; // r10
	__int64 v14; // r8
	unsigned __int64 v15; // rdx
	__m128* v16; // r11
	__m128 v17; // xmm4
	__m128 v18; // xmm1
	__m128 v19; // xmm7
	__int64 v20; // r8
	unsigned int v21; // r9d
	_OWORD* v22; // rcx
	__int64 v23; // rbx
	__int64 v24; // rbx
	__m128 v25; // xmm4
	__m128 v26; // xmm2
	float v27; // xmm4_4
	_QWORD* v29; // [rsp+90h] [rbp+28h]

	v7 = a5;
	if (a5 >= 3)
	{
		v11 = (_QWORD*)(a1 + 344);
		v29 = (_QWORD*)(a1 + 344);
		sub_1402626B0((__int64*)(a1 + 344), 2 * *a7);
		v12 = 2;
		v13 = 0i64;
		while (1)
		{
			v14 = v13++;
			if (v13 == a3)
				v13 = 0i64;
			v15 = 0i64;
			v16 = (__m128*)(a2 + 16 * v14);
			v17 = (__m128)v16->m128_u32[1];
			v18 = (__m128) * (unsigned int*)(a2 + 16 * v13);
			v17.m128_f32[0] = v17.m128_f32[0] - *(float*)(a2 + 16 * v13 + 4);
			v18.m128_f32[0] = v18.m128_f32[0] - v16->m128_f32[0];
			v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)0i64), _mm_unpacklo_ps(v18, (__m128)0i64));
			if (v13 || !a6)
				v20 = *v11 + 16 * *a7 * (v14 & 1);
			else
				v20 = a6;
			v21 = 0;
			v22 = (_OWORD*)v20;
			do
			{
				v23 = v21++;
				if (v21 == v7)
					v21 = 0;
				v24 = 2 * v23;
				v26 = _mm_mul_ps(_mm_sub_ps(*(__m128*)(a4 + 8 * v24), *v16), v19);
				v25 = _mm_mul_ps(_mm_sub_ps(*(__m128*)(a4 + 16i64 * v21), *v16), v19);
				v26.m128_f32[0] = v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
				v27 = v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
				if (v26.m128_f32[0] <= 0.0000099999997)
				{
					*v22 = *(_OWORD*)(a4 + 8 * v24);
					++v15;
					++v22;
				}
				if (v26.m128_f32[0] <= 0.0 && v27 > 0.0000099999997 || v27 <= 0.0 && v26.m128_f32[0] > 0.0000099999997)
				{
					++v15;
					++v22;
					v12 = 1;
					v26.m128_f32[0] = v26.m128_f32[0] / (float)(v26.m128_f32[0] - v27);
					*(v22 - 1) = _mm_add_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(v26, v26, 0),
							_mm_sub_ps(*(__m128*)(a4 + 16i64 * v21), *(__m128*)(a4 + 8 * v24))),
						*(__m128*)(a4 + 8 * v24));
				}
			} while (v21);
			if (v15 < 3)
				break;
			if (!v13)
				goto LABEL_25;
			v11 = v29;
			a4 = v20;
			v7 = v15;
		}
		v15 = 0i64;
		v12 = 0;
	LABEL_25:
		*a7 = v15;
		return v12;
	}
	else
	{
		*a7 = 0i64;
		return 0i64;
	}
}
// 140284EE0: conditional instruction was optimized away because rdx.8>=3u

