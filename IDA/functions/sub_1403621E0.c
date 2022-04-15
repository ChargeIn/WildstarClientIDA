//----- (00000001403621E0) ----------------------------------------------------
__int64 __fastcall sub_1403621E0(__int64 a1)
{
	__int64 v2; // rdi
	int v3; // ecx
	char v4; // bp
	int v5; // ebx
	int v6; // eax
	unsigned int v7; // r15d
	unsigned int v8; // r14d
	__m128* v9; // rax
	__m128 v10; // xmm4
	__m128 v11; // xmm3
	__m128 v12; // xmm6
	__m128 v13; // xmm5
	float v14; // xmm7_4
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	__m128 v17; // xmm0
	__m128 v18; // xmm1
	__m128 v19; // xmm3
	__m128 v20; // xmm5
	__m128 v21; // xmm3
	__m128 v22; // xmm2
	__m128 v23; // xmm4
	__m128 v24; // xmm2
	__m128 v25; // xmm1
	__m128 v26; // xmm4
	__m128 v27; // xmm2
	__m128 v28; // xmm5
	__m128 v29; // xmm3
	__m128 v30; // xmm3
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rdi
	__m128* v34; // rbx
	float v35; // xmm6_4
	__m128 v36; // xmm2
	__m128 v37; // xmm1
	float v38; // xmm0_4
	float v39; // xmm0_4
	__int64 result; // rax
	__m128 v41; // [rsp+30h] [rbp-68h] BYREF
	unsigned __int64 v42; // [rsp+A0h] [rbp+8h]
	__int64 v43; // [rsp+A0h] [rbp+8h]

	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 64i64))(*(_QWORD*)(a1 + 24));
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 296i64))(qword_140C65670);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
	v3 = dword_140C44400;
	v4 = 1;
	if (*(_DWORD*)qword_140C63750 < dword_140C44400)
		v3 = *(_DWORD*)qword_140C63750;
	if (!byte_140C44410[v3] || (v5 = 1, (*(_DWORD*)(a1 + 128) & 0x8000000) == 0))
		v5 = 0;
	v6 = dword_140B657F8[*(int*)(a1 + 144)];
	v7 = (v5 != 0) + 2 * v6;
	v8 = ((*(_DWORD*)(a1 + 132) & 0x1809023) != 0) + 2 * v6;
	v9 = (__m128*)(*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C65670
		+ 256i64))(
			qword_140C65670,
			144i64,
			0i64,
			0i64,
			0);
	if (v9)
	{
		v10 = *(__m128*)(a1 + 976);
		v11 = *(__m128*)(a1 + 1008);
		v12 = *(__m128*)(a1 + 960);
		v13 = *(__m128*)(a1 + 992);
		v14 = *(float*)(a1 + 148);
		v15 = _mm_unpacklo_ps(v12, v10);
		v16 = _mm_unpacklo_ps(v13, v11);
		*v9 = _mm_shuffle_ps(v15, v16, 68);
		v9[1] = _mm_shuffle_ps(v15, v16, 238);
		v9[2] = _mm_shuffle_ps(_mm_unpackhi_ps(v12, v10), _mm_unpackhi_ps(v13, v11), 68);
		v17 = *(__m128*)(a1 + 1296);
		v18 = *(__m128*)(a1 + 1328);
		v19 = *(__m128*)(a1 + 1280);
		v20 = _mm_unpackhi_ps(v19, v17);
		v21 = _mm_unpacklo_ps(v19, v17);
		v22 = *(__m128*)(a1 + 1312);
		v23 = _mm_unpackhi_ps(v22, v18);
		v24 = _mm_unpacklo_ps(v22, v18);
		v9[3] = _mm_shuffle_ps(v21, v24, 68);
		v9[4] = _mm_shuffle_ps(v21, v24, 238);
		v9[5] = _mm_shuffle_ps(v20, v23, 68);
		v9[6] = _mm_shuffle_ps(v20, v23, 238);
		*(float*)&v42 = -1.0 / (float)(v14 - (float)(v14 * 0.75));
		*((float*)&v42 + 1) = -(float)(*(float*)&v42 * v14);
		v9[7].m128_u64[0] = v42;
		v9[7].m128_i32[2] = *(_DWORD*)(a1 + 5508);
		v25 = (__m128) * (unsigned int*)(a1 + 920);
		v26 = (__m128) * (unsigned int*)(a1 + 912);
		v17.m128_f32[0] = *(float*)(a1 + 5504) * 0.5;
		v25.m128_f32[0] = v25.m128_f32[0] - v17.m128_f32[0];
		v26.m128_f32[0] = v26.m128_f32[0] - v17.m128_f32[0];
		v27 = (__m128)(unsigned int)dword_140C43FB8;
		v17.m128_i32[0] = *(_DWORD*)(a1 + 5520);
		v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v26, (__m128)0i64), _mm_unpacklo_ps(v25, (__m128)0i64));
		v29 = (__m128)(unsigned int)dword_140C43FB8;
		v29.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * v28.m128_f32[0]) + 0.5) * v17.m128_f32[0];
		v27.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * _mm_shuffle_ps(v28, v28, 85).m128_f32[0]) + 0.5)
			* v17.m128_f32[0];
		v30 = _mm_unpacklo_ps(_mm_unpacklo_ps(v29, (__m128)0i64), _mm_unpacklo_ps(v27, (__m128)0i64));
		v9[8] = _mm_mul_ps(
			_mm_sub_ps(
				_mm_mul_ps(
					_mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 5524), (__m128) * (unsigned int*)(a1 + 5524), 0),
					_mm_cvtepi32_ps(
						_mm_unpacklo_epi32(
							_mm_unpacklo_epi32(_mm_cvtsi32_si128((int)v30.m128_f32[0]), _mm_cvtsi32_si128(0)),
							_mm_unpacklo_epi32(
								_mm_cvtsi32_si128((int)_mm_shuffle_ps(v30, v30, 85).m128_f32[0]),
								_mm_cvtsi32_si128(0))))),
				(__m128)xmmword_140B7AC50),
			(__m128)xmmword_140B7B4B0);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 264i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 320i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 320i64),
		v7);
	v31 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		64i64,
		0i64);
	if (v31)
	{
		v41 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(unsigned __int8*)(v2 + 34)), (__m128)0i64),
			_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*(unsigned __int8*)(v2 + 35)), (__m128)0i64));
		*(_QWORD*)v31 = v41.m128_u64[0];
		*(_DWORD*)(v31 + 8) = 1056964608;
		*(_OWORD*)(v31 + 16) = *(_OWORD*)(a1 + 480);
		*(_OWORD*)(v31 + 32) = *(_OWORD*)(a1 + 496);
		*(_OWORD*)(v31 + 48) = *(_OWORD*)(a1 + 816);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
		qword_140C65670,
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 328i64),
		v8);
	if (v5)
	{
		v32 = *(_QWORD*)(a1 + 5544);
		v43 = v32;
		if (v32)
			(**(void(__fastcall***)(__int64))v32)(v32);
		v33 = v32;
	}
	else
	{
		v43 = 0i64;
		v32 = 0i64;
		v4 = 2;
		v33 = 0i64;
	}
	(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 368i64))(
		qword_140C65670,
		0i64,
		v43,
		0i64);
	if ((v4 & 2) != 0)
	{
		v4 &= ~2u;
		if (v33)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
	}
	if ((v4 & 1) != 0 && v32)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
	v34 = *(__m128**)(a1 + 2336);
	v35 = *(float*)(a1 + 148) * *(float*)(a1 + 148);
	if (v34)
	{
		while (v35 > v34[3].m128_f32[0])
		{
			if (v34[49].m128_i32[0])
			{
				v36 = _mm_sub_ps(_mm_max_ps(v34[50], _mm_min_ps(*(__m128*)(a1 + 912), v34[51])), *(__m128*)(a1 + 912));
				v37 = _mm_mul_ps(v36, v36);
				if ((float)((float)(v37.m128_f32[0] + _mm_shuffle_ps(v37, v37, 85).m128_f32[0])
					+ _mm_shuffle_ps(v37, v37, 170).m128_f32[0]) < v35)
				{
					if (!*(_DWORD*)(a1 + 852)
						|| ((v38 = v34[51].m128_f32[1] - *(float*)(a1 + 916), v38 <= 0.0)
							? (v39 = v38 * v34[81].m128_f32[2])
							: (v39 = v38 * v34[81].m128_f32[1]),
							v39 >= v34[81].m128_f32[0]))
					{
						if ((unsigned int)sub_14035BDF0((__m128*)a1, v34 + 50))
						{
							v41.m128_i32[0] = 0;
							if ((unsigned int)sub_14037D3E0((__int64)v34, (__int64)&v41))
							{
								result = sub_140384690(v34);
								if ((int)result < 0)
									return result;
							}
						}
					}
				}
			}
			v34 = (__m128*)v34[89].m128_u64[0];
			if (!v34)
				return 0i64;
		}
	}
	return 0i64;
}
// 140B657F8: using guessed type int dword_140B657F8[4];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44400: using guessed type int dword_140C44400;
// 140C44410: using guessed type _BYTE byte_140C44410[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;

