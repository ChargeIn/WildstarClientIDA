#include "../winhttp.h"

//----- (00000001403EAD20) ----------------------------------------------------
__int64 __fastcall sub_1403EAD20(__int64 a1)
{
	int v1; // ebx
	__m128 v3; // xmm6
	__m128* v4; // rax
	__int64 v5; // r8
	__m128 v6; // xmm8
	float v7; // xmm3_4
	__int64 v8; // rdx
	__m128 v9; // xmm0
	float v10; // xmm1_4
	float v11; // xmm3_4
	float v12; // xmm4_4
	float v13; // xmm5_4
	__int64 v14; // r8
	__m128 v15; // xmm2
	unsigned __int32 v16; // xmm0_4
	__m128 v17; // xmm2
	__m128 v18; // xmm3
	float v19; // xmm1_4
	__int64 v20; // rdx
	float v21; // xmm0_4
	__int64 v22; // r8
	bool v23; // cc
	float v24; // xmm2_4
	__int64 v25; // rdx
	float v26; // xmm0_4
	__int64 v27; // r8
	__int64 v28; // rdx
	float v29; // xmm2_4
	float v30; // xmm3_4
	__int64 i; // rbx
	__int64 v32; // rcx
	__int64 result; // rax
	__int64 j; // rbx
	__int64 v35; // rcx
	__m128i v36; // xmm1
	__m128i v37; // xmm1
	__int64 v38; // r8
	__m128 v39; // [rsp+38h] [rbp-D0h]
	__m128 v40; // [rsp+48h] [rbp-C0h] BYREF
	__m128 v41; // [rsp+58h] [rbp-B0h]
	__m128 v42; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v43; // [rsp+78h] [rbp-90h] BYREF
	__m128 v44; // [rsp+88h] [rbp-80h]

	v1 = dword_140DC23F8;
	if ((dword_140DC23F8 & 1) == 0)
	{
		v3 = 0i64;
		v1 = dword_140DC23F8 | 1;
		dword_140DC23F8 |= 1u;
		v42 = (__m128)xmmword_140C77880;
		v43 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140C77880);
		v44 = (__m128)xmmword_140C77870;
		v4 = (__m128*)sub_1401ADD80(&v43, (__int64)&v40);
		v5 = 0i64;
		v6 = _mm_sub_ps((__m128)0i64, *v4);
		v40 = v6;
		v41 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v6, v6, 210), _mm_shuffle_ps(v44, v44, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v6, v6, 201), _mm_shuffle_ps(v44, v44, 210)));
		v39 = _mm_mul_ps(v41, v41);
		LODWORD(v7) = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
		if (_mm_shuffle_ps(v39, v39, 85).m128_f32[0] > v39.m128_f32[0])
			v5 = 1i64;
		v8 = 1 - v5;
		if (v7 > v39.m128_f32[v5])
			v5 = 2i64;
		v9 = (__m128)v39.m128_u32[-v8 + 3 - v5];
		v9.m128_f32[0] = (float)(v9.m128_f32[0] + v39.m128_f32[v8]) + v39.m128_f32[v5];
		if (v9.m128_f32[0] <= *(float*)&dword_140C3D7D8)
		{
			v39 = 0i64;
			v13 = 0.0;
			v12 = 0.0;
			v11 = 0.0;
		}
		else
		{
			v10 = 1.0 / _mm_sqrt_ps(v9).m128_f32[0];
			v11 = v41.m128_f32[0] * v10;
			v12 = v41.m128_f32[1] * v10;
			v13 = v41.m128_f32[2] * v10;
			v39.m128_f32[0] = v41.m128_f32[0] * v10;
			v39.m128_f32[1] = v41.m128_f32[1] * v10;
			v39.m128_f32[2] = v41.m128_f32[2] * v10;
			v3 = v39;
		}
		dword_140DC2400 = LODWORD(v11);
		v14 = 0i64;
		dword_140DC2410 = LODWORD(v12);
		dword_140DC2420 = LODWORD(v13);
		dword_140DC240C = 0;
		dword_140DC241C = 0;
		dword_140DC242C = 0;
		dword_140DC2408 = v40.m128_i32[0];
		v15 = _mm_sub_ps(
			_mm_mul_ps(_mm_shuffle_ps(v3, v3, 210), _mm_shuffle_ps(v6, v6, 201)),
			_mm_mul_ps(_mm_shuffle_ps(v3, v3, 201), _mm_shuffle_ps(v6, v6, 210)));
		dword_140DC2404 = v15.m128_i32[0];
		v39 = _mm_mul_ps(v42, v3);
		dword_140DC2414 = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
		dword_140DC2418 = v40.m128_i32[1];
		v16 = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
		v17 = _mm_mul_ps(v15, v42);
		v18 = _mm_mul_ps(v42, v6);
		dword_140DC2424 = v16;
		dword_140DC2428 = v40.m128_i32[2];
		LODWORD(v19) = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
		if (_mm_shuffle_ps(v39, v39, 85).m128_f32[0] > v39.m128_f32[0])
			v14 = 1i64;
		v20 = 1 - v14;
		if (v19 > v39.m128_f32[v14])
			v14 = 2i64;
		v21 = (float)(v39.m128_f32[-v20 + 3 - v14] + v39.m128_f32[v20]) + v39.m128_f32[v14];
		v39 = v17;
		v22 = 0i64;
		*(float*)&dword_140DC2430 = -v21;
		v23 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0] <= v17.m128_f32[0];
		LODWORD(v24) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
		if (!v23)
			v22 = 1i64;
		v25 = 1 - v22;
		if (v24 > v39.m128_f32[v22])
			v22 = 2i64;
		v26 = (float)(v39.m128_f32[-v25 + 3 - v22] + v39.m128_f32[v25]) + v39.m128_f32[v22];
		v39 = v18;
		v27 = 0i64;
		*(float*)&dword_140DC2434 = -v26;
		if (_mm_shuffle_ps(v18, v18, 85).m128_f32[0] > v18.m128_f32[0])
			v27 = 1i64;
		dword_140DC243C = 1065353216;
		v28 = 1 - v27;
		if (_mm_shuffle_ps(v18, v18, 170).m128_f32[0] > v39.m128_f32[v27])
			v27 = 2i64;
		*(float*)&dword_140DC2438 = -(float)((float)(v39.m128_f32[-v28 + 3 - v27] + v39.m128_f32[v28]) + v39.m128_f32[v27]);
	}
	if ((v1 & 2) == 0)
	{
		v1 |= 2u;
		dword_140DC23F8 = v1;
		v42.m128_u64[0] = (unsigned __int64)&dword_140DC2400;
		sub_1401AFC20((__int64*)&v42, dbl_140DC2440);
	}
	if ((v1 & 4) != 0)
	{
		v30 = *(float*)&dword_140DC2484;
		v29 = *(float*)&dword_140DC2480;
	}
	else
	{
		v29 = -100.0;
		v30 = 100.0;
		v1 |= 4u;
		dword_140DC23F8 = v1;
		dword_140DC2480 = -1027080192;
		dword_140DC2484 = 1120403456;
	}
	if ((v1 & 8) == 0)
	{
		v1 |= 8u;
		qword_140DC24B0 = 0i64;
		dword_140DC24BC = 0;
		dword_140DC24C0 = 0x80000000;
		dword_140DC23F8 = v1;
		dword_140DC24C4 = 0x80000000;
		dword_140DC24CC = 1065353216;
		xmmword_140DC24A0 = xmmword_140B7A4B0;
		xmmword_140DC2490 = xmmword_140B7A330;
		*(float*)&dword_140DC24B8 = 1.0 / (float)(v29 - v30);
		*(float*)&dword_140DC24C8 = *(float*)&dword_140DC24B8 * v29;
	}
	if ((v1 & 0x10) == 0)
	{
		dword_140DC23F8 = v1 | 0x10;
		sub_1407E4830(dword_140DC24D0, 0i64, 0x310ui64);
	}
	for (i = *(_QWORD*)(a1 + 29632); i; i = *(_QWORD*)(i + 112))
	{
		if (*(int*)(i + 72) >= 2 && *(float*)(i + 92) >= 0.0039215689)
		{
			v32 = *(_QWORD*)(i + 56);
			if (v32)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v32 + 296i64))(v32, 1i64);
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(i + 56) + 320i64))(*(_QWORD*)(i + 56), 1i64);
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(i + 56) + 112i64))(*(_QWORD*)(i + 56));
			}
		}
	}
	(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 29624) + 48i64))(
		*(_QWORD*)(a1 + 29624),
		(unsigned int)dword_140C636A8,
		0i64);
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 29624) + 64i64))(
		*(_QWORD*)(a1 + 29624),
		(unsigned int)(int)*(float*)(a1 + 29376));
	result = (*(__int64(__fastcall**)(_QWORD, int*, double*, int*, _DWORD))(**(_QWORD**)(a1 + 29624) + 80i64))(
		*(_QWORD*)(a1 + 29624),
		&dword_140DC2400,
		dbl_140DC2440,
		&dword_140DC2480,
		0);
	for (j = *(_QWORD*)(a1 + 29632); j; j = *(_QWORD*)(j + 112))
	{
		if (*(int*)(j + 72) >= 2 && *(float*)(j + 92) >= 0.0039215689)
		{
			v35 = *(_QWORD*)(j + 56);
			if (v35)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v35 + 320i64))(v35, 1i64);
				result = (*(__int64(__fastcall**)(_QWORD, __int128*, int*))(**(_QWORD**)(a1 + 29624) + 136i64))(
					*(_QWORD*)(a1 + 29624),
					&xmmword_140DC2490,
					dword_140DC24D0);
			}
			else if (*(_QWORD*)(j + 64))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 31640),
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 31616),
					1i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					0i64,
					*(_QWORD*)(j + 64),
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
					qword_140C65670,
					4i64,
					5i64);
				v36 = _mm_shuffle_epi32(
					_mm_cvttps_epi32(
						_mm_add_ps(
							_mm_mul_ps(
								_mm_min_ps(
									_mm_max_ps(
										(__m128)0i64,
										_mm_unpacklo_ps(
											(__m128)xmmword_140B7A4C0,
											_mm_unpacklo_ps((__m128)0x3F800000u, (__m128) * (unsigned int*)(j + 92)))),
									(__m128)xmmword_140B7B240),
								(__m128)xmmword_140B7B470),
							(__m128)xmmword_140B7AC50)),
					198);
				v37 = _mm_packus_epi16(v36, v36);
				result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, unsigned __int64, unsigned __int64))(*(_QWORD*)qword_140C65670 + 664i64))(
					qword_140C65670,
					(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v37, v37)),
					v38,
					0i64,
					0i64,
					0i64,
					v39.m128_u64[0],
					v39.m128_u64[1]);
			}
		}
	}
	return result;
}
// 1403EB377: variable 'v38' is possibly undefined
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A4C0: using guessed type __int128 xmmword_140B7A4C0;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77870: using guessed type __int128 xmmword_140C77870;
// 140C77880: using guessed type __int128 xmmword_140C77880;
// 140DC23F8: using guessed type int dword_140DC23F8;
// 140DC2400: using guessed type int dword_140DC2400;
// 140DC2404: using guessed type int dword_140DC2404;
// 140DC2408: using guessed type int dword_140DC2408;
// 140DC240C: using guessed type int dword_140DC240C;
// 140DC2410: using guessed type int dword_140DC2410;
// 140DC2414: using guessed type int dword_140DC2414;
// 140DC2418: using guessed type int dword_140DC2418;
// 140DC241C: using guessed type int dword_140DC241C;
// 140DC2420: using guessed type int dword_140DC2420;
// 140DC2424: using guessed type int dword_140DC2424;
// 140DC2428: using guessed type int dword_140DC2428;
// 140DC242C: using guessed type int dword_140DC242C;
// 140DC2430: using guessed type int dword_140DC2430;
// 140DC2434: using guessed type int dword_140DC2434;
// 140DC2438: using guessed type int dword_140DC2438;
// 140DC243C: using guessed type int dword_140DC243C;
// 140DC2440: using guessed type double dbl_140DC2440[8];
// 140DC2480: using guessed type int dword_140DC2480;
// 140DC2484: using guessed type int dword_140DC2484;
// 140DC2490: using guessed type __int128 xmmword_140DC2490;
// 140DC24A0: using guessed type __int128 xmmword_140DC24A0;
// 140DC24B0: using guessed type __int64 qword_140DC24B0;
// 140DC24B8: using guessed type int dword_140DC24B8;
// 140DC24BC: using guessed type int dword_140DC24BC;
// 140DC24C0: using guessed type int dword_140DC24C0;
// 140DC24C4: using guessed type int dword_140DC24C4;
// 140DC24C8: using guessed type int dword_140DC24C8;
// 140DC24CC: using guessed type int dword_140DC24CC;
// 140DC24D0: using guessed type int dword_140DC24D0[196];

