#include "../winhttp.h"

//----- (00000001407B7940) ----------------------------------------------------
void __fastcall sub_1407B7940(__m128* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	__m128 v4; // xmm1
	__m128 v5; // xmm2
	unsigned __int64 v6; // rdi
	unsigned __int64 v7; // rcx
	__m128i si128; // xmm1
	__m128i v9; // xmm0
	__m128* v10; // rcx
	unsigned __int64 v11; // r14
	__int64 v12; // r9
	unsigned __int64 v13; // r13
	__m128* v14; // rsi
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	__m128 v17; // xmm6
	unsigned __int64 v18; // rbx
	__m128 v19; // xmm4
	__m128 v20; // xmm3
	float v21; // xmm1_4
	__m128 v22; // xmm6
	int* v23; // rbp
	__m128* v24; // rax
	unsigned __int64 v25; // rax
	unsigned __int64 v26; // rdx
	int* v27; // rcx

	if (a1[22].m128_i32[0])
	{
		v2 = qword_140C7F868;
		if (qword_140C7F868)
		{
			v3 = 32 * qword_140C7F868;
			do
			{
				v3 -= 32i64;
				--v2;
				v4 = *(__m128*)(v3 + qword_140C7F860);
				v5 = _mm_add_ps(
					_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), a1[46]), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), a1[47])),
					_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), a1[48]));
				if (_mm_shuffle_ps(v5, v5, 85).m128_f32[0] < 0.5)
					sub_1407BCB60((__int64)a1, v2);
			} while (v2);
			v6 = qword_140C7F868;
			sub_14004EED0(&qword_140C7F880, qword_140C7F868);
			v7 = 0i64;
			if (v6)
			{
				if (v6 >= 2)
				{
					si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
					do
					{
						v9 = (__m128i)v7;
						v7 += 2i64;
						*(__m128i*)(qword_140C7F880 + 8 * v7 - 16) = _mm_add_epi64(_mm_unpacklo_epi64(v9, v9), si128);
					} while (v7 < v6 - (v6 & 1));
				}
				for (; v7 < v6; ++v7)
					*(_QWORD*)(qword_140C7F880 + 8 * v7) = v7;
			}
			sub_14001FEC0(
				(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1407B6210,
				(__int64*)qword_140C7F880,
				v6,
				qword_140C7F860);
			sub_1402626B0(&qword_140C7F870, 0i64);
			v10 = 0i64;
			v11 = 0i64;
			if (v6)
			{
				v12 = qword_140C7F870;
				v13 = qword_140C7F878;
				do
				{
					v14 = (__m128*)(qword_140C7F860 + 32i64 * *(_QWORD*)(qword_140C7F880 + 8 * v11));
					if (!v10
						|| (v15 = _mm_sub_ps(*v14, *v10),
							v16 = _mm_mul_ps(v15, v15),
							(float)((float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
								+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]) >= *(float*)&dword_140C3C7A8))
					{
						v17 = 0i64;
						v18 = v13++;
						v19 = _mm_mul_ps(a1[28], *v14);
						v20 = _mm_mul_ps(v19, v19);
						v20.m128_f32[0] = (float)(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
							+ _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
						v21 = 1.0 / fsqrt(v20.m128_f32[0]);
						v17.m128_f32[0] = fmaxf(
							(float)((float)(3.0 - (float)((float)(v20.m128_f32[0] * v21) * v21)) * 0.5) * v21,
							0.0);
						v22 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v19);
						v23 = sub_14018DB00(v12, v13, 16i64);
						v24 = (__m128*) & v23[4 * v18];
						if (v24)
							*v24 = v22;
						v12 = qword_140C7F870;
						if ((int*)qword_140C7F870 != v23)
						{
							v25 = qword_140C7F878;
							v26 = 0i64;
							if (qword_140C7F878)
							{
								v27 = v23;
								do
								{
									if (v27)
									{
										*(_OWORD*)v27 = *(_OWORD*)((char*)v27 - (char*)v23 + v12);
										v25 = qword_140C7F878;
										v12 = qword_140C7F870;
									}
									++v26;
									v27 += 4;
								} while (v26 < v25);
							}
							if (v12)
								(*(void(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16, v26);
							v12 = (__int64)v23;
							qword_140C7F870 = (__int64)v23;
						}
						qword_140C7F878 = v13;
						v10 = v14;
					}
					++v11;
				} while (v11 < v6);
			}
		}
	}
}
// 1407B79DE: variable 'a1' is possibly undefined
// 140B7A630: using guessed type __int128 xmmword_140B7A630;
// 140C3C7A8: using guessed type int dword_140C3C7A8;
// 140C7F860: using guessed type __int64 qword_140C7F860;
// 140C7F868: using guessed type __int64 qword_140C7F868;
// 140C7F870: using guessed type __int64 qword_140C7F870;
// 140C7F878: using guessed type __int64 qword_140C7F878;
// 140C7F880: using guessed type __int64 qword_140C7F880;

