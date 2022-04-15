#include "../winhttp.h"

//----- (00000001402D4020) ----------------------------------------------------
__int64 __fastcall sub_1402D4020(
	__int64* a1,
	__int64 a2,
	float* a3,
	__int64 a4,
	char a5,
	float* a6,
	int a7,
	__m128* a8,
	__int64 a9)
{
	__int64 v10; // rcx
	int v11; // ebx
	__int64 v15; // rsi
	float v17; // xmm0_4
	__int64 v18; // rcx
	__m128 v19; // xmm5
	__int64 v20; // r10
	__int64 v21; // rdx
	__int64 v22; // r8
	__int64 v23; // rax
	__m128 v24; // xmm6
	__m128 v25; // xmm7
	__m128 v26; // xmm7
	__m128 v27; // xmm3
	float v28; // xmm0_4
	_QWORD* v29; // r9
	__int64 v30; // r8
	__int64 v31; // rax
	__int64 v32; // r9
	__int64 v33; // r10
	__int64 v34; // rcx
	__int32 v35; // ecx
	__int64 v36; // rbx
	int v37[4]; // [rsp+30h] [rbp-A8h] BYREF
	__int64 v38[2]; // [rsp+40h] [rbp-98h] BYREF
	int v39; // [rsp+50h] [rbp-88h]
	unsigned int v40; // [rsp+54h] [rbp-84h]
	float v41; // [rsp+58h] [rbp-80h]
	__int128 v42; // [rsp+60h] [rbp-78h]
	__int64 v43[4]; // [rsp+70h] [rbp-68h] BYREF
	__int128 v44; // [rsp+90h] [rbp-48h]

	v10 = *a1;
	v11 = 0;
	v37[0] = -1;
	if (v10)
	{
		if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v10 + 32i64))(v10, v37))
		{
			sub_1402D3300(a1);
			if (*a1)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)*a1 + 8i64))(*a1);
				*a1 = 0i64;
			}
		}
	}
	v38[1] = (__int64)sub_1402D3A10;
	v38[0] = (__int64)a1;
	v41 = 3.4028235e38;
	v40 = -1;
	if ((a5 & 1) != 0)
		v11 = 1;
	v39 = v11;
	if ((a5 & 2) != 0)
	{
		v11 |= 4u;
		v39 = v11;
	}
	if ((a5 & 4) != 0)
	{
		v11 |= 2u;
		v39 = v11;
	}
	if ((a5 & 8) != 0)
		v39 = v11 | 8;
	sub_1402D4F90(a1 + 6, a2, a3, *(float*)(a4 + 4), (__int64)v38);
	v15 = v40;
	if (v40 == -1)
		return 0i64;
	v17 = v41;
	if (a6)
		*a6 = v41;
	if ((a7 & 0x8003F) != 0)
	{
		if ((a7 & 1) != 0)
			a8[2].m128_f32[0] = (float)(v17 * a3[1]) + *(float*)(a2 + 4);
		if ((a7 & 2) != 0)
		{
			v18 = a1[2];
			v19 = (__m128)0x40400000u;
			v20 = *(_QWORD*)(v18 + 64);
			v21 = *(_QWORD*)(v18 + 96);
			v22 = (unsigned int)(3 * v15);
			v23 = *(unsigned int*)(v21 + 4 * v22 + 8);
			v24 = _mm_sub_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22 + 4)),
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22 + 4) + 8)),
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22 + 4) + 4),
						(__m128)0i64)),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22)),
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22) + 8)),
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22) + 4),
						(__m128)0i64)));
			v25 = _mm_sub_ps(
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v20 + 12 * v23),
						(__m128) * (unsigned int*)(v20 + 12 * v23 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v20 + 12 * v23 + 4), (__m128)0i64)),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22)),
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22) + 8)),
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v20 + 12i64 * *(unsigned int*)(v21 + 4 * v22) + 4),
						(__m128)0i64)));
			v26 = _mm_sub_ps(
				_mm_mul_ps(_mm_shuffle_ps(v25, v25, 210), _mm_shuffle_ps(v24, v24, 201)),
				_mm_mul_ps(_mm_shuffle_ps(v25, v25, 201), _mm_shuffle_ps(v24, v24, 210)));
			v27 = _mm_mul_ps(v26, v26);
			v27.m128_f32[0] = (float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
				+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
			v28 = 1.0 / fsqrt(v27.m128_f32[0]);
			v19.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v27.m128_f32[0] * v28) * v28)) * 0.5) * v28, 0.0);
			*a8 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v26);
		}
		if ((a7 & 0xC) != 0)
		{
			v29 = (_QWORD*)a1[2];
			v44 = v42;
			v30 = v29[12];
			v31 = v29[14];
			v32 = v29[10];
			v33 = (unsigned int)(3 * v15);
			v34 = *(_QWORD*)(192i64 * *(unsigned __int8*)(v31 + 2 * v15 + 1) + *(_QWORD*)(a9 + 8) + 8);
			v43[0] = v32 + 20i64 * *(unsigned int*)(v30 + 4 * v33);
			v43[1] = v32 + 20i64 * *(unsigned int*)(v30 + 4 * v33 + 4);
			v43[2] = v32 + 20i64 * *(unsigned int*)(v30 + 4 * v33 + 8);
			sub_1402D9040(v34, (__int64)v43, a8, a7);
		}
		if ((a7 & 0x2000) != 0)
		{
			v35 = *(_DWORD*)(a1[2] + 24);
			if (!v35)
			{
				v36 = a1[4];
				v37[0] = -1;
				if (*(_DWORD*)(v36 + 24) != 3)
					sub_1402C9AE0(v36, (__int64)v37, 3);
				v35 = *(_DWORD*)(*(_QWORD*)(v36 + 64) + 28i64);
			}
			a8[10].m128_i32[2] = v35;
		}
	}
	return 1i64;
}

