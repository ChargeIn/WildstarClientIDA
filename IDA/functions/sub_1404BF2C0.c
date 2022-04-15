#include "../winhttp.h"

//----- (00000001404BF2C0) ----------------------------------------------------
__m128* __fastcall sub_1404BF2C0(__int64 a1, __m128* a2)
{
	__int64 v4; // rsi
	__m128* result; // rax
	__int64 v6; // r8
	__m128** v7; // r9
	__m128** v8; // rcx
	__int64 v9; // rcx
	__m128* v10; // rax
	__m128 v11; // xmm4
	unsigned __int64 v12; // rbx
	unsigned __int64 v13; // r8
	__int64 v14; // rcx
	__m128 v15; // [rsp+20h] [rbp-E0h] BYREF
	__int128 v16; // [rsp+30h] [rbp-D0h] BYREF
	unsigned __int64 v17; // [rsp+40h] [rbp-C0h]
	int v18; // [rsp+48h] [rbp-B8h]
	float v19; // [rsp+4Ch] [rbp-B4h]
	__m256 v20[2]; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v21[4]; // [rsp+90h] [rbp-70h] BYREF
	__m128 v22[4]; // [rsp+D0h] [rbp-30h] BYREF
	char v23[64]; // [rsp+110h] [rbp+10h] BYREF
	__m128* v24[2]; // [rsp+150h] [rbp+50h] BYREF
	double v25[8]; // [rsp+160h] [rbp+60h] BYREF
	__int64 v26[2]; // [rsp+1A0h] [rbp+A0h] BYREF
	double v27[8]; // [rsp+1B0h] [rbp+B0h] BYREF
	__int128 v28[6]; // [rsp+1F0h] [rbp+F0h] BYREF

	v4 = **(_QWORD**)(a1 + 304);
	result = (__m128*)qword_140C659F0;
	v6 = *(_QWORD*)(qword_140C659F0 + 824);
	v7 = *(__m128***)(v6 + 16);
	v8 = *(__m128***)(v6 + 24);
	if (v7 != v8)
	{
		while (1)
		{
			result = *v7;
			if ((*v7)[11].m128_i32[3] == *(_DWORD*)(*(_QWORD*)(v4 + 296) + 20i64))
				break;
			if (++v7 == v8)
				return result;
		}
		v9 = (__int64)*v7;
		if (result)
		{
			v16 = *(_OWORD*)(v4 + 512);
			v17 = *(_QWORD*)(v4 + 528);
			v18 = *(_DWORD*)(v4 + 536);
			v19 = *(float*)(v4 + 540);
			v10 = (__m128*)sub_1405B0600(v9, v20);
			v11 = _mm_add_ps(
				_mm_add_ps(
					_mm_add_ps(
						_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v10[1]),
						_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *v10)),
					_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v10[2])),
				v10[3]);
			*(_QWORD*)&v20[0].m256_f32[2] = 0i64;
			*(_QWORD*)&v20[0].m256_f32[4] = &v16;
			v17 = v11.m128_u64[0];
			*(_QWORD*)&v20[0].m256_f32[6] = &v15;
			v18 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 8));
			v15 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v11, _mm_shuffle_ps(v11, v11, 170)),
				_mm_unpacklo_ps(_mm_shuffle_ps(v11, v11, 85), (__m128)0i64));
			v28[1] = *(_OWORD*)&v20[0].m256_f32[4];
			v20[0].m256_f32[0] = v19;
			v28[0] = *(unsigned __int64*)v20[0].m256_f32;
			sub_1401B0590((int*)v28, (__int64)v23);
			v26[0] = (*(__int64(__fastcall**)(__int64, __m256*))(*(_QWORD*)v4 + 120i64))(v4, v20);
			sub_1401AFC20(v26, v27);
			v15.m128_u64[0] = (unsigned __int64)v27;
			v24[0] = (__m128*)v27;
			v15.m128_u64[1] = (unsigned __int64)v23;
			v24[1] = (__m128*)v23;
			sub_1401AFB10(v24, v21);
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v4 + 40i64))(v4, v21);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 160i64))(a1);
			v12 = 1i64;
			v24[0] = (__m128*)(*(__int64(__fastcall**)(__int64, __m256*))(*(_QWORD*)v4 + 120i64))(v4, v20);
			(*(void(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)v4 + 144i64))(v4, v26, 1i64);
			sub_1401AFC20((__int64*)v24, v25);
			v15.m128_u64[0] = (unsigned __int64)v25;
			v15.m128_u64[1] = v13;
			*(_QWORD*)&v28[0] = v25;
			*((_QWORD*)&v28[0] + 1) = v13;
			result = sub_1401AFB10((__m128**)v28, v22);
			if (*(_QWORD*)(a1 + 312) > 1ui64)
			{
				do
				{
					v14 = *(_QWORD*)(*(_QWORD*)(a1 + 304) + 8 * v12);
					result = (__m128*)(*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v14 + 40i64))(v14, v22);
					++v12;
				} while (v12 < *(_QWORD*)(a1 + 312));
			}
		}
	}
	return result;
}
// 1404BF50A: variable 'v13' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 1404BF2C0: using guessed type double var_C0[8];
// 1404BF2C0: using guessed type __m128 var_1E0[4];
// 1404BF2C0: using guessed type double var_110[8];
// 1404BF2C0: using guessed type __m128 var_1A0[4];

